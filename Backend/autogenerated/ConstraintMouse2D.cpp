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
#include "ConstraintMouse2D.h"

#include <Urho3D/Urho2D/ConstraintMouse2D.h>

namespace UrhoBackend {

ConstraintMouse2D::ConstraintMouse2D(Urho3D::ConstraintMouse2D* fromUrho) : Constraint2D(fromUrho) { constraintmouse2d_ = fromUrho; }
ConstraintMouse2D::ConstraintMouse2D(System::IntPtr^ ptr) : ConstraintMouse2D((Urho3D::ConstraintMouse2D*)ptr->ToPointer()) { }

UrhoBackend::Vector2^ ConstraintMouse2D::target::get() { return gcnew UrhoBackend::Vector2(constraintmouse2d_->GetTarget()); }
void ConstraintMouse2D::target::set(UrhoBackend::Vector2^ value) { constraintmouse2d_->SetTarget(value->ToVector2()); }

float ConstraintMouse2D::maxForce::get() { return constraintmouse2d_->GetMaxForce(); }
void ConstraintMouse2D::maxForce::set(float value) { constraintmouse2d_->SetMaxForce(value); }

float ConstraintMouse2D::frequencyHz::get() { return constraintmouse2d_->GetFrequencyHz(); }
void ConstraintMouse2D::frequencyHz::set(float value) { constraintmouse2d_->SetFrequencyHz(value); }

float ConstraintMouse2D::dampingRatio::get() { return constraintmouse2d_->GetDampingRatio(); }
void ConstraintMouse2D::dampingRatio::set(float value) { constraintmouse2d_->SetDampingRatio(value); }

}
