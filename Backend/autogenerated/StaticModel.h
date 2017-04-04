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
    class StaticModel;
    class String;
    class Vector3;
    class Model;
    class Material;
}

#include "Drawable.h"

namespace UrhoBackend {

    ref class Model;
    ref class Material;

    public ref class StaticModel : public UrhoBackend::Drawable {
    public:
        StaticModel(Urho3D::StaticModel* comp);
        StaticModel(System::IntPtr^ ptr);

// Properties
        property Model^ model { Model^ get(); void set(Model^); }
        property Material^ materials[unsigned] { Material^ get(unsigned); void set(unsigned, Material^); }
        property bool materials[unsigned, Material^] { void set(unsigned, Material^, bool); }
        property unsigned numGeometries { unsigned get(); }
        property unsigned occlusionLodLevel { unsigned get(); void set(unsigned); }
// Methods
        void ApplyMaterialList(System::String^);
        bool IsInside(UrhoBackend::Vector3^);
        bool IsInsideLocal(UrhoBackend::Vector3^);
// Fields

        Urho3D::StaticModel* staticmodel_;
    };
}
