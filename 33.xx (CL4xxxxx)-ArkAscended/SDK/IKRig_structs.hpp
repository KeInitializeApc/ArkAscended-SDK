#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EIKRigGoalSpace : uint8
{
	Component                      = 0,
	Additive                       = 1,
	World                          = 2,
	EIKRigGoalSpace_MAX            = 3,
};

enum class EIKRigGoalTransformSource : uint8
{
	Manual                         = 0,
	Bone                           = 1,
	ActorComponent                 = 2,
	EIKRigGoalTransformSource_MAX  = 3,
};

enum class ERetargetSourceOrTarget : uint8
{
	Source                         = 0,
	Target                         = 1,
	ERetargetSourceOrTarget_MAX    = 2,
};

enum class ERetargetTranslationMode : uint8
{
	None                           = 0,
	GloballyScaled                 = 1,
	Absolute                       = 2,
	ERetargetTranslationMode_MAX   = 3,
};

enum class ERetargetRotationMode : uint8
{
	Interpolated                   = 0,
	OneToOne                       = 1,
	OneToOneReversed               = 2,
	None                           = 3,
	ERetargetRotationMode_MAX      = 4,
};

enum class EBasicAxis : int32
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NegX                           = 3,
	NegY                           = 4,
	NegZ                           = 5,
	EBasicAxis_MAX                 = 6,
};

