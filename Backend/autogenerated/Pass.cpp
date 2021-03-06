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
#include "Pass.h"

#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Technique.h>

namespace UrhoBackend {

Pass::Pass(Urho3D::Pass* fromUrho) : RefCounted(fromUrho) { pass_ = fromUrho; }
Pass::Pass(System::IntPtr^ ptr) : Pass((Urho3D::Pass*)ptr->ToPointer()) { }

BlendMode Pass::blendMode::get() { return (UrhoBackend::BlendMode)pass_->GetBlendMode(); }
void Pass::blendMode::set(BlendMode value) { pass_->SetBlendMode((Urho3D::BlendMode)value); }

CompareMode Pass::depthTestMode::get() { return (UrhoBackend::CompareMode)pass_->GetDepthTestMode(); }
void Pass::depthTestMode::set(CompareMode value) { pass_->SetDepthTestMode((Urho3D::CompareMode)value); }

PassLightingMode Pass::lightingMode::get() { return (UrhoBackend::PassLightingMode)pass_->GetLightingMode(); }
void Pass::lightingMode::set(PassLightingMode value) { pass_->SetLightingMode((Urho3D::PassLightingMode)value); }

bool Pass::depthWrite::get() { return pass_->GetDepthWrite(); }
void Pass::depthWrite::set(bool value) { pass_->SetDepthWrite(value); }

bool Pass::alphaMask::get() { return pass_->GetAlphaMask(); }
void Pass::alphaMask::set(bool value) { pass_->SetAlphaMask(value); }

bool Pass::desktop::get() { return pass_->IsDesktop(); }
void Pass::desktop::set(bool value) { pass_->SetIsDesktop(value); }

System::String^ Pass::vertexShader::get() { return gcnew System::String(pass_->GetVertexShader().CString()); }
void Pass::vertexShader::set(System::String^ value) { pass_->SetVertexShader(Urho3D::String(ToCString(value))); }

System::String^ Pass::pixelShader::get() { return gcnew System::String(pass_->GetPixelShader().CString()); }
void Pass::pixelShader::set(System::String^ value) { pass_->SetPixelShader(Urho3D::String(ToCString(value))); }

System::String^ Pass::vertexShaderDefines::get() { return gcnew System::String(pass_->GetVertexShaderDefines().CString()); }
void Pass::vertexShaderDefines::set(System::String^ value) { pass_->SetVertexShaderDefines(Urho3D::String(ToCString(value))); }

System::String^ Pass::pixelShaderDefines::get() { return gcnew System::String(pass_->GetPixelShaderDefines().CString()); }
void Pass::pixelShaderDefines::set(System::String^ value) { pass_->SetPixelShaderDefines(Urho3D::String(ToCString(value))); }

}
