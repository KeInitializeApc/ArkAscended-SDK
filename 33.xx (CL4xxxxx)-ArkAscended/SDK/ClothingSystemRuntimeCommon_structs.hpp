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
	float                                        Stiffness;                                         // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        StiffnessMultiplier;                               // 0x4(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StretchLimit;                                      // 0x8(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CompressionLimit;                                  // 0xC(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct FClothConfig_Legacy
{
public:
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_223D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FClothConstraintSetup_Legacy          VerticalConstraintConfig;                          // 0x4(0x10)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothConstraintSetup_Legacy          HorizontalConstraintConfig;                        // 0x14(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothConstraintSetup_Legacy          BendConstraintConfig;                              // 0x24(0x10)(ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothConstraintSetup_Legacy          ShearConstraintConfig;                             // 0x34(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SelfCollisionRadius;                               // 0x44(0x4)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SelfCollisionStiffness;                            // 0x48(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        SelfCollisionCullScale;                            // 0x4C(0x4)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Damping;                                           // 0x50(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Friction;                                          // 0x68(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	float                                        WindDragCoefficient;                               // 0x6C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WindLiftCoefficient;                               // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2240[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearDrag;                                        // 0x78(0x18)(Edit, ExportObject, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularDrag;                                       // 0x90(0x18)(ConstParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LinearInertiaScale;                                // 0xA8(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AngularInertiaScale;                               // 0xC0(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CentrifugalInertiaScale;                           // 0xD8(0x18)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SolverFrequency;                                   // 0xF0(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StiffnessFrequency;                                // 0xF4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GravityScale;                                      // 0xF8(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2249[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GravityOverride;                                   // 0x100(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseGravityOverride;                               // 0x118(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_224A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TetherStiffness;                                   // 0x11C(0x4)(BlueprintVisible, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        TetherLimit;                                       // 0x120(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CollisionThickness;                                // 0x124(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AnimDriveSpringStiffness;                          // 0x128(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AnimDriveDamperStiffness;                          // 0x12C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct FPointWeightMap
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
struct FClothTetherData
{
public:
	uint8                                        Pad_224E[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct FClothPhysicalMeshData
{
public:
	TArray<struct FVector3f>                     Vertices;                                          // 0x0(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector3f>                     Normals;                                           // 0x10(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<uint32>                               Indices;                                           // 0x20(0x10)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<uint32, struct FPointWeightMap>         WeightMaps;                                        // 0x30(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                InverseMasses;                                     // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x90(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               SelfCollisionIndices;                              // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothTetherData                      EuclideanTethers;                                  // 0xB0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothTetherData                      GeodesicTethers;                                   // 0xC0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxBoneWeights;                                    // 0xD0(0x4)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumFixedVerts;                                     // 0xD4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct FClothLODDataCommon
{
public:
	struct FClothPhysicalMeshData                PhysicalMeshData;                                  // 0x0(0xD8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FClothCollisionData                   CollisionData;                                     // 0xD8(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseMultipleInfluences;                            // 0x118(0x1)(Edit, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2257[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SkinningKernelRadius;                              // 0x11C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSmoothTransition;                                 // 0x120(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2258[0x27];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct FClothParameterMask_Legacy
{
public:
	class FName                                  MaskName;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EWeightMapTargetCommon            CurrentTarget;                                     // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2259[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxValue;                                          // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        MinValue;                                          // 0x10(0x4)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2261[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                Values;                                            // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_2265[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}


