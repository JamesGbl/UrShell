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
#include "BiasParameters.h"

#include <Urho3D/Graphics/Light.h>

namespace UrhoBackend {

BiasParameters::BiasParameters(Urho3D::BiasParameters fromUrho) { biasparameters_ = new Urho3D::BiasParameters(); *biasparameters_ = fromUrho; }
BiasParameters::BiasParameters(System::IntPtr^ ptr) : BiasParameters(*((Urho3D::BiasParameters*)ptr->ToPointer())) { }
BiasParameters::~BiasParameters() { delete biasparameters_; }
float BiasParameters::constantBias::get() { return biasparameters_->constantBias_; }
void BiasParameters::constantBias::set(float value) { biasparameters_->constantBias_ = value; }

float BiasParameters::slopeScaledBias::get() { return biasparameters_->slopeScaledBias_; }
void BiasParameters::slopeScaledBias::set(float value) { biasparameters_->slopeScaledBias_ = value; }

}