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
#include "ConstraintRevolute2D.h"

#include <Urho3D/Urho2D/ConstraintRevolute2D.h>

namespace UrhoBackend {

ConstraintRevolute2D::ConstraintRevolute2D(Urho3D::ConstraintRevolute2D* fromUrho) : Constraint2D(fromUrho) { constraintrevolute2d_ = fromUrho; }
ConstraintRevolute2D::ConstraintRevolute2D(System::IntPtr^ ptr) : ConstraintRevolute2D((Urho3D::ConstraintRevolute2D*)ptr->ToPointer()) { }

UrhoBackend::Vector2^ ConstraintRevolute2D::anchor::get() { return gcnew UrhoBackend::Vector2(constraintrevolute2d_->GetAnchor()); }
void ConstraintRevolute2D::anchor::set(UrhoBackend::Vector2^ value) { constraintrevolute2d_->SetAnchor(value->ToVector2()); }

bool ConstraintRevolute2D::enableLimit::get() { return constraintrevolute2d_->GetEnableLimit(); }
void ConstraintRevolute2D::enableLimit::set(bool value) { constraintrevolute2d_->SetEnableLimit(value); }

float ConstraintRevolute2D::lowerAngle::get() { return constraintrevolute2d_->GetLowerAngle(); }
void ConstraintRevolute2D::lowerAngle::set(float value) { constraintrevolute2d_->SetLowerAngle(value); }

float ConstraintRevolute2D::upperAngle::get() { return constraintrevolute2d_->GetUpperAngle(); }
void ConstraintRevolute2D::upperAngle::set(float value) { constraintrevolute2d_->SetUpperAngle(value); }

bool ConstraintRevolute2D::enableMotor::get() { return constraintrevolute2d_->GetEnableMotor(); }
void ConstraintRevolute2D::enableMotor::set(bool value) { constraintrevolute2d_->SetEnableMotor(value); }

float ConstraintRevolute2D::motorSpeed::get() { return constraintrevolute2d_->GetMotorSpeed(); }
void ConstraintRevolute2D::motorSpeed::set(float value) { constraintrevolute2d_->SetMotorSpeed(value); }

float ConstraintRevolute2D::maxMotorTorque::get() { return constraintrevolute2d_->GetMaxMotorTorque(); }
void ConstraintRevolute2D::maxMotorTorque::set(float value) { constraintrevolute2d_->SetMaxMotorTorque(value); }

}
