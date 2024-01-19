#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.BlendSpaceLibrary
class UBlendSpaceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlendSpaceLibrary* GetDefaultObj();

	struct FVector SnapToPosition(struct FBlendSpaceReference* BlendSpace);
	void GetPosition(struct FBlendSpaceReference* BlendSpace, const struct FVector& ReturnValue);
	void GetFilteredPosition(struct FBlendSpaceReference* BlendSpace, const struct FVector& ReturnValue);
	struct FAnimNodeReference ConvertToBlendSpacePure(struct FBlendSpaceReference* BlendSpace, bool* Result);
	struct FAnimNodeReference ConvertToBlendSpace(enum class EAnimNodeReferenceConversionResult* Result, const struct FBlendSpaceReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimationStateMachineLibrary
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimationStateMachineLibrary* GetDefaultObj();

	class UCurveFloat* SetState(const struct FAnimUpdateContext& UpdateContext, float Duration);
	struct FAnimationStateResultReference IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, bool ReturnValue);
	struct FAnimationStateResultReference IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, bool ReturnValue);
	struct FAnimationStateMachineReference GetState(const struct FAnimUpdateContext& UpdateContext, class FName ReturnValue);
	struct FAnimationStateResultReference GetRelevantAnimTimeRemainingFraction(const struct FAnimUpdateContext& UpdateContext, float ReturnValue);
	struct FAnimationStateResultReference GetRelevantAnimTimeRemaining(const struct FAnimUpdateContext& UpdateContext, float ReturnValue);
	struct FAnimNodeReference ConvertToAnimationStateResultPure(const struct FAnimationStateResultReference& AnimationState, bool* Result);
	struct FAnimNodeReference ConvertToAnimationStateResult(const struct FAnimationStateResultReference& AnimationState, enum class EAnimNodeReferenceConversionResult* Result);
	struct FAnimNodeReference ConvertToAnimationStateMachinePure(const struct FAnimationStateMachineReference& AnimationState, bool* Result);
	struct FAnimNodeReference ConvertToAnimationStateMachine(const struct FAnimationStateMachineReference& AnimationState, enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimExecutionContextLibrary
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimExecutionContextLibrary* GetDefaultObj();

	struct FAnimUpdateContext GetDeltaTime(float ReturnValue);
	struct FAnimUpdateContext GetCurrentWeight(float ReturnValue);
	int32 GetAnimNodeReference(const struct FAnimNodeReference& ReturnValue);
	struct FAnimExecutionContext GetAnimInstance(class UAnimInstance* ReturnValue);
	struct FAnimExecutionContext ConvertToUpdateContext(enum class EAnimExecutionContextConversionResult* Result, const struct FAnimUpdateContext& ReturnValue);
	struct FAnimExecutionContext ConvertToPoseContext(enum class EAnimExecutionContextConversionResult* Result, const struct FAnimPoseContext& ReturnValue);
	struct FAnimExecutionContext ConvertToInitializationContext(enum class EAnimExecutionContextConversionResult* Result, const struct FAnimInitializationContext& ReturnValue);
	struct FAnimExecutionContext ConvertToComponentSpacePoseContext(enum class EAnimExecutionContextConversionResult* Result, const struct FAnimComponentSpacePoseContext& ReturnValue);
};

// 0x8 (0x48 - 0x40)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	class FName                                  NotifyName;                                        // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotify* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	class FName                                  NotifyName;                                        // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotifyWindow* GetDefaultObj();

};

