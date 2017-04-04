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
#include "Viewport.h"

#include <Urho3D/Graphics/Viewport.h>
#include <Urho3D/Resource/XMLFile.h>
#include "XMLFile.h"
#include <Urho3D/Math/Ray.h>
#include "Ray.h"
#include <Urho3D/Graphics/Camera.h>
#include "Camera.h"
#include <Urho3D/Graphics/RenderPath.h>
#include "RenderPath.h"

namespace UrhoBackend {

Viewport::Viewport(Urho3D::Viewport* fromUrho) : Object(fromUrho) { viewport_ = fromUrho; }
Viewport::Viewport(System::IntPtr^ ptr) : Viewport((Urho3D::Viewport*)ptr->ToPointer()) { }

Scene^ Viewport::scene::get() { return gcnew UrhoBackend::Scene(viewport_->GetScene()); }
void Viewport::scene::set(Scene^ value) { viewport_->SetScene(value->scene_); }

Camera^ Viewport::camera::get() { return gcnew UrhoBackend::Camera(viewport_->GetCamera()); }
void Viewport::camera::set(Camera^ value) { viewport_->SetCamera(value->camera_); }

RenderPath^ Viewport::renderPath::get() { return gcnew UrhoBackend::RenderPath(viewport_->GetRenderPath()); }
void Viewport::renderPath::set(RenderPath^ value) { viewport_->SetRenderPath(value->renderpath_); }

UrhoBackend::IntRect^ Viewport::rect::get() { return gcnew UrhoBackend::IntRect(viewport_->GetRect()); }
void Viewport::rect::set(UrhoBackend::IntRect^ value) { viewport_->SetRect(value->ToIntRect()); }

bool Viewport::drawDebug::get() { return viewport_->GetDrawDebug(); }
void Viewport::drawDebug::set(bool value) { viewport_->SetDrawDebug(value); }

void Viewport::SetRenderPath(XMLFile^ A)  {  viewport_->SetRenderPath(A->xmlfile_); }

Ray^ Viewport::GetScreenRay(int A, int B)  { return  gcnew UrhoBackend::Ray(viewport_->GetScreenRay(A, B)); }

UrhoBackend::Vector2^ Viewport::WorldToScreenPoint(UrhoBackend::Vector3^ A)  { return  gcnew UrhoBackend::Vector2(viewport_->WorldToScreenPoint(A->ToVector3())); }

UrhoBackend::Vector3^ Viewport::ScreenToWorldPoint(int A, int B, float C)  { return  gcnew UrhoBackend::Vector3(viewport_->ScreenToWorldPoint(A, B, C)); }

}