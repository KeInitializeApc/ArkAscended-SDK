#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFootPlacementLockType : uint8
{
	Unlocked                       = 0,
	PivotAroundBall                = 1,
	PivotAroundAnkle               = 2,
	LockRotation                   = 3,
	EFootPlacementLockType_MAX     = 4,
};

enum class EPelvisHeightMode : uint8
{
	AllLegs                        = 0,
	AllPlantedFeet                 = 1,
	FrontPlantedFeetUphill_FrontFeetDownhill = 2,
	EPelvisHeightMode_MAX          = 3,
};

enum class EActorMovementCompensationMode : uint8
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	SuddenMotionOnly               = 2,
	EActorMovementCompensationMode_MAX = 3,
};

enum class EOffsetRootBoneMode : uint8
{
	Accumulate                     = 0,
	Interpolate                    = 1,
	Hold                           = 2,
	Release                        = 3,
	EOffsetRootBoneMode_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x24 - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementInterpolationSettings
struct FFootPlacementInterpolationSettings
{
public:
	float                                        UnplantLinearStiffness;                            // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnplantLinearDamping;                              // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnplantAngularStiffness;                           // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnplantAngularDamping;                             // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloorLinearStiffness;                              // 0x10(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloorLinearDamping;                                // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloorAngularStiffness;                             // 0x18(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloorAngularDamping;                               // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableFloorInterpolation;                         // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D80[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementTraceSettings
struct FFootPlacementTraceSettings
{
public:
	float                                        StartOffset;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndOffset;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SweepRadius;                                       // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ETraceTypeQuery                   ComplexTraceChannel;                               // 0xC(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D81[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxGroundPenetration;                              // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SimpleCollisionInfluence;                          // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ETraceTypeQuery                   SimpleTraceChannel;                                // 0x18(0x1)(Edit, ConstParm, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnabled;                                          // 0x19(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2D82[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementRootDefinition
struct FFootPlacementRootDefinition
{
public:
	struct FBoneReference                        PelvisBone;                                        // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        IKRootBone;                                        // 0x10(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementPelvisSettings
struct FFootPlacementPelvisSettings
{
public:
	float                                        MaxOffset;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LinearStiffness;                                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LinearDamping;                                     // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        HorizontalRebalancingWeight;                       // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxOffsetHorizontal;                               // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HeelLiftRatio;                                     // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPelvisHeightMode                 PelvisHeightMode;                                  // 0x18(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EActorMovementCompensationMode    ActorMovementCompensationMode;                     // 0x19(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableInterpolation;                              // 0x1A(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D85[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x44 (0x44 - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacemenLegDefinition
struct FFootPlacemenLegDefinition
{
public:
	struct FBoneReference                        FKFootBone;                                        // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        IKFootBone;                                        // 0x10(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        BallBone;                                          // 0x20(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumBonesInLimb;                                    // 0x30(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SpeedCurveName;                                    // 0x34(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  DisableLockCurveName;                              // 0x3C(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementPlantSettings
struct FFootPlacementPlantSettings
{
public:
	float                                        SpeedThreshold;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DistanceToGround;                                  // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EFootPlacementLockType            LockType;                                          // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D88[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        UnplantRadius;                                     // 0xC(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReplantRadiusRatio;                                // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnplantAngle;                                      // 0x14(0x4)(EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReplantAngleRatio;                                 // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxExtensionRatio;                                 // 0x1C(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinExtensionRatio;                                 // 0x20(0x4)(ConstParm, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SeparatingDistance;                                // 0x24(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnalignmentSpeedThreshold;                         // 0x28(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AnkleTwistReduction;                               // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAdjustHeelBeforePlanting;                         // 0x30(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D89[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x348 (0x410 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_FootPlacement
struct FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase
{
public:
	enum class EWarpingEvaluationMode            PlantSpeedMode;                                    // 0xC8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D8A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        IKFootRootBone;                                    // 0xCC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        PelvisBone;                                        // 0xDC(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFootPlacementPelvisSettings          PelvisSettings;                                    // 0xEC(0x1C)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FFootPlacemenLegDefinition>    LegDefinitions;                                    // 0x108(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFootPlacementPlantSettings           PlantSettings;                                     // 0x118(0x34)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFootPlacementInterpolationSettings   InterpolationSettings;                             // 0x14C(0x24)(Edit, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFootPlacementTraceSettings           TraceSettings;                                     // 0x170(0x1C)(Edit, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D8B[0x284];                                   // Fixing Size Of Struct > TateDumper <
};

// 0xC8 (0x190 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_OffsetRootBone
struct FAnimNode_OffsetRootBone : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_2D8C[0xC8];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0x198 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_OrientationWarping
struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
{
public:
	enum class EWarpingEvaluationMode            Mode;                                              // 0xC8(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2D8E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OrientationAngle;                                  // 0xCC(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LocomotionAngle;                                   // 0xD0(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinRootMotionSpeedThreshold;                       // 0xD4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LocomotionAngleDeltaThreshold;                     // 0xD8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D90[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FBoneReference>                SpineBones;                                        // 0xE0(0x10)(Edit, BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        IKFootRootBone;                                    // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBoneReference>                IKFootBones;                                       // 0x100(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EAxis                             RotationAxis;                                      // 0x110(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D95[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DistributedBoneOrientationAlpha;                   // 0x114(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationInterpSpeed;                               // 0x118(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WarpingAlpha;                                      // 0x11C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OffsetAlpha;                                       // 0x120(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxOffsetAngle;                                    // 0x124(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D97[0x70];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootDefinition
struct FSlopeWarpingFootDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FootSize;                                          // 0x24(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootData
struct FSlopeWarpingFootData
{
public:
	uint8                                        Pad_2D9A[0xB0];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x218 (0x2E0 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_SlopeWarping
struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_2D9D[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        IKFootRootBone;                                    // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        PelvisBone;                                        // 0xF0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSlopeWarpingFootDefinition>   FeetDefinitions;                                   // 0x100(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSlopeWarpingFootData>         FeetData;                                          // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVectorRK4SpringInterpolator          PelvisOffsetInterpolator;                          // 0x120(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2DA1[0x58];                                    // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GravityDir;                                        // 0x180(0x18)(BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CustomFloorOffset;                                 // 0x198(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CachedDeltaTime;                                   // 0x1B0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2DA2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TargetFloorNormalWorldSpace;                       // 0x1B8(0x18)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVectorRK4SpringInterpolator          FloorNormalInterpolator;                           // 0x1D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2DA5[0x58];                                    // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TargetFloorOffsetLocalSpace;                       // 0x230(0x18)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVectorRK4SpringInterpolator          FloorOffsetInterpolator;                           // 0x248(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2DA7[0x58];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        MaxStepHeight;                                     // 0x2A8(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bKeepMeshInsideOfCapsule : 1;                      // Mask: 0x1, PropSize: 0x10x2AC(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPullPelvisDown : 1;                               // Mask: 0x2, PropSize: 0x10x2AC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseCustomFloorOffset : 1;                         // Mask: 0x4, PropSize: 0x10x2AC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bWasOnGround : 1;                                  // Mask: 0x8, PropSize: 0x10x2AC(0x1)(ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowDebug : 1;                                    // Mask: 0x10, PropSize: 0x10x2AC(0x1)(ConstParm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bFloorSmoothingInitialized : 1;                    // Mask: 0x20, PropSize: 0x10x2AC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_260 : 2;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2DAA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ActorLocation;                                     // 0x2B0(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               GravityDirCompSpace;                               // 0x2C8(0x18)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimationWarpingRuntime.StrideWarpingFootDefinition
struct FStrideWarpingFootDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        ThighBone;                                         // 0x20(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x180 (0x248 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_StrideWarping
struct FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
{
public:
	enum class EWarpingEvaluationMode            Mode;                                              // 0xC8(0x1)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2DAC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               StrideDirection;                                   // 0xD0(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StrideScale;                                       // 0xE8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LocomotionSpeed;                                   // 0xEC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinRootMotionSpeedThreshold;                       // 0xF0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        PelvisBone;                                        // 0xF4(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        IKFootRootBone;                                    // 0x104(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2DB0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FStrideWarpingFootDefinition>  FootDefinitions;                                   // 0x118(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputClampConstants                  StrideScaleModifier;                               // 0x128(0x14)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2DB1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FWarpingVectorValue                   FloorNormalDirection;                              // 0x140(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FWarpingVectorValue                   GravityDirection;                                  // 0x160(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FIKFootPelvisPullDownSolver           PelvisIKFootSolver;                                // 0x180(0x80)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOrientStrideDirectionUsingFloorNormal;            // 0x200(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCompensateIKUsingFKThighRotation;                 // 0x201(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bClampIKUsingFKLimits;                             // 0x202(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2DB4[0x45];                                    // Fixing Size Of Struct > TateDumper <
};

}


