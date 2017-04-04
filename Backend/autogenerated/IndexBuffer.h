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
    class IndexBuffer;
}



namespace UrhoBackend {


    public ref class IndexBuffer : public UrhoBackend::Object {
    public:
        IndexBuffer(Urho3D::IndexBuffer* comp);
        IndexBuffer(System::IntPtr^ ptr);

// Properties
        property bool shadowed { bool get(); void set(bool); }
        property bool dynamic { bool get(); }
        property unsigned indexCount { unsigned get(); }
        property unsigned indexSize { unsigned get(); }
// Methods
        void SetSize(unsigned, bool, bool);
// Fields

        Urho3D::IndexBuffer* indexbuffer_;
    };
}
