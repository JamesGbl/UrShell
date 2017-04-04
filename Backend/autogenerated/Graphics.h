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

namespace Urho3D {
    class Graphics;
    class Image;
    class String;
    class IntVector2;
}



namespace UrhoBackend {

    ref class Image;

    public ref class Graphics {
    public:
        Graphics(Urho3D::Graphics* comp);
        Graphics(System::IntPtr^ ptr);

// Properties
        property System::String^ windowTitle { System::String^ get(); void set(System::String^); }
        property System::String^ apiName { System::String^ get(); }
        //property Image^ windowIcon { void set(Image^); }
        property UrhoBackend::IntVector2^ windowPosition { UrhoBackend::IntVector2^ get(); void set(UrhoBackend::IntVector2^); }
        property bool sRGB { bool get(); void set(bool); }
        property bool flushGPU { bool get(); void set(bool); }
        property System::String^ orientations { System::String^ get(); void set(System::String^); }
        property int width { int get(); }
        property int height { int get(); }
        property int multiSample { int get(); }
        property bool fullscreen { bool get(); }
        property bool resizable { bool get(); }
        property bool borderless { bool get(); }
        property bool vsync { bool get(); }
        property bool tripleBuffer { bool get(); }
        property bool initialized { bool get(); }
        property bool deviceLost { bool get(); }
        property unsigned numPrimitives { unsigned get(); }
        property unsigned numBatches { unsigned get(); }
        property bool instancingSupport { bool get(); }
        property bool lightPrepassSupport { bool get(); }
        property bool deferredSupport { bool get(); }
        property bool hardwareShadowSupport { bool get(); }
        property bool readableDepthSupport { bool get(); }
        property bool sRGBSupport { bool get(); }
        property bool sRGBWriteSupport { bool get(); }
        property UrhoBackend::IntVector2^ desktopResolution { UrhoBackend::IntVector2^ get(); }
// Methods
        bool SetMode(int, int, bool, bool, bool, bool, bool, int);
        bool SetMode(int, int);
        void SetWindowPosition(int, int);
        bool ToggleFullscreen();
        void Maximize();
        void Minimize();
        void Close();
        //bool TakeScreenShot(Image^);
        void BeginDumpShaders(System::String^);
        void EndDumpShaders();
// Fields

        Urho3D::Graphics* graphics_;
    };
}
