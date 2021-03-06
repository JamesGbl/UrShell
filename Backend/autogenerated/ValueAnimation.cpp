//THIS FILE IS AUTOGENERATED - DO NOT MODIFY
#include "stdafx.h"
#include <Urho3D/Urho3D.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Container/Str.h>
#include "../MathBind.h"
#include "../ResourceRefWrapper.h"
#include "../SceneWrappers.h"
#include "../Variant.h"
#include "../StringHash.h"
#include "../UrControl.h"
#include "ValueAnimation.h"

#include <Urho3D/Scene/ValueAnimation.h>
#include <Urho3D/Scene/ValueAnimation.h>
#include <Urho3D/Core/Variant.h>

namespace UrhoBackend {

ValueAnimation::ValueAnimation(Urho3D::ValueAnimation* fromUrho) : UObject(fromUrho) { 
    valueanimation_ = fromUrho;
}
ValueAnimation::ValueAnimation(System::IntPtr^ ptr) : ValueAnimation((Urho3D::ValueAnimation*)ptr->ToPointer()) { }

InterpMethod ValueAnimation::interpolationMethod::get() { return (UrhoBackend::InterpMethod)valueanimation_->GetInterpolationMethod(); }
void ValueAnimation::interpolationMethod::set(InterpMethod value) { valueanimation_->SetInterpolationMethod((Urho3D::InterpMethod)value); }

float ValueAnimation::splineTension::get() { return valueanimation_->GetSplineTension(); }
void ValueAnimation::splineTension::set(float value) { valueanimation_->SetSplineTension(value); }

VariantType ValueAnimation::valueType::get() { return (UrhoBackend::VariantType)valueanimation_->GetValueType(); }
void ValueAnimation::valueType::set(VariantType value) { valueanimation_->SetValueType((Urho3D::VariantType)value); }

void ValueAnimation::SetKeyFrame(float A, Variant^ B)  {  valueanimation_->SetKeyFrame(A, *B->variant_); }

}
