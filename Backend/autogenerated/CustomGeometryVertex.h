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
    class CustomGeometryVertex;
    class Vector3;
    class Vector2;
    class Vector4;
}

#include <Urho3D/Graphics/CustomGeometry.h>

namespace UrhoBackend {


    public ref class CustomGeometryVertex {
    public:
        CustomGeometryVertex(Urho3D::CustomGeometryVertex comp);
        CustomGeometryVertex(System::IntPtr^ ptr);
        ~CustomGeometryVertex();

// Properties
// Methods
// Fields
        property UrhoBackend::Vector3^ position { UrhoBackend::Vector3^ get(); void set(UrhoBackend::Vector3^ value); }
        property UrhoBackend::Vector3^ normal { UrhoBackend::Vector3^ get(); void set(UrhoBackend::Vector3^ value); }
        property unsigned color { unsigned get(); void set(unsigned value); }
        property UrhoBackend::Vector2^ texCoord { UrhoBackend::Vector2^ get(); void set(UrhoBackend::Vector2^ value); }
        property UrhoBackend::Vector4^ tangent { UrhoBackend::Vector4^ get(); void set(UrhoBackend::Vector4^ value); }

        Urho3D::CustomGeometryVertex* customgeometryvertex_;
    };
}