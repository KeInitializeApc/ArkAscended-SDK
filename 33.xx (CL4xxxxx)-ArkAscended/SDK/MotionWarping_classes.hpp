#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class MotionWarping.AnimNotifyState_MotionWarping
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
public:
	class URootMotionModifier*                   RootMotionModifier;                                // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UAnimNotifyState_MotionWarping* GetDefaultObj();

	class UMotionWarpingComponent* OnWarpUpdate(class URootMotionModifier** Modifier);
	class UMotionWarpingComponent* OnWarpEnd(class URootMotionModifier** Modifier);
	class UMotionWarpingComponent* OnWarpBegin(class URootMotionModifier** Modifier);
	class UMotionWarpingComponent* OnRootMotionModifierUpdate(class URootMotionModifier** Modifier);
	class UMotionWarpingComponent* OnRootMotionModifierDeactivate(class URootMotionModifier** Modifier);
	class UMotionWarpingComponent* OnRootMotionModifierActivate(class URootMotionModifier** Modifier);
	float AddRootMotionModifier(class UAnimSequenceBase* Animation, class URootMotionModifier** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class MotionWarping.MotionWarpingUtilities
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionWarpingUtilities* GetDefaultObj();

	void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows);
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, class FName* WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows);
	float ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, struct FTransform* ReturnValue);
};

// 0x40 (0xF8 - 0xB8)
// Class MotionWarping.MotionWarpingComponent
class UMotionWarpingComponent : public UActorComponent
{
public:
	bool                                         bSearchForWindowsInAnimsWithinMontages;            // 0xB8(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPreUpdate;                                       // 0xC0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class ACharacter>             CharacterOwner;                                    // 0xD0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class URootMotionModifier*>           Modifiers;                                         // 0xD8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FMotionWarpingTarget>          WarpTargets;                                       // 0xE8(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMotionWarpingComponent* GetDefaultObj();

	void RemoveWarpTarget(class FName* WarpTargetName, int32* ReturnValue);
	void DisableAllRootMotionModifiers();
	void AddOrUpdateWarpTargetFromTransform(class FName* WarpTargetName, struct FTransform* TargetTransform);
	struct FRotator AddOrUpdateWarpTargetFromLocationAndRotation(class FName* WarpTargetName, struct FVector* TargetLocation);
	void AddOrUpdateWarpTargetFromLocation(class FName* WarpTargetName, struct FVector* TargetLocation);
	bool AddOrUpdateWarpTargetFromComponent(class FName* WarpTargetName, class USceneComponent** Component, class FName BoneName);
	void AddOrUpdateWarpTarget(struct FMotionWarpingTarget* WarpTarget);
};

// 0xC0 (0xE8 - 0x28)
// Class MotionWarping.RootMotionModifier
class URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x28(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	float                                        StartTime;                                         // 0x30(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PreviousPosition;                                  // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentPosition;                                   // 0x3C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x40(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2B7[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            StartTransform;                                    // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ActualStartTime;                                   // 0xB0(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnActivateDelegate;                                // 0xB4(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnUpdateDelegate;                                  // 0xC4(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnDeactivateDelegate;                              // 0xD4(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERootMotionModifierState          State;                                             // 0xE4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_2B9[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URootMotionModifier* GetDefaultObj();

};

// 0x168 (0x250 - 0xE8)
// Class MotionWarping.RootMotionModifier_Warp
class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                  WarpTargetName;                                    // 0xE8(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EWarpPointAnimProvider            WarpPointAnimProvider;                             // 0xF0(0x1)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BA[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WarpPointAnimTransform;                            // 0x100(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  WarpPointAnimBoneName;                             // 0x160(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWarpTranslation;                                  // 0x168(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIgnoreZAxis;                                      // 0x169(0x1)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAlphaBlendOption                 AddTranslationEasingFunc;                          // 0x16A(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BD[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           AddTranslationEasingCurve;                         // 0x170(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWarpRotation;                                     // 0x178(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMotionWarpRotationType           RotationType;                                      // 0x179(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BF[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WarpRotationTimeMultiplier;                        // 0x17C(0x4)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTransform                            CachedTargetTransform;                             // 0x180(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C0[0x70];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URootMotionModifier_Warp* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class MotionWarping.RootMotionModifier_SimpleWarp
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{
public:

	static class UClass* StaticClass();
	static class URootMotionModifier_SimpleWarp* GetDefaultObj();

};

// 0x18 (0x100 - 0xE8)
// Class MotionWarping.RootMotionModifier_Scale
class URootMotionModifier_Scale : public URootMotionModifier
{
public:
	struct FVector                               Scale;                                             // 0xE8(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class URootMotionModifier_Scale* GetDefaultObj();

	struct FVector AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase** InAnimation, float InStartTime, float InEndTime, class URootMotionModifier_Scale** ReturnValue);
};

// 0x160 (0x3B0 - 0x250)
// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D0[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          IKBones;                                           // 0x258(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D1[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CachedMeshTransform;                               // 0x270(0x60)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTransform                            CachedMeshRelativeTransform;                       // 0x2D0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTransform                            CachedRootMotion;                                  // 0x330(0x60)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FAnimSequenceTrackContainer           Result;                                            // 0x390(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class URootMotionModifier_AdjustmentBlendWarp* GetDefaultObj();

};

// 0x0 (0x250 - 0x250)
// Class MotionWarping.RootMotionModifier_SkewWarp
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{
public:

	static class UClass* StaticClass();
	static class URootMotionModifier_SkewWarp* GetDefaultObj();

	void AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase** InAnimation, float InStartTime, float InEndTime, class FName* InWarpTargetName, enum class EWarpPointAnimProvider* InWarpPointAnimProvider, struct FTransform* InWarpPointAnimTransform, class FName* InWarpPointAnimBoneName, bool* bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier, class URootMotionModifier_SkewWarp** ReturnValue);
};

}


