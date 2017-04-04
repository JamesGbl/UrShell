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
    class Renderer;
    class XMLFile;
    class Viewport;
    class RenderPath;
    class Zone;
    class Material;
}



namespace UrhoBackend {

    ref class XMLFile;
    ref class Viewport;
    ref class RenderPath;
    ref class Zone;
    ref class Material;

    public ref class Renderer : public UrhoBackend::Object {
    public:
        Renderer(Urho3D::Renderer* comp);
        Renderer(System::IntPtr^ ptr);

// Properties
        property unsigned numViewports { unsigned get(); void set(unsigned); }
        property Viewport^ viewports[unsigned] { Viewport^ get(unsigned); void set(unsigned, Viewport^); }
        property RenderPath^ defaultRenderPath { RenderPath^ get(); void set(RenderPath^); }
        property Zone^ defaultZone { Zone^ get(); }
        property Material^ defaultMaterial { Material^ get(); }
        property Material^ defaultLightRamp { Material^ get(); }
        property Material^ defaultLightSpot { Material^ get(); }
        property bool hdrRendering { bool get(); void set(bool); }
        property bool specularLighting { bool get(); void set(bool); }
        property int textureAnisotropy { int get(); void set(int); }
        property TextureFilterMode textureFilterMode { TextureFilterMode get(); void set(TextureFilterMode); }
        property int textureQuality { int get(); void set(int); }
        property int materialQuality { int get(); void set(int); }
        property bool drawShadows { bool get(); void set(bool); }
        property int shadowMapSize { int get(); void set(int); }
        property int shadowQuality { int get(); void set(int); }
        property int maxShadowMaps { int get(); void set(int); }
        property bool reuseShadowMaps { bool get(); void set(bool); }
        property bool dynamicInstancing { bool get(); void set(bool); }
        property int minInstances { int get(); void set(int); }
        property int maxSortedInstances { int get(); void set(int); }
        property int maxOccluderTriangles { int get(); void set(int); }
        property int occlusionBufferSize { int get(); void set(int); }
        property float occluderSizeThreshold { float get(); void set(float); }
        property float mobileShadowBiasMul { float get(); void set(float); }
        property float mobileShadowBiasAdd { float get(); void set(float); }
        property unsigned numPrimitives { unsigned get(); }
        property unsigned numBatches { unsigned get(); }
        property unsigned numViews { unsigned get(); }
        property unsigned numGeometries[bool] { unsigned get(bool); }
        property unsigned numLights[bool] { unsigned get(bool); }
        property unsigned numShadowMaps[bool] { unsigned get(bool); }
        property unsigned numOccluders[bool] { unsigned get(bool); }
// Methods
        void DrawDebugGeometry(bool);
        void ReloadShaders();
        void SetDefaultRenderPath(XMLFile^);
// Fields

        Urho3D::Renderer* renderer_;
    };
}
