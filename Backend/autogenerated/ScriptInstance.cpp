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
#include "ScriptInstance.h"

#include <Urho3D/Script/ScriptInstance.h>
#include <Urho3D/Script/ScriptFile.h>
#include "ScriptFile.h"

namespace UrhoBackend {

ScriptInstance::ScriptInstance(Urho3D::ScriptInstance* fromUrho) : Component(fromUrho) { scriptinstance_ = fromUrho; }
ScriptInstance::ScriptInstance(System::IntPtr^ ptr) : ScriptInstance((Urho3D::ScriptInstance*)ptr->ToPointer()) { }

ScriptFile^ ScriptInstance::scriptFile::get() { return gcnew UrhoBackend::ScriptFile(scriptinstance_->GetScriptFile()); }
void ScriptInstance::scriptFile::set(ScriptFile^ value) { scriptinstance_->SetScriptFile(value->scriptfile_); }

ScriptObject ScriptInstance::scriptObject::get() { return scriptinstance_->GetScriptObject(); }
System::String^ ScriptInstance::className::get() { return gcnew System::String(scriptinstance_->GetClassName().CString()); }
void ScriptInstance::className::set(System::String^ value) { scriptinstance_->SetClassName(Urho3D::String(ToCString(value))); }

bool ScriptInstance::CreateObject(ScriptFile^ A, System::String^ B)  { return  scriptinstance_->CreateObject(A->scriptfile_, Urho3D::String(ToCString(B))); }

void ScriptInstance::ClearDelayedExecute(System::String^ declaration)  {  scriptinstance_->ClearDelayedExecute(Urho3D::String(ToCString(declaration))); }

}
