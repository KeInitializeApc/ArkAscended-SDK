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
	uint8                                        Pad_21BC[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigComponent* GetDefaultObj();

	float SetIKRigGoalTransform(struct FTransform* Transform, float* RotationAlpha);
	float SetIKRigGoalPositionAndRotation(const struct FVector& Position, struct FQuat* Rotation, float* RotationAlpha);
	struct FIKRigGoal SetIKRigGoal();
	void ClearAllGoals();
};

// 0xD8 (0x100 - 0x28)
// Class IKRig.IKRigEffectorGoal
class UIKRigEffectorGoal : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	float                                        PositionAlpha;                                     // 0x38(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x3C(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CurrentTransform;                                  // 0x40(0x60)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FTransform                            InitialTransform;                                  // 0xA0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRigEffectorGoal* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class IKRig.IKRigDefinition
class UIKRigDefinition : public UObject
{
public:
	uint8                                        Pad_21C6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USkeletalMesh>          PreviewSkeletalMesh;                               // 0x30(0x30)(Edit, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	struct FIKRigSkeleton                        Skeleton;                                          // 0x60(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	TArray<class UIKRigEffectorGoal*>            Goals;                                             // 0xD0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0xE0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FRetargetDefinition                   RetargetDefinition;                                // 0xF0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)

	static class UClass* StaticClass();
	static class UIKRigDefinition* GetDefaultObj();

};

// 0x120 (0x148 - 0x28)
// Class IKRig.IKRigProcessor
class UIKRigProcessor : public UObject
{
public:
	uint8                                        Pad_21C8[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRigSolver*>                  Solvers;                                           // 0x60(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_21C9[0xD8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigProcessor* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRigSolver
class UIKRigSolver : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_21CA[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigSolver* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class IKRig.RetargetChainSettings
class URetargetChainSettings : public UObject
{
public:
	class FName                                  SourceChain;                                       // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  TargetChain;                                       // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FTargetChainSettings                  Settings;                                          // 0x38(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class URetargetChainSettings* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class IKRig.RetargetRootSettings
class URetargetRootSettings : public UObject
{
public:
	struct FTargetRootSettings                   Settings;                                          // 0x28(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class URetargetRootSettings* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRetargetGlobalSettings
class UIKRetargetGlobalSettings : public UObject
{
public:
	struct FRetargetGlobalSettings               Settings;                                          // 0x28(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRetargetGlobalSettings* GetDefaultObj();

};

// 0x1F0 (0x218 - 0x28)
// Class IKRig.IKRetargeter
class UIKRetargeter : public UObject
{
public:
	TSoftObjectPtr<class UIKRigDefinition>       SourceIKRigAsset;                                  // 0x28(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UIKRigDefinition>       TargetIKRigAsset;                                  // 0x58(0x30)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FRetargetChainMap>             ChainMapping;                                      // 0x88(0x10)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<class URetargetChainSettings*>        ChainSettings;                                     // 0x98(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class URetargetRootSettings*                 RootSettings;                                      // 0xA8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UIKRetargetGlobalSettings*             GlobalSettings;                                    // 0xB0(0x8)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FName, struct FRetargetProfile>   Profiles;                                          // 0xB8(0x50)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	class FName                                  CurrentProfile;                                    // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    SourceRetargetPoses;                               // 0x110(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    TargetRetargetPoses;                               // 0x160(0x50)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CurrentSourceRetargetPose;                         // 0x1B0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CurrentTargetRetargetPose;                         // 0x1B8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TMap<class FName, struct FIKRetargetPose>    RetargetPoses;                                     // 0x1C0(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CurrentRetargetPose;                               // 0x210(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRetargeter* GetDefaultObj();

	void SetRootSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, struct FTargetRootSettings* RootSettings);
	void SetGlobalSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, struct FRetargetGlobalSettings* GlobalSettings);
	class FName SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile);
	class FName SetChainSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile, struct FTargetChainSettings* ChainSettings);
	class FName SetChainIKSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile);
	class FName SetChainFKSettingsInRetargetProfile(struct FRetargetProfile* RetargetProfile);
	struct FTargetRootSettings GetRootSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile);
	struct FTargetRootSettings GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset);
	struct FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile);
	struct FRetargetGlobalSettings GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset);
	struct FTargetChainSettings GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset);
	struct FTargetChainSettings GetChainSettingsFromRetargetProfile(struct FRetargetProfile* RetargetProfile);
	struct FTargetChainSettings GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset);
};

