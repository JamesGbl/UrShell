//THIS FILE IS AUTOGENERATED - DO NOT MODIFY
#pragma once

#include <Urho3D/Urho3D.h>
#include <Urho3D/Scene/Component.h>
#include "../MathBind.h"
#include "../ResourceRefWrapper.h"
#include "../SceneWrappers.h"
#include "../Variant.h"
#include "../StringHash.h"
#include "../Attributes.h"

#include "Enumerations.h"

namespace Urho3D {
    class FileSelector;
    class String;
    class XMLFile;
    class Window;
    class Text;
    class ListView;
    class LineEdit;
    class DropDownList;
    class Button;
}



namespace UrhoBackend {

    ref class XMLFile;
    ref class Window;
    ref class Text;
    ref class ListView;
    ref class LineEdit;
    ref class DropDownList;
    ref class Button;

    public ref class FileSelector : public UrhoBackend::Object {
    public:
        FileSelector(Urho3D::FileSelector* comp);
        FileSelector(System::IntPtr^ ptr);

// Properties
        property System::String^ title { System::String^ get(); void set(System::String^); }
        property System::String^ path { System::String^ get(); void set(System::String^); }
        property System::String^ fileName { System::String^ get(); void set(System::String^); }
        property bool directoryMode { bool get(); void set(bool); }
        property System::String^ filter { System::String^ get(); }
        property unsigned filterIndex { unsigned get(); }
        property XMLFile^ defaultStyle { XMLFile^ get(); void set(XMLFile^); }
        property Window^ window { Window^ get(); }
        property Text^ titleText { Text^ get(); }
        property ListView^ fileList { ListView^ get(); }
        property LineEdit^ pathEdit { LineEdit^ get(); }
        property LineEdit^ fileNameEdit { LineEdit^ get(); }
        property DropDownList^ filterList { DropDownList^ get(); }
        property Button^ okButton { Button^ get(); }
        property Button^ cancelButton { Button^ get(); }
// Methods
        void SetButtonTexts(System::String^, System::String^);
        void UpdateElements();
// Fields

        Urho3D::FileSelector* fileselector_;
    };
}
