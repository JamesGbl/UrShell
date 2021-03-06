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
    class File;
    class String;
    class IntRect;
    class IntVector2;
    class Vector2;
    class Vector3;
    class Vector4;
    class Quaternion;
    class Matrix3;
    class Matrix3x4;
    class Matrix4;
    class Color;
    class BoundingBox;
    class StringHash;
    class Variant;
    class VariantMap;
}



namespace UrhoBackend {

    ref class BoundingBox;

    public ref class File : public UrhoBackend::Object {
    public:
        File(Urho3D::File* comp);
        File(System::IntPtr^ ptr);

// Properties
        property FileMode mode { FileMode get(); }
        property bool open { bool get(); }
        property bool packaged { bool get(); }
        property System::String^ name { System::String^ get(); }
        property unsigned checksum { unsigned get(); }
        property unsigned position { unsigned get(); }
        property unsigned size { unsigned get(); }
        property bool eof { bool get(); }
// Methods
        bool Open(System::String^, FileMode);
        void Close();
        bool WriteInt(int);
        bool WriteShort(short);
        bool WriteByte(char);
        bool WriteUInt(unsigned);
        bool WriteUShort(unsigned short);
        bool WriteUByte(unsigned char);
        bool WriteBool(bool);
        bool WriteFloat(float);
        bool WriteIntRect(UrhoBackend::IntRect^);
        bool WriteIntVector2(UrhoBackend::IntVector2^);
        bool WriteVector2(UrhoBackend::Vector2^);
        bool WriteVector3(UrhoBackend::Vector3^);
        bool WritePackedVector3(UrhoBackend::Vector3^, float);
        bool WriteVector4(UrhoBackend::Vector4^);
        bool WriteQuaternion(UrhoBackend::Quaternion^);
        bool WritePackedQuaternion(UrhoBackend::Quaternion^);
        bool WriteMatrix3(UrhoBackend::Matrix3^);
        bool WriteMatrix3x4(UrhoBackend::Matrix3x4^);
        bool WriteMatrix4(UrhoBackend::Matrix4^);
        bool WriteColor(UrhoBackend::Color^);
        bool WriteBoundingBox(BoundingBox^);
        bool WriteString(System::String^);
        bool WriteFileID(System::String^);
        bool WriteStringHash(UrhoBackend::StringHash^);
        bool WriteVariant(Variant^);
        bool WriteVariantMap(UrhoBackend::VariantMap^);
        bool WriteVLE(unsigned);
        bool WriteNetID(unsigned);
        bool WriteLine(System::String^);
        int ReadInt();
        short ReadShort();
        signed char ReadByte();
        unsigned ReadUInt();
        unsigned short ReadUShort();
        unsigned char ReadUByte();
        bool ReadBool();
        float ReadFloat();
        UrhoBackend::IntRect^ ReadIntRect();
        UrhoBackend::IntVector2^ ReadIntVector2();
        UrhoBackend::Vector2^ ReadVector2();
        UrhoBackend::Vector3^ ReadVector3();
        UrhoBackend::Vector3^ ReadPackedVector3(float);
        UrhoBackend::Vector4^ ReadVector4();
        UrhoBackend::Quaternion^ ReadQuaternion();
        UrhoBackend::Quaternion^ ReadPackedQuaternion();
        UrhoBackend::Matrix3^ ReadMatrix3();
        UrhoBackend::Matrix3x4^ ReadMatrix3x4();
        UrhoBackend::Matrix4^ ReadMatrix4();
        UrhoBackend::Color^ ReadColor();
        BoundingBox^ ReadBoundingBox();
        System::String^ ReadString();
        System::String^ ReadFileID();
        UrhoBackend::StringHash^ ReadStringHash();
        Variant^ ReadVariant();
        UrhoBackend::VariantMap^ ReadVariantMap();
        unsigned ReadVLE();
        unsigned ReadNetID();
        System::String^ ReadLine();
        unsigned Seek(unsigned);
// Fields

        Urho3D::File* file_;
    };
}
