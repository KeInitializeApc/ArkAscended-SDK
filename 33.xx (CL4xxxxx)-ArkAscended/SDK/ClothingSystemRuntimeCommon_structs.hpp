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
	float                                        Stiffness;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        StiffnessMultiplier;                               // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StretchLimit;                                      // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CompressionLimit;                                  // 0xC(0x4)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy
{
public:
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2503[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x4(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x14(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x24(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x34(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SelfCollisionRadius;                               // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SelfCollisionStiffness;                            // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        SelfCollisionCullScale;                            // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               Damping;                                           // 0x50(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Friction;                                          // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        WindDragCoefficient;                               // 0x6C(0x4)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        WindLiftCoefficient;                               // 0x70(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2509[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearDrag;                                        // 0x78(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               AngularDrag;                                       // 0x90(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LinearInertiaScale;                                // 0xA8(0x18)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               AngularInertiaScale;                               // 0xC0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               CentrifugalInertiaScale;                           // 0xD8(0x18)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SolverFrequency;                                   // 0xF0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StiffnessFrequency;                                // 0xF4(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GravityScale;                                      // 0xF8(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_250D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GravityOverride;                                   // 0x100(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseGravityOverride;                               // 0x118(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_250F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TetherStiffness;                                   // 0x11C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        TetherLimit;                                       // 0x120(0x4)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CollisionThickness;                                // 0x124(0x4)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AnimDriveSpringStiffness;                          // 0x128(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AnimDriveDamperStiffness;                          // 0x12C(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
struct FClothTetherData
{
public:
	uint8                                        Pad_2510[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData
{
public:
	TArray<struct FVector3f>                     Vertices;                                          // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x10(0x10)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<uint32>                               Indices;                                           // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<uint32, struct FPointWeightMap>         WeightMaps;                                        // 0x30(0x50)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                InverseMasses;                                     // 0x80(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<uint32>                               SelfCollisionIndices;                              // 0xA0(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FClothTetherData                      EuclideanTethers;                                  // 0xB0(0x10)(Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FClothTetherData                      GeodesicTethers;                                   // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MaxBoneWeights;                                    // 0xD0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumFixedVerts;                                     // 0xD4(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct FClothLODDataCommon
{
public:
	struct FClothPhysicalMeshData                PhysicalMeshData;                                  // 0x0(0xD8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FClothCollisionData                   CollisionData;                                     // 0xD8(0x40)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseMultipleInfluences;                            // 0x118(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2515[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SkinningKernelRadius;                              // 0x11C(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bSmoothTransition;                                 // 0x120(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2516[0x27];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy
{
public:
	class FName                                  MaskName;                                          // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EWeightMapTargetCommon            CurrentTarget;                                     // 0x8(0x1)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2518[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxValue;                                          // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        MinValue;                                          // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2519[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                Values;                                            // 0x18(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_251A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


