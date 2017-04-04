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
#include "BorderImage.h"

#include <Urho3D/UI/BorderImage.h>
#include <Urho3D/Graphics/Texture.h>
#include "Texture.h"
#include <Urho3D/Graphics/GraphicsDefs.h>

namespace UrhoBackend {

BorderImage::BorderImage(Urho3D::BorderImage* fromUrho) : UIElement(fromUrho) { borderimage_ = fromUrho; }
BorderImage::BorderImage(System::IntPtr^ ptr) : BorderImage((Urho3D::BorderImage*)ptr->ToPointer()) { }

Texture^ BorderImage::texture::get() { return gcnew UrhoBackend::Texture(borderimage_->GetTexture()); }
void BorderImage::texture::set(Texture^ value) { borderimage_->SetTexture(value->texture_); }

UrhoBackend::IntRect^ BorderImage::imageRect::get() { return gcnew UrhoBackend::IntRect(borderimage_->GetImageRect()); }
void BorderImage::imageRect::set(UrhoBackend::IntRect^ value) { borderimage_->SetImageRect(value->ToIntRect()); }

UrhoBackend::IntRect^ BorderImage::border::get() { return gcnew UrhoBackend::IntRect(borderimage_->GetBorder()); }
void BorderImage::border::set(UrhoBackend::IntRect^ value) { borderimage_->SetBorder(value->ToIntRect()); }

UrhoBackend::IntRect^ BorderImage::imageBorder::get() { return gcnew UrhoBackend::IntRect(borderimage_->GetImageBorder()); }
void BorderImage::imageBorder::set(UrhoBackend::IntRect^ value) { borderimage_->SetImageBorder(value->ToIntRect()); }

UrhoBackend::IntVector2^ BorderImage::hoverOffset::get() { return gcnew UrhoBackend::IntVector2(borderimage_->GetHoverOffset()); }
void BorderImage::hoverOffset::set(UrhoBackend::IntVector2^ value) { borderimage_->SetHoverOffset(value->ToIntVector2()); }

BlendMode BorderImage::blendMode::get() { return (UrhoBackend::BlendMode)borderimage_->GetBlendMode(); }
void BorderImage::blendMode::set(BlendMode value) { borderimage_->SetBlendMode((Urho3D::BlendMode)value); }

bool BorderImage::tiled::get() { return borderimage_->IsTiled(); }
void BorderImage::tiled::set(bool value) { borderimage_->SetTiled(value); }

void BorderImage::SetFullImageRect()  {  borderimage_->SetFullImageRect(); }

void BorderImage::SetHoverOffset(int A, int B)  {  borderimage_->SetHoverOffset(A, B); }

}