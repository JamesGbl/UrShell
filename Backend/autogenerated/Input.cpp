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
#include "Input.h"

#include <Urho3D/Input/Input.h>
#include <Urho3D/Resource/XMLFile.h>
#include "XMLFile.h"
#include <Urho3D/Input/Input.h>
#include "TouchState.h"
#include <Urho3D/Input/Input.h>
#include "JoystickState.h"
#include <Urho3D/Input/Input.h>

namespace UrhoBackend {

Input::Input(Urho3D::Input* fromUrho) : Object(fromUrho) { input_ = fromUrho; }
Input::Input(System::IntPtr^ ptr) : Input((Urho3D::Input*)ptr->ToPointer()) { }

bool Input::mouseVisible::get() { return input_->IsMouseVisible(); }
bool Input::mouseGrabbed::get() { return input_->IsMouseGrabbed(); }
void Input::mouseGrabbed::set(bool value) { input_->SetMouseGrabbed(value); }

MouseMode Input::mouseMode::get() { return (UrhoBackend::MouseMode)input_->GetMouseMode(); }
void Input::mouseMode::set(MouseMode value) { input_->SetMouseMode((Urho3D::MouseMode)value); }

bool Input::screenJoystickVisible::get(int A) { return input_->IsScreenJoystickVisible(A); }

void Input::screenJoystickVisible::set(int A, bool B) { input_->SetScreenJoystickVisible(A, B); }

bool Input::screenKeyboardVisible::get() { return input_->IsScreenKeyboardVisible(); }
void Input::screenKeyboardVisible::set(bool value) { input_->SetScreenKeyboardVisible(value); }

bool Input::screenKeyboardSupport::get() { return input_->GetScreenKeyboardSupport(); }
bool Input::touchEmulation::get() { return input_->GetTouchEmulation(); }
void Input::touchEmulation::set(bool value) { input_->SetTouchEmulation(value); }

bool Input::toggleFullscreen::get() { return input_->GetToggleFullscreen(); }
void Input::toggleFullscreen::set(bool value) { input_->SetToggleFullscreen(value); }

bool Input::keyDown::get(int A) { return input_->GetKeyDown(A); }

bool Input::keyPress::get(int A) { return input_->GetKeyPress(A); }

bool Input::scancodeDown::get(int A) { return input_->GetScancodeDown(A); }

bool Input::scancodePress::get(int A) { return input_->GetScancodePress(A); }

bool Input::mouseButtonDown::get(int A) { return input_->GetMouseButtonDown(A); }

bool Input::mouseButtonPress::get(int A) { return input_->GetMouseButtonPress(A); }

bool Input::qualifierDown::get(int A) { return input_->GetQualifierDown(A); }

bool Input::qualifierPress::get(int A) { return input_->GetQualifierPress(A); }

int Input::qualifiers::get() { return input_->GetQualifiers(); }
UrhoBackend::IntVector2^ Input::mousePosition::get() { return gcnew UrhoBackend::IntVector2(input_->GetMousePosition()); }
UrhoBackend::IntVector2^ Input::mouseMove::get() { return gcnew UrhoBackend::IntVector2(input_->GetMouseMove()); }
int Input::mouseMoveX::get() { return input_->GetMouseMoveX(); }
int Input::mouseMoveY::get() { return input_->GetMouseMoveY(); }
int Input::mouseMoveWheel::get() { return input_->GetMouseMoveWheel(); }
unsigned Input::numTouches::get() { return input_->GetNumTouches(); }
TouchState^ Input::touches::get(unsigned A) { return gcnew UrhoBackend::TouchState(input_->GetTouch(A)); }

unsigned Input::numJoysticks::get() { return input_->GetNumJoysticks(); }
JoystickState^ Input::joysticks::get(int A) { return gcnew UrhoBackend::JoystickState(input_->GetJoystick(A)); }

JoystickState^ Input::joysticksByIndex::get(unsigned A) { return gcnew UrhoBackend::JoystickState(input_->GetJoystickByIndex(A)); }

bool Input::focus::get() { return input_->HasFocus(); }
bool Input::minimized::get() { return input_->IsMinimized(); }
int Input::AddScreenJoystick(XMLFile^ layoutFile, XMLFile^ styleFile)  { return  input_->AddScreenJoystick(layoutFile->xmlfile_, styleFile->xmlfile_); }

bool Input::RemoveScreenJoystick(int A)  { return  input_->RemoveScreenJoystick(A); }

bool Input::RecordGesture()  { return  input_->RecordGesture(); }

bool Input::RemoveGesture(unsigned A)  { return  input_->RemoveGesture(A); }

void Input::RemoveAllGestures()  {  input_->RemoveAllGestures(); }

int Input::GetKeyFromName(System::String^ A)  { return  input_->GetKeyFromName(Urho3D::String(ToCString(A))); }

int Input::GetKeyFromScancode(int A)  { return  input_->GetKeyFromScancode(A); }

System::String^ Input::GetKeyName(int A)  { return  gcnew System::String(input_->GetKeyName(A).CString()); }

int Input::GetScancodeFromKey(int A)  { return  input_->GetScancodeFromKey(A); }

int Input::GetScancodeFromName(System::String^ A)  { return  input_->GetScancodeFromName(Urho3D::String(ToCString(A))); }

System::String^ Input::GetScancodeName(int A)  { return  gcnew System::String(input_->GetScancodeName(A).CString()); }

void Input::SetMouseVisible(bool enable A, bool suppressEvent)  {  input_->SetMouseVisible(A, suppressEvent); }

void Input::ResetMouseVisible()  {  input_->ResetMouseVisible(); }

}
