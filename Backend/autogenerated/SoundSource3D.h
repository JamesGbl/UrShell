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
    class SoundSource3D;
}

#include "SoundSource.h"

namespace UrhoBackend {


    public ref class SoundSource3D : public UrhoBackend::SoundSource {
    public:
        SoundSource3D(Urho3D::SoundSource3D* comp);
        SoundSource3D(System::IntPtr^ ptr);

// Properties
        property float nearDistance { float get(); void set(float); }
        property float farDistance { float get(); void set(float); }
        property float innerAngle { float get(); void set(float); }
        property float outerAngle { float get(); void set(float); }
        property float rolloffFactor { float get(); void set(float); }
// Methods
        void SetDistanceAttenuation(float, float, float);
        void SetAngleAttenuation(float, float);
// Fields

        Urho3D::SoundSource3D* soundsource3d_;
    };
}
