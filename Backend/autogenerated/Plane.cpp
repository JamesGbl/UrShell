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
#include "Plane.h"

#include <Urho3D/Math/Plane.h>

namespace UrhoBackend {

Plane::Plane(Urho3D::Plane fromUrho) { plane_ = new Urho3D::Plane(); *plane_ = fromUrho; }
Plane::Plane(System::IntPtr^ ptr) : Plane(*((Urho3D::Plane*)ptr->ToPointer())) { }
Plane::~Plane() { delete plane_; }
UrhoBackend::Matrix3x4^ Plane::reflectionMatrix::get() { return gcnew UrhoBackend::Matrix3x4(plane_->ReflectionMatrix()); }
void Plane::Define(UrhoBackend::Vector3^ A, UrhoBackend::Vector3^ B, UrhoBackend::Vector3^ C)  {  plane_->Define(A->ToVector3(), B->ToVector3(), C->ToVector3()); }

void Plane::Define(UrhoBackend::Vector3^ A, UrhoBackend::Vector3^ B)  {  plane_->Define(A->ToVector3(), B->ToVector3()); }

void Plane::Define(UrhoBackend::Vector4^ A)  {  plane_->Define(A->ToVector4()); }

void Plane::Transform(UrhoBackend::Matrix3^ A)  {  plane_->Transform(A->ToMatrix3()); }

void Plane::Transform(UrhoBackend::Matrix3x4^ A)  {  plane_->Transform(A->ToMatrix3x4()); }

void Plane::Transform(UrhoBackend::Matrix4^ A)  {  plane_->Transform(A->ToMatrix4()); }

UrhoBackend::Vector3^ Plane::Project(UrhoBackend::Vector3^ A)  { return  gcnew UrhoBackend::Vector3(plane_->Project(A->ToVector3())); }

float Plane::Distance(UrhoBackend::Vector3^ A)  { return  plane_->Distance(A->ToVector3()); }

UrhoBackend::Vector3^ Plane::Reflect(UrhoBackend::Vector3^ A)  { return  gcnew UrhoBackend::Vector3(plane_->Reflect(A->ToVector3())); }

Plane^ Plane::Transformed(UrhoBackend::Matrix3^ A)  { return  gcnew UrhoBackend::Plane(plane_->Transformed(A->ToMatrix3())); }

Plane^ Plane::Transformed(UrhoBackend::Matrix3x4^ A)  { return  gcnew UrhoBackend::Plane(plane_->Transformed(A->ToMatrix3x4())); }

Plane^ Plane::Transformed(UrhoBackend::Matrix4^ A)  { return  gcnew UrhoBackend::Plane(plane_->Transformed(A->ToMatrix4())); }

UrhoBackend::Vector4^ Plane::ToVector4()  { return  gcnew UrhoBackend::Vector4(plane_->ToVector4()); }

UrhoBackend::Vector3^ Plane::normal::get() { return gcnew UrhoBackend::Vector3(plane_->normal_); }
void Plane::normal::set(UrhoBackend::Vector3^ value) { plane_->normal_ = value->ToVector3(); }

UrhoBackend::Vector3^ Plane::absNormal::get() { return gcnew UrhoBackend::Vector3(plane_->absNormal_); }
void Plane::absNormal::set(UrhoBackend::Vector3^ value) { plane_->absNormal_ = value->ToVector3(); }

float Plane::d::get() { return plane_->d_; }
void Plane::d::set(float value) { plane_->d_ = value; }

}