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
#include "UIElement.h"

#include <Urho3D/UI/UIElement.h>
#include <Urho3D/Resource/XMLElement.h>
#include "XMLElement.h"
#include <Urho3D/Resource/XMLFile.h>
#include "XMLFile.h"
#include <Urho3D/UI/UIElement.h>
#include <Urho3D/UI/UIElement.h>
#include <Urho3D/UI/UIElement.h>
#include <Urho3D/UI/UIElement.h>
#include <Urho3D/UI/UIElement.h>
#include <Urho3D/UI/UIElement.h>

namespace UrhoBackend {

UIElement::UIElement(Urho3D::UIElement* fromUrho) : Animatable(fromUrho) { uielement_ = fromUrho; }
UIElement::UIElement(System::IntPtr^ ptr) : UIElement((Urho3D::UIElement*)ptr->ToPointer()) { }

System::String^ UIElement::style::get() { return gcnew System::String(uielement_->GetAppliedStyle().CString()); }
System::String^ UIElement::name::get() { return gcnew System::String(uielement_->GetName().CString()); }
void UIElement::name::set(System::String^ value) { uielement_->SetName(Urho3D::String(ToCString(value))); }

UrhoBackend::IntVector2^ UIElement::position::get() { return gcnew UrhoBackend::IntVector2(uielement_->GetPosition()); }
void UIElement::position::set(UrhoBackend::IntVector2^ value) { uielement_->SetPosition(value->ToIntVector2()); }

UrhoBackend::IntVector2^ UIElement::size::get() { return gcnew UrhoBackend::IntVector2(uielement_->GetSize()); }
void UIElement::size::set(UrhoBackend::IntVector2^ value) { uielement_->SetSize(value->ToIntVector2()); }

int UIElement::width::get() { return uielement_->GetWidth(); }
void UIElement::width::set(int value) { uielement_->SetWidth(value); }

int UIElement::height::get() { return uielement_->GetHeight(); }
void UIElement::height::set(int value) { uielement_->SetHeight(value); }

UrhoBackend::IntVector2^ UIElement::minSize::get() { return gcnew UrhoBackend::IntVector2(uielement_->GetMinSize()); }
void UIElement::minSize::set(UrhoBackend::IntVector2^ value) { uielement_->SetMinSize(value->ToIntVector2()); }

int UIElement::minWidth::get() { return uielement_->GetMinWidth(); }
void UIElement::minWidth::set(int value) { uielement_->SetMinWidth(value); }

int UIElement::minHeight::get() { return uielement_->GetMinHeight(); }
void UIElement::minHeight::set(int value) { uielement_->SetMinHeight(value); }

UrhoBackend::IntVector2^ UIElement::maxSize::get() { return gcnew UrhoBackend::IntVector2(uielement_->GetMaxSize()); }
void UIElement::maxSize::set(UrhoBackend::IntVector2^ value) { uielement_->SetMaxSize(value->ToIntVector2()); }

int UIElement::maxWidth::get() { return uielement_->GetMaxWidth(); }
void UIElement::maxWidth::set(int value) { uielement_->SetMaxWidth(value); }

int UIElement::maxHeight::get() { return uielement_->GetMaxHeight(); }
void UIElement::maxHeight::set(int value) { uielement_->SetMaxHeight(value); }

bool UIElement::fixedSize::get() { return uielement_->IsFixedSize(); }
bool UIElement::fixedWidth::get() { return uielement_->IsFixedWidth(); }
bool UIElement::fixedHeight::get() { return uielement_->IsFixedHeight(); }
HorizontalAlignment UIElement::horizontalAlignment::get() { return (UrhoBackend::HorizontalAlignment)uielement_->GetHorizontalAlignment(); }
void UIElement::horizontalAlignment::set(HorizontalAlignment value) { uielement_->SetHorizontalAlignment((Urho3D::HorizontalAlignment)value); }

VerticalAlignment UIElement::verticalAlignment::get() { return (UrhoBackend::VerticalAlignment)uielement_->GetVerticalAlignment(); }
void UIElement::verticalAlignment::set(VerticalAlignment value) { uielement_->SetVerticalAlignment((Urho3D::VerticalAlignment)value); }

UrhoBackend::IntRect^ UIElement::clipBorder::get() { return gcnew UrhoBackend::IntRect(uielement_->GetClipBorder()); }
void UIElement::clipBorder::set(UrhoBackend::IntRect^ value) { uielement_->SetClipBorder(value->ToIntRect()); }

UrhoBackend::Color^ UIElement::colors::get(Corner A) { return gcnew Color(uielement_->GetColor((Urho3D::Corner)A)); }

void UIElement::colors::set(UrhoBackend::Color^ A) { uielement_->SetColor(A->ToColor()); }

void UIElement::colors::set(Corner A, UrhoBackend::Color^ B) { uielement_->SetColor((Urho3D::Corner)A, B->ToColor()); }

int UIElement::priority::get() { return uielement_->GetPriority(); }
void UIElement::priority::set(int value) { uielement_->SetPriority(value); }

float UIElement::opacity::get() { return uielement_->GetOpacity(); }
void UIElement::opacity::set(float value) { uielement_->SetOpacity(value); }

bool UIElement::bringToFront::get() { return uielement_->SetBringToFront(); }
void UIElement::bringToFront::set(bool value) { uielement_->SetBringToFront(value); }

bool UIElement::bringToBack::get() { return uielement_->GetBringToBack(); }
void UIElement::bringToBack::set(bool value) { uielement_->SetBringToBack(value); }

bool UIElement::clipChildren::get() { return uielement_->GetClipChildren(); }
void UIElement::clipChildren::set(bool value) { uielement_->SetClipChildren(value); }

bool UIElement::sortChildren::get() { return uielement_->GetSortChildren(); }
void UIElement::sortChildren::set(bool value) { uielement_->SetSortChildren(value); }

bool UIElement::useDerivedOpacity::get() { return uielement_->GetUseDerivedOpacity(); }
void UIElement::useDerivedOpacity::set(bool value) { uielement_->SetUseDerivedOpacity(value); }

bool UIElement::enabled::get() { return uielement_->IsEnabled(); }
void UIElement::enabled::set(bool value) { uielement_->SetEnabled(value); }

bool UIElement::enabledSelf::get() { return uielement_->IsEnabledSelf(); }
bool UIElement::editable::get() { return uielement_->IsEditable(); }
void UIElement::editable::set(bool value) { uielement_->SetEditable(value); }

bool UIElement::focus::get() { return uielement_->HasFocus(); }
void UIElement::focus::set(bool value) { uielement_->SetFocus(value); }

bool UIElement::selected::get() { return uielement_->IsSelected(); }
void UIElement::selected::set(bool value) { uielement_->SetSelected(value); }

bool UIElement::visible::get() { return uielement_->IsVisible(); }
void UIElement::visible::set(bool value) { uielement_->SetVisible(value); }

bool UIElement::hovering::get() { return uielement_->IsHovering(); }
bool UIElement::internal::get() { return uielement_->IsInternal(); }
void UIElement::internal::set(bool value) { uielement_->SetInternal(value); }

bool UIElement::colorGradient::get() { return uielement_->HasColorGradient(); }
FocusMode UIElement::focusMode::get() { return (UrhoBackend::FocusMode)uielement_->GetFocusMode(); }
void UIElement::focusMode::set(FocusMode value) { uielement_->SetFocusMode((Urho3D::FocusMode)value); }

unsigned UIElement::dragDropMode::get() { return uielement_->GetDragDropMode(); }
void UIElement::dragDropMode::set(unsigned value) { uielement_->SetDragDropMode(value); }

TraversalMode UIElement::traversalMode::get() { return (UrhoBackend::TraversalMode)uielement_->GetTraversalMode(); }
void UIElement::traversalMode::set(TraversalMode value) { uielement_->SetTraversalMode((Urho3D::TraversalMode)value); }

void UIElement::defaultStyle::set(XMLFile^ value) { uielement_->SetDefaultStyle(value->xmlfile_); }

LayoutMode UIElement::layoutMode::get() { return (UrhoBackend::LayoutMode)uielement_->GetLayoutMode(); }
void UIElement::layoutMode::set(LayoutMode value) { uielement_->SetLayoutMode((Urho3D::LayoutMode)value); }

int UIElement::layoutSpacing::get() { return uielement_->GetLayoutSpacing(); }
void UIElement::layoutSpacing::set(int value) { uielement_->SetLayoutSpacing(value); }

UrhoBackend::IntRect^ UIElement::layoutBorder::get() { return gcnew UrhoBackend::IntRect(uielement_->GetLayoutBorder()); }
void UIElement::layoutBorder::set(UrhoBackend::IntRect^ value) { uielement_->SetLayoutBorder(value->ToIntRect()); }

UrhoBackend::Vector2^ UIElement::layoutFlexScale::get() { return gcnew UrhoBackend::Vector2(uielement_->GetLayoutFlexScale()); }
void UIElement::layoutFlexScale::set(UrhoBackend::Vector2^ value) { uielement_->SetLayoutFlexScale(value->ToVector2()); }

int UIElement::indent::get() { return uielement_->GetIndent(); }
void UIElement::indent::set(int value) { uielement_->SetIndent(value); }

int UIElement::indentSpacing::get() { return uielement_->GetIndentSpacing(); }
void UIElement::indentSpacing::set(int value) { uielement_->SetIndentSpacing(value); }

int UIElement::indentWidth::get() { return uielement_->GetIndentWidth(); }
UrhoBackend::IntVector2^ UIElement::childOffset::get() { return gcnew UrhoBackend::IntVector2(uielement_->GetChildOffset()); }
bool UIElement::elementEventSender::get() { return uielement_->IsElementEventSender(); }
void UIElement::elementEventSender::set(bool value) { uielement_->SetElementEventSender(value); }

UIElement^ UIElement::children::get(unsigned A) { return gcnew UrhoBackend::UIElement(uielement_->GetChild(A)); }

UIElement^ UIElement::parent::get() { return gcnew UrhoBackend::UIElement(uielement_->GetParent()); }
UIElement^ UIElement::root::get() { return gcnew UrhoBackend::UIElement(uielement_->GetRoot()); }
int UIElement::dragButtonCount::get() { return uielement_->GetDragButtonCount(); }
unsigned UIElement::dragButtonCombo::get() { return uielement_->GetDragButtonCombo(); }
UrhoBackend::IntVector2^ UIElement::screenPosition::get() { return gcnew UrhoBackend::IntVector2(uielement_->GetScreenPosition()); }
UrhoBackend::IntRect^ UIElement::combinedScreenRect::get() { return gcnew UrhoBackend::IntRect(uielement_->GetCombinedScreenRect()); }
float UIElement::derivedOpacity::get() { return uielement_->GetDerivedOpacity(); }
bool UIElement::LoadChildXML(XMLElement^ A, XMLFile^ arg1, bool arg2)  { return  uielement_->LoadChildXML(*A->xmlelement_, arg1->xmlfile_, arg2); }

bool UIElement::SetStyle(XMLElement^ A)  { return  uielement_->SetStyle(*A->xmlelement_); }

bool UIElement::SetStyle(System::String^ A, XMLFile^ arg1)  { return  uielement_->SetStyle(Urho3D::String(ToCString(A)), arg1->xmlfile_); }

bool UIElement::SetStyleAuto(XMLFile^ arg0)  { return  uielement_->SetStyleAuto(arg0->xmlfile_); }

void UIElement::SetPosition(int A, int B)  {  uielement_->SetPosition(A, B); }

void UIElement::SetSize(int A, int B)  {  uielement_->SetSize(A, B); }

void UIElement::SetMinSize(int A, int B)  {  uielement_->SetMinSize(A, B); }

void UIElement::SetMaxSize(int A, int B)  {  uielement_->SetMaxSize(A, B); }

void UIElement::SetFixedSize(int A, int B)  {  uielement_->SetFixedSize(A, B); }

void UIElement::SetFixedWidth(int A)  {  uielement_->SetFixedWidth(A); }

void UIElement::SetFixedHeight(int A)  {  uielement_->SetFixedHeight(A); }

void UIElement::SetAlignment(HorizontalAlignment A, VerticalAlignment B)  {  uielement_->SetAlignment((Urho3D::HorizontalAlignment)A, (Urho3D::VerticalAlignment)B); }

void UIElement::SetLayout(LayoutMode A, int spacing, UrhoBackend::IntRect^ border)  {  uielement_->SetLayout((Urho3D::LayoutMode)A, spacing, border->ToIntRect()); }

void UIElement::UpdateLayout()  {  uielement_->UpdateLayout(); }

void UIElement::DisableLayoutUpdate()  {  uielement_->DisableLayoutUpdate(); }

void UIElement::EnableLayoutUpdate()  {  uielement_->EnableLayoutUpdate(); }

void UIElement::BringToFront()  {  uielement_->BringToFront(); }

void UIElement::AddChild(UIElement^ A)  {  uielement_->AddChild(A->uielement_); }

void UIElement::InsertChild(unsigned A, UIElement^ B)  {  uielement_->InsertChild(A, B->uielement_); }

void UIElement::RemoveAllChildren()  {  uielement_->RemoveAllChildren(); }

void UIElement::Remove()  {  uielement_->Remove(); }

unsigned UIElement::FindChild(UIElement^ A)  { return  uielement_->FindChild(A->uielement_); }

void UIElement::SetParent(UIElement^ A, unsigned index)  {  uielement_->SetParent(A->uielement_, index); }

UIElement^ UIElement::GetChild(System::String^ A, bool recursive)  { return  gcnew UrhoBackend::UIElement(uielement_->GetChild(Urho3D::String(ToCString(A)), recursive)); }

UIElement^ UIElement::GetChild(UrhoBackend::StringHash^ A, Variant^ value, bool recursive)  { return  gcnew UrhoBackend::UIElement(uielement_->GetChild(A->ToStringHash(), *value->variant_, recursive)); }

UIElement^ UIElement::GetElementEventSender()  { return  gcnew UrhoBackend::UIElement(uielement_->GetElementEventSender()); }

Variant^ UIElement::GetVar(UrhoBackend::StringHash^ A)  { return  gcnew UrhoBackend::Variant(uielement_->GetVar(A->ToStringHash())); }

UrhoBackend::IntVector2^ UIElement::ScreenToElement(UrhoBackend::IntVector2^ A)  { return  gcnew UrhoBackend::IntVector2(uielement_->ScreenToElement(A->ToIntVector2())); }

UrhoBackend::IntVector2^ UIElement::ElementToScreen(UrhoBackend::IntVector2^ A)  { return  gcnew UrhoBackend::IntVector2(uielement_->ElementToScreen(A->ToIntVector2())); }

bool UIElement::IsInside(UrhoBackend::IntVector2^ A, bool B)  { return  uielement_->IsInside(A->ToIntVector2(), B); }

bool UIElement::IsInsideCombined(UrhoBackend::IntVector2^ A, bool B)  { return  uielement_->IsInsideCombined(A->ToIntVector2(), B); }

void UIElement::SetDeepEnabled(bool A)  {  uielement_->SetDeepEnabled(A); }

void UIElement::ResetDeepEnabled()  {  uielement_->ResetDeepEnabled(); }

void UIElement::SetEnabledRecursive(bool A)  {  uielement_->SetEnabledRecursive(A); }

unsigned UIElement::GetNumChildren(bool A)  { return  uielement_->GetNumChildren(A); }

}
