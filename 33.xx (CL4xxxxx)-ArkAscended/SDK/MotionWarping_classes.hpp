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
	class URootMotionModifier*                   RootMotionModifier;                                // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UAnimNotifyState_MotionWarping* GetDefaultObj();

	class UMotionWarpingComponent* OnWarpUpdate(class URootMotionModifier* Modifier);
	class UMotionWarpingComponent* OnWarpEnd(class URootMotionModifier* Modifier);
	class UMotionWarpingComponent* OnWarpBegin(class URootMotionModifier* Modifier);
	class UMotionWarpingComponent* OnRootMotionModifierUpdate(class URootMotionModifier* Modifier);
	class UMotionWarpingComponent* OnRootMotionModifierDeactivate(class URootMotionModifier* Modifier);
	class UMotionWarpingComponent* OnRootMotionModifierActivate(class URootMotionModifier* Modifier);
	class URootMotionModifier* AddRootMotionModifier(class UAnimSequenceBase** Animation, float StartTime, float EndTime);
};

// 0x0 (0x28 - 0x28)
// Class MotionWarping.MotionWarpingUtilities
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionWarpingUtilities* GetDefaultObj();

	void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase** Animation, const TArray<struct FMotionWarpingWindowData>& OutWindows);
	void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase** Animation, class FName WarpTargetName, const TArray<struct FMotionWarpingWindowData>& OutWindows);
	struct FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase** Animation, float StartTime, float EndTime);
};

// 0x40 (0xF8 - 0xB8)
// Class MotionWarping.MotionWarpingComponent
class UMotionWarpingComponent : public UActorComponent
{
public:
	bool                                         bSearchForWindowsInAnimsWithinMontages;            // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_135[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPreUpdate;                                       // 0xC0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class ACharacter>             CharacterOwner;                                    // 0xD0(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<class URootMotionModifier*>           Modifiers;                                         // 0xD8(0x10)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMotionWarpingTarget>          WarpTargets;                                       // 0xE8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMotionWarpingComponent* GetDefaultObj();

	int32 RemoveWarpTarget(class FName WarpTargetName);
	void DisableAllRootMotionModifiers();
	void AddOrUpdateWarpTargetFromTransform(class FName WarpTargetName, const struct FTransform& TargetTransform);
	struct FRotator AddOrUpdateWarpTargetFromLocationAndRotation(class FName WarpTargetName, const struct FVector& TargetLocation);
	void AddOrUpdateWarpTargetFromLocation(class FName WarpTargetName, const struct FVector& TargetLocation);
	class USceneComponent* AddOrUpdateWarpTargetFromComponent(class FName WarpTargetName, class FName* BoneName, bool bFollowComponent);
	void AddOrUpdateWarpTarget(const struct FMotionWarpingTarget& WarpTarget);
};

// 0xC0 (0xE8 - 0x28)
// Class MotionWarping.RootMotionModifier
class URootMotionModifier : public UObject
{
public:
	TWeakObjectPtr<class UAnimSequenceBase>      Animation;                                         // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
	float                                        StartTime;                                         // 0x30(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PreviousPosition;                                  // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentPosition;                                   // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_140[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            StartTransform;                                    // 0x50(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        ActualStartTime;                                   // 0xB0(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnActivateDelegate;                                // 0xB4(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnUpdateDelegate;                                  // 0xC4(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           OnDeactivateDelegate;                              // 0xD4(0x10)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class ERootMotionModifierState          State;                                             // 0xE4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_143[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URootMotionModifier* GetDefaultObj();

};

// 0x168 (0x250 - 0xE8)
// Class MotionWarping.RootMotionModifier_Warp
class URootMotionModifier_Warp : public URootMotionModifier
{
public:
	class FName                                  WarpTargetName;                                    // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EWarpPointAnimProvider            WarpPointAnimProvider;                             // 0xF0(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_145[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WarpPointAnimTransform;                            // 0x100(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class FName                                  WarpPointAnimBoneName;                             // 0x160(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bWarpTranslation;                                  // 0x168(0x1)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bIgnoreZAxis;                                      // 0x169(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EAlphaBlendOption                 AddTranslationEasingFunc;                          // 0x16A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_147[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           AddTranslationEasingCurve;                         // 0x170(0x8)(Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bWarpRotation;                                     // 0x178(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EMotionWarpRotationType           RotationType;                                      // 0x179(0x1)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_148[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        WarpRotationTimeMultiplier;                        // 0x17C(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CachedTargetTransform;                             // 0x180(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_149[0x70];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FVector                               Scale;                                             // 0xE8(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class URootMotionModifier_Scale* GetDefaultObj();

	class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent** InMotionWarpingComp, float* InStartTime, float* InEndTime, struct FVector* InScale);
};

// 0x160 (0x3B0 - 0x250)
// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
public:
	bool                                         bWarpIKBones;                                      // 0x250(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_152[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          IKBones;                                           // 0x258(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_153[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CachedMeshTransform;                               // 0x270(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CachedMeshRelativeTransform;                       // 0x2D0(0x60)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CachedRootMotion;                                  // 0x330(0x60)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FAnimSequenceTrackContainer           Result;                                            // 0x390(0x20)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

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

	class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent** InMotionWarpingComp, float* InStartTime, float* InEndTime, struct FTransform* InWarpPointAnimTransform, class FName* InWarpPointAnimBoneName, bool* bInWarpTranslation, bool* bInIgnoreZAxis, bool* bInWarpRotation, enum class EMotionWarpRotationType* InRotationType, float* InWarpRotationTimeMultiplier);
};

}


