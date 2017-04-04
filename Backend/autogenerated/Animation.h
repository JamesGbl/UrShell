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
    class Animation;
    class Variant;
    class String;
}

#include "Resource.h"

namespace UrhoBackend {


    public ref class Animation : public UrhoBackend::Resource {
    public:
        Animation(Urho3D::Animation* comp);
        Animation(System::IntPtr^ ptr);

// Properties
        property System::String^ animationName { System::String^ get(); }
        property float length { float get(); }
        property unsigned numTracks { unsigned get(); }
        property unsigned numTriggers { unsigned get(); void set(unsigned); }
// Methods
        void AddTrigger(float, bool, Variant^);
        void RemoveTrigger(unsigned);
        void RemoveAllTriggers();
// Fields

        Urho3D::Animation* animation_;
    };
}