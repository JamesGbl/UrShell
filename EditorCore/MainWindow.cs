﻿using EditorCore.Panels;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Reflection;
using EditorCore.Menu;
using WeifenLuo.WinFormsUI.Docking;
using EditorCore.Toolbars;
using System.Xml;
using Sce.Atf.Applications;

namespace EditorCore
{
    /// <summary>
    /// Base class for window construction
    /// 
    /// Override ConstructUI to create end-application specific user interface
    /// </summary>
    public partial class MainWindow : Form
    {
        SkinService skinService;
        static MainWindow inst_;
        public static MainWindow inst() { return inst_; }

        public Controls.SceDockPanel DockingPanel { get { return dockPanel; } }
        Required<Settings.CoreSettings> CoreSettings = new Required<Settings.CoreSettings>();

        public MainWindow(Type[] documentTypes, Type[] panelTypes)
        {
            DocumentManager.Init(documentTypes);

            skinService = new SkinService();
            Reflect.Invoke(skinService, "Initialize", null);
            string skinPath = System.IO.Path.GetDirectoryName(Application.ExecutablePath);
            if (CoreSettings.Value.SkinStyle == Settings.SkinStyle.Dark)
            {
                skinPath = System.IO.Path.Combine(skinPath, "Resources/Dark.skn");
                skinService.OpenAndApplySkin(skinPath);
            }
            else if (CoreSettings.Value.SkinStyle == Settings.SkinStyle.Medium)
            {
                skinPath = System.IO.Path.Combine(skinPath, "Resources/Light.skn"); //Typically darker than Light
                skinService.OpenAndApplySkin(skinPath);
            }
            else if (CoreSettings.Value.SkinStyle == Settings.SkinStyle.Night)
            {
                skinPath = System.IO.Path.Combine(skinPath, "Resources/Night.skn");
                skinService.OpenAndApplySkin(skinPath);
            }
            else
            {
                // Using default native UI widget styles
            }

            inst_ = this;
            this.UseWaitCursor = false;
            InitializeComponent();
            Load += MainWindow_Load;

            FormClosing += MainWindow_FormClosing;

            dockPanel.ActiveDocumentChanged += dockPanel_ActiveDocumentChanged;
            dockPanel.SuspendLayout(true);

            string layoutPath = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);
            layoutPath = System.IO.Path.Combine(layoutPath, Assembly.GetEntryAssembly().GetName().Name);
            layoutPath = System.IO.Path.Combine(layoutPath, "layout.xml");
            if (System.IO.File.Exists(layoutPath) && !CoreSettings.Value.DoNotSaveLayout)
            {
                dockPanel.LoadFromXml(layoutPath, StringToDockContent);
            }
            else // First launch
            {
                foreach (Type t in panelTypes)
                {
                    if (typeof(Controls.PanelDockContent).IsAssignableFrom(t))
                    {
                        Controls.PanelDockContent pnl = Activator.CreateInstance(t) as Controls.PanelDockContent;
                        if (pnl != null)
                            PanelUtil.Show(pnl, dockPanel);
                    }
                }
                BuildUI();
            }

            BuildMenus(documentTypes);
            BuildToolbars();

            // Insert system UI menu "Windows"
            menuStrip1.Items.Add(new Menu.PanelMenuStripItem());

            dockPanel.ResumeLayout(true, true);

            SkinService.ApplyActiveSkin(this);
        }

        protected virtual void BuildUI()
        {

        }

        /// <summary>
        /// Override as needed for your program
        /// </summary>
        protected virtual void BuildToolbars()
        {
            // Fill with autogenerated toolbars
            Toolbars = new List<ToolStrip>();
            List<ToolStrip> toolbars = EditorCore.Toolbars.ToolbarBuilder.BuildToolbars(CommandRegistry.GetInst());
            foreach (ToolStrip st in toolbars)
            {
                Toolbars.Add(st);
                toolStripContainer.TopToolStripPanel.Controls.Add(st);
            }
        }

        protected virtual void BuildMenus(Type[] documentTypes)
        {
            //MENUS
            menuStrip1.Items.Add(new Menu.FileMenuStripItem(documentTypes));
            menuStrip1.Items.Add(new Menu.EditMenuStripItem());
            foreach (Type docType in documentTypes)
            {
                MethodInfo mi = docType.GetMethod("CreateMenus", BindingFlags.Static | BindingFlags.NonPublic);
                if (mi != null)
                {
                    object ret = mi.Invoke(null, null);
                    IList<ToolStripMenuItem> menus = ret as IList<ToolStripMenuItem>;
                    if (menus != null)
                    {
                        foreach (ToolStripMenuItem menu in menus)
                            menuStrip1.Items.Add(menu);
                    }
                }
            }
        }

        public List<ToolStrip> Toolbars { get; set; }

        void MainWindow_Load(object sender, EventArgs e)
        {
            // Restore toolbar state now that everything has been setup and is prepared
            {
                string appDataDir = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);
                appDataDir = System.IO.Path.Combine(appDataDir, Assembly.GetEntryAssembly().GetName().Name);
                appDataDir = System.IO.Path.Combine(appDataDir, "toolbars.xml");
                if (System.IO.File.Exists(appDataDir))
                {
                    XmlDocument toolBarDoc = new XmlDocument();
                    toolBarDoc.Load(appDataDir);
                    EditorCore.Toolbars.ToolbarSaver.RestoreToolbarStates(toolStripContainer, toolBarDoc);
                }
            }
        }

        void MainWindow_FormClosing(object sender, FormClosingEventArgs e)
        {
            string appDataDir = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);
            appDataDir = System.IO.Path.Combine(appDataDir, Assembly.GetEntryAssembly().GetName().Name);
            
            // Serialize our dock layout
            if (!CoreSettings.Value.DoNotSaveLayout)
            {
                dockPanel.SaveAsXml(System.IO.Path.Combine(appDataDir, "layout.xml"));

                XmlDocument toolBarDoc = EditorCore.Toolbars.ToolbarSaver.SaveToolbarStates(toolStripContainer);
                toolBarDoc.Save(System.IO.Path.Combine(appDataDir, "toolbars.xml"));
            }

            EditorCore.Interfaces.IProgramTerminated.Terminate();
        }

        protected override bool ProcessCmdKey(ref Message msg, Keys keyData)
        {

            if (keyData == (Keys.Control | Keys.Space))
            {
                Dialogs.QuickAction quick = new Dialogs.QuickAction();
                quick.ShowDialog();
                return true;
            }
            CommandInfo ci = CommandRegistry.GetInst().GetCommand(keyData);
            if (ci == null)
                return base.ProcessCmdKey(ref msg, keyData);

            if (SendCommand(ci))
                return true;

            return base.ProcessCmdKey(ref msg, keyData);
        }

        public bool SendCommand(CommandInfo ci)
        {
            Control focusedControl = Sce.Atf.WinFormsUtil.GetFocusedControl();
            while (focusedControl != null && !(focusedControl is ICommandClient))
                focusedControl = focusedControl.Parent;

            ICommandClient focusedCmdClient = focusedControl as ICommandClient;
            if (focusedCmdClient != null)
            {
                if (focusedCmdClient.CanDoCommand(ci.CommandTag))
                {
                    focusedCmdClient.DoCommand(ci.CommandTag);
                    return true;
                }
            }

            focusedCmdClient = DocumentManager.GetInst().ActiveDocument as ICommandClient;
            if (focusedCmdClient != null)
            {
                if (focusedCmdClient.CanDoCommand(ci.CommandTag))
                {
                    focusedCmdClient.DoCommand(ci.CommandTag);
                    return true;
                }
            }
            return false;
        }

        void dockPanel_ActiveDocumentChanged(object sender, EventArgs e)
        {
            DockContent newContent = dockPanel.ActiveContent as DockContent;
            if (newContent == null)
                return;
            if (newContent is Controls.DocumentDockContent)
                DocumentManager.GetInst().Activate(((Controls.DocumentDockContent)newContent).Document);
        }

        protected override void OnPaint(PaintEventArgs e)
        {
            if (UseWaitCursor)
            {
                UseWaitCursor = false;
                Cursor = Cursors.Default;
            }
            base.OnPaint(e);
            if (UseWaitCursor)
            {
                UseWaitCursor = false;
                Cursor = Cursors.Default;
            }
        }

        //\todo using this will require changing the UI registry
        IDockContent StringToDockContent(string id)
        {
            foreach (Assembly asm in AppDomain.CurrentDomain.GetAssemblies())
            {
                Type contentType = asm.GetType(id);
                if (contentType != null && typeof(Controls.PanelDockContent).IsAssignableFrom(contentType) && !contentType.IsAbstract)
                    return Activator.CreateInstance(contentType) as IDockContent;
            }
            return null;
        }

        public void Terminate()
        {
            foreach (Assembly asm in AppDomain.CurrentDomain.GetAssemblies())
            {
                try
                {
                    foreach(Type t in asm.GetTypes())
                    {
                        Interfaces.IProgramTerminated terminated = t.GetCustomAttribute<Interfaces.IProgramTerminated>();
                        if (terminated != null)
                        {
                            MethodInfo mi = t.GetMethod("Terminate", BindingFlags.NonPublic | BindingFlags.Static);
                            if (mi != null)
                                mi.Invoke(null, null);
                        }
                    }
                } catch (Exception)
                {

                }
            }
            Application.Exit();
        }
    }
}