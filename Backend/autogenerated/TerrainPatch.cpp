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
#include "TerrainPatch.h"

#include <Urho3D/Graphics/TerrainPatch.h>

namespace UrhoBackend {

TerrainPatch::TerrainPatch(Urho3D::TerrainPatch* fromUrho) : Drawable(fromUrho) { terrainpatch_ = fromUrho; }
TerrainPatch::TerrainPatch(System::IntPtr^ ptr) : TerrainPatch((Urho3D::TerrainPatch*)ptr->ToPointer()) { }

}
