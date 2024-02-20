#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class IKRig.IKGoalCreatorInterface
class IIKGoalCreatorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIKGoalCreatorInterface* GetDefaultObj();

	TMap<class FName, struct FIKRigGoal> AddIKGoals();
};

// 0x18 (0xD0 - 0xB8)
// Class IKRig.IKRigComponent
class UIKRigComponent : public UActorComponent
{
public:
	uint8                                        Pad_1254[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigComponent* GetDefaultObj();

	class FName SetIKRigGoalTransform(struct FTransform* Transform, float* PositionAlpha, float RotationAlpha);
	class FName SetIKRigGoalPositionAndRotation(struct FVector* Position, struct FQuat* Rotation, float* PositionAlpha, float RotationAlpha);
	struct FIKRigGoal SetIKRigGoal();
	void ClearAllGoals();
};

// 0xD8 (0x100 - 0x28)
// Class IKRig.IKRigEffectorGoal
class UIKRigEffectorGoal : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	float                                        PositionAlpha;                                     // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            CurrentTransform;                                  // 0x40(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            InitialTransform;                                  // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRigEffectorGoal* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class IKRig.IKRigDefinition
class UIKRigDefinition : public UObject
{
public:
	uint8                                        Pad_125A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USkeletalMesh>          PreviewSkeletalMesh;                               // 0x30(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	struct FIKRigSkeleton                        Skeleton;                                          // 0x60(0x70)(ExportObject, Net, EditFixedSize, Transient, EditConst, GlobalConfig, DuplicateTransient)
	TArray<class UIKRigEffectorGoal*>            Goals;                                             // 0xD0(0x10)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0xE0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRetargetDefinition                   RetargetDefinition;                                // 0xF0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config)

	static class UClass* StaticClass();
	static class UIKRigDefinition* GetDefaultObj();

};

// 0x120 (0x148 - 0x28)
// Class IKRig.IKRigProcessor
class UIKRigProcessor : public UObject
{
public:
	uint8                                        Pad_1262[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0x60(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1263[0xD8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigProcessor* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRigSolver
class UIKRigSolver : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1269[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigSolver* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class IKRig.RetargetChainSettings
class URetargetChainSettings : public UObject
{
public:
	class FName                                  SourceChain;                                       // 0x28(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TargetChain;                                       // 0x30(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTargetChainSettings                  Settings;                                          // 0x38(0xA8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class URetargetChainSettings* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class IKRig.RetargetRootSettings
class URetargetRootSettings : public UObject
{
public:
	struct FTargetRootSettings                   Settings;                                          // 0x28(0x68)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class URetargetRootSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRetargetGlobalSettings
class UIKRetargetGlobalSettings : public UObject
{
public:
	struct FRetargetGlobalSettings               Settings;                                          // 0x28(0x20)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRetargetGlobalSettings* GetDefaultObj();

};

// 0x1F0 (0x218 - 0x28)
// Class IKRig.IKRetargeter
class UIKRetargeter : public UObject
{
public:
	TSoftObjectPtr<class UIKRigDefinition>       SourceIKRigAsset;                                  // 0x28(0x30)(Edit, Net, Config, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UIKRigDefinition>       TargetIKRigAsset;                                  // 0x58(0x30)(ExportObject, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)
	TArray<struct FRetargetChainMap>             ChainMapping;                                      // 0x88(0x10)(Edit, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)
	TArray<class URetargetChainSettings*>        ChainSettings;                                     // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class URetargetRootSettings*                 RootSettings;                                      // 0xA8(0x8)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UIKRetargetGlobalSettings*             GlobalSettings;                                    // 0xB0(0x8)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, struct FRetargetProfile>   Profiles;                                          // 0xB8(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class FName                                  CurrentProfile;                                    // 0x108(0x8)(ConstParm, Config, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    SourceRetargetPoses;                               // 0x110(0x50)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    TargetRetargetPoses;                               // 0x160(0x50)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  CurrentSourceRetargetPose;                         // 0x1B0(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  CurrentTargetRetargetPose;                         // 0x1B8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    RetargetPoses;                                     // 0x1C0(0x50)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  CurrentRetargetPose;                               // 0x210(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRetargeter* GetDefaultObj();

	struct FRetargetProfile SetRootSettingsInRetargetProfile(const struct FTargetRootSettings& RootSettings);
	struct FRetargetGlobalSettings SetGlobalSettingsInRetargetProfile();
	class FName SetChainSpeedPlantSettingsInRetargetProfile();
	class FName SetChainSettingsInRetargetProfile(const struct FTargetChainSettings& ChainSettings);
	class FName SetChainIKSettingsInRetargetProfile();
	class FName SetChainFKSettingsInRetargetProfile();
	struct FRetargetProfile GetRootSettingsFromRetargetProfile(const struct FTargetRootSettings& ReturnValue);
	struct FTargetRootSettings GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset);
	struct FRetargetProfile GetGlobalSettingsFromRetargetProfile(const struct FRetargetGlobalSettings& ReturnValue);
	struct FRetargetGlobalSettings GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset);
	void GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName* IKGoalName, const struct FTargetChainSettings& ReturnValue);
	class FName GetChainSettingsFromRetargetProfile(const struct FTargetChainSettings& ReturnValue);
	class FName GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, const struct FTargetChainSettings& ReturnValue);
};

// 0x348 (0x370 - 0x28)
// Class IKRig.IKRetargetProcessor
class UIKRetargetProcessor : public UObject
{
public:
	uint8                                        Pad_12BE[0x148];                                   // Fixing Size After Last Property  > TateDumper <
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x170(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_12BF[0x1F8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRetargetProcessor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_BodyMoverEffector
class UIKRig_BodyMoverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	float                                        InfluenceMultiplier;                               // 0x38(0x4)(ConstParm, ExportObject, Net, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12C6[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_BodyMoverEffector* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class IKRig.IKRig_BodyMover
class UIKRig_BodyMover : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionAlpha;                                     // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionPositiveX;                                 // 0x3C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        PositionNegativeX;                                 // 0x40(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        PositionPositiveY;                                 // 0x44(0x4)(ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        PositionNegativeY;                                 // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        PositionPositiveZ;                                 // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        PositionNegativeZ;                                 // 0x50(0x4)(ConstParm, ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x54(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotateXAlpha;                                      // 0x58(0x4)(Edit, ConstParm, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        RotateYAlpha;                                      // 0x5C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)
	float                                        RotateZAlpha;                                      // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12D0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRig_BodyMoverEffector*>      Effectors;                                         // 0x68(0x10)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_12D1[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_BodyMover* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IKRig.IKRig_LimbEffector
class UIKRig_LimbEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UIKRig_LimbEffector* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class IKRig.IKRig_LimbSolver
class UIKRig_LimbSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReachPrecision;                                    // 0x38(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAxis                             HingeRotationAxis;                                 // 0x3C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12D5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableLimit;                                      // 0x44(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12D6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinRotationAngle;                                  // 0x48(0x4)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAveragePull;                                      // 0x4C(0x1)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12D7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PullDistribution;                                  // 0x50(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReachStepAlpha;                                    // 0x54(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableTwistCorrection;                            // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x59(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12DB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UIKRig_LimbEffector*                   Effector;                                          // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12DC[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_LimbSolver* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRig_FBIKEffector
class UIKRig_FBIKEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	float                                        StrengthAlpha;                                     // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PinRotation;                                       // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        IndexInSolver;                                     // 0x44(0x4)(ConstParm, BlueprintVisible, Parm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_FBIKEffector* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class IKRig.IKRig_FBIKBoneSettings
class UIKRig_FBIKBoneSettings : public UObject
{
public:
	class FName                                  bone;                                              // 0x28(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	float                                        RotationStiffness;                                 // 0x30(0x4)(Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositionStiffness;                                 // 0x34(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPBIKLimitType                    X;                                                 // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_12E0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinX;                                              // 0x3C(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxX;                                              // 0x40(0x4)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPBIKLimitType                    Y;                                                 // 0x44(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_12E2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinY;                                              // 0x48(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxY;                                              // 0x4C(0x4)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPBIKLimitType                    Z;                                                 // 0x50(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_12E3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinZ;                                              // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxZ;                                              // 0x58(0x4)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsePreferredAngles;                               // 0x5C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12E5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PreferredAngles;                                   // 0x60(0x18)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_FBIKBoneSettings* GetDefaultObj();

};

// 0xD0 (0x100 - 0x30)
// Class IKRig.IKRigFBIKSolver
class UIKRigFBIKSolver : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Iterations;                                        // 0x38(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MassMultiplier;                                    // 0x3C(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowStretch;                                     // 0x40(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x41(0x1)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12E9[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0x44(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x64(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxAngle;                                          // 0x68(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OverRelaxation;                                    // 0x6C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStartSolveFromInputPose;                          // 0x70(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12EC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRig_FBIKEffector*>           Effectors;                                         // 0x78(0x10)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class UIKRig_FBIKBoneSettings*>       BoneSettings;                                      // 0x88(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12ED[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigFBIKSolver* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_PoleSolverEffector
class UIKRig_PoleSolverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	float                                        Alpha;                                             // 0x38(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12EE[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_PoleSolverEffector* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class IKRig.IKRig_PoleSolver
class UIKRig_PoleSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EndName;                                           // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, Config, InstancedReference, SubobjectReference)
	class UIKRig_PoleSolverEffector*             Effector;                                          // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12F0[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_PoleSolver* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRig_SetTransformEffector
class UIKRig_SetTransformEffector : public UObject
{
public:
	bool                                         bEnablePosition;                                   // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableRotation;                                   // 0x29(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0x2C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_SetTransformEffector* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class IKRig.IKRig_SetTransform
class UIKRig_SetTransform : public UIKRigSolver
{
public:
	class FName                                  Goal;                                              // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  RootBone;                                          // 0x38(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UIKRig_SetTransformEffector*           Effector;                                          // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12F6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_SetTransform* GetDefaultObj();

};

}


