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
#include "Button.h"

#include <Urho3D/UI/Button.h>
#include <Urho3D/Graphics/Texture.h>
#include "Texture.h"
#include <Urho3D/Graphics/GraphicsDefs.h>

namespace UrhoBackend {

Button::Button(Urho3D::Button* fromUrho) : UIElement(fromUrho) { button_ = fromUrho; }
Button::Button(System::IntPtr^ ptr) : Button((Urho3D::Button*)ptr->ToPointer()) { }

Texture^ Button::texture::get() { return gcnew UrhoBackend::Texture(button_->GetTexture()); }
void Button::texture::set(Texture^ value) { button_->SetTexture(value->texture_); }

UrhoBackend::IntRect^ Button::imageRect::get() { return gcnew UrhoBackend::IntRect(button_->GetImageRect()); }
void Button::imageRect::set(UrhoBackend::IntRect^ value) { button_->SetImageRect(value->ToIntRect()); }

UrhoBackend::IntRect^ Button::border::get() { return gcnew UrhoBackend::IntRect(button_->GetBorder()); }
void Button::border::set(UrhoBackend::IntRect^ value) { button_->SetBorder(value->ToIntRect()); }

UrhoBackend::IntRect^ Button::imageBorder::get() { return gcnew UrhoBackend::IntRect(button_->GetImageBorder()); }
void Button::imageBorder::set(UrhoBackend::IntRect^ value) { button_->SetImageBorder(value->ToIntRect()); }

UrhoBackend::IntVector2^ Button::hoverOffset::get() { return gcnew UrhoBackend::IntVector2(button_->GetHoverOffset()); }
void Button::hoverOffset::set(UrhoBackend::IntVector2^ value) { button_->SetHoverOffset(value->ToIntVector2()); }

BlendMode Button::blendMode::get() { return (UrhoBackend::BlendMode)button_->GetBlendMode(); }
void Button::blendMode::set(BlendMode value) { button_->SetBlendMode((Urho3D::BlendMode)value); }

bool Button::tiled::get() { return button_->IsTiled(); }
void Button::tiled::set(bool value) { button_->SetTiled(value); }

UrhoBackend::IntVector2^ Button::pressedOffset::get() { return gcnew UrhoBackend::IntVector2(button_->GetPressedOffset()); }
void Button::pressedOffset::set(UrhoBackend::IntVector2^ value) { button_->SetPressedOffset(value->ToIntVector2()); }

UrhoBackend::IntVector2^ Button::pressedChildOffset::get() { return gcnew UrhoBackend::IntVector2(button_->GetPressedChildOffset()); }
void Button::pressedChildOffset::set(UrhoBackend::IntVector2^ value) { button_->SetPressedChildOffset(value->ToIntVector2()); }

float Button::repeatDelay::get() { return button_->GetRepeatDelay(); }
void Button::repeatDelay::set(float value) { button_->SetRepeatDelay(value); }

float Button::repeatRate::get() { return button_->GetRepeatRate(); }
void Button::repeatRate::set(float value) { button_->SetRepeatRate(value); }

bool Button::pressed::get() { return button_->IsPressed(); }
void Button::SetFullImageRect()  {  button_->SetFullImageRect(); }

void Button::SetHoverOffset(int A, int B)  {  button_->SetHoverOffset(A, B); }

void Button::SetPressedOffset(int A, int B)  {  button_->SetPressedOffset(A, B); }

void Button::SetPressedChildOffset(int A, int B)  {  button_->SetPressedChildOffset(A, B); }

void Button::SetRepeat(float A, float B)  {  button_->SetRepeat(A, B); }

}