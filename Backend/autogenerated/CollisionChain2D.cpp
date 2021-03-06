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
#include "CollisionChain2D.h"

#include <Urho3D/Urho2D/CollisionChain2D.h>

namespace UrhoBackend {

CollisionChain2D::CollisionChain2D(Urho3D::CollisionChain2D* fromUrho) : CollisionShape2D(fromUrho) { collisionchain2d_ = fromUrho; }
CollisionChain2D::CollisionChain2D(System::IntPtr^ ptr) : CollisionChain2D((Urho3D::CollisionChain2D*)ptr->ToPointer()) { }

bool CollisionChain2D::loop::get() { return collisionchain2d_->GetLoop(); }
void CollisionChain2D::loop::set(bool value) { collisionchain2d_->SetLoop(value); }

unsigned CollisionChain2D::vertexCount::get() { return collisionchain2d_->GetVertexCount(); }
void CollisionChain2D::vertexCount::set(unsigned value) { collisionchain2d_->SetVertexCount(value); }

void CollisionChain2D::SetVertex(unsigned A, UrhoBackend::Vector2^ B)  {  collisionchain2d_->SetVertex(A, B->ToVector2()); }

UrhoBackend::Vector2^ CollisionChain2D::GetVertex(unsigned A)  { return  gcnew UrhoBackend::Vector2(collisionchain2d_->GetVertex(A)); }

}
