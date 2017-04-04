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
#include "TileMapObject2D.h"

#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Urho2D/Sprite2D.h>
#include "Sprite2D.h"

namespace UrhoBackend {

TileMapObject2D::TileMapObject2D(Urho3D::TileMapObject2D* fromUrho) : RefCounted(fromUrho) { tilemapobject2d_ = fromUrho; }
TileMapObject2D::TileMapObject2D(System::IntPtr^ ptr) : TileMapObject2D((Urho3D::TileMapObject2D*)ptr->ToPointer()) { }

TileObjectType2D TileMapObject2D::objectType::get() { return (UrhoBackend::TileObjectType2D)tilemapobject2d_->GetObjectType(); }
System::String^ TileMapObject2D::name::get() { return gcnew System::String(tilemapobject2d_->GetName().CString()); }
System::String^ TileMapObject2D::type::get() { return gcnew System::String(tilemapobject2d_->GetType().CString()); }
UrhoBackend::Vector2^ TileMapObject2D::position::get() { return gcnew UrhoBackend::Vector2(tilemapobject2d_->GetPosition()); }
UrhoBackend::Vector2^ TileMapObject2D::size::get() { return gcnew UrhoBackend::Vector2(tilemapobject2d_->GetSize()); }
unsigned TileMapObject2D::numPoints::get() { return tilemapobject2d_->GetNumPoints(); }
int TileMapObject2D::tileGid::get() { return tilemapobject2d_->GetTileGid(); }
Sprite2D^ TileMapObject2D::tileSprite::get() { return gcnew UrhoBackend::Sprite2D(tilemapobject2d_->GetTileSprite()); }
UrhoBackend::Vector2^ TileMapObject2D::GetPoint(unsigned A)  { return  gcnew UrhoBackend::Vector2(tilemapobject2d_->GetPoint(A)); }

bool TileMapObject2D::HasProperty(System::String^ A)  { return  tilemapobject2d_->HasProperty(Urho3D::String(ToCString(A))); }

System::String^ TileMapObject2D::GetProperty(System::String^ A)  { return  gcnew System::String(tilemapobject2d_->GetProperty(Urho3D::String(ToCString(A))).CString()); }

}
