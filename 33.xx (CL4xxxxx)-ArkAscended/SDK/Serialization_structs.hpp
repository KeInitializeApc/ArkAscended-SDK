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
	int8                                         Int8;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2897[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int16                                        Int16;                                             // 0x2(0x2)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Int32;                                             // 0x4(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config)
	int64                                        Int64;                                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Uint8;                                             // 0x10(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config)
	uint8                                        Pad_289C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint16                                       Uint16;                                            // 0x12(0x2)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       Uint32;                                            // 0x14(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint64                                       UInt64;                                            // 0x18(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Float;                                             // 0x20(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config)
	uint8                                        Pad_289D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Double;                                            // 0x28(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct FStructSerializerBooleanTestStruct
{
public:
	bool                                         BoolFalse;                                         // 0x0(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         BoolTrue;                                          // 0x1(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Bitfield0 : 1;                                     // Mask: 0x1, PropSize: 0x10x2(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Bitfield1 : 1;                                     // Mask: 0x2, PropSize: 0x10x2(0x1)(Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Bitfield2Set : 1;                                  // Mask: 0x4, PropSize: 0x10x2(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Bitfield3 : 1;                                     // Mask: 0x8, PropSize: 0x10x2(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Bitfield4Set : 1;                                  // Mask: 0x10, PropSize: 0x10x2(0x1)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Bitfield5Set : 1;                                  // Mask: 0x20, PropSize: 0x10x2(0x1)(Edit, BlueprintVisible, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Bitfield6 : 1;                                     // Mask: 0x40, PropSize: 0x10x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Bitfield7Set : 1;                                  // Mask: 0x80, PropSize: 0x10x2(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Serialization.StructSerializerObjectTestStruct
struct FStructSerializerObjectTestStruct
{
public:
	class UClass*                                RawClass;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UClass*                                WrappedClass;                                      // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UClass*                                SubClass;                                          // 0x10(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TSoftClassPtr<class UMetaData>               SoftClass;                                         // 0x18(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UObject*                               RawObject;                                         // 0x48(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UObject*                               WrappedObject;                                     // 0x50(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UMetaData>              WeakObject;                                        // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMetaData>              SoftObject;                                        // 0x60(0x30)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FSoftClassPath                        ClassPath;                                         // 0x90(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       ObjectPath;                                        // 0xB0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct FStructSerializerBuiltinTestStruct
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	class FName                                  Name;                                              // 0x10(0x8)(ConstParm, Net, OutParm)
	class FString                                String;                                            // 0x18(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Text;                                              // 0x28(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	struct FVector                               Vector;                                            // 0x40(0x18)(Edit, BlueprintVisible, Net, OutParm)
	uint8                                        Pad_28AD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Vector4;                                           // 0x60(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm)
	struct FRotator                              Rotator;                                           // 0x80(0x18)(Edit, ExportObject, Net, OutParm)
	uint8                                        Pad_28B0[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Quat;                                              // 0xA0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FColor                                Color;                                             // 0xC0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_28B1[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x360 (0x360 - 0x0)
// ScriptStruct Serialization.StructSerializerLWCTypesTest
struct FStructSerializerLWCTypesTest
{
public:
	struct FVector                               Vector;                                            // 0x0(0x18)(Edit, BlueprintVisible, Net, OutParm)
	struct FVector2D                             Vector2D;                                          // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm)
	uint8                                        Pad_28B6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Vector4;                                           // 0x30(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm)
	struct FMatrix                               Matrix;                                            // 0x50(0x80)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm)
	struct FPlane                                Plane;                                             // 0xD0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
	struct FQuat                                 Quat;                                              // 0xF0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FRotator                              Rotator;                                           // 0x110(0x18)(Edit, ExportObject, Net, OutParm)
	uint8                                        Pad_28B7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x130(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FBox                                  Box;                                               // 0x190(0x38)(Edit, ConstParm, ExportObject, OutParm)
	struct FBox2D                                Box2D;                                             // 0x1C8(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm)
	struct FBoxSphereBounds                      BoxSphereBounds;                                   // 0x1F0(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm)
	struct FOrientedBox                          OrientedBox;                                       // 0x228(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	float                                        Float;                                             // 0x2A0(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config)
	uint8                                        Pad_28B9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Double;                                            // 0x2A8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector>                       VectorArray;                                       // 0x2B0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, struct FVector>          StrToVec;                                          // 0x2C0(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TSet<struct FVector>                         VectorSet;                                         // 0x310(0x50)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct Serialization.OrientedBoxFloat
struct FOrientedBoxFloat
{
public:
	struct FVector3f                             Center;                                            // 0x0(0xC)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector3f                             AxisX;                                             // 0xC(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector3f                             AxisY;                                             // 0x18(0xC)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector3f                             AxisZ;                                             // 0x24(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        ExtentX;                                           // 0x30(0x4)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        ExtentY;                                           // 0x34(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        ExtentZ;                                           // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Serialization.StructSerializerNonLWCTypesTest
struct FStructSerializerNonLWCTypesTest
{
public:
	struct FVector3f                             Vector;                                            // 0x0(0xC)(Edit, BlueprintVisible, Net, OutParm)
	struct FVector2f                             Vector2D;                                          // 0xC(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm)
	uint8                                        Pad_28C3[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4f                             Vector4;                                           // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm)
	struct FMatrix44f                            Matrix;                                            // 0x30(0x40)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm)
	struct FPlane4f                              Plane;                                             // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
	struct FQuat4f                               Quat;                                              // 0x80(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FRotator3f                            Rotator;                                           // 0x90(0xC)(Edit, ExportObject, Net, OutParm)
	uint8                                        Pad_28C8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform3f                          Transform;                                         // 0xA0(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FBox3f                                Box;                                               // 0xD0(0x1C)(Edit, ConstParm, ExportObject, OutParm)
	struct FBox2f                                Box2D;                                             // 0xEC(0x14)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm)
	struct FBoxSphereBounds3f                    BoxSphereBounds;                                   // 0x100(0x1C)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm)
	struct FOrientedBoxFloat                     OrientedBox;                                       // 0x11C(0x3C)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	float                                        Float;                                             // 0x158(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config)
	uint8                                        Pad_28CE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Double;                                            // 0x160(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm)
	TArray<struct FVector3f>                     VectorArray;                                       // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, struct FVector3f>        StrToVec;                                          // 0x178(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TSet<struct FVector3f>                       VectorSet;                                         // 0x1C8(0x50)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_28D3[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Serialization.StructSerializerByteArray
struct FStructSerializerByteArray
{
public:
	int32                                        Dummy1;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_28D9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                ByteArray;                                         // 0x8(0x10)(Edit, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Dummy2;                                            // 0x18(0x4)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_28DD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int8>                                 Int8Array;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Dummy3;                                            // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_28DF[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Serialization.StructSerializerArrayTestStruct
struct FStructSerializerArrayTestStruct
{
public:
	TArray<int32>                                Int32Array;                                        // 0x0(0x10)(Edit, Parm, ReturnParm, Transient)
	TArray<uint8>                                ByteArray;                                         // 0x10(0x10)(Edit, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        StaticSingleElement;                               // 0x20(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        StaticInt32Array[0x3];                             // 0x24(0xC)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StaticFloatArray[0x3];                             // 0x30(0xC)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_28E9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       VectorArray;                                       // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FStructSerializerBuiltinTestStruct> StructArray;                                       // 0x50(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerMapTestStruct
struct FStructSerializerMapTestStruct
{
public:
	TMap<int32, class FString>                   IntToStr;                                          // 0x0(0x50)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           StrToStr;                                          // 0x50(0x50)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, struct FVector>          StrToVec;                                          // 0xA0(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;                                       // 0xF0(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerSetTestStruct
struct FStructSerializerSetTestStruct
{
public:
	TSet<class FString>                          StrSet;                                            // 0x0(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TSet<int32>                                  IntSet;                                            // 0x50(0x50)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TSet<class FName>                            NameSet;                                           // 0xA0(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TSet<struct FStructSerializerBuiltinTestStruct> StructSet;                                         // 0xF0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x820 (0x820 - 0x0)
// ScriptStruct Serialization.StructSerializerTestStruct
struct FStructSerializerTestStruct
{
public:
	struct FStructSerializerNumericTestStruct    Numerics;                                          // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FStructSerializerBooleanTestStruct    Booleans;                                          // 0x30(0x3)(ExportObject, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_28EA[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FStructSerializerObjectTestStruct     Objects;                                           // 0x38(0xD0)(Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_28EB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FStructSerializerBuiltinTestStruct    Builtins;                                          // 0x110(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FStructSerializerArrayTestStruct      Arrays;                                            // 0x1E0(0x60)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FStructSerializerMapTestStruct        Maps;                                              // 0x240(0x140)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FStructSerializerSetTestStruct        Sets;                                              // 0x380(0x140)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FStructSerializerLWCTypesTest         LWCTypes;                                          // 0x4C0(0x360)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

}


