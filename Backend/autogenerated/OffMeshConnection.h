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
    class OffMeshConnection;
    class Node;
}



namespace UrhoBackend {


    public ref class OffMeshConnection : public UrhoBackend::Component {
    public:
        OffMeshConnection(Urho3D::OffMeshConnection* comp);
        OffMeshConnection(System::IntPtr^ ptr);

// Properties
        property bool bidirectional { void set(bool); }
        property Node^ endPoint { Node^ get(); void set(Node^); }
        property float radius { float get(); void set(float); }
        property bool bidirectional { bool get(); }
// Methods
// Fields

        Urho3D::OffMeshConnection* offmeshconnection_;
    };
}