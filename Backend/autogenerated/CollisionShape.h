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
    class CollisionShape;
    class Vector3;
    class Quaternion;
    class Model;
    class CustomGeometry;
    class BoundingBox;
}



namespace UrhoBackend {

    ref class Model;
    ref class CustomGeometry;
    ref class BoundingBox;

    public ref class CollisionShape : public UrhoBackend::Component {
    public:
        CollisionShape(Urho3D::CollisionShape* comp);
        CollisionShape(System::IntPtr^ ptr);

// Properties
        property ShapeType shapeType { ShapeType get(); void set(ShapeType); }
        property UrhoBackend::Vector3^ size { UrhoBackend::Vector3^ get(); void set(UrhoBackend::Vector3^); }
        property UrhoBackend::Vector3^ position { UrhoBackend::Vector3^ get(); void set(UrhoBackend::Vector3^); }
        property UrhoBackend::Quaternion^ rotation { UrhoBackend::Quaternion^ get(); void set(UrhoBackend::Quaternion^); }
        property float margin { float get(); void set(float); }
        property Model^ model { Model^ get(); void set(Model^); }
        property unsigned lodLevel { unsigned get(); void set(unsigned); }
        property BoundingBox^ worldBoundingBox { BoundingBox^ get(); }
// Methods
        void SetBox(UrhoBackend::Vector3^, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetSphere(float, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetStaticPlane(UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetCylinder(float, float, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetCapsule(float, float, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetCone(float, float, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetTriangleMesh(Model^, unsigned, UrhoBackend::Vector3^, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetCustomTriangleMesh(CustomGeometry^, UrhoBackend::Vector3^, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetConvexHull(Model^, unsigned, UrhoBackend::Vector3^, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetCustomConvexHull(CustomGeometry^, UrhoBackend::Vector3^, UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
        void SetTerrain(unsigned);
        void SetTransform(UrhoBackend::Vector3^, UrhoBackend::Quaternion^);
// Fields

        Urho3D::CollisionShape* collisionshape_;
    };
}
