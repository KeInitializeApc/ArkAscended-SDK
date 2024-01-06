#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBoneModificationMode : uint8
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,
};

enum class ERefPoseType : uint8
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,
};

enum class EEasingFuncType : uint8
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15,
};

enum class ERotationComponent : uint8
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6,
};

enum class EBlendListTransitionType : uint8
{
	StandardBlend                  = 0,
	Inertialization                = 1,
	EBlendListTransitionType_MAX   = 2,
};

enum class EAnimFunctionCallSite : int32
{
	OnInitialize                   = 0,
	OnUpdate                       = 1,
	OnBecomeRelevant               = 2,
	OnEvaluate                     = 3,
	OnInitializePostRecursion      = 4,
	OnUpdatePostRecursion          = 5,
	OnBecomeRelevantPostRecursion  = 6,
	OnEvaluatePostRecursion        = 7,
	OnStartedBlendingOut           = 8,
	OnStartedBlendingIn            = 9,
	OnFinishedBlendingOut          = 10,
	OnFinishedBlendingIn           = 11,
	EAnimFunctionCallSite_MAX      = 12,
};

enum class ELayeredBoneBlendMode : uint8
{
	BranchFilter                   = 0,
	BlendMask                      = 1,
	ELayeredBoneBlendMode_MAX      = 2,
};

enum class EModifyCurveApplyMode : uint8
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5,
};

enum class EPoseDriverType : uint8
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3,
};

enum class EPoseDriverSource : uint8
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2,
};

enum class EPoseDriverOutput : uint8
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2,
};

enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2,
};

enum class ESequenceEvalReinit : uint8
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3,
};

enum class ESwapRootBone : uint8
{
	SwapRootBone_Component         = 0,
	SwapRootBone_Actor             = 1,
	SwapRootBone_None              = 2,
	SwapRootBone_MAX               = 3,
};

enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EAnimPhysLinearConstraintType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EAnimPhysSimSpaceType : uint8
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5,
};

enum class ESphericalLimitType : uint8
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2,
};

enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EDrivenDestinationMode : uint8
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3,
};

enum class EConstraintOffsetOption : uint8
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2,
};

enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2,
};

enum class EInterpolationBlend : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
};

enum class ESimulationSpace : uint8
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3,
};

enum class ESimulationTiming : uint8
{
	Default                        = 0,
	Synchronous                    = 1,
	Deferred                       = 2,
	ESimulationTiming_MAX          = 3,
};

enum class EScaleChainInitialLength : uint8
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3,
};

enum class ESplineBoneAxis : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4,
};

enum class EWarpingEvaluationMode : uint8
{
	Manual                         = 0,
	Graph                          = 1,
	EWarpingEvaluationMode_MAX     = 2,
};

enum class EWarpingVectorMode : uint8
{
	ComponentSpaceVector           = 0,
	ActorSpaceVector               = 1,
	WorldSpaceVector               = 2,
	IKFootRootLocalSpaceVector     = 3,
	EWarpingVectorMode_MAX         = 4,
};

enum class ERBFSolverType : uint8
{
	Additive                       = 0,
	Interpolative                  = 1,
	ERBFSolverType_MAX             = 2,
};

enum class ERBFFunctionType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6,
};

enum class ERBFDistanceMethod : uint8
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	DefaultMethod                  = 4,
	ERBFDistanceMethod_MAX         = 5,
};

enum class ERBFNormalizeMethod : uint8
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	NoNormalization                = 3,
	ERBFNormalizeMethod_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LODThreshold;                                      // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ActualAlpha;                                       // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAlphaBoolEnabled;                                 // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_152B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x30(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x38(0x48)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AlphaCurveName;                                    // 0x80(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x88(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_152F[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// ScriptStruct AnimGraphRuntime.IKFootPelvisPullDownSolver
