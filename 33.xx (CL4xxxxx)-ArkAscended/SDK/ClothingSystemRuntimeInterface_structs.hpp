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
	int32                                        BoneIndex;                                         // 0x0(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Radius;                                            // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               LocalPosition;                                     // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct FClothCollisionPrim_SphereConnection
{
public:
	int32                                        SphereIndices[0x2];                                // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
struct FClothCollisionPrim_ConvexFace
{
public:
	struct FPlane                                Plane;                                             // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
	TArray<int32>                                Indices;                                           // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex
{
public:
	TArray<struct FClothCollisionPrim_ConvexFace> Faces;                                             // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance)
	TArray<struct FVector>                       SurfacePoints;                                     // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        BoneIndex;                                         // 0x20(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_2602[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box
{
public:
	struct FVector                               LocalPosition;                                     // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_2604[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 LocalRotation;                                     // 0x20(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FVector                               HalfExtents;                                       // 0x40(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        BoneIndex;                                         // 0x58(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_2605[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4C (0x4C - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData
{
public:
	int32                                        NumInfluences;                                     // 0x0(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint16                                       BoneIndices[0xC];                                  // 0x4(0x18)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BoneWeights[0xC];                                  // 0x1C(0x30)(ConstParm, ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData
{
public:
	TArray<struct FClothCollisionPrim_Sphere>    Spheres;                                           // 0x0(0x10)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FClothCollisionPrim_Convex>    Convexes;                                          // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FClothCollisionPrim_Box>       Boxes;                                             // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

}


