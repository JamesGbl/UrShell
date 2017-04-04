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
#include "Timer.h"

#include <Urho3D/Core/Timer.h>

namespace UrhoBackend {

Timer::Timer(Urho3D::Timer fromUrho) { timer_ = new Urho3D::Timer(); *timer_ = fromUrho; }
Timer::Timer(System::IntPtr^ ptr) : Timer(*((Urho3D::Timer*)ptr->ToPointer())) { }
Timer::~Timer() { delete timer_; }
unsigned Timer::GetMSec(bool A)  { return  timer_->GetMSec(A); }

void Timer::Reset()  {  timer_->Reset(); }

}
