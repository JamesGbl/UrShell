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
    class Audio;
    class String;
    class SoundListener;
}



namespace UrhoBackend {

    ref class SoundListener;

    public ref class Audio : public UrhoBackend::Object {
    public:
        Audio(Urho3D::Audio* comp);
        Audio(System::IntPtr^ ptr);

// Properties
        property float masterGain[System::String^] { float get(System::String^); void set(System::String^, float); }
        property SoundListener^ listener { SoundListener^ get(); void set(SoundListener^); }
        property unsigned sampleSize { unsigned get(); }
        property int mixRate { int get(); }
        property bool stereo { bool get(); }
        property bool interpolation { bool get(); }
        property bool playing { bool get(); }
        property bool initialized { bool get(); }
// Methods
        void SetMode(int, int, bool, bool);
        bool Play();
        void Stop();
        bool HasMasterGain(System::String^);
// Fields

        Urho3D::Audio* audio_;
    };
}