// 0x348 (0x370 - 0x28)
// Class IKRig.IKRetargetProcessor
class UIKRetargetProcessor : public UObject
{
public:
	uint8                                        Pad_21E5[0x148];                                   // Fixing Size After Last Property  > TateDumper <
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x170(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_21E6[0x1F8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRetargetProcessor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_BodyMoverEffector
class UIKRig_BodyMoverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	float                                        InfluenceMultiplier;                               // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_21E9[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_BodyMoverEffector* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class IKRig.IKRig_BodyMover
class UIKRig_BodyMover : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        PositionAlpha;                                     // 0x38(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PositionPositiveX;                                 // 0x3C(0x4)(Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionNegativeX;                                 // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionPositiveY;                                 // 0x44(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionNegativeY;                                 // 0x48(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionPositiveZ;                                 // 0x4C(0x4)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        PositionNegativeZ;                                 // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x54(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotateXAlpha;                                      // 0x58(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotateYAlpha;                                      // 0x5C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotateZAlpha;                                      // 0x60(0x4)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_21EC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRig_BodyMoverEffector*>      Effectors;                                         // 0x68(0x10)(ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_21ED[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_BodyMover* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class IKRig.IKRig_LimbEffector
class UIKRig_LimbEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class UIKRig_LimbEffector* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class IKRig.IKRig_LimbSolver
class UIKRig_LimbSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReachPrecision;                                    // 0x38(0x4)(ExportObject, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             HingeRotationAxis;                                 // 0x3C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21F2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxIterations;                                     // 0x40(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableLimit;                                      // 0x44(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21F3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinRotationAngle;                                  // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAveragePull;                                      // 0x4C(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21F4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PullDistribution;                                  // 0x50(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ReachStepAlpha;                                    // 0x54(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableTwistCorrection;                            // 0x58(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x59(0x1)(EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21F6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UIKRig_LimbEffector*                   Effector;                                          // 0x60(0x8)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21F7[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_LimbSolver* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class IKRig.IKRig_FBIKEffector
class UIKRig_FBIKEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	float                                        StrengthAlpha;                                     // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x3C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PinRotation;                                       // 0x40(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        IndexInSolver;                                     // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_FBIKEffector* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class IKRig.IKRig_FBIKBoneSettings
class UIKRig_FBIKBoneSettings : public UObject
{
public:
	class FName                                  bone;                                              // 0x28(0x8)(Edit, Net, Parm, OutParm, ReturnParm)
	float                                        RotationStiffness;                                 // 0x30(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PositionStiffness;                                 // 0x34(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    X;                                                 // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_21FB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinX;                                              // 0x3C(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxX;                                              // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    Y;                                                 // 0x44(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_21FD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinY;                                              // 0x48(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxY;                                              // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPBIKLimitType                    Z;                                                 // 0x50(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_2200[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinZ;                                              // 0x54(0x4)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxZ;                                              // 0x58(0x4)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUsePreferredAngles;                               // 0x5C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2201[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PreferredAngles;                                   // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_FBIKBoneSettings* GetDefaultObj();

};

// 0xD0 (0x100 - 0x30)
// Class IKRig.IKRigFBIKSolver
class UIKRigFBIKSolver : public UIKRigSolver
{
public:
	class FName                                  RootBone;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        Iterations;                                        // 0x38(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        MassMultiplier;                                    // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowStretch;                                     // 0x40(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EPBIKRootBehavior                 RootBehavior;                                      // 0x41(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2204[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRootPrePullSettings                  PrePullRootSettings;                               // 0x44(0x20)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PullChainAlpha;                                    // 0x64(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxAngle;                                          // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        OverRelaxation;                                    // 0x6C(0x4)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bStartSolveFromInputPose;                          // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2206[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UIKRig_FBIKEffector*>           Effectors;                                         // 0x78(0x10)(ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	TArray<class UIKRig_FBIKBoneSettings*>       BoneSettings;                                      // 0x88(0x10)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2207[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRigFBIKSolver* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class IKRig.IKRig_PoleSolverEffector
class UIKRig_PoleSolverEffector : public UObject
{
public:
	class FName                                  GoalName;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, Net, DisableEditOnTemplate, Config)
	float                                        Alpha;                                             // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2209[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_PoleSolverEffector* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class IKRig.IKRig_PoleSolver
class UIKRig_PoleSolver : public UIKRigSolver
{
public:
	class FName                                  RootName;                                          // 0x30(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FName                                  EndName;                                           // 0x38(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UIKRig_PoleSolverEffector*             Effector;                                          // 0x40(0x8)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_220B[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_PoleSolver* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class IKRig.IKRig_SetTransformEffector
class UIKRig_SetTransformEffector : public UObject
{
public:
	bool                                         bEnablePosition;                                   // 0x28(0x1)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableRotation;                                   // 0x29(0x1)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_220C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIKRig_SetTransformEffector* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class IKRig.IKRig_SetTransform
class UIKRig_SetTransform : public UIKRigSolver
{
public:
	class FName                                  Goal;                                              // 0x30(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  RootBone;                                          // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UIKRig_SetTransformEffector*           Effector;                                          // 0x40(0x8)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_220F[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIKRig_SetTransform* GetDefaultObj();

};

}


