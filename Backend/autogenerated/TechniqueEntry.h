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
    class TechniqueEntry;
}

#include <Urho3D/Graphics/Material.h>

namespace UrhoBackend {


    public ref class TechniqueEntry {
    public:
        TechniqueEntry(Urho3D::TechniqueEntry comp);
        TechniqueEntry(System::IntPtr^ ptr);
        ~TechniqueEntry();

// Properties
// Methods
        TechniqueEntry^ opAssign(TechniqueEntry^);
// Fields
        property int qualityLevel { int get(); void set(int value); }
        property float lodDistance { float get(); void set(float value); }

        Urho3D::TechniqueEntry* techniqueentry_;
    };
}
