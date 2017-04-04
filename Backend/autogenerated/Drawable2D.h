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
    class Drawable2D;
}

#include "Drawable.h"

namespace UrhoBackend {


    public ref class Drawable2D : public UrhoBackend::Drawable {
    public:
        Drawable2D(Urho3D::Drawable2D* comp);
        Drawable2D(System::IntPtr^ ptr);

// Properties
        property int layer { int get(); void set(int); }
        property int orderInLayer { int get(); void set(int); }
// Methods
// Fields

        Urho3D::Drawable2D* drawable2d_;
    };
}