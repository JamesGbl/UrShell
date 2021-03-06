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
#include "Octree.h"

#include <Urho3D/Graphics/Octree.h>
#include <Urho3D/Math/BoundingBox.h>
#include "BoundingBox.h"
#include <Urho3D/Graphics/Drawable.h>
#include "Drawable.h"

namespace UrhoBackend {

Octree::Octree(Urho3D::Octree* fromUrho) : Component(fromUrho) { octree_ = fromUrho; }
Octree::Octree(System::IntPtr^ ptr) : Octree((Urho3D::Octree*)ptr->ToPointer()) { }

BoundingBox^ Octree::worldBoundingBox::get() { return gcnew UrhoBackend::BoundingBox(octree_->GetWorldBoundingBox()); }
unsigned Octree::numLevels::get() { return octree_->GetNumLevels(); }
void Octree::SetSize(BoundingBox^ A, unsigned B)  {  octree_->SetSize(*A->boundingbox_, B); }

void Octree::AddManualDrawable(Drawable^ A)  {  octree_->AddManualDrawable(A->drawable_); }

void Octree::RemoveManualDrawable(Drawable^ A)  {  octree_->RemoveManualDrawable(A->drawable_); }

}
