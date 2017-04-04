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
#include "CheckBox.h"

#include <Urho3D/UI/CheckBox.h>
#include <Urho3D/Graphics/Texture.h>
#include "Texture.h"
#include <Urho3D/Graphics/GraphicsDefs.h>

namespace UrhoBackend {

CheckBox::CheckBox(Urho3D::CheckBox* fromUrho) : UIElement(fromUrho) { checkbox_ = fromUrho; }
CheckBox::CheckBox(System::IntPtr^ ptr) : CheckBox((Urho3D::CheckBox*)ptr->ToPointer()) { }

Texture^ CheckBox::texture::get() { return gcnew UrhoBackend::Texture(checkbox_->GetTexture()); }
void CheckBox::texture::set(Texture^ value) { checkbox_->SetTexture(value->texture_); }

UrhoBackend::IntRect^ CheckBox::imageRect::get() { return gcnew UrhoBackend::IntRect(checkbox_->GetImageRect()); }
void CheckBox::imageRect::set(UrhoBackend::IntRect^ value) { checkbox_->SetImageRect(value->ToIntRect()); }

UrhoBackend::IntRect^ CheckBox::border::get() { return gcnew UrhoBackend::IntRect(checkbox_->GetBorder()); }
void CheckBox::border::set(UrhoBackend::IntRect^ value) { checkbox_->SetBorder(value->ToIntRect()); }

UrhoBackend::IntRect^ CheckBox::imageBorder::get() { return gcnew UrhoBackend::IntRect(checkbox_->GetImageBorder()); }
void CheckBox::imageBorder::set(UrhoBackend::IntRect^ value) { checkbox_->SetImageBorder(value->ToIntRect()); }

UrhoBackend::IntVector2^ CheckBox::hoverOffset::get() { return gcnew UrhoBackend::IntVector2(checkbox_->GetHoverOffset()); }
void CheckBox::hoverOffset::set(UrhoBackend::IntVector2^ value) { checkbox_->SetHoverOffset(value->ToIntVector2()); }

BlendMode CheckBox::blendMode::get() { return (UrhoBackend::BlendMode)checkbox_->GetBlendMode(); }
void CheckBox::blendMode::set(BlendMode value) { checkbox_->SetBlendMode((Urho3D::BlendMode)value); }

bool CheckBox::tiled::get() { return checkbox_->IsTiled(); }
void CheckBox::tiled::set(bool value) { checkbox_->SetTiled(value); }

bool CheckBox::checked::get() { return checkbox_->IsChecked(); }
void CheckBox::checked::set(bool value) { checkbox_->SetChecked(value); }

UrhoBackend::IntVector2^ CheckBox::checkedOffset::get() { return gcnew UrhoBackend::IntVector2(checkbox_->GetCheckedOffset()); }
void CheckBox::checkedOffset::set(UrhoBackend::IntVector2^ value) { checkbox_->SetCheckedOffset(value->ToIntVector2()); }

void CheckBox::SetFullImageRect()  {  checkbox_->SetFullImageRect(); }

void CheckBox::SetHoverOffset(int A, int B)  {  checkbox_->SetHoverOffset(A, B); }

void CheckBox::SetCheckedOffset(int A, int B)  {  checkbox_->SetCheckedOffset(A, B); }

}