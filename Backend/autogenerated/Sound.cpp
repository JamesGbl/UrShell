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
#include "Sound.h"

#include <Urho3D/Audio/Sound.h>

namespace UrhoBackend {

Sound::Sound(Urho3D::Sound* fromUrho) : Resource(fromUrho) { sound_ = fromUrho; }
Sound::Sound(System::IntPtr^ ptr) : Sound((Urho3D::Sound*)ptr->ToPointer()) { }

float Sound::length::get() { return sound_->GetLength(); }
unsigned Sound::sampleSize::get() { return sound_->GetSampleSize(); }
float Sound::frequency::get() { return sound_->GetFrequency(); }
bool Sound::looped::get() { return sound_->IsLooped(); }
void Sound::looped::set(bool value) { sound_->SetLooped(value); }

bool Sound::sixteenBit::get() { return sound_->IsSixteenBit(); }
bool Sound::stereo::get() { return sound_->IsStereo(); }
bool Sound::compressed::get() { return sound_->IsCompressed(); }
}
