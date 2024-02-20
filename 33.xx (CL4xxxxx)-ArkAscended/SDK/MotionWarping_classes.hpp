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
	class URootMotionModifier*                   RootMotionModifier;                                // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UAnimNotifyState_MotionWarping* GetDefaultObj();

	class URootMotionModifier* OnWarpUpdate(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnWarpEnd(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnWarpBegin(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnRootMotionModifierUpdate(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnRootMotionModifierDeactivate(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnRootMotionModifierActivate(class UMotionWarpingComponent** MotionWarpingComp);
	float AddRootMotionModifier(class UMotionWarpingComponent** MotionWarpingComp, class URootMotionModifier* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class MotionWarping.MotionWarpingUtilities
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionWarpingUtilities* GetDefaultObj();

	TArray<struct FMotionWarpingWindowData> GetMotionWarpingWindowsFromAnimation();
	TArray<struct FMotionWarpingWindowData> GetMotionWarpingWindowsForWarpTargetFromAnimation();
	float ExtractRootMotionFromAnimation(const struct FTransform& ReturnValue);
};

// 0x40 (0xF8 - 0xB8)
// Class MotionWarping.MotionWarpingComponent
class UMotionWarpingComponent : public UActorComponent
{
public:
	bool                                         bSearchForWindowsInAnimsWithinMontages;            // 0xB8(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_242[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPreUpdate;                                       // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class ACharacter>             CharacterOwner;                                    // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<class URootMotionModifier*>           Modifiers;                                         // 0xD8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMotionWarpingTarget>          WarpTargets;                                       // 0xE8(0x10)(BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMotionWarpingComponent* GetDefaultObj();

	class FName RemoveWarpTarget(int32 ReturnValue);
	void DisableAllRootMotionModifiers();
	struct FTransform AddOrUpdateWarpTargetFromTransform();
	struct FVector AddOrUpdateWarpTargetFromLocationAndRotation(const struct FRotator& TargetRotation);
	struct FVector AddOrUpdateWarpTargetFromLocation();
	bool AddOrUpdateWarpTargetFromComponent(class USceneComponent* Component, class FName* BoneName);
	struct FMotionWarpingTarget AddOrUpdateWarpTarget();
};

// 0xC0 (0xE8 - 0x28)
// Class MotionWarping.RootMotionModifier
class URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x28(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	float                                        StartTime;                                         // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0x34(0x4)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PreviousPosition;                                  // 0x38(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentPosition;                                   // 0x3C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x40(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	uint8                                        Pad_24B[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            StartTransform;                                    // 0x50(0x60)(Edit, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ActualStartTime;                                   // 0xB0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnActivateDelegate;                                // 0xB4(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnUpdateDelegate;                                  // 0xC4(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnDeactivateDelegate;                              // 0xD4(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ERootMotionModifierState          State;                                             // 0xE4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_24E[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URootMotionModifier* GetDefaultObj();

};

// 0x168 (0x250 - 0xE8)
// Class MotionWarping.RootMotionModifier_Warp
class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                  WarpTargetName;                                    // 0xE8(0x8)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EWarpPointAnimProvider            WarpPointAnimProvider;                             // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_252[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WarpPointAnimTransform;                            // 0x100(0x60)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FName                                  WarpPointAnimBoneName;                             // 0x160(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bWarpTranslation;                                  // 0x168(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bIgnoreZAxis;                                      // 0x169(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EAlphaBlendOption                 AddTranslationEasingFunc;                          // 0x16A(0x1)(EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_254[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           AddTranslationEasingCurve;                         // 0x170(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bWarpRotation;                                     // 0x178(0x1)(ConstParm, ExportObject, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EMotionWarpRotationType           RotationType;                                      // 0x179(0x1)(Edit, ConstParm, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_256[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WarpRotationTimeMultiplier;                        // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CachedTargetTransform;                             // 0x180(0x60)(Edit, ExportObject, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_257[0x70];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FVector                               Scale;                                             // 0xE8(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class URootMotionModifier_Scale* GetDefaultObj();

	struct FVector AddRootMotionModifierScale(class UAnimSequenceBase* InAnimation, class URootMotionModifier_Scale* ReturnValue);
};

// 0x160 (0x3B0 - 0x250)
// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x250(0x1)(Edit, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_265[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          IKBones;                                           // 0x258(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_266[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CachedMeshTransform;                               // 0x270(0x60)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CachedMeshRelativeTransform;                       // 0x2D0(0x60)(ConstParm, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CachedRootMotion;                                  // 0x330(0x60)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FAnimSequenceTrackContainer           Result;                                            // 0x390(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

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

	float AddRootMotionModifierSkewWarp(class UAnimSequenceBase* InAnimation, class URootMotionModifier_SkewWarp* ReturnValue);
};

}


