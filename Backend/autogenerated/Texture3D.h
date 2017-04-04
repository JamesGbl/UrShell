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
    class Texture3D;
    class RenderSurface;
}

#include "Texture.h"

namespace UrhoBackend {

    ref class RenderSurface;

    public ref class Texture3D : public UrhoBackend::Texture {
    public:
        Texture3D(Urho3D::Texture3D* comp);
        Texture3D(System::IntPtr^ ptr);

// Properties
        property RenderSurface^ renderSurface { RenderSurface^ get(); }
// Methods
        bool SetSize(int, int, unsigned, TextureUsage);
// Fields

        Urho3D::Texture3D* texture3d_;
    };
}
