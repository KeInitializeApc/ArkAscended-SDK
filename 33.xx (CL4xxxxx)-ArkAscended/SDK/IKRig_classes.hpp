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

	void AddIKGoals(TMap<class FName, struct FIKRigGoal>* OutGoals);
};

// 0x18 (0xD0 - 0xB8)
// Class IKRig.IKRigComponent
class UIKRigComponent : public UActorComponent
{
public:
	uint8                                        Pad_1E95[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigComponent* GetDefaultObj();

	float SetIKRigGoalTransform(class FName* GoalName, struct FTransform* Transform, float PositionAlpha);
	float SetIKRigGoalPositionAndRotation(class FName* GoalName, const struct FVector& Position, struct FQuat* Rotation, float PositionAlpha);
	void SetIKRigGoal(struct FIKRigGoal* Goal);
	void ClearAllGoals();
};

// 0xD8 (0x100 - 0x28)
// Class IKRig.IKRigEffectorGoal
class UIKRigEffectorGoal : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	float                                        PositionAlpha;                                     // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x3C(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CurrentTransform;                                  // 0x40(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            InitialTransform;                                  // 0xA0(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRigEffectorGoal* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class IKRig.IKRigDefinition
class UIKRigDefinition : public UObject
{
public:
	uint8                                        Pad_1E99[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USkeletalMesh>          PreviewSkeletalMesh;                               // 0x30(0x30)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, DuplicateTransient)
	struct FIKRigSkeleton                        Skeleton;                                          // 0x60(0x70)(BlueprintVisible, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	TArray<class UIKRigEffectorGoal*>            Goals;                                             // 0xD0(0x10)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0xE0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FRetargetDefinition                   RetargetDefinition;                                // 0xF0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)

	static class UClass* StaticClass();
	static class UIKRigDefinition* GetDefaultObj();

};

// 0x120 (0x148 - 0x28)
// Class IKRig.IKRigProcessor
class UIKRigProcessor : public UObject
{
public:
	uint8                                        Pad_1E9B[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E9C[0xD8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigProcessor* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRigSolver
class UIKRigSolver : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_1E9F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigSolver* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class IKRig.RetargetChainSettings
class URetargetChainSettings : public UObject
{
public:
	class FName                                  SourceChain;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  TargetChain;                                       // 0x30(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FTargetChainSettings                  Settings;                                          // 0x38(0xA8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class URetargetChainSettings* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class IKRig.RetargetRootSettings
class URetargetRootSettings : public UObject
{
public:
	struct FTargetRootSettings                   Settings;                                          // 0x28(0x68)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class URetargetRootSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRetargetGlobalSettings
class UIKRetargetGlobalSettings : public UObject
{
public:
	struct FRetargetGlobalSettings               Settings;                                          // 0x28(0x20)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRetargetGlobalSettings* GetDefaultObj();

};

// 0x1F0 (0x218 - 0x28)
// Class IKRig.IKRetargeter
class UIKRetargeter : public UObject
{
public:
	TSoftObjectPtr<class UIKRigDefinition>       SourceIKRigAsset;                                  // 0x28(0x30)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UIKRigDefinition>       TargetIKRigAsset;                                  // 0x58(0x30)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FRetargetChainMap>             ChainMapping;                                      // 0x88(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<class URetargetChainSettings*>        ChainSettings;                                     // 0x98(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class URetargetRootSettings*                 RootSettings;                                      // 0xA8(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UIKRetargetGlobalSettings*             GlobalSettings;                                    // 0xB0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TMap<class FName, struct FRetargetProfile>   Profiles;                                          // 0xB8(0x50)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class FName                                  CurrentProfile;                                    // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    SourceRetargetPoses;                               // 0x110(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    TargetRetargetPoses;                               // 0x160(0x50)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CurrentSourceRetargetPose;                         // 0x1B0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CurrentTargetRetargetPose;                         // 0x1B8(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    RetargetPoses;                                     // 0x1C0(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CurrentRetargetPose;                               // 0x210(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRetargeter* GetDefaultObj();

	struct FTargetRootSettings SetRootSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile);
	struct FRetargetGlobalSettings SetGlobalSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile);
	void SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, struct FTargetChainSpeedPlantSettings* SpeedPlantSettings, class FName* TargetChainName);
	struct FTargetChainSettings SetChainSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, class FName* TargetChainName);
	void SetChainIKSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, struct FTargetChainIKSettings* IKSettings, class FName* TargetChainName);
	void SetChainFKSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, struct FTargetChainFKSettings* FKSettings, class FName* TargetChainName);
	void GetRootSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FTargetRootSettings& ReturnValue);
	class UIKRetargeter* GetRootSettingsFromRetargetAsset(class FName* OptionalProfileName, struct FTargetRootSettings* OutSettings);
	void GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile, const struct FRetargetGlobalSettings& ReturnValue);
	class UIKRetargeter* GetGlobalSettingsFromRetargetAsset(class FName* OptionalProfileName, struct FRetargetGlobalSettings* OutSettings);
	class UIKRetargeter* GetChainUsingGoalFromRetargetAsset(class FName IKGoalName, const struct FTargetChainSettings& ReturnValue);
	void GetChainSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile, class FName* TargetChainName, const struct FTargetChainSettings& ReturnValue);
	class UIKRetargeter* GetChainSettingsFromRetargetAsset(class FName* TargetChainName, class FName* OptionalProfileName, const struct FTargetChainSettings& ReturnValue);
};

// 0x348 (0x370 - 0x28)
// Class IKRig.IKRetargetProcessor
class UIKRetargetProcessor : public UObject
{
public:
	uint8                                        Pad_1ECF[0x148];                                   // Fixing Size After Last Property  > TateDumper <
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x170(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	uint8                                        Pad_1ED0[0x1F8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRetargetProcessor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_BodyMoverEffector
class UIKRig_BodyMoverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	float                                        InfluenceMultiplier;                               // 0x38(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1ED3[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_BodyMoverEffector* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class IKRig.IKRig_BodyMover
class UIKRig_BodyMover : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	float                                        PositionAlpha;                                     // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PositionPositiveX;                                 // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionNegativeX;                                 // 0x40(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionPositiveY;                                 // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionNegativeY;                                 // 0x48(0x4)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionPositiveZ;                                 // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionNegativeZ;                                 // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x54(0x4)(Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        RotateXAlpha;                                      // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        RotateYAlpha;                                      // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        RotateZAlpha;                                      // 0x60(0x4)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1ED9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRig_BodyMoverEffector*>      Effectors;                                         // 0x68(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1EDA[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_BodyMover* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IKRig.IKRig_LimbEffector
class UIKRig_LimbEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UIKRig_LimbEffector* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class IKRig.IKRig_LimbSolver
class UIKRig_LimbSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(ConstParm, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReachPrecision;                                    // 0x38(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             HingeRotationAxis;                                 // 0x3C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableLimit;                                      // 0x44(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinRotationAngle;                                  // 0x48(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAveragePull;                                      // 0x4C(0x1)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PullDistribution;                                  // 0x50(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        ReachStepAlpha;                                    // 0x54(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableTwistCorrection;                            // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x59(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UIKRig_LimbEffector*                   Effector;                                          // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE5[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_LimbSolver* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRig_FBIKEffector
class UIKRig_FBIKEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	float                                        StrengthAlpha;                                     // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x3C(0x4)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PinRotation;                                       // 0x40(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        IndexInSolver;                                     // 0x44(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_FBIKEffector* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class IKRig.IKRig_FBIKBoneSettings
class UIKRig_FBIKBoneSettings : public UObject
{
public:
	class FName                                  bone;                                              // 0x28(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	float                                        RotationStiffness;                                 // 0x30(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PositionStiffness;                                 // 0x34(0x4)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    X;                                                 // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1EEE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinX;                                              // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxX;                                              // 0x40(0x4)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    Y;                                                 // 0x44(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1EEF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinY;                                              // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxY;                                              // 0x4C(0x4)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    Z;                                                 // 0x50(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_1EF0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinZ;                                              // 0x54(0x4)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxZ;                                              // 0x58(0x4)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUsePreferredAngles;                               // 0x5C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EF2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PreferredAngles;                                   // 0x60(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_FBIKBoneSettings* GetDefaultObj();

};

// 0xD0 (0x100 - 0x30)
// Class IKRig.IKRigFBIKSolver
class UIKRigFBIKSolver : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	int32                                        Iterations;                                        // 0x38(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	float                                        MassMultiplier;                                    // 0x3C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowStretch;                                     // 0x40(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x41(0x1)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EF7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0x44(0x20)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x64(0x4)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxAngle;                                          // 0x68(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        OverRelaxation;                                    // 0x6C(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bStartSolveFromInputPose;                          // 0x70(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EF8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRig_FBIKEffector*>           Effectors;                                         // 0x78(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	TArray<class UIKRig_FBIKBoneSettings*>       BoneSettings;                                      // 0x88(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EF9[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigFBIKSolver* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_PoleSolverEffector
class UIKRig_PoleSolverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	float                                        Alpha;                                             // 0x38(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EFD[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_PoleSolverEffector* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class IKRig.IKRig_PoleSolver
class UIKRig_PoleSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(ConstParm, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  EndName;                                           // 0x38(0x8)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UIKRig_PoleSolverEffector*             Effector;                                          // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EFF[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_PoleSolver* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRig_SetTransformEffector
class UIKRig_SetTransformEffector : public UObject
{
public:
	bool                                         bEnablePosition;                                   // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableRotation;                                   // 0x29(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F01[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_SetTransformEffector* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class IKRig.IKRig_SetTransform
class UIKRig_SetTransform : public UIKRigSolver
{
public:
	class FName                                  Goal;                                              // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  RootBone;                                          // 0x38(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UIKRig_SetTransformEffector*           Effector;                                          // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F05[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_SetTransform* GetDefaultObj();

};

}


