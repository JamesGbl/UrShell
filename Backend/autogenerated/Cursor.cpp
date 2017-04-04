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
#include "Cursor.h"

#include <Urho3D/UI/Cursor.h>
#include <Urho3D/Graphics/Texture.h>
#include "Texture.h"
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/Graphics/GraphicsDefs.h>

namespace UrhoBackend {

Cursor::Cursor(Urho3D::Cursor* fromUrho) : UIElement(fromUrho) { cursor_ = fromUrho; }
Cursor::Cursor(System::IntPtr^ ptr) : Cursor((Urho3D::Cursor*)ptr->ToPointer()) { }

Texture^ Cursor::texture::get() { return gcnew UrhoBackend::Texture(cursor_->GetTexture()); }
void Cursor::texture::set(Texture^ value) { cursor_->SetTexture(value->texture_); }

UrhoBackend::IntRect^ Cursor::imageRect::get() { return gcnew UrhoBackend::IntRect(cursor_->GetImageRect()); }
void Cursor::imageRect::set(UrhoBackend::IntRect^ value) { cursor_->SetImageRect(value->ToIntRect()); }

UrhoBackend::IntRect^ Cursor::border::get() { return gcnew UrhoBackend::IntRect(cursor_->GetBorder()); }
void Cursor::border::set(UrhoBackend::IntRect^ value) { cursor_->SetBorder(value->ToIntRect()); }

UrhoBackend::IntRect^ Cursor::imageBorder::get() { return gcnew UrhoBackend::IntRect(cursor_->GetImageBorder()); }
void Cursor::imageBorder::set(UrhoBackend::IntRect^ value) { cursor_->SetImageBorder(value->ToIntRect()); }

UrhoBackend::IntVector2^ Cursor::hoverOffset::get() { return gcnew UrhoBackend::IntVector2(cursor_->GetHoverOffset()); }
void Cursor::hoverOffset::set(UrhoBackend::IntVector2^ value) { cursor_->SetHoverOffset(value->ToIntVector2()); }

BlendMode Cursor::blendMode::get() { return (UrhoBackend::BlendMode)cursor_->GetBlendMode(); }
void Cursor::blendMode::set(BlendMode value) { cursor_->SetBlendMode((Urho3D::BlendMode)value); }

bool Cursor::tiled::get() { return cursor_->IsTiled(); }
void Cursor::tiled::set(bool value) { cursor_->SetTiled(value); }

System::String^ Cursor::shape::get() { return gcnew System::String(cursor_->GetShape().CString()); }
void Cursor::shape::set(System::String^ value) { cursor_->SetShape(Urho3D::String(ToCString(value))); }

bool Cursor::useSystemShapes::get() { return cursor_->GetUseSystemShapes(); }
void Cursor::useSystemShapes::set(bool value) { cursor_->SetUseSystemShapes(value); }

void Cursor::SetFullImageRect()  {  cursor_->SetFullImageRect(); }

void Cursor::SetHoverOffset(int A, int B)  {  cursor_->SetHoverOffset(A, B); }

void Cursor::DefineShape(System::String^ A, Texture^ B, UrhoBackend::IntRect^ C, UrhoBackend::IntVector2^ D)  {  cursor_->DefineShape(Urho3D::String(ToCString(A)), B->texture_, C->ToIntRect(), D->ToIntVector2()); }

void Cursor::DefineShape(CursorShape A, Texture^ B, UrhoBackend::IntRect^ C, UrhoBackend::IntVector2^ D)  {  cursor_->DefineShape((Urho3D::CursorShape)A, B->texture_, C->ToIntRect(), D->ToIntVector2()); }

void Cursor::SetShape(System::String^ A)  {  cursor_->SetShape(Urho3D::String(ToCString(A))); }

void Cursor::SetShape(CursorShape A)  {  cursor_->SetShape((Urho3D::CursorShape)A); }

}
