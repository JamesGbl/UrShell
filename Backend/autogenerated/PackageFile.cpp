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
#include "PackageFile.h"

#include <Urho3D/IO/PackageFile.h>

namespace UrhoBackend {

PackageFile::PackageFile(Urho3D::PackageFile* fromUrho) : Object(fromUrho) { packagefile_ = fromUrho; }
PackageFile::PackageFile(System::IntPtr^ ptr) : PackageFile((Urho3D::PackageFile*)ptr->ToPointer()) { }

System::String^ PackageFile::name::get() { return gcnew System::String(packagefile_->GetName().CString()); }
unsigned PackageFile::numFiles::get() { return packagefile_->GetNumFiles(); }
unsigned PackageFile::totalSize::get() { return packagefile_->GetTotalSize(); }
unsigned PackageFile::checksum::get() { return packagefile_->GetChecksum(); }
bool PackageFile::Open(System::String^ A, unsigned startOffset)  { return  packagefile_->Open(Urho3D::String(ToCString(A)), startOffset); }

bool PackageFile::Exists(System::String^ A)  { return  packagefile_->Exists(Urho3D::String(ToCString(A))); }

bool PackageFile::compressed()  { return  packagefile_->IsCompressed(); }

}
