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
#include "AnimationSet2D.h"

#include <Urho3D/Urho2D/AnimationSet2D.h>
#include <Urho3D/Urho2D/Animation2D.h>
#include "Animation2D.h"

namespace UrhoBackend {

AnimationSet2D::AnimationSet2D(Urho3D::AnimationSet2D* fromUrho) : Resource(fromUrho) { animationset2d_ = fromUrho; }
AnimationSet2D::AnimationSet2D(System::IntPtr^ ptr) : AnimationSet2D((Urho3D::AnimationSet2D*)ptr->ToPointer()) { }

unsigned AnimationSet2D::numAnimations::get() { return animationset2d_->GetNumAnimations(); }
Animation2D^ AnimationSet2D::GetAnimation(unsigned A)  { return  gcnew UrhoBackend::Animation2D(animationset2d_->GetAnimation(A)); }

Animation2D^ AnimationSet2D::GetAnimation(System::String^ A)  { return  gcnew UrhoBackend::Animation2D(animationset2d_->GetAnimation(Urho3D::String(ToCString(A)))); }

}
