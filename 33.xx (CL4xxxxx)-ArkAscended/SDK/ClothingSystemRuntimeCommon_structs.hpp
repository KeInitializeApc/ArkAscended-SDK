#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClothingWindMethod_Legacy : uint8
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2,
};

enum class EWeightMapTargetCommon : uint8
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveStiffness             = 4,
	AnimDriveDamping_DEPRECATED    = 5,
	EWeightMapTargetCommon_MAX     = 6,
};

enum class EClothMassMode : uint8
{
	UniformMass                    = 0,
	TotalMass                      = 1,
	Density                        = 2,
	MaxClothMassMode               = 3,
	EClothMassMode_MAX             = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
struct FClothConstraintSetup_Legacy
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        StiffnessMultiplier;                               // 0x4(0x4)(ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StretchLimit;                                      // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CompressionLimit;                                  // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy
{
public:
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E80[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x4(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x14(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x24(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x34(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SelfCollisionRadius;                               // 0x44(0x4)(ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SelfCollisionStiffness;                            // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        SelfCollisionCullScale;                            // 0x4C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Damping;                                           // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Friction;                                          // 0x68(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        WindDragCoefficient;                               // 0x6C(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        WindLiftCoefficient;                               // 0x70(0x4)(Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E81[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearDrag;                                        // 0x78(0x18)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               AngularDrag;                                       // 0x90(0x18)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               LinearInertiaScale;                                // 0xA8(0x18)(Edit, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               AngularInertiaScale;                               // 0xC0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               CentrifugalInertiaScale;                           // 0xD8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SolverFrequency;                                   // 0xF0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StiffnessFrequency;                                // 0xF4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GravityScale;                                      // 0xF8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E82[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GravityOverride;                                   // 0x100(0x18)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseGravityOverride;                               // 0x118(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E83[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TetherStiffness;                                   // 0x11C(0x4)(Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	float                                        TetherLimit;                                       // 0x120(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CollisionThickness;                                // 0x124(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimDriveSpringStiffness;                          // 0x128(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnimDriveDamperStiffness;                          // 0x12C(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
struct FClothTetherData
{
public:
	uint8                                        Pad_2E85[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData
{
public:
	TArray<struct FVector3f>                     Vertices;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x10(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               Indices;                                           // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TMap<uint32, struct FPointWeightMap>         WeightMaps;                                        // 0x30(0x50)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                InverseMasses;                                     // 0x80(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x90(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<uint32>                               SelfCollisionIndices;                              // 0xA0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothTetherData                      EuclideanTethers;                                  // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothTetherData                      GeodesicTethers;                                   // 0xC0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxBoneWeights;                                    // 0xD0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumFixedVerts;                                     // 0xD4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct FClothLODDataCommon
{
public:
	struct FClothPhysicalMeshData                PhysicalMeshData;                                  // 0x0(0xD8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FClothCollisionData                   CollisionData;                                     // 0xD8(0x40)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseMultipleInfluences;                            // 0x118(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E88[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SkinningKernelRadius;                              // 0x11C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSmoothTransition;                                 // 0x120(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E8A[0x27];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy
{
public:
	class FName                                  MaskName;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EWeightMapTargetCommon            CurrentTarget;                                     // 0x8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E8B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxValue;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        MinValue;                                          // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2E8C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                Values;                                            // 0x18(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_2E8E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


