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

// 0x20 (0x20 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
struct FClothCollisionPrim_Sphere
{
public:
	int32                                        BoneIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Radius;                                            // 0x4(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               LocalPosition;                                     // 0x8(0x18)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct FClothCollisionPrim_SphereConnection
{
public:
	int32                                        SphereIndices[0x2];                                // 0x0(0x8)(Edit, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
struct FClothCollisionPrim_ConvexFace
{
public:
	struct FPlane                                Plane;                                             // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
	TArray<int32>                                Indices;                                           // 0x20(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex
{
public:
	TArray<struct FClothCollisionPrim_ConvexFace> Faces;                                             // 0x0(0x10)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector>                       SurfacePoints;                                     // 0x10(0x10)(Edit, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        BoneIndex;                                         // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_20C7[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box
{
public:
	struct FVector                               LocalPosition;                                     // 0x0(0x18)(Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig)
	uint8                                        Pad_20C9[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 LocalRotation;                                     // 0x20(0x20)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               HalfExtents;                                       // 0x40(0x18)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        BoneIndex;                                         // 0x58(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_20CC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4C (0x4C - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData
{
public:
	int32                                        NumInfluences;                                     // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       BoneIndices[0xC];                                  // 0x4(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BoneWeights[0xC];                                  // 0x1C(0x30)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData
{
public:
	TArray<struct FClothCollisionPrim_Sphere>    Spheres;                                           // 0x0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                 // 0x10(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FClothCollisionPrim_Convex>    Convexes;                                          // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FClothCollisionPrim_Box>       Boxes;                                             // 0x30(0x10)(Edit, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