// 0x8 (0x350 - 0x348)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_13D4[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimSequencerInstance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.BlendSpacePlayerLibrary
class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlendSpacePlayerLibrary* GetDefaultObj();

	struct FVector SnapToPosition();
	struct FBlendSpacePlayerReference ShouldResetPlayTimeWhenBlendSpaceChanges(bool ReturnValue);
	bool SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& ReturnValue);
	float SetPlayRate(const struct FBlendSpacePlayerReference& ReturnValue);
	bool SetLoop(const struct FBlendSpacePlayerReference& ReturnValue);
	float SetBlendSpaceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, class UBlendSpace** BlendSpace, const struct FBlendSpacePlayerReference& ReturnValue);
	struct FBlendSpacePlayerReference SetBlendSpace(class UBlendSpace** BlendSpace, const struct FBlendSpacePlayerReference& ReturnValue);
	struct FBlendSpacePlayerReference GetStartPosition(float ReturnValue);
	struct FBlendSpacePlayerReference GetPosition(const struct FVector& ReturnValue);
	struct FBlendSpacePlayerReference GetPlayRate(float ReturnValue);
	struct FBlendSpacePlayerReference GetLoop(bool ReturnValue);
	struct FBlendSpacePlayerReference GetBlendSpace(class UBlendSpace* ReturnValue);
	struct FBlendSpacePlayerReference ConvertToBlendSpacePlayerPure(bool* Result);
	struct FAnimNodeReference ConvertToBlendSpacePlayer(enum class EAnimNodeReferenceConversionResult* Result, const struct FBlendSpacePlayerReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.KismetAnimationLibrary
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetAnimationLibrary* GetDefaultObj();

	float K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& OutJointPos, const struct FVector& OutEndPos);
	void K2_StartProfilingTimer();
	void K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ, const struct FVector& ReturnValue);
	void K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax, float ReturnValue);
	struct FVector K2_LookAt(const struct FVector& LookAtVector, bool bUseUpVector, float ClampConeInDegree, const struct FTransform& ReturnValue);
	void K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix, float ReturnValue);
	void K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent** Component, class FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float* InRangeMin, float* InRangeMax, float* OutRangeMin, float* OutRangeMax, float ReturnValue);
	void K2_DirectionBetweenSockets(class USkeletalMeshComponent** Component, class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo, const struct FVector& ReturnValue);
	enum class EEasingFuncType K2_CalculateVelocityFromSockets(class USkeletalMeshComponent** Component, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FRuntimeFloatCurve* CustomCurve, float ReturnValue);
	float K2_CalculateVelocityFromPositionHistory(const struct FVector& Position, float ReturnValue);
	struct FVector CalculateDirection(const struct FRotator& BaseRotation, float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LayeredBoneBlendLibrary
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayeredBoneBlendLibrary* GetDefaultObj();

	void SetBlendMask(const struct FAnimUpdateContext& UpdateContext, const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, class FName BlendMaskName, const struct FLayeredBoneBlendReference& ReturnValue);
	void GetNumPoses(const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 ReturnValue);
	struct FAnimNodeReference ConvertToLayeredBoneBlend(enum class EAnimNodeReferenceConversionResult* Result, const struct FLayeredBoneBlendReference& ReturnValue);
	struct FAnimNodeReference ConvertToLayeredBlendPerBonePure(const struct FLayeredBoneBlendReference& LayeredBoneBlend, bool* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LinkedAnimGraphLibrary
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULinkedAnimGraphLibrary* GetDefaultObj();

	struct FLinkedAnimGraphReference HasLinkedAnimInstance(bool ReturnValue);
	struct FLinkedAnimGraphReference GetLinkedAnimInstance(class UAnimInstance* ReturnValue);
	struct FAnimNodeReference ConvertToLinkedAnimGraphPure(const struct FLinkedAnimGraphReference& LinkedAnimGraph, bool* Result);
	struct FAnimNodeReference ConvertToLinkedAnimGraph(enum class EAnimNodeReferenceConversionResult* Result, const struct FLinkedAnimGraphReference& ReturnValue);
};

// 0x80 (0xA8 - 0x28)
// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNotifyBegin;                                     // 0x58(0x10)(BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNotifyEnd;                                       // 0x68(0x10)(Edit, BlueprintVisible, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14DA[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlayMontageCallbackProxy* GetDefaultObj();

	class FName OnNotifyEndReceived(struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	class FName OnNotifyBeginReceived(struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	bool OnMontageEnded();
	bool OnMontageBlendingOut();
	float CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage** MontageToPlay, float StartingPosition, class FName StartingSection, class UPlayMontageCallbackProxy* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequenceEvaluatorLibrary
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceEvaluatorLibrary* GetDefaultObj();

	float SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase** Sequence, const struct FSequenceEvaluatorReference& ReturnValue);
	void SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase** Sequence, const struct FSequenceEvaluatorReference& ReturnValue);
	float SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, const struct FSequenceEvaluatorReference& ReturnValue);
	void GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* ReturnValue);
	void GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float ReturnValue);
	struct FAnimNodeReference ConvertToSequenceEvaluatorPure(const struct FSequenceEvaluatorReference& SequenceEvaluator, bool* Result);
	struct FAnimNodeReference ConvertToSequenceEvaluator(enum class EAnimNodeReferenceConversionResult* Result, const struct FSequenceEvaluatorReference& ReturnValue);
	float AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, const struct FSequenceEvaluatorReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencePlayerLibrary
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencePlayerLibrary* GetDefaultObj();

	float SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue);
	float SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** Sequence, const struct FSequencePlayerReference& ReturnValue);
	void SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** Sequence, const struct FSequencePlayerReference& ReturnValue);
	float SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue);
	float SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue);
	void GetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	void GetSequencePure(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* ReturnValue);
	void GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** SequenceBase, const struct FSequencePlayerReference& ReturnValue);
	void GetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	void GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer, bool ReturnValue);
	void GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	struct FAnimNodeReference ConvertToSequencePlayerPure(const struct FSequencePlayerReference& SequencePlayer, bool* Result);
	struct FAnimNodeReference ConvertToSequencePlayer(enum class EAnimNodeReferenceConversionResult* Result, const struct FSequencePlayerReference& ReturnValue);
	void ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float Duration, float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencerAnimationSupport
class ISequencerAnimationSupport : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISequencerAnimationSupport* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SkeletalControlLibrary
class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USkeletalControlLibrary* GetDefaultObj();

	void SetAlpha(struct FSkeletalControlReference* SkeletalControl, float* Alpha, const struct FSkeletalControlReference& ReturnValue);
	void GetAlpha(struct FSkeletalControlReference* SkeletalControl, float ReturnValue);
	struct FAnimNodeReference ConvertToSkeletalControlPure(struct FSkeletalControlReference* SkeletalControl, bool* Result);
	struct FAnimNodeReference ConvertToSkeletalControl(enum class EAnimNodeReferenceConversionResult* Result, const struct FSkeletalControlReference& ReturnValue);
};

}


