#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct Serialization.StructSerializerNumericTestStruct
struct FStructSerializerNumericTestStruct
{
public:
	int8                                         Int8;                                              // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_101D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int16                                        Int16;                                             // 0x2(0x2)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Int32;                                             // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	int64                                        Int64;                                             // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Uint8;                                             // 0x10(0x1)(Net, Parm, OutParm, Config)
	uint8                                        Pad_1023[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint16                                       Uint16;                                            // 0x12(0x2)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	uint32                                       Uint32;                                            // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint64                                       UInt64;                                            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Float;                                             // 0x20(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_1026[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Double;                                            // 0x28(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct FStructSerializerBooleanTestStruct
{
public:
	bool                                         BoolFalse;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         BoolTrue;                                          // 0x1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Bitfield0 : 1;                                     // Mask: 0x1, PropSize: 0x10x2(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Bitfield1 : 1;                                     // Mask: 0x2, PropSize: 0x10x2(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Bitfield2Set : 1;                                  // Mask: 0x4, PropSize: 0x10x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Bitfield3 : 1;                                     // Mask: 0x8, PropSize: 0x10x2(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Bitfield4Set : 1;                                  // Mask: 0x10, PropSize: 0x10x2(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Bitfield5Set : 1;                                  // Mask: 0x20, PropSize: 0x10x2(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Bitfield6 : 1;                                     // Mask: 0x40, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Bitfield7Set : 1;                                  // Mask: 0x80, PropSize: 0x10x2(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Serialization.StructSerializerObjectTestStruct
struct FStructSerializerObjectTestStruct
{
public:
	class UClass*                                RawClass;                                          // 0x0(0x8)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                WrappedClass;                                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                SubClass;                                          // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftClassPtr<class UMetaData>               SoftClass;                                         // 0x18(0x30)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UObject*                               RawObject;                                         // 0x48(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UObject*                               WrappedObject;                                     // 0x50(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UMetaData>              WeakObject;                                        // 0x58(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMetaData>              SoftObject;                                        // 0x60(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FSoftClassPath                        ClassPath;                                         // 0x90(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ObjectPath;                                        // 0xB0(0x20)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct FStructSerializerBuiltinTestStruct
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FName                                  Name;                                              // 0x10(0x8)(ConstParm, Net, OutParm)
	class FString                                String;                                            // 0x18(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FText                                  Text;                                              // 0x28(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FVector                               Vector;                                            // 0x40(0x18)(Edit, BlueprintVisible, Net, OutParm)
	uint8                                        Pad_1069[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Vector4;                                           // 0x60(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm)
	struct FRotator                              Rotator;                                           // 0x80(0x18)(Edit, ExportObject, Net, OutParm)
	uint8                                        Pad_106B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Quat;                                              // 0xA0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FColor                                Color;                                             // 0xC0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_106D[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x360 (0x360 - 0x0)
// ScriptStruct Serialization.StructSerializerLWCTypesTest
struct FStructSerializerLWCTypesTest
{
public:
	struct FVector                               Vector;                                            // 0x0(0x18)(Edit, BlueprintVisible, Net, OutParm)
	struct FVector2D                             Vector2D;                                          // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm)
	uint8                                        Pad_1072[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Vector4;                                           // 0x30(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm)
	struct FMatrix                               Matrix;                                            // 0x50(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm)
	struct FPlane                                Plane;                                             // 0xD0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
	struct FQuat                                 Quat;                                              // 0xF0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FRotator                              Rotator;                                           // 0x110(0x18)(Edit, ExportObject, Net, OutParm)
	uint8                                        Pad_1075[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x130(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FBox                                  Box;                                               // 0x190(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FBox2D                                Box2D;                                             // 0x1C8(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm)
	struct FBoxSphereBounds                      BoxSphereBounds;                                   // 0x1F0(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm)
	struct FOrientedBox                          OrientedBox;                                       // 0x228(0x78)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                        Float;                                             // 0x2A0(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_107B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Double;                                            // 0x2A8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector>                       VectorArray;                                       // 0x2B0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, struct FVector>          StrToVec;                                          // 0x2C0(0x50)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<struct FVector>                         VectorSet;                                         // 0x310(0x50)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct Serialization.OrientedBoxFloat
struct FOrientedBoxFloat
{
public:
	struct FVector3f                             Center;                                            // 0x0(0xC)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector3f                             AxisX;                                             // 0xC(0xC)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FVector3f                             AxisY;                                             // 0x18(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FVector3f                             AxisZ;                                             // 0x24(0xC)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	float                                        ExtentX;                                           // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ExtentY;                                           // 0x34(0x4)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        ExtentZ;                                           // 0x38(0x4)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Serialization.StructSerializerNonLWCTypesTest
struct FStructSerializerNonLWCTypesTest
{
public:
	struct FVector3f                             Vector;                                            // 0x0(0xC)(Edit, BlueprintVisible, Net, OutParm)
	struct FVector2f                             Vector2D;                                          // 0xC(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm)
	uint8                                        Pad_1084[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4f                             Vector4;                                           // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm)
	struct FMatrix44f                            Matrix;                                            // 0x30(0x40)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm)
	struct FPlane4f                              Plane;                                             // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
	struct FQuat4f                               Quat;                                              // 0x80(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FRotator3f                            Rotator;                                           // 0x90(0xC)(Edit, ExportObject, Net, OutParm)
	uint8                                        Pad_108A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform3f                          Transform;                                         // 0xA0(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FBox3f                                Box;                                               // 0xD0(0x1C)(Edit, ConstParm, ExportObject, OutParm)
	struct FBox2f                                Box2D;                                             // 0xEC(0x14)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm)
	struct FBoxSphereBounds3f                    BoxSphereBounds;                                   // 0x100(0x1C)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm)
	struct FOrientedBoxFloat                     OrientedBox;                                       // 0x11C(0x3C)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                        Float;                                             // 0x158(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	uint8                                        Pad_1090[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Double;                                            // 0x160(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector3f>                     VectorArray;                                       // 0x168(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, struct FVector3f>        StrToVec;                                          // 0x178(0x50)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<struct FVector3f>                       VectorSet;                                         // 0x1C8(0x50)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1094[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Serialization.StructSerializerByteArray
struct FStructSerializerByteArray
{
public:
	int32                                        Dummy1;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_109B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                ByteArray;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Dummy2;                                            // 0x18(0x4)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_109F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int8>                                 Int8Array;                                         // 0x20(0x10)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        Dummy3;                                            // 0x30(0x4)(Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10A1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Serialization.StructSerializerArrayTestStruct
struct FStructSerializerArrayTestStruct
{
public:
	TArray<int32>                                Int32Array;                                        // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient)
	TArray<uint8>                                ByteArray;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StaticSingleElement;                               // 0x20(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StaticInt32Array[0x3];                             // 0x24(0xC)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StaticFloatArray[0x3];                             // 0x30(0xC)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       VectorArray;                                       // 0x40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FStructSerializerBuiltinTestStruct> StructArray;                                       // 0x50(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerMapTestStruct
struct FStructSerializerMapTestStruct
{
public:
	TMap<int32, class FString>                   IntToStr;                                          // 0x0(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           StrToStr;                                          // 0x50(0x50)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, struct FVector>          StrToVec;                                          // 0xA0(0x50)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;                                       // 0xF0(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerSetTestStruct
struct FStructSerializerSetTestStruct
{
public:
	TSet<class FString>                          StrSet;                                            // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<int32>                                  IntSet;                                            // 0x50(0x50)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class FName>                            NameSet;                                           // 0xA0(0x50)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<struct FStructSerializerBuiltinTestStruct> StructSet;                                         // 0xF0(0x50)(Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x820 (0x820 - 0x0)
// ScriptStruct Serialization.StructSerializerTestStruct
struct FStructSerializerTestStruct
{
public:
	struct FStructSerializerNumericTestStruct    Numerics;                                          // 0x0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FStructSerializerBooleanTestStruct    Booleans;                                          // 0x30(0x3)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10B5[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FStructSerializerObjectTestStruct     Objects;                                           // 0x38(0xD0)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10B6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FStructSerializerBuiltinTestStruct    Builtins;                                          // 0x110(0xD0)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FStructSerializerArrayTestStruct      Arrays;                                            // 0x1E0(0x60)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FStructSerializerMapTestStruct        Maps;                                              // 0x240(0x140)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FStructSerializerSetTestStruct        Sets;                                              // 0x380(0x140)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FStructSerializerLWCTypesTest         LWCTypes;                                          // 0x4C0(0x360)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}


