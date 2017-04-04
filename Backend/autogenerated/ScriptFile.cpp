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
#include "ScriptFile.h"

#include <Urho3D/Script/ScriptFile.h>

namespace UrhoBackend {

ScriptFile::ScriptFile(Urho3D::ScriptFile* fromUrho) : Resource(fromUrho) { scriptfile_ = fromUrho; }
ScriptFile::ScriptFile(System::IntPtr^ ptr) : ScriptFile((Urho3D::ScriptFile*)ptr->ToPointer()) { }

bool ScriptFile::compiled::get() { return scriptfile_->IsCompiled(); }
void ScriptFile::ClearDelayedExecute(System::String^ declaration)  {  scriptfile_->ClearDelayedExecute(Urho3D::String(ToCString(declaration))); }

}