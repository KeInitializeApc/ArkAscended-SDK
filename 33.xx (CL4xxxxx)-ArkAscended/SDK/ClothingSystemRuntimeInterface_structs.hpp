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
	int32                                        BoneIndex;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Radius;                                            // 0x4(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FVector                               LocalPosition;                                     // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct FClothCollisionPrim_SphereConnection
{
public:
	int32                                        SphereIndices[0x2];                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
struct FClothCollisionPrim_ConvexFace
{
public:
	struct FPlane                                Plane;                                             // 0x0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm)
	TArray<int32>                                Indices;                                           // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex
{
public:
	TArray<struct FClothCollisionPrim_ConvexFace> Faces;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector>                       SurfacePoints;                                     // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        BoneIndex;                                         // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_2E54[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box
{
public:
	struct FVector                               LocalPosition;                                     // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_2E56[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 LocalRotation;                                     // 0x20(0x20)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               HalfExtents;                                       // 0x40(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        BoneIndex;                                         // 0x58(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_2E57[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4C (0x4C - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData
{
public:
	int32                                        NumInfluences;                                     // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint16                                       BoneIndices[0xC];                                  // 0x4(0x18)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        BoneWeights[0xC];                                  // 0x1C(0x30)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData
{
public:
	TArray<struct FClothCollisionPrim_Sphere>    Spheres;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference)
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                 // 0x10(0x10)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FClothCollisionPrim_Convex>    Convexes;                                          // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FClothCollisionPrim_Box>       Boxes;                                             // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}


