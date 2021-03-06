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
#include "AnimationTriggerPoint.h"

#include <Urho3D/Graphics/Animation.h>

namespace UrhoBackend {

AnimationTriggerPoint::AnimationTriggerPoint(Urho3D::AnimationTriggerPoint fromUrho) { animationtriggerpoint_ = new Urho3D::AnimationTriggerPoint(); *animationtriggerpoint_ = fromUrho; }
AnimationTriggerPoint::AnimationTriggerPoint(System::IntPtr^ ptr) : AnimationTriggerPoint(*((Urho3D::AnimationTriggerPoint*)ptr->ToPointer())) { }
AnimationTriggerPoint::~AnimationTriggerPoint() { delete animationtriggerpoint_; }
float AnimationTriggerPoint::time::get() { return animationtriggerpoint_->time_; }
void AnimationTriggerPoint::time::set(float value) { animationtriggerpoint_->time_ = value; }

Variant^ AnimationTriggerPoint::data::get() { return gcnew UrhoBackend::Variant(animationtriggerpoint_->data_); }
void AnimationTriggerPoint::data::set(Variant^ value) { animationtriggerpoint_->data_ = *value->variant_; }

}
