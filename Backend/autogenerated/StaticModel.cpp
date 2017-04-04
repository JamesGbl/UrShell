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
#include "StaticModel.h"

#include <Urho3D/Graphics/StaticModel.h>
#include <Urho3D/Graphics/Model.h>
#include "Model.h"
#include <Urho3D/Graphics/Material.h>
#include "Material.h"

namespace UrhoBackend {

StaticModel::StaticModel(Urho3D::StaticModel* fromUrho) : Drawable(fromUrho) { staticmodel_ = fromUrho; }
StaticModel::StaticModel(System::IntPtr^ ptr) : StaticModel((Urho3D::StaticModel*)ptr->ToPointer()) { }

Model^ StaticModel::model::get() { return gcnew UrhoBackend::Model(staticmodel_->GetModel()); }
void StaticModel::model::set(Model^ value) { staticmodel_->SetModel(value->model_); }

Material^ StaticModel::materials::get(unsigned A) { return gcnew UrhoBackend::Material(staticmodel_->GetMaterial(A)); }

void StaticModel::materials::set(Material^ A) { staticmodel_->SetMaterial(A->material_); }

void StaticModel::materials::set(unsigned A, Material^ B) { staticmodel_->SetMaterial(A, B->material_); }

unsigned StaticModel::numGeometries::get() { return staticmodel_->GetNumGeometries(); }
unsigned StaticModel::occlusionLodLevel::get() { return staticmodel_->GetOcclusionLodLevel(); }
void StaticModel::occlusionLodLevel::set(unsigned value) { staticmodel_->SetOcclusionLodLevel(value); }

void StaticModel::ApplyMaterialList(System::String^ fileName)  {  staticmodel_->ApplyMaterialList(Urho3D::String(ToCString(fileName))); }

bool StaticModel::IsInside(UrhoBackend::Vector3^ A)  { return  staticmodel_->IsInside(A->ToVector3()); }

bool StaticModel::IsInsideLocal(UrhoBackend::Vector3^ A)  { return  staticmodel_->IsInsideLocal(A->ToVector3()); }

}