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
    class Timer;
}

#include <Urho3D/Core/Timer.h>

namespace UrhoBackend {


    public ref class Timer {
    public:
        Timer(Urho3D::Timer comp);
        Timer(System::IntPtr^ ptr);
        ~Timer();

// Properties
// Methods
        unsigned GetMSec(bool);
        void Reset();
// Fields

        Urho3D::Timer* timer_;
    };
}
