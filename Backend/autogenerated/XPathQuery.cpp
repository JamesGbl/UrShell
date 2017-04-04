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
#include "XPathQuery.h"

#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLElement.h>
#include "XPathResultSet.h"
#include <Urho3D/Resource/XMLElement.h>
#include "XMLElement.h"

namespace UrhoBackend {

XPathQuery::XPathQuery(Urho3D::XPathQuery fromUrho) { xpathquery_ = new Urho3D::XPathQuery(); *xpathquery_ = fromUrho; }
XPathQuery::XPathQuery(System::IntPtr^ ptr) : XPathQuery(*((Urho3D::XPathQuery*)ptr->ToPointer())) { }
XPathQuery::~XPathQuery() { delete xpathquery_; }
System::String^ XPathQuery::query::get() { return gcnew System::String(xpathquery_->GetQuery().CString()); }
void XPathQuery::query::set(System::String^ value) { xpathquery_->SetQuery(Urho3D::String(ToCString(value))); }

void XPathQuery::Bind()  {  xpathquery_->Bind(); }

bool XPathQuery::SetVariable(System::String^ A, bool B)  { return  xpathquery_->SetVariable(Urho3D::String(ToCString(A)), B); }

bool XPathQuery::SetVariable(System::String^ A, float B)  { return  xpathquery_->SetVariable(Urho3D::String(ToCString(A)), B); }

bool XPathQuery::SetVariable(System::String^ A, System::String^ B)  { return  xpathquery_->SetVariable(Urho3D::String(ToCString(A)), Urho3D::String(ToCString(B))); }

bool XPathQuery::SetVariable(System::String^ A, XPathResultSet^ B)  { return  xpathquery_->SetVariable(Urho3D::String(ToCString(A)), *B->xpathresultset_); }

bool XPathQuery::SetQuery(System::String^ A, System::String^ arg1, bool arg2)  { return  xpathquery_->SetQuery(Urho3D::String(ToCString(A)), Urho3D::String(ToCString(arg1)), arg2); }

void XPathQuery::Clear()  {  xpathquery_->Clear(); }

bool XPathQuery::EvaluateToBool(XMLElement^ A)  { return  xpathquery_->EvaluateToBool(*A->xmlelement_); }

float XPathQuery::EvaluateToFloat(XMLElement^ A)  { return  xpathquery_->EvaluateToFloat(*A->xmlelement_); }

System::String^ XPathQuery::EvaluateToString(XMLElement^ A)  { return  gcnew System::String(xpathquery_->EvaluateToString(*A->xmlelement_).CString()); }

XPathResultSet^ XPathQuery::Evaluate(XMLElement^ A)  { return  gcnew UrhoBackend::XPathResultSet(xpathquery_->Evaluate(*A->xmlelement_)); }

}