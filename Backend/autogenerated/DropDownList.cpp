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
#include "DropDownList.h"

#include <Urho3D/UI/DropDownList.h>
#include <Urho3D/UI/UIElement.h>
#include "UIElement.h"
#include <Urho3D/Graphics/Texture.h>
#include "Texture.h"
#include <Urho3D/UI/ListView.h>
#include "ListView.h"
#include <Urho3D/Graphics/GraphicsDefs.h>

namespace UrhoBackend {

DropDownList::DropDownList(Urho3D::DropDownList* fromUrho) : UIElement(fromUrho) { dropdownlist_ = fromUrho; }
DropDownList::DropDownList(System::IntPtr^ ptr) : DropDownList((Urho3D::DropDownList*)ptr->ToPointer()) { }

Texture^ DropDownList::texture::get() { return gcnew UrhoBackend::Texture(dropdownlist_->GetTexture()); }
void DropDownList::texture::set(Texture^ value) { dropdownlist_->SetTexture(value->texture_); }

UrhoBackend::IntRect^ DropDownList::imageRect::get() { return gcnew UrhoBackend::IntRect(dropdownlist_->GetImageRect()); }
void DropDownList::imageRect::set(UrhoBackend::IntRect^ value) { dropdownlist_->SetImageRect(value->ToIntRect()); }

UrhoBackend::IntRect^ DropDownList::border::get() { return gcnew UrhoBackend::IntRect(dropdownlist_->GetBorder()); }
void DropDownList::border::set(UrhoBackend::IntRect^ value) { dropdownlist_->SetBorder(value->ToIntRect()); }

UrhoBackend::IntRect^ DropDownList::imageBorder::get() { return gcnew UrhoBackend::IntRect(dropdownlist_->GetImageBorder()); }
void DropDownList::imageBorder::set(UrhoBackend::IntRect^ value) { dropdownlist_->SetImageBorder(value->ToIntRect()); }

UrhoBackend::IntVector2^ DropDownList::hoverOffset::get() { return gcnew UrhoBackend::IntVector2(dropdownlist_->GetHoverOffset()); }
void DropDownList::hoverOffset::set(UrhoBackend::IntVector2^ value) { dropdownlist_->SetHoverOffset(value->ToIntVector2()); }

BlendMode DropDownList::blendMode::get() { return (UrhoBackend::BlendMode)dropdownlist_->GetBlendMode(); }
void DropDownList::blendMode::set(BlendMode value) { dropdownlist_->SetBlendMode((Urho3D::BlendMode)value); }

bool DropDownList::tiled::get() { return dropdownlist_->IsTiled(); }
void DropDownList::tiled::set(bool value) { dropdownlist_->SetTiled(value); }

UrhoBackend::IntVector2^ DropDownList::pressedOffset::get() { return gcnew UrhoBackend::IntVector2(dropdownlist_->GetPressedOffset()); }
void DropDownList::pressedOffset::set(UrhoBackend::IntVector2^ value) { dropdownlist_->SetPressedOffset(value->ToIntVector2()); }

UrhoBackend::IntVector2^ DropDownList::pressedChildOffset::get() { return gcnew UrhoBackend::IntVector2(dropdownlist_->GetPressedChildOffset()); }
void DropDownList::pressedChildOffset::set(UrhoBackend::IntVector2^ value) { dropdownlist_->SetPressedChildOffset(value->ToIntVector2()); }

float DropDownList::repeatDelay::get() { return dropdownlist_->GetRepeatDelay(); }
void DropDownList::repeatDelay::set(float value) { dropdownlist_->SetRepeatDelay(value); }

float DropDownList::repeatRate::get() { return dropdownlist_->GetRepeatRate(); }
void DropDownList::repeatRate::set(float value) { dropdownlist_->SetRepeatRate(value); }

bool DropDownList::pressed::get() { return dropdownlist_->IsPressed(); }
bool DropDownList::showPopup::get() { return dropdownlist_->GetShowPopup(); }
void DropDownList::showPopup::set(bool value) { dropdownlist_->ShowPopup(value); }

unsigned DropDownList::selection::get() { return dropdownlist_->GetSelection(); }
void DropDownList::selection::set(unsigned value) { dropdownlist_->SetSelection(value); }

bool DropDownList::resizePopup::get() { return dropdownlist_->GetResizePopup(); }
void DropDownList::resizePopup::set(bool value) { dropdownlist_->SetResizePopup(value); }

int DropDownList::acceleratorKey::get() { return dropdownlist_->GetAcceleratorKey(); }
int DropDownList::acceleratorQualifiers::get() { return dropdownlist_->GetAcceleratorQualifiers(); }
unsigned DropDownList::numItems::get() { return dropdownlist_->GetNumItems(); }
UIElement^ DropDownList::items::get(unsigned A) { return gcnew UrhoBackend::UIElement(dropdownlist_->GetItem(A)); }

UIElement^ DropDownList::selectedItem::get() { return gcnew UrhoBackend::UIElement(dropdownlist_->GetSelectedItem()); }
ListView^ DropDownList::listView::get() { return gcnew UrhoBackend::ListView(dropdownlist_->GetListView()); }
UIElement^ DropDownList::placeholder::get() { return gcnew UrhoBackend::UIElement(dropdownlist_->GetPlaceholder()); }
void DropDownList::placeholder::set(System::String^ value) { dropdownlist_->SetPlaceholderText(Urho3D::String(ToCString(value))); }

System::String^ DropDownList::placeholderText::get() { return gcnew System::String(dropdownlist_->GetPlaceholderText().CString()); }
void DropDownList::SetFullImageRect()  {  dropdownlist_->SetFullImageRect(); }

void DropDownList::SetHoverOffset(int A, int B)  {  dropdownlist_->SetHoverOffset(A, B); }

void DropDownList::SetPressedOffset(int A, int B)  {  dropdownlist_->SetPressedOffset(A, B); }

void DropDownList::SetPressedChildOffset(int A, int B)  {  dropdownlist_->SetPressedChildOffset(A, B); }

void DropDownList::SetRepeat(float A, float B)  {  dropdownlist_->SetRepeat(A, B); }

void DropDownList::SetAccelerator(int A, int B)  {  dropdownlist_->SetAccelerator(A, B); }

void DropDownList::AddItem(UIElement^ A)  {  dropdownlist_->AddItem(A->uielement_); }

void DropDownList::InsertItem(unsigned A, UIElement^ B)  {  dropdownlist_->InsertItem(A, B->uielement_); }

void DropDownList::RemoveItem(UIElement^ A)  {  dropdownlist_->RemoveItem(A->uielement_); }

void DropDownList::RemoveItem(unsigned A)  {  dropdownlist_->RemoveItem(A); }

void DropDownList::RemoveAllItems()  {  dropdownlist_->RemoveAllItems(); }

UIElement^ DropDownList::getPopup()  { return  gcnew UrhoBackend::UIElement(dropdownlist_->GetPopup()); }

}
