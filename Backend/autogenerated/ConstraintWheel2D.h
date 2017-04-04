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
    class ConstraintWheel2D;
    class Vector2;
}

#include "Constraint2D.h"

namespace UrhoBackend {


    public ref class ConstraintWheel2D : public UrhoBackend::Constraint2D {
    public:
        ConstraintWheel2D(Urho3D::ConstraintWheel2D* comp);
        ConstraintWheel2D(System::IntPtr^ ptr);

// Properties
        property UrhoBackend::Vector2^ anchor { UrhoBackend::Vector2^ get(); void set(UrhoBackend::Vector2^); }
        property UrhoBackend::Vector2^ axis { UrhoBackend::Vector2^ get(); void set(UrhoBackend::Vector2^); }
        property bool enableMotor { bool get(); void set(bool); }
        property float maxMotorTorque { float get(); void set(float); }
        property float motorSpeed { float get(); void set(float); }
        property float frequencyHz { float get(); void set(float); }
        property float dampingRatio { float get(); void set(float); }
// Methods
// Fields

        Urho3D::ConstraintWheel2D* constraintwheel2d_;
    };
}
