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
    class Font;
    class File;
    class String;
    class IntVector2;
    class Vector2;
}

#include "Resource.h"

namespace UrhoBackend {

    ref class File;

    public ref class Font : public UrhoBackend::Resource {
    public:
        Font(Urho3D::Font* comp);
        Font(System::IntPtr^ ptr);

// Properties
        property UrhoBackend::IntVector2^ absoluteGlyphOffset { UrhoBackend::IntVector2^ get(); void set(UrhoBackend::IntVector2^); }
        property UrhoBackend::Vector2^ scaledGlyphOffset { UrhoBackend::Vector2^ get(); void set(UrhoBackend::Vector2^); }
// Methods
        bool SaveXML(File^, int, bool, System::String^);
        UrhoBackend::IntVector2^ GetTotalGlyphOffset(int);
// Fields

        Urho3D::Font* font_;
    };
}