struct FIKFootPelvisPullDownSolver
{
public:
	struct FVectorRK4SpringInterpolator          PelvisAdjustmentInterp;                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1532[0x58];                                    // Fixing Size After Last Property  > TateDumper <
	double                                       PelvisAdjustmentInterpAlpha;                       // 0x60(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       PelvisAdjustmentMaxDistance;                       // 0x68(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       PelvisAdjustmentErrorTolerance;                    // 0x70(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PelvisAdjustmentMaxIter;                           // 0x78(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1536[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimGraphRuntime.WarpingVectorValue
struct FWarpingVectorValue
{
public:
	enum class EWarpingVectorMode                Mode;                                              // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_153B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Value;                                             // 0x8(0x18)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{
public:
	float                                        X;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	class FName                                  GroupName;                                         // 0x18(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1540[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBlendSpace*                           BlendSpace;                                        // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
	TArray<struct FPoseLink>                     SamplePoseLinks;                                   // 0x30(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1542[0x28];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x68 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraph
struct FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
struct FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
{
public:
};

// 0xD8 (0x1A0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               Translation;                                       // 0xD8(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	struct FRotator                              Rotation;                                          // 0xF0(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x108(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	enum class EBoneModificationMode             TranslationMode;                                   // 0x120(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneModificationMode             RotationMode;                                      // 0x121(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x122(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x123(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x124(0x1)(ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x125(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_154E[0xA];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            BoneTransform;                                     // 0x130(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseRotationTransform;                             // 0x190(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIgnoreOnDedicatedServer;                          // 0x191(0x1)(ConstParm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bAllowUpdatingOutsideOfGameWorld;                  // 0x192(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bADontApplyBoneModifiersAfterwards;                // 0x193(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1551[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct FAnimNode_RefPose : public FAnimNode_Base
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
public:
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        TargetBone;                                        // 0xC8(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        SourceBone;                                        // 0xD8(0x10)(Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Multiplier;                                        // 0xE8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EBoneAxis                         RotationAxisToRefer;                               // 0xEC(0x1)(Edit, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsAdditive;                                       // 0xED(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1556[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendSpaceReference
struct FBlendSpaceReference : public FAnimNodeReference
{
public:
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
struct FRotationRetargetingInfo
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_1559[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Source;                                            // 0x10(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	struct FTransform                            Target;                                            // 0x70(0x60)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	enum class ERotationComponent                RotationComponent;                                 // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_155F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TwistAxis;                                         // 0xD8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bUseAbsoluteAngle;                                 // 0xF0(0x1)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1560[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SourceMinimum;                                     // 0xF4(0x4)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SourceMaximum;                                     // 0xF8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        TargetMinimum;                                     // 0xFC(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        TargetMaximum;                                     // 0x100(0x4)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EEasingFuncType                   EasingType;                                        // 0x104(0x1)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1564[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    CustomCurve;                                       // 0x108(0x88)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFlipEasing;                                       // 0x190(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1569[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        EasingWeight;                                      // 0x194(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bClamp;                                            // 0x198(0x1)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_156B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PositionHistory
struct FPositionHistory
{
public:
	TArray<struct FVector>                       Positions;                                         // 0x0(0x10)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	float                                        Range;                                             // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_156D[0x1C];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimationStateResultReference
struct FAnimationStateResultReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimationStateMachineReference
struct FAnimationStateMachineReference : public FAnimNodeReference
{
public:
};

// 0x30 (0x68 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
struct FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_156F[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	class UBlendSpace*                           PreviousBlendSpace;                                // 0x60(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase
{
public:
	class UBlendSpace*                           BlendSpace;                                        // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
};

// 0x160 (0x1D0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
public:
	uint8                                        Pad_1573[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	struct FPoseLink                             BasePose;                                          // 0x130(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        LODThreshold;                                      // 0x140(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SourceSocketName;                                  // 0x144(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  PivotSocketName;                                   // 0x14C(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1579[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LookAtLocation;                                    // 0x158(0x18)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               SocketAxis;                                        // 0x170(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x188(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_157B[0x44];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x30(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x34(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LODThreshold;                                      // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x90(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1581[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0xC4(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAlphaBoolEnabled;                                 // 0xC5(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1582[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct FBlendBoneByChannelEntry
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x0(0x10)(Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        TargetBone;                                        // 0x10(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBlendTranslation;                                 // 0x20(0x1)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBlendRotation;                                    // 0x21(0x1)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBlendScale;                                       // 0x22(0x1)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1589[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FPoseLink                             B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	TArray<struct FBlendBoneByChannelEntry>      BoneDefinitions;                                   // 0x30(0x10)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16DA[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0x50(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16DB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x58(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBoneControlSpace                 TransformsSpace;                                   // 0x60(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16DE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     BlendPose;                                         // 0x10(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16E1[0x28];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
public:
};

// 0x8 (0x78 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
public:
	float                                        NormalizedTime;                                    // 0x70(0x4)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bTeleportToNormalizedTime;                         // 0x74(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16E6[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x90 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
struct FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase
{
public:
	class FName                                  GroupName;                                         // 0x68(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x70(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimSyncMethod                   Method;                                            // 0x71(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreForRelevancyTest;                           // 0x72(0x1)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16EF[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        X;                                                 // 0x74(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        Y;                                                 // 0x78(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        PlayRate;                                          // 0x7C(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bLoop;                                             // 0x80(0x1)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bResetPlayTimeWhenBlendSpaceChanges;               // 0x81(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16F5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartPosition;                                     // 0x84(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UBlendSpace*                           BlendSpace;                                        // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CallFunction
struct FAnimNode_CallFunction : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_16F8[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EAnimFunctionCallSite             CallSite;                                          // 0x34(0x4)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1C8 (0x1D8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bUseAttachedParent : 1;                            // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bCopyCurves : 1;                                   // Mask: 0x2, PropSize: 0x10x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_C5 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	bool                                         bCopyCustomAttributes;                             // 0x19(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bUseMeshPose : 1;                                  // Mask: 0x1, PropSize: 0x10x1A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_C6 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1738[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  RootBoneToCopy;                                    // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_173A[0x1B4];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x40 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct FAnimNode_CurveSource : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  SourceBinding;                                     // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Alpha;                                             // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1743[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class ICurveSourceInterface> CurveSource;                                       // 0x30(0x10)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0xE0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<struct FPoseLink>                     BlendPoses;                                        // 0x20(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ELayeredBoneBlendMode             BlendMode;                                         // 0x30(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_17A2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UBlendProfile*>                 BlendMasks;                                        // 0x38(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FInputBlendPose>               LayerSetup;                                        // 0x48(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                BlendWeights;                                      // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMeshSpaceRotationBlend;                           // 0x68(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMeshSpaceScaleBlend;                              // 0x69(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ECurveBlendOption                 CurveBlendOption;                                  // 0x6A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBlendRootMotionBasedOnRootBone;                   // 0x6B(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_17A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LODThreshold;                                      // 0x70(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17A9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPerBoneBlendWeight>           PerBoneBlendWeights;                               // 0x78(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	struct FGuid                                 SkeletonGuid;                                      // 0x88(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 VirtualBoneGuid;                                   // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_17B7[0x38];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bMeshSpaceAdditive;                                // 0x30(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_17DE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MirrorBase
struct FAnimNode_MirrorBase : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_17E5[0x28];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_Mirror
struct FAnimNode_Mirror : public FAnimNode_MirrorBase
{
public:
};

// 0x18 (0x60 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_Mirror_Standalone
struct FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
{
public:
	bool                                         bMirror;                                           // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	float                                        BlendTime;                                         // 0x58(0x4)(EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bResetChild;                                       // 0x5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bBoneMirroring;                                    // 0x5D(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCurveMirroring;                                   // 0x5E(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAttributeMirroring;                               // 0x5F(0x1)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FName, float>                     CurveMap;                                          // 0x20(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                CurveValues;                                       // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class FName>                          CurveNames;                                        // 0x80(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_182B[0x64];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0xF4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EModifyCurveApplyMode             ApplyMode;                                         // 0xF8(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_182D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x50 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     Poses;                                             // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                DesiredAlphas;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1835[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x40(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAdditiveNode;                                     // 0x48(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNormalizeAlpha;                                   // 0x49(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1839[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x98 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
public:
	class UPoseAsset*                            PoseAsset;                                         // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_183E[0x58];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0xB8 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0xA8(0x1)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1841[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           CustomCurve;                                       // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0xB0 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
public:
	class FName                                  PoseName;                                          // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PoseWeight;                                        // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1844[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct FPoseDriverTransform
{
public:
	struct FVector                               TargetTranslation;                                 // 0x0(0x18)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRotator                              TargetRotation;                                    // 0x18(0x18)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct FPoseDriverTarget
{
public:
	TArray<struct FPoseDriverTransform>          BoneTransforms;                                    // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRotator                              TargetRotation;                                    // 0x10(0x18)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        TargetScale;                                       // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x2C(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x2D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bApplyCustomCurve;                                 // 0x2E(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1847[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRichCurve                            CustomCurve;                                       // 0x30(0x80)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  DrivenName;                                        // 0xB0(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1849[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsHidden;                                         // 0xC0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_184A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFParams
struct FRBFParams
{
public:
	int32                                        TargetDimensions;                                  // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERBFSolverType                    SolverType;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_184D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Radius;                                            // 0x8(0x4)(ConstParm, BlueprintVisible, Net, OutParm, Config, EditConst, SubobjectReference)
	bool                                         bAutomaticRadius;                                  // 0xC(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERBFFunctionType                  Function;                                          // 0xD(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0xE(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneAxis                         TwistAxis;                                         // 0xF(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	float                                        WeightThreshold;                                   // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERBFNormalizeMethod               NormalizeMethod;                                   // 0x14(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1856[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               MedianReference;                                   // 0x18(0x18)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MedianMin;                                         // 0x30(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MedianMax;                                         // 0x34(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xF8 (0x190 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FBoneReference>                SourceBones;                                       // 0xA8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FBoneReference>                OnlyDriveBones;                                    // 0xB8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FPoseDriverTarget>             PoseTargets;                                       // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1875[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        EvalSpaceBone;                                     // 0x108(0x10)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEvalFromRefPose;                                  // 0x118(0x1)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1877[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRBFParams                            RBFParams;                                         // 0x120(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class EPoseDriverSource                 DriveSource;                                       // 0x158(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPoseDriverOutput                 DriveOutput;                                       // 0x159(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bOnlyDriveSelectedBones : 1;                       // Mask: 0x1, PropSize: 0x10x15A(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_C8 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_187E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LODThreshold;                                      // 0x15C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_187F[0x30];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x90 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
public:
	class FName                                  SnapshotName;                                      // 0x10(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FPoseSnapshot                         Snapshot;                                          // 0x18(0x38)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESnapshotSourceMode               Mode;                                              // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1883[0x3F];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MinLoopCount;                                      // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MaxLoopCount;                                      // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinPlayRate;                                       // 0x14(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxPlayRate;                                       // 0x18(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_188A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAlphaBlend                           BlendIn;                                           // 0x20(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x78 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase
{
public:
	TArray<struct FRandomPlayerSequenceEntry>    Entries;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_188E[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        BlendWeight;                                       // 0x70(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShuffleMode;                                      // 0x74(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1890[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x98 (0xA8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        Pitch;                                             // 0x20(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	float                                        Yaw;                                               // 0x24(0x4)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FInputScaleBiasClamp                  PitchScaleBiasClamp;                               // 0x28(0x30)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FInputScaleBiasClamp                  YawScaleBiasClamp;                                 // 0x58(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRotator                              MeshToComponent;                                   // 0x88(0x18)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1894[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0x118 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                             BasePose;                                          // 0x70(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        LODThreshold;                                      // 0x80(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Alpha;                                             // 0x84(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x88(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x90(0x48)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AlphaCurveName;                                    // 0xD8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xE0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1899[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x114(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAlphaBoolEnabled;                                 // 0x115(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_189C[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
struct FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
public:
	struct FPoseLink                             BasePose;                                          // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        LODThreshold;                                      // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Alpha;                                             // 0x7C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x80(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x88(0x48)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AlphaCurveName;                                    // 0xD0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xD8(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x10C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAlphaBoolEnabled;                                 // 0x10D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18A8[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x40 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_18AA[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x40 - 0x40)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
{
public:
};

// 0x28 (0x68 - 0x40)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
struct FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
{
public:
	class FName                                  GroupName;                                         // 0x40(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x48(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimSyncMethod                   Method;                                            // 0x49(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreForRelevancyTest;                           // 0x4A(0x1)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18B0[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimSequenceBase*                     Sequence;                                          // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        ExplicitTime;                                      // 0x58(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShouldLoop;                                       // 0x5C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bTeleportToExplicitTime;                           // 0x5D(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESequenceEvalReinit               ReinitializationBehavior;                          // 0x5E(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18B2[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartPosition;                                     // 0x60(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18B3[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct FAnimNode_Slot : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	class FName                                  SlotName;                                          // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAlwaysUpdateSourcePose;                           // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18B6[0x1F];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x30 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Sync
struct FAnimNode_Sync : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	class FName                                  GroupName;                                         // 0x20(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x28(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18BE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	struct FPoseLink                             B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x31(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_C9 : 2;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bResetChildOnActivation : 1;                       // Mask: 0x8, PropSize: 0x10x31(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CA : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_18C9[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0x34(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x38(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x90(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_18CF[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x468 (0xCE0 - 0x878)
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_18D1[0x468];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendSpacePlayerReference
struct FBlendSpacePlayerReference : public FAnimNodeReference
{
public:
};

// 0x88 (0x88 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup
{
public:
	enum class EAnimPhysLinearConstraintType     LinearXLimitType;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimPhysLinearConstraintType     LinearYLimitType;                                  // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimPhysLinearConstraintType     LinearZLimitType;                                  // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18DB[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearAxesMin;                                     // 0x8(0x18)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LinearAxesMax;                                     // 0x20(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimPhysAngularConstraintType    AngularConstraintType;                             // 0x38(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimPhysTwistAxis                TwistAxis;                                         // 0x39(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	enum class EAnimPhysTwistAxis                AngularTargetAxis;                                 // 0x3A(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18DC[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ConeAngle;                                         // 0x3C(0x4)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               AngularLimitsMin;                                  // 0x40(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               AngularLimitsMax;                                  // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               AngularTarget;                                     // 0x70(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            PlaneTransform;                                    // 0x10(0x60)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               SphereLocalOffset;                                 // 0x10(0x18)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LimitRadius;                                       // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESphericalLimitType               LimitType;                                         // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18E6[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysBodyDefinition
struct FAnimPhysBodyDefinition
{
public:
	struct FBoneReference                        BoundBone;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               BoxExtents;                                        // 0x10(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FVector                               LocalJointOffset;                                  // 0x28(0x18)(Edit, ConstParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FAnimPhysConstraintSetup              ConstraintSetup;                                   // 0x40(0x88)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimPhysCollisionType            CollisionType;                                     // 0xC8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18EB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SphereCollisionRadius;                             // 0xCC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x458 (0x520 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
public:
	float                                        LinearDampingOverride;                             // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AngularDampingOverride;                            // 0xCC(0x4)(ExportObject, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18F7[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        RelativeSpaceBone;                                 // 0x190(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        BoundBone;                                         // 0x1A0(0x10)(BlueprintVisible, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        ChainEnd;                                          // 0x1B0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FAnimPhysBodyDefinition>       PhysicsBodyDefinitions;                            // 0x1C0(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        GravityScale;                                      // 0x1D0(0x4)(ConstParm, BlueprintVisible, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18F8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GravityOverride;                                   // 0x1D8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        LinearSpringConstant;                              // 0x1F0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AngularSpringConstant;                             // 0x1F4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        WindScale;                                         // 0x1F8(0x4)(Edit, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18FB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ComponentLinearAccScale;                           // 0x200(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ComponentLinearVelScale;                           // 0x218(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x230(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AngularBiasOverride;                               // 0x248(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSolverIterationsPreUpdate;                      // 0x24C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumSolverIterationsPostUpdate;                     // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1902[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAnimPhysSphericalLimit>       SphericalLimits;                                   // 0x258(0x10)(BlueprintVisible, ExportObject, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ExternalForce;                                     // 0x268(0x18)(BlueprintVisible, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x280(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAnimPhysSimSpaceType             SimulationSpace;                                   // 0x290(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1905[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseSphericalLimits : 1;                           // Mask: 0x1, PropSize: 0x10x293(0x1)(Edit, ExportObject, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x2, PropSize: 0x10x293(0x1)(Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bDoUpdate : 1;                                     // Mask: 0x4, PropSize: 0x10x293(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bDoEval : 1;                                       // Mask: 0x8, PropSize: 0x10x293(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bOverrideLinearDamping : 1;                        // Mask: 0x10, PropSize: 0x10x293(0x1)(Edit, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bOverrideAngularBias : 1;                          // Mask: 0x20, PropSize: 0x10x293(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bOverrideAngularDamping : 1;                       // Mask: 0x40, PropSize: 0x10x293(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bEnableWind : 1;                                   // Mask: 0x80, PropSize: 0x10x293(0x1)(ConstParm, ExportObject, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CB : 1;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bUseGravityOverride : 1;                           // Mask: 0x2, PropSize: 0x10x294(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bGravityOverrideInSimSpace : 1;                    // Mask: 0x4, PropSize: 0x10x294(0x1)(Edit, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bLinearSpring : 1;                                 // Mask: 0x8, PropSize: 0x10x294(0x1)(Edit, ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAngularSpring : 1;                                // Mask: 0x10, PropSize: 0x10x294(0x1)(Edit, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bChain : 1;                                        // Mask: 0x20, PropSize: 0x10x294(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CC : 2;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_190D[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotationRetargetingInfo              RetargetingSettings;                               // 0x2A0(0x1A0)(ConstParm, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_190E[0xE0];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct FAngularRangeLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LimitMax;                                          // 0x18(0x18)(Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        bone;                                              // 0x30(0x10)(Edit, Net, Parm, OutParm, ReturnParm)
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FAngularRangeLimit>            AngularRangeLimits;                                // 0xC8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       AngularOffsets;                                    // 0xD8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(Parm, Transient, Config, InstancedReference, SubobjectReference)
	class UCurveFloat*                           DrivingCurve;                                      // 0xD8(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Multiplier;                                        // 0xE0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1918[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       RangeMin;                                          // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       RangeMax;                                          // 0xF0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       RemappedMin;                                       // 0xF8(0x8)(ConstParm, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	double                                       RemappedMax;                                       // 0x100(0x8)(Edit, ConstParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  ParameterName;                                     // 0x108(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBoneReference                        TargetBone;                                        // 0x110(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EDrivenDestinationMode            DestinationMode;                                   // 0x120(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EDrivenBoneModificationMode       ModificationMode;                                  // 0x121(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EComponentType                    SourceComponent;                                   // 0x122(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        bUseRange : 1;                                     // Mask: 0x1, PropSize: 0x10x123(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetTranslationX : 1;                     // Mask: 0x2, PropSize: 0x10x123(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetTranslationY : 1;                     // Mask: 0x4, PropSize: 0x10x123(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetTranslationZ : 1;                     // Mask: 0x8, PropSize: 0x10x123(0x1)(Edit, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetRotationX : 1;                        // Mask: 0x10, PropSize: 0x10x123(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetRotationY : 1;                        // Mask: 0x20, PropSize: 0x10x123(0x1)(Edit, ExportObject, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetRotationZ : 1;                        // Mask: 0x40, PropSize: 0x10x123(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetScaleX : 1;                           // Mask: 0x80, PropSize: 0x10x123(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetScaleY : 1;                           // Mask: 0x1, PropSize: 0x10x124(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAffectTargetScaleZ : 1;                           // Mask: 0x2, PropSize: 0x10x124(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1972[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF8 (0x1C0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                               EffectorLocation;                                  // 0xC8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0xE0(0x1)(ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_197A[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0xF0(0x90)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        TipBone;                                           // 0x180(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        RootBone;                                          // 0x190(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Precision;                                         // 0x1A0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        MaxIterations;                                     // 0x1A4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bStartFromTail;                                    // 0x1A8(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableRotationLimit;                              // 0x1A9(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_198A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                RotationLimitPerJoints;                            // 0x1B0(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimGraphRuntime.Constraint
struct FConstraint
{
public:
	struct FBoneReference                        TargetBone;                                        // 0x0(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EConstraintOffsetOption           OffsetOption;                                      // 0x10(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class ETransformConstraintType          TransformType;                                     // 0x11(0x1)(ExportObject, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FFilterOptionPerAxis                  PerAxis;                                           // 0x12(0x3)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1997[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x108 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FConstraint>                   ConstraintSetup;                                   // 0xD8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                ConstraintWeights;                                 // 0xE8(0x10)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_199A[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        TargetBone;                                        // 0xD8(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCopyTranslation;                                  // 0xE8(0x1)(ConstParm, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCopyRotation;                                     // 0xE9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCopyScale;                                        // 0xEA(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 ControlSpace;                                      // 0xEB(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_19BB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        TargetBone;                                        // 0xD8(0x10)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCopyTranslation;                                  // 0xE8(0x1)(ConstParm, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCopyRotation;                                     // 0xE9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCopyScale;                                        // 0xEA(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class ECopyBoneDeltaMode                CopyMode;                                          // 0xEB(0x1)(Edit, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        TranslationMultiplier;                             // 0xEC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotationMultiplier;                                // 0xF0(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ScaleMultiplier;                                   // 0xF4(0x4)(Edit, ConstParm, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x128 (0x1F0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_19EE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            EffectorTransform;                                 // 0xD0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x130(0x90)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        TipBone;                                           // 0x1C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        RootBone;                                          // 0x1D0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Precision;                                         // 0x1E0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        MaxIterations;                                     // 0x1E4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 EffectorTransformSpace;                            // 0x1E8(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneRotationSource               EffectorRotationSource;                            // 0x1E9(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_19F3[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x120 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        RightHandFK;                                       // 0xC8(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        LeftHandFK;                                        // 0xD8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        RightHandIK;                                       // 0xE8(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        LeftHandIK;                                        // 0xF8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FBoneReference>                IKBonesToMove;                                     // 0x108(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        HandFKWeight;                                      // 0x118(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_19F6[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChainLink
struct FIKChainLink
{
public:
	uint8                                        Pad_19F7[0x70];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChain
struct FIKChain
{
public:
	uint8                                        Pad_19F8[0x50];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x2C (0x2C - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinRotationAngle;                                  // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             FootBoneForwardAxis;                               // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             HingeRotationAxis;                                 // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableRotationLimit;                              // 0x2A(0x1)(BlueprintVisible, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableKneeTwistCorrection;                        // 0x2B(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKData
struct FAnimLegIKData
{
public:
	uint8                                        Pad_1A28[0xE0];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
public:
	float                                        ReachPrecision;                                    // 0xC8(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MaxIterations;                                     // 0xCC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FAnimLegIKDefinition>          LegsDefinition;                                    // 0xD0(0x10)(OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A29[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x188 (0x250 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A2A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoneSocketTarget                     LookAtTarget;                                      // 0xE0(0x90)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LookAtLocation;                                    // 0x170(0x18)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FAxis                                 LookAt_Axis;                                       // 0x188(0x20)(ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseLookUpAxis;                                    // 0x1A8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EInterpolationBlend               InterpolationType;                                 // 0x1A9(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A2C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAxis                                 LookUp_Axis;                                       // 0x1B0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        LookAtClamp;                                       // 0x1D0(0x4)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InterpolationTime;                                 // 0x1D4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        InterpolationTriggerThreashold;                    // 0x1D8(0x4)(ExportObject, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A2D[0x74];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToObserve;                                     // 0xC8(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 DisplaySpace;                                      // 0xD8(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bRelativeToRefPose;                                // 0xD9(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A2E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Translation;                                       // 0xE0(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	struct FRotator                              Rotation;                                          // 0xF8(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x110(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_1A32[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AnimGraphRuntime.SimSpaceSettings
struct FSimSpaceSettings
{
public:
	float                                        WorldAlpha;                                        // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        VelocityScaleZ;                                    // 0x4(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxLinearVelocity;                                 // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxAngularVelocity;                                // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxLinearAcceleration;                             // 0x10(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxAngularAcceleration;                            // 0x14(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ExternalLinearDragV;                               // 0x18(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ExternalLinearVelocity;                            // 0x30(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ExternalAngularVelocity;                           // 0x48(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8E8 (0x9B0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
public:
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A36[0x128];                                   // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OverrideWorldGravity;                              // 0x1F8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ExternalForce;                                     // 0x210(0x18)(BlueprintVisible, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ComponentLinearAccScale;                           // 0x228(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ComponentLinearVelScale;                           // 0x240(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x258(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSimSpaceSettings                     SimSpaceSettings;                                  // 0x270(0x60)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        CachedBoundsScale;                                 // 0x2D0(0x4)(Edit, ExportObject, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        BaseBoneRef;                                       // 0x2D4(0x10)(ConstParm, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x2E4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESimulationSpace                  SimulationSpace;                                   // 0x2E5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bForceDisableCollisionBetweenConstraintBodies;     // 0x2E6(0x1)(ConstParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseExternalClothCollision;                        // 0x2E7(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A3F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bEnableWorldGeometry : 1;                          // Mask: 0x1, PropSize: 0x10x2E9(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bOverrideWorldGravity : 1;                         // Mask: 0x2, PropSize: 0x10x2E9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bTransferBoneVelocities : 1;                       // Mask: 0x4, PropSize: 0x10x2E9(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bFreezeIncomingPoseOnStart : 1;                    // Mask: 0x8, PropSize: 0x10x2E9(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bClampLinearTranslationLimitToRefPose : 1;         // Mask: 0x10, PropSize: 0x10x2E9(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_DB : 3;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1A43[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WorldSpaceMinimumScale;                            // 0x2EC(0x4)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        EvaluationResetTime;                               // 0x2F0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A46[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ESimulationTiming                 SimulationTiming;                                  // 0x2F5(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A48[0x6BA];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x88 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        DefaultChainLength;                                // 0x20(0x4)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        ChainStartBone;                                    // 0x24(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        ChainEndBone;                                      // 0x34(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A4D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TargetLocation;                                    // 0x48(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x60(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A50[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x68(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EScaleChainInitialLength          ChainInitialLength;                                // 0x70(0x1)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A52[0x17];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData
{
public:
	struct FBoneReference                        bone;                                              // 0x0(0x10)(Edit, Net, Parm, OutParm, ReturnParm)
	int32                                        RefSkeletonIndex;                                  // 0x10(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1A8 (0x270 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        StartBone;                                         // 0xC8(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        EndBone;                                           // 0xD8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ESplineBoneAxis                   BoneAxis;                                          // 0xE8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAutoCalculateSpline;                              // 0xE9(0x1)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A5A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        PointCount;                                        // 0xEC(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    ControlPoints;                                     // 0xF0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Roll;                                              // 0x100(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	float                                        TwistStart;                                        // 0x104(0x4)(Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        TwistEnd;                                          // 0x108(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A5D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAlphaBlend                           TwistBlend;                                        // 0x110(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Stretch;                                           // 0x140(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Offset;                                            // 0x144(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1A5F[0x128];                                   // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0x168 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SpringBone;                                        // 0xC8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	double                                       MaxDisplacement;                                   // 0xD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	double                                       SpringStiffness;                                   // 0xE0(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	double                                       SpringDamping;                                     // 0xE8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	double                                       ErrorResetThresh;                                  // 0xF0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A63[0x6C];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bLimitDisplacement : 1;                            // Mask: 0x1, PropSize: 0x10x164(0x1)(EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bTranslateX : 1;                                   // Mask: 0x2, PropSize: 0x10x164(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bTranslateY : 1;                                   // Mask: 0x4, PropSize: 0x10x164(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bTranslateZ : 1;                                   // Mask: 0x8, PropSize: 0x10x164(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bRotateX : 1;                                      // Mask: 0x10, PropSize: 0x10x164(0x1)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bRotateY : 1;                                      // Mask: 0x20, PropSize: 0x10x164(0x1)(Edit, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bRotateZ : 1;                                      // Mask: 0x40, PropSize: 0x10x164(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A69[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationLimit
struct FRotationLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LimitMax;                                          // 0x18(0x18)(Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1D8 (0x2A0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_1A6C[0x68];                                    // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        TrailBone;                                         // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ChainLength;                                       // 0x140(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             ChainBoneAxis;                                     // 0x144(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bInvertChainBoneAxis : 1;                          // Mask: 0x1, PropSize: 0x10x145(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bLimitStretch : 1;                                 // Mask: 0x2, PropSize: 0x10x145(0x1)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bLimitRotation : 1;                                // Mask: 0x4, PropSize: 0x10x145(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x8, PropSize: 0x10x145(0x1)(Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bActorSpaceFakeVel : 1;                            // Mask: 0x10, PropSize: 0x10x145(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bReorientParentToChild : 1;                        // Mask: 0x20, PropSize: 0x10x145(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_DD : 2;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1A73[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxDeltaTime;                                      // 0x148(0x4)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        RelaxationSpeedScale;                              // 0x14C(0x4)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FRuntimeFloatCurve                    TrailRelaxationSpeed;                              // 0x150(0x88)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FInputScaleBiasClamp                  RelaxationSpeedScaleInputProcessor;                // 0x1D8(0x30)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FRotationLimit>                RotationLimits;                                    // 0x208(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       RotationOffsets;                                   // 0x218(0x10)(ExportObject, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x228(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        StretchLimit;                                      // 0x238(0x4)(Edit, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A78[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FakeVelocity;                                      // 0x240(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        BaseJoint;                                         // 0x258(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LastBoneRotationAnimAlphaBlend;                    // 0x268(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A7B[0x34];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame
{
public:
	struct FBoneReference                        bone;                                              // 0x0(0x10)(Edit, Net, Parm, OutParm, ReturnParm)
	struct FAxis                                 Axis;                                              // 0x10(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
};

// 0xA0 (0x168 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
public:
	struct FReferenceBoneFrame                   BaseFrame;                                         // 0xC8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FReferenceBoneFrame                   TwistFrame;                                        // 0xF8(0x30)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FAxis                                 TwistPlaneNormalAxis;                              // 0x128(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RangeMax;                                          // 0x148(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        RemappedMin;                                       // 0x14C(0x4)(ConstParm, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RemappedMax;                                       // 0x150(0x4)(Edit, ConstParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FAnimCurveParam                       Curve;                                             // 0x154(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1A81[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1B8 (0x280 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        IKBone;                                            // 0xC8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	double                                       StartStretchRatio;                                 // 0xD8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	double                                       MaxStretchScale;                                   // 0xE0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               EffectorLocation;                                  // 0xE8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A85[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x110(0x90)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               JointTargetLocation;                               // 0x1A0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A86[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoneSocketTarget                     JointTarget;                                       // 0x1C0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FAxis                                 TwistAxis;                                         // 0x250(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0x270(0x1)(ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	enum class EBoneControlSpace                 JointTargetLocationSpace;                          // 0x271(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAllowStretching : 1;                              // Mask: 0x1, PropSize: 0x10x272(0x1)(Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bTakeRotationFromEffectorSpace : 1;                // Mask: 0x2, PropSize: 0x10x272(0x1)(BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bMaintainEffectorRelRot : 1;                       // Mask: 0x4, PropSize: 0x10x272(0x1)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAllowTwist : 1;                                   // Mask: 0x8, PropSize: 0x10x272(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A8B[0xD];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.LayeredBoneBlendReference
struct FLayeredBoneBlendReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.LinkedAnimGraphReference
struct FLinkedAnimGraphReference : public FAnimNodeReference
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFEntry
struct FRBFEntry
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
};

// 0x90 (0xA0 - 0x10)
// ScriptStruct AnimGraphRuntime.RBFTarget
struct FRBFTarget : public FRBFEntry
{
public:
	float                                        ScaleFactor;                                       // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bApplyCustomCurve;                                 // 0x14(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A96[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRichCurve                            CustomCurve;                                       // 0x18(0x80)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x98(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x99(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A97[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SequenceEvaluatorReference
struct FSequenceEvaluatorReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SequencePlayerReference
struct FSequencePlayerReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SkeletalControlReference
struct FSkeletalControlReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
struct FAnimNode_StateResult : public FAnimNode_Root
{
public:
};

}


