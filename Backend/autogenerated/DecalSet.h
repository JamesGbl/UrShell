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
    class DecalSet;
    class Drawable;
    class Vector3;
    class Quaternion;
    class Vector2;
    class Material;
    class Zone;
}

#include "Drawable.h"

namespace UrhoBackend {

    ref class Drawable;
    ref class Material;
    ref class Zone;

    public ref class DecalSet : public UrhoBackend::Drawable {
    public:
        DecalSet(Urho3D::DecalSet* comp);
        DecalSet(System::IntPtr^ ptr);

// Properties
        property Material^ material { Material^ get(); void set(Material^); }
        property unsigned numDecals { unsigned get(); }
        property unsigned numVertices { unsigned get(); }
        property unsigned numIndices { unsigned get(); }
        property unsigned maxVertices { unsigned get(); void set(unsigned); }
        property unsigned maxIndices { unsigned get(); void set(unsigned); }
        property Zone^ zone { Zone^ get(); }
// Methods
        bool AddDecal(Drawable^, UrhoBackend::Vector3^, UrhoBackend::Quaternion^, float, float, float, UrhoBackend::Vector2^, UrhoBackend::Vector2^, float, float, unsigned);
        void RemoveDecals(unsigned);
        void RemoveAllDecals();
// Fields

        Urho3D::DecalSet* decalset_;
    };
}
