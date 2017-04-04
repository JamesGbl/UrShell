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
    class Animation2D;
    class String;
}



namespace UrhoBackend {


    public ref class Animation2D : public UrhoBackend::RefCounted {
    public:
        Animation2D(Urho3D::Animation2D* comp);
        Animation2D(System::IntPtr^ ptr);

// Properties
        property System::String^ name { System::String^ get(); }
        property float length { float get(); }
        property bool looped { bool get(); }
// Methods
// Fields

        Urho3D::Animation2D* animation2d_;
    };
}
