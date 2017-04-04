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
    class Constraint2D;
    class RigidBody2D;
}



namespace UrhoBackend {

    ref class RigidBody2D;

    public ref class Constraint2D : public UrhoBackend::Component {
    public:
        Constraint2D(Urho3D::Constraint2D* comp);
        Constraint2D(System::IntPtr^ ptr);

// Properties
        property bool collideConnected { void set(bool); }
        property RigidBody2D^ otherBody { RigidBody2D^ get(); void set(RigidBody2D^); }
        property RigidBody2D^ ownerBody { RigidBody2D^ get(); }
        property bool collideConnected { bool get(); }
// Methods
// Fields

        Urho3D::Constraint2D* constraint2d_;
    };
}
