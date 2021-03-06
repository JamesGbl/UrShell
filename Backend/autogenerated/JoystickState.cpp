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
#include "JoystickState.h"

#include <Urho3D/Input/Input.h>

namespace UrhoBackend {

JoystickState::JoystickState(Urho3D::JoystickState fromUrho) { joystickstate_ = new Urho3D::JoystickState(); *joystickstate_ = fromUrho; }
JoystickState::JoystickState(System::IntPtr^ ptr) : JoystickState(*((Urho3D::JoystickState*)ptr->ToPointer())) { }
JoystickState::~JoystickState() { delete joystickstate_; }
bool JoystickState::controller::get() { return joystickstate_->IsController(); }
unsigned JoystickState::numButtons::get() { return joystickstate_->GetNumButtons(); }
unsigned JoystickState::numAxes::get() { return joystickstate_->GetNumAxes(); }
unsigned JoystickState::numHats::get() { return joystickstate_->GetNumHats(); }
bool JoystickState::buttonDown::get(unsigned A) { return joystickstate_->GetButtonDown(A); }

bool JoystickState::buttonPress::get(unsigned A) { return joystickstate_->GetButtonPress(A); }

float JoystickState::axisPosition::get(unsigned A) { return joystickstate_->GetAxisPosition(A); }

int JoystickState::hatPosition::get(unsigned A) { return joystickstate_->GetHatPosition(A); }

System::String^ JoystickState::name::get() { return gcnew System::String(joystickstate_->name_.CString()); }
void JoystickState::name::set(System::String^ value) { joystickstate_->name_ = Urho3D::String(ToCString(value)); }

int JoystickState::joystickID::get() { return joystickstate_->joystickID_; }
void JoystickState::joystickID::set(int value) { joystickstate_->joystickID_ = value; }

}