enum class EWarpingDirectionSource : int32
{
	Goals                          = 0,
	Chain                          = 1,
	EWarpingDirectionSource_MAX    = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.TargetChainFKSettings
struct FTargetChainFKSettings
{
public:
	bool                                         EnableFK;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ERetargetRotationMode             RotationMode;                                      // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F0A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RotationAlpha;                                     // 0x4(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ERetargetTranslationMode          TranslationMode;                                   // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F0C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TranslationAlpha;                                  // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        PoleVectorMatching;                                // 0x10(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        PoleVectorOffset;                                  // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct IKRig.TargetChainIKSettings
struct FTargetChainIKSettings
{
public:
	bool                                         EnableIK;                                          // 0x0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1F0E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BlendToSource;                                     // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               BlendToSourceWeights;                              // 0x8(0x18)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               StaticOffset;                                      // 0x20(0x18)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               StaticLocalOffset;                                 // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FRotator                              StaticRotationOffset;                              // 0x50(0x18)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ScaleVertical;                                     // 0x68(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        Extension;                                         // 0x6C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bAffectedByIKWarping;                              // 0x70(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F11[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.TargetChainSpeedPlantSettings
struct FTargetChainSpeedPlantSettings
{
public:
	bool                                         EnableSpeedPlanting;                               // 0x0(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F13[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SpeedCurveName;                                    // 0x4(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpeedThreshold;                                    // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnplantStiffness;                                  // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        UnplantCriticalDamping;                            // 0x14(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IKRig.TargetChainSettings
struct FTargetChainSettings
{
public:
	struct FTargetChainFKSettings                FK;                                                // 0x0(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FTargetChainIKSettings                IK;                                                // 0x18(0x78)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FTargetChainSpeedPlantSettings        SpeedPlanting;                                     // 0x90(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.TargetRootSettings
struct FTargetRootSettings
{
public:
	float                                        RotationAlpha;                                     // 0x0(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        TranslationAlpha;                                  // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        BlendToSource;                                     // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F17[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BlendToSourceWeights;                              // 0x10(0x18)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ScaleHorizontal;                                   // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ScaleVertical;                                     // 0x2C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               TranslationOffset;                                 // 0x30(0x18)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        AffectIKHorizontal;                                // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        AffectIKVertical;                                  // 0x64(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IKRig.RetargetGlobalSettings
struct FRetargetGlobalSettings
{
public:
	bool                                         bEnableRoot;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableFK;                                         // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableIK;                                         // 0x2(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bWarping;                                          // 0x3(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EWarpingDirectionSource           DirectionSource;                                   // 0x4(0x4)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EBasicAxis                        ForwardDirection;                                  // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FName                                  DirectionChain;                                    // 0xC(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        WarpForwards;                                      // 0x14(0x4)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        SidewaysOffset;                                    // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        WarpSplay;                                         // 0x1C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct IKRig.RetargetProfile
struct FRetargetProfile
{
public:
	bool                                         bApplyTargetRetargetPose;                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F1B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  TargetRetargetPoseName;                            // 0x4(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bApplySourceRetargetPose;                          // 0xC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F1D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SourceRetargetPoseName;                            // 0x10(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bApplyChainSettings;                               // 0x18(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F1E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FName, struct FTargetChainSettings> ChainSettings;                                     // 0x20(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bApplyRootSettings;                                // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F20[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTargetRootSettings                   RootSettings;                                      // 0x78(0x68)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bApplyGlobalSettings;                              // 0xE0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F21[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRetargetGlobalSettings               GlobalSettings;                                    // 0xE4(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F22[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct IKRig.IKRigGoal
struct FIKRigGoal
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	enum class EIKRigGoalTransformSource         TransformSource;                                   // 0x8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1F24[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        SourceBone;                                        // 0xC(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F25[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FRotator                              Rotation;                                          // 0x38(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        PositionAlpha;                                     // 0x50(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x54(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EIKRigGoalSpace                   PositionSpace;                                     // 0x58(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EIKRigGoalSpace                   RotationSpace;                                     // 0x59(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F27[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FinalBlendedPosition;                              // 0x60(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F29[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 FinalBlendedRotation;                              // 0x80(0x20)(BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x188 (0x1E0 - 0x58)
// ScriptStruct IKRig.AnimNode_IKRig
struct FAnimNode_IKRig : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	class UIKRigDefinition*                      RigDefinitionAsset;                                // 0x68(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FIKRigGoal>                    Goals;                                             // 0x70(0x10)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bStartFromRefPose;                                 // 0x80(0x1)(ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x81(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAlphaBoolEnabled;                                 // 0x82(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F2D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0x84(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x88(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x90(0x48)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AlphaCurveName;                                    // 0xD8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xE0(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x110(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	uint8                                        Pad_1F2F[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        ActualAlpha;                                       // 0x1D8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F30[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x248 (0x258 - 0x10)
// ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseAttachedParent;                                // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F32[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UIKRetargeter*                         IKRetargeterAsset;                                 // 0x20(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRetargetProfile                      CustomRetargetProfile;                             // 0x28(0x108)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bSuppressWarnings;                                 // 0x130(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bCopyCurves;                                       // 0x131(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F33[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UIKRetargetProcessor*                  Processor;                                         // 0x138(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F34[0x118];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.IKRigGoalContainer
struct FIKRigGoalContainer
{
public:
	uint8                                        Pad_1F35[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IKRig.BoneChain
struct FBoneChain
{
public:
	class FName                                  ChainName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FBoneReference                        StartBone;                                         // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FBoneReference                        EndBone;                                           // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FName                                  IKGoalName;                                        // 0x28(0x8)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.RetargetDefinition
struct FRetargetDefinition
{
public:
	class FName                                  RootBone;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FBoneChain>                    BoneChains;                                        // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.GoalBone
struct FGoalBone
{
public:
	uint8                                        Pad_1F36[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IKRig.IKRigInputSkeleton
struct FIKRigInputSkeleton
{
public:
	uint8                                        Pad_1F37[0x38];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct IKRig.IKRigSkeleton
struct FIKRigSkeleton
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                ParentIndices;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<class FName>                          ExcludedBones;                                     // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    CurrentPoseGlobal;                                 // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    CurrentPoseLocal;                                  // 0x40(0x10)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    RefPoseGlobal;                                     // 0x50(0x10)(ConstParm, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F3C[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.RetargetChainMap
struct FRetargetChainMap
{
public:
	class FName                                  SourceChain;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  TargetChain;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.IKRetargetPose
struct FIKRetargetPose
{
public:
	struct FVector                               RootTranslationOffset;                             // 0x0(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TMap<class FName, struct FQuat>              BoneRotationOffsets;                               // 0x18(0x50)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct IKRig.LimbSolverSettings
struct FLimbSolverSettings
{
public:
	float                                        ReachPrecision;                                    // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             HingeRotationAxis;                                 // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F3E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableLimit;                                      // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F40[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinRotationAngle;                                  // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAveragePull;                                      // 0x14(0x1)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F41[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PullDistribution;                                  // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        ReachStepAlpha;                                    // 0x1C(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableTwistCorrection;                            // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x21(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F42[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.LimbLink
struct FLimbLink
{
public:
	uint8                                        Pad_1F43[0x68];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.LimbSolver
struct FLimbSolver
{
public:
	uint8                                        Pad_1F44[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

}


