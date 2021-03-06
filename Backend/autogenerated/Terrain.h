//THIS FILE IS AUTOGENERATED - DO NOT MODIFY
#pragma once

#include <Urho3D/Urho3D.h>
#include <Urho3D/Scene/Component.h>
#include "../MathBind.h"
#include "../ResourceRefWrapper.h"
#include "../SceneWrappers.h"
#include "../Variant.h"
#include "../StringHash.h"
#include "../Attributes.h"

#include "Enumerations.h"

namespace Urho3D {
    class Terrain;
    class Vector3;
    class TerrainPatch;
    class IntVector2;
    class Material;
    class Image;
}



namespace UrhoBackend {

    ref class TerrainPatch;
    ref class Material;
    ref class Image;

    public ref class Terrain : public UrhoBackend::Component {
    public:
        Terrain(Urho3D::Terrain* comp);
        Terrain(System::IntPtr^ ptr);

// Properties
        property Material^ material { Material^ get(); void set(Material^); }
        property bool smoothing { bool get(); void set(bool); }
        property Image^ heightMap { Image^ get(); void set(Image^); }
        property int patchSize { int get(); void set(int); }
        property UrhoBackend::Vector3^ spacing { UrhoBackend::Vector3^ get(); void set(UrhoBackend::Vector3^); }
        property UrhoBackend::IntVector2^ numVertices { UrhoBackend::IntVector2^ get(); }
        property UrhoBackend::IntVector2^ numPatches { UrhoBackend::IntVector2^ get(); }
        property TerrainPatch^ patches[unsigned] { TerrainPatch^ get(unsigned); }
        property bool castShadows { bool get(); void set(bool); }
        property bool occluder { bool get(); void set(bool); }
        property bool occludee { bool get(); void set(bool); }
        property float drawDistance { float get(); void set(float); }
        property float shadowDistance { float get(); void set(float); }
        property float lodBias { float get(); void set(float); }
        property unsigned viewMask { unsigned get(); void set(unsigned); }
        property unsigned lightMask { unsigned get(); void set(unsigned); }
        property unsigned shadowMask { unsigned get(); void set(unsigned); }
        property unsigned zoneMask { unsigned get(); void set(unsigned); }
        property unsigned maxLights { unsigned get(); void set(unsigned); }
// Methods
        void ApplyHeightMap();
        float GetHeight(UrhoBackend::Vector3^);
        UrhoBackend::Vector3^ GetNormal(UrhoBackend::Vector3^);
        TerrainPatch^ GetPatch(int, int);
        UrhoBackend::IntVector2^ WorldToHeightMap(UrhoBackend::Vector3^);
// Fields

        Urho3D::Terrain* terrain_;
    };
}
