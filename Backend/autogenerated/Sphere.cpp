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
#include "Sphere.h"
#include "Polyhedron.h"
#include "BoundingBox.h"
#include "Frustum.h"

#include <Urho3D/Math/Sphere.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Polyhedron.h>

#include <Urho3D/Math/MathDefs.h>

namespace UrhoBackend {

Sphere::Sphere(Urho3D::Sphere fromUrho) { sphere_ = new Urho3D::Sphere(); *sphere_ = fromUrho; }
Sphere::Sphere(System::IntPtr^ ptr) : Sphere(*((Urho3D::Sphere*)ptr->ToPointer())) { }
Sphere::~Sphere() { delete sphere_; }
Sphere^ Sphere::opAssign(Sphere^ A)  { sphere_->operator =(*A->sphere_); return this; }

bool Sphere::opEquals(Sphere^ A)  { return  *sphere_ == *A->sphere_; }

void Sphere::Define(UrhoBackend::Vector3^ A, float B)  {  sphere_->Define(A->ToVector3(), B); }

void Sphere::Define(BoundingBox^ A)  {  sphere_->Define(*A->boundingbox_); }

void Sphere::Define(Frustum^ A)  {  sphere_->Define(*A->frustum_); }

void Sphere::Define(Polyhedron^ A)  {  sphere_->Define(*A->polyhedron_); }

void Sphere::Define(Sphere^ A)  {  sphere_->Define(*A->sphere_); }

void Sphere::Merge(UrhoBackend::Vector3^ A)  {  sphere_->Merge(A->ToVector3()); }

void Sphere::Merge(BoundingBox^ A)  {  sphere_->Merge(*A->boundingbox_); }

void Sphere::Merge(Frustum^ A)  {  sphere_->Merge(*A->frustum_); }

void Sphere::Merge(Sphere^ A)  {  sphere_->Merge(*A->sphere_); }

void Sphere::Clear()  {  sphere_->Clear(); }

Intersection Sphere::IsInside(UrhoBackend::Vector3^ A)  { return  (UrhoBackend::Intersection)sphere_->IsInside(A->ToVector3()); }

Intersection Sphere::IsInside(Sphere^ A)  { return  (UrhoBackend::Intersection)sphere_->IsInside(*A->sphere_); }

Intersection Sphere::IsInside(BoundingBox^ A)  { return  (UrhoBackend::Intersection)sphere_->IsInside(*A->boundingbox_); }

float Sphere::Distance(UrhoBackend::Vector3^ A)  { return  sphere_->Distance(A->ToVector3()); }

UrhoBackend::Vector3^ Sphere::center::get() { return gcnew UrhoBackend::Vector3(sphere_->center_); }
void Sphere::center::set(UrhoBackend::Vector3^ value) { sphere_->center_ = value->ToVector3(); }

float Sphere::radius::get() { return sphere_->radius_; }
void Sphere::radius::set(float value) { sphere_->radius_ = value; }

bool Sphere::defined::get() { return sphere_->defined_; }
void Sphere::defined::set(bool value) { sphere_->defined_ = value; }

}
