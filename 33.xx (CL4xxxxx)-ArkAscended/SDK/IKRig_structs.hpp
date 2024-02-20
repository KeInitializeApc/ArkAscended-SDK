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
	bool                                         EnableFK;                                          // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERetargetRotationMode             RotationMode;                                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12FA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RotationAlpha;                                     // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERetargetTranslationMode          TranslationMode;                                   // 0x8(0x1)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12FC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TranslationAlpha;                                  // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PoleVectorMatching;                                // 0x10(0x4)(ConstParm, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PoleVectorOffset;                                  // 0x14(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct IKRig.TargetChainIKSettings
struct FTargetChainIKSettings
{
public:
	bool                                         EnableIK;                                          // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_1300[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BlendToSource;                                     // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               BlendToSourceWeights;                              // 0x8(0x18)(ConstParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               StaticOffset;                                      // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               StaticLocalOffset;                                 // 0x38(0x18)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              StaticRotationOffset;                              // 0x50(0x18)(ConstParm, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ScaleVertical;                                     // 0x68(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Extension;                                         // 0x6C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectedByIKWarping;                              // 0x70(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1302[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.TargetChainSpeedPlantSettings
struct FTargetChainSpeedPlantSettings
{
public:
	bool                                         EnableSpeedPlanting;                               // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1304[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SpeedCurveName;                                    // 0x4(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpeedThreshold;                                    // 0xC(0x4)(ExportObject, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnplantStiffness;                                  // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnplantCriticalDamping;                            // 0x14(0x4)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IKRig.TargetChainSettings
struct FTargetChainSettings
{
public:
	struct FTargetChainFKSettings                FK;                                                // 0x0(0x18)(Edit, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTargetChainIKSettings                IK;                                                // 0x18(0x78)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTargetChainSpeedPlantSettings        SpeedPlanting;                                     // 0x90(0x18)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.TargetRootSettings
struct FTargetRootSettings
{
public:
	float                                        RotationAlpha;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TranslationAlpha;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendToSource;                                     // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1308[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BlendToSourceWeights;                              // 0x10(0x18)(ConstParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ScaleHorizontal;                                   // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ScaleVertical;                                     // 0x2C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               TranslationOffset;                                 // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x48(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AffectIKHorizontal;                                // 0x60(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AffectIKVertical;                                  // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IKRig.RetargetGlobalSettings
struct FRetargetGlobalSettings
{
public:
	bool                                         bEnableRoot;                                       // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableFK;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableIK;                                         // 0x2(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bWarping;                                          // 0x3(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EWarpingDirectionSource           DirectionSource;                                   // 0x4(0x4)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EBasicAxis                        ForwardDirection;                                  // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  DirectionChain;                                    // 0xC(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WarpForwards;                                      // 0x14(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SidewaysOffset;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WarpSplay;                                         // 0x1C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct IKRig.RetargetProfile
struct FRetargetProfile
{
public:
	bool                                         bApplyTargetRetargetPose;                          // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1311[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  TargetRetargetPoseName;                            // 0x4(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplySourceRetargetPose;                          // 0xC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1312[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SourceRetargetPoseName;                            // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyChainSettings;                               // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1313[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<class FName, struct FTargetChainSettings> ChainSettings;                                     // 0x20(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyRootSettings;                                // 0x70(0x1)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1314[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTargetRootSettings                   RootSettings;                                      // 0x78(0x68)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyGlobalSettings;                              // 0xE0(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1315[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRetargetGlobalSettings               GlobalSettings;                                    // 0xE4(0x20)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1316[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct IKRig.IKRigGoal
struct FIKRigGoal
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	enum class EIKRigGoalTransformSource         TransformSource;                                   // 0x8(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1318[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBoneReference                        SourceBone;                                        // 0xC(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_131B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FRotator                              Rotation;                                          // 0x38(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        PositionAlpha;                                     // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x54(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EIKRigGoalSpace                   PositionSpace;                                     // 0x58(0x1)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EIKRigGoalSpace                   RotationSpace;                                     // 0x59(0x1)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_131C[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               FinalBlendedPosition;                              // 0x60(0x18)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_131D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 FinalBlendedRotation;                              // 0x80(0x20)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x188 (0x1E0 - 0x58)
// ScriptStruct IKRig.AnimNode_IKRig
struct FAnimNode_IKRig : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	class UIKRigDefinition*                      RigDefinitionAsset;                                // 0x68(0x8)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FIKRigGoal>                    Goals;                                             // 0x70(0x10)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStartFromRefPose;                                 // 0x80(0x1)(OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x81(0x1)(ExportObject, Net, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAlphaBoolEnabled;                                 // 0x82(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1322[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0x84(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x88(0x8)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x90(0x48)(ConstParm, ExportObject, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AlphaCurveName;                                    // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xE0(0x30)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x110(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_1325[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        ActualAlpha;                                       // 0x1D8(0x4)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1326[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x248 (0x258 - 0x10)
// ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseAttachedParent;                                // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1329[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UIKRetargeter*                         IKRetargeterAsset;                                 // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRetargetProfile                      CustomRetargetProfile;                             // 0x28(0x108)(Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSuppressWarnings;                                 // 0x130(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCopyCurves;                                       // 0x131(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_132B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UIKRetargetProcessor*                  Processor;                                         // 0x138(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_132C[0x118];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.IKRigGoalContainer
struct FIKRigGoalContainer
{
public:
	uint8                                        Pad_132D[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IKRig.BoneChain
struct FBoneChain
{
public:
	class FName                                  ChainName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        StartBone;                                         // 0x8(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneReference                        EndBone;                                           // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  IKGoalName;                                        // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.RetargetDefinition
struct FRetargetDefinition
{
public:
	class FName                                  RootBone;                                          // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBoneChain>                    BoneChains;                                        // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.GoalBone
struct FGoalBone
{
public:
	uint8                                        Pad_1337[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IKRig.IKRigInputSkeleton
struct FIKRigInputSkeleton
{
public:
	uint8                                        Pad_1338[0x38];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct IKRig.IKRigSkeleton
struct FIKRigSkeleton
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ParentIndices;                                     // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ExcludedBones;                                     // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    CurrentPoseGlobal;                                 // 0x30(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    CurrentPoseLocal;                                  // 0x40(0x10)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    RefPoseGlobal;                                     // 0x50(0x10)(Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_133A[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.RetargetChainMap
struct FRetargetChainMap
{
public:
	class FName                                  SourceChain;                                       // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TargetChain;                                       // 0x8(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.IKRetargetPose
struct FIKRetargetPose
{
public:
	struct FVector                               RootTranslationOffset;                             // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, struct FQuat>              BoneRotationOffsets;                               // 0x18(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct IKRig.LimbSolverSettings
struct FLimbSolverSettings
{
public:
	float                                        ReachPrecision;                                    // 0x0(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAxis                             HingeRotationAxis;                                 // 0x4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_133E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableLimit;                                      // 0xC(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_133F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinRotationAngle;                                  // 0x10(0x4)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAveragePull;                                      // 0x14(0x1)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1340[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PullDistribution;                                  // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReachStepAlpha;                                    // 0x1C(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableTwistCorrection;                            // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x21(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1341[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.LimbLink
struct FLimbLink
{
public:
	uint8                                        Pad_1343[0x68];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.LimbSolver
struct FLimbSolver
{
public:
	uint8                                        Pad_1344[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

}


