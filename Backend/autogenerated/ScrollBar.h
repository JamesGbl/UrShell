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
    class ScrollBar;
    class Button;
    class Slider;
}



namespace UrhoBackend {

    ref class Button;
    ref class Slider;

    public ref class ScrollBar : public UrhoBackend::UIElement {
    public:
        ScrollBar(Urho3D::ScrollBar* comp);
        ScrollBar(System::IntPtr^ ptr);

// Properties
        property Orientation orientation { Orientation get(); void set(Orientation); }
        property float range { float get(); void set(float); }
        property float value { float get(); void set(float); }
        property float scrollStep { float get(); void set(float); }
        property float stepFactor { float get(); void set(float); }
        property float effectiveScrollStep { float get(); }
        property Button^ backButton { Button^ get(); }
        property Button^ forwardButton { Button^ get(); }
        property Slider^ slider { Slider^ get(); }
// Methods
        void ChangeValue(float);
        void StepBack();
        void StepForward();
// Fields

        Urho3D::ScrollBar* scrollbar_;
    };
}
