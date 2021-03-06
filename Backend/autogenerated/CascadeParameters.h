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
    class CascadeParameters;
}

#include <Urho3D/Graphics/Light.h>

namespace UrhoBackend {


    public ref class CascadeParameters {
    public:
        CascadeParameters(Urho3D::CascadeParameters comp);
        CascadeParameters(System::IntPtr^ ptr);
        ~CascadeParameters();

// Properties
// Methods
// Fields
        property float split1 { float get(); void set(float value); }
        property float split2 { float get(); void set(float value); }
        property float split3 { float get(); void set(float value); }
        property float split4 { float get(); void set(float value); }
        property float fadeStart { float get(); void set(float value); }
        property float biasAutoAdjust { float get(); void set(float value); }

        Urho3D::CascadeParameters* cascadeparameters_;
    };
}
