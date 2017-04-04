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
#include "Animation.h"

#include <Urho3D/Graphics/Animation.h>

namespace UrhoBackend {

Animation::Animation(Urho3D::Animation* fromUrho) : Resource(fromUrho) { animation_ = fromUrho; }
Animation::Animation(System::IntPtr^ ptr) : Animation((Urho3D::Animation*)ptr->ToPointer()) { }

System::String^ Animation::animationName::get() { return gcnew System::String(animation_->GetAnimationName().CString()); }
float Animation::length::get() { return animation_->GetLength(); }
unsigned Animation::numTracks::get() { return animation_->GetNumTracks(); }
unsigned Animation::numTriggers::get() { return animation_->GetNumTriggers(); }
void Animation::numTriggers::set(unsigned value) { animation_->SetNumTriggers(value); }

void Animation::AddTrigger(float A, bool B, Variant^ C)  {  animation_->AddTrigger(A, B, *C->variant_); }

void Animation::RemoveTrigger(unsigned A)  {  animation_->RemoveTrigger(A); }

void Animation::RemoveAllTriggers()  {  animation_->RemoveAllTriggers(); }

}