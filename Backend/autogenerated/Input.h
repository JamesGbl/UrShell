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
    class Input;
    class XMLFile;
    class String;
    class IntVector2;
    class TouchState;
    class JoystickState;
}



namespace UrhoBackend {

    ref class XMLFile;
    ref class TouchState;
    ref class JoystickState;

    public ref class Input : public UrhoBackend::Object {
    public:
        Input(Urho3D::Input* comp);
        Input(System::IntPtr^ ptr);

// Properties
        property bool mouseVisible { bool get(); }
        property bool mouseGrabbed { bool get(); void set(bool); }
        property MouseMode mouseMode { MouseMode get(); void set(MouseMode); }
        property bool screenJoystickVisible[int] { bool get(int); void set(int, bool); }
        property bool screenKeyboardVisible { bool get(); void set(bool); }
        property bool screenKeyboardSupport { bool get(); }
        property bool touchEmulation { bool get(); void set(bool); }
        property bool toggleFullscreen { bool get(); void set(bool); }
        property bool keyDown[int] { bool get(int); }
        property bool keyPress[int] { bool get(int); }
        property bool scancodeDown[int] { bool get(int); }
        property bool scancodePress[int] { bool get(int); }
        property bool mouseButtonDown[int] { bool get(int); }
        property bool mouseButtonPress[int] { bool get(int); }
        property bool qualifierDown[int] { bool get(int); }
        property bool qualifierPress[int] { bool get(int); }
        property int qualifiers { int get(); }
        property UrhoBackend::IntVector2^ mousePosition { UrhoBackend::IntVector2^ get(); }
        property UrhoBackend::IntVector2^ mouseMove { UrhoBackend::IntVector2^ get(); }
        property int mouseMoveX { int get(); }
        property int mouseMoveY { int get(); }
        property int mouseMoveWheel { int get(); }
        property unsigned numTouches { unsigned get(); }
        property TouchState^ touches[unsigned] { TouchState^ get(unsigned); }
        property unsigned numJoysticks { unsigned get(); }
        property JoystickState^ joysticks[int] { JoystickState^ get(int); }
        property JoystickState^ joysticksByIndex[unsigned] { JoystickState^ get(unsigned); }
        property bool focus { bool get(); }
        property bool minimized { bool get(); }
// Methods
        int AddScreenJoystick(XMLFile^, XMLFile^);
        bool RemoveScreenJoystick(int);
        bool RecordGesture();
        bool RemoveGesture(unsigned);
        void RemoveAllGestures();
        int GetKeyFromName(System::String^);
        int GetKeyFromScancode(int);
        System::String^ GetKeyName(int);
        int GetScancodeFromKey(int);
        int GetScancodeFromName(System::String^);
        System::String^ GetScancodeName(int);
        void SetMouseVisible(bool enable, bool);
        void ResetMouseVisible();
// Fields

        Urho3D::Input* input_;
    };
}
