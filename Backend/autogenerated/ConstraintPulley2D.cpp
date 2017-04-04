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
#include "ConstraintPulley2D.h"

#include <Urho3D/Urho2D/ConstraintPulley2D.h>

namespace UrhoBackend {

ConstraintPulley2D::ConstraintPulley2D(Urho3D::ConstraintPulley2D* fromUrho) : Constraint2D(fromUrho) { constraintpulley2d_ = fromUrho; }
ConstraintPulley2D::ConstraintPulley2D(System::IntPtr^ ptr) : ConstraintPulley2D((Urho3D::ConstraintPulley2D*)ptr->ToPointer()) { }

void ConstraintPulley2D::ownerBodyGroundAnchor::set(UrhoBackend::Vector2^ value) { constraintpulley2d_->SetOwnerBodyGroundAnchor(value->ToVector2()); }

UrhoBackend::Vector2^ ConstraintPulley2D::ownerBodyGroundAnchor::get() { return gcnew UrhoBackend::Vector2(constraintpulley2d_->GetOwnerBodyGroundAnchor()); }
UrhoBackend::Vector2^ ConstraintPulley2D::otherBodyGroundAnchor::get() { return gcnew UrhoBackend::Vector2(constraintpulley2d_->GetOtherBodyGroundAnchor()); }
void ConstraintPulley2D::otherBodyGroundAnchor::set(UrhoBackend::Vector2^ value) { constraintpulley2d_->SetOtherBodyGroundAnchor(value->ToVector2()); }

UrhoBackend::Vector2^ ConstraintPulley2D::ownerBodyAnchor::get() { return gcnew UrhoBackend::Vector2(constraintpulley2d_->GetOwnerBodyAnchor()); }
void ConstraintPulley2D::ownerBodyAnchor::set(UrhoBackend::Vector2^ value) { constraintpulley2d_->SetOwnerBodyAnchor(value->ToVector2()); }

UrhoBackend::Vector2^ ConstraintPulley2D::otherBodyAnchor::get() { return gcnew UrhoBackend::Vector2(constraintpulley2d_->GetOtherBodyAnchor()); }
void ConstraintPulley2D::otherBodyAnchor::set(UrhoBackend::Vector2^ value) { constraintpulley2d_->SetOtherBodyAnchor(value->ToVector2()); }

float ConstraintPulley2D::ratio::get() { return constraintpulley2d_->GetRatio(); }
void ConstraintPulley2D::ratio::set(float value) { constraintpulley2d_->SetRatio(value); }

}
