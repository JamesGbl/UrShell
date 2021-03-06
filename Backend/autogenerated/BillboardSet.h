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
    class BillboardSet;
    class Material;
    class Billboard;
    class Zone;
}

#include "Drawable.h"

namespace UrhoBackend {

    ref class Material;
    ref class Billboard;
    ref class Zone;

    public ref class BillboardSet : public UrhoBackend::Drawable {
    public:
        BillboardSet(Urho3D::BillboardSet* comp);
        BillboardSet(System::IntPtr^ ptr);

// Properties
        property Material^ material { Material^ get(); void set(Material^); }
        property unsigned numBillboards { unsigned get(); void set(unsigned); }
        property bool relative { bool get(); void set(bool); }
        property bool sorted { bool get(); void set(bool); }
        property bool scaled { bool get(); void set(bool); }
        property FaceCameraMode faceCameraMode { FaceCameraMode get(); void set(FaceCameraMode); }
        property float animationLodBias { float get(); void set(float); }
        property Billboard^ billboards[unsigned] { Billboard^ get(unsigned); }
        property Zone^ zone { Zone^ get(); }
// Methods
        void Commit();
// Fields

        Urho3D::BillboardSet* billboardset_;
    };
}
