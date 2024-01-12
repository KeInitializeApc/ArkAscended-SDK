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

	class URootMotionModifier* OnWarpUpdate(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnWarpEnd(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnWarpBegin(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnRootMotionModifierUpdate(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnRootMotionModifierDeactivate(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* OnRootMotionModifierActivate(class UMotionWarpingComponent** MotionWarpingComp);
	class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent** MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// 0x0 (0x28 - 0x28)
// Class MotionWarping.MotionWarpingUtilities
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionWarpingUtilities* GetDefaultObj();

	TArray<struct FMotionWarpingWindowData> GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation);
	TArray<struct FMotionWarpingWindowData> GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation);
	struct FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);
};

// 0x40 (0xF8 - 0xB8)
// Class MotionWarping.MotionWarpingComponent
class UMotionWarpingComponent : public UActorComponent
{
public:
	bool                                         bSearchForWindowsInAnimsWithinMontages;            // 0xB8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3D2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPreUpdate;                                       // 0xC0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class ACharacter>             CharacterOwner;                                    // 0xD0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class URootMotionModifier*>           Modifiers;                                         // 0xD8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FMotionWarpingTarget>          WarpTargets;                                       // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMotionWarpingComponent* GetDefaultObj();

	int32 RemoveWarpTarget();
	void DisableAllRootMotionModifiers();
	struct FTransform AddOrUpdateWarpTargetFromTransform();
	struct FVector AddOrUpdateWarpTargetFromLocationAndRotation(const struct FRotator& TargetRotation);
	struct FVector AddOrUpdateWarpTargetFromLocation();
	class USceneComponent* AddOrUpdateWarpTargetFromComponent(class FName BoneName, bool bFollowComponent);
	struct FMotionWarpingTarget AddOrUpdateWarpTarget();
};

// 0xC0 (0xE8 - 0x28)
// Class MotionWarping.RootMotionModifier
class URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x28(0x8)(Edit, Net, EditFixedSize, Config, EditConst)
	float                                        StartTime;                                         // 0x30(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0x34(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PreviousPosition;                                  // 0x38(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentPosition;                                   // 0x3C(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x40(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_3D9[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            StartTransform;                                    // 0x50(0x60)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ActualStartTime;                                   // 0xB0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnActivateDelegate;                                // 0xB4(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnUpdateDelegate;                                  // 0xC4(0x10)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnDeactivateDelegate;                              // 0xD4(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ERootMotionModifierState          State;                                             // 0xE4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_3DE[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URootMotionModifier* GetDefaultObj();

};

// 0x168 (0x250 - 0xE8)
// Class MotionWarping.RootMotionModifier_Warp
class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                  WarpTargetName;                                    // 0xE8(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EWarpPointAnimProvider            WarpPointAnimProvider;                             // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E2[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WarpPointAnimTransform;                            // 0x100(0x60)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  WarpPointAnimBoneName;                             // 0x160(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWarpTranslation;                                  // 0x168(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIgnoreZAxis;                                      // 0x169(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAlphaBlendOption                 AddTranslationEasingFunc;                          // 0x16A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E5[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           AddTranslationEasingCurve;                         // 0x170(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWarpRotation;                                     // 0x178(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMotionWarpRotationType           RotationType;                                      // 0x179(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E7[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WarpRotationTimeMultiplier;                        // 0x17C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTransform                            CachedTargetTransform;                             // 0x180(0x60)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E8[0x70];                                     // Fixing Size Of Struct > TateDumper <

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

	class URootMotionModifier_Scale* AddRootMotionModifierScale(struct FVector* InScale);
};

// 0x160 (0x3B0 - 0x250)
// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x250(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3FD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          IKBones;                                           // 0x258(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_402[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CachedMeshTransform;                               // 0x270(0x60)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTransform                            CachedMeshRelativeTransform;                       // 0x2D0(0x60)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTransform                            CachedRootMotion;                                  // 0x330(0x60)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
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

	class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp();
};

}


