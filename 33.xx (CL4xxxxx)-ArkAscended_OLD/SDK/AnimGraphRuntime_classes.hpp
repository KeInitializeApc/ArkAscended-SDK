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
	void GetPosition(struct FBlendSpaceReference* BlendSpace, struct FVector* ReturnValue);
	void GetFilteredPosition(struct FBlendSpaceReference* BlendSpace, struct FVector* ReturnValue);
	struct FAnimNodeReference ConvertToBlendSpacePure(struct FBlendSpaceReference* BlendSpace, bool* Result);
	struct FAnimNodeReference ConvertToBlendSpace(enum class EAnimNodeReferenceConversionResult* Result, struct FBlendSpaceReference* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimationStateMachineLibrary
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimationStateMachineLibrary* GetDefaultObj();

	class UCurveFloat* SetState(struct FAnimUpdateContext* UpdateContext);
	struct FAnimationStateResultReference IsStateBlendingOut(struct FAnimUpdateContext* UpdateContext, bool* ReturnValue);
	struct FAnimationStateResultReference IsStateBlendingIn(struct FAnimUpdateContext* UpdateContext, bool* ReturnValue);
	struct FAnimationStateMachineReference GetState(struct FAnimUpdateContext* UpdateContext, class FName* ReturnValue);
	struct FAnimationStateResultReference GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext* UpdateContext, float* ReturnValue);
	struct FAnimationStateResultReference GetRelevantAnimTimeRemaining(struct FAnimUpdateContext* UpdateContext, float* ReturnValue);
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

	void GetDeltaTime(struct FAnimUpdateContext* Context, float* ReturnValue);
	void GetCurrentWeight(struct FAnimUpdateContext* Context, float* ReturnValue);
	int32 GetAnimNodeReference(struct FAnimNodeReference* ReturnValue);
	void GetAnimInstance(struct FAnimExecutionContext* Context, class UAnimInstance** ReturnValue);
	void ConvertToUpdateContext(struct FAnimExecutionContext* Context, enum class EAnimExecutionContextConversionResult* Result, struct FAnimUpdateContext* ReturnValue);
	void ConvertToPoseContext(struct FAnimExecutionContext* Context, enum class EAnimExecutionContextConversionResult* Result, struct FAnimPoseContext* ReturnValue);
	void ConvertToInitializationContext(struct FAnimExecutionContext* Context, enum class EAnimExecutionContextConversionResult* Result, struct FAnimInitializationContext* ReturnValue);
	void ConvertToComponentSpacePoseContext(struct FAnimExecutionContext* Context, enum class EAnimExecutionContextConversionResult* Result, struct FAnimComponentSpacePoseContext* ReturnValue);
};

// 0x8 (0x48 - 0x40)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	class FName                                  NotifyName;                                        // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotify* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	class FName                                  NotifyName;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotifyWindow* GetDefaultObj();

};

// 0x8 (0x350 - 0x348)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_FAE[0x8];                                      // Fixing Size Of Struct > TateDumper <

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
	struct FBlendSpacePlayerReference ShouldResetPlayTimeWhenBlendSpaceChanges(bool* ReturnValue);
	bool SetResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference* ReturnValue);
	float SetPlayRate(struct FBlendSpacePlayerReference* ReturnValue);
	bool SetLoop(struct FBlendSpacePlayerReference* ReturnValue);
	float SetBlendSpaceWithInertialBlending(struct FAnimUpdateContext* UpdateContext, class UBlendSpace** BlendSpace, struct FBlendSpacePlayerReference* ReturnValue);
	struct FBlendSpacePlayerReference SetBlendSpace(class UBlendSpace** BlendSpace, struct FBlendSpacePlayerReference* ReturnValue);
	struct FBlendSpacePlayerReference GetStartPosition(float* ReturnValue);
	struct FBlendSpacePlayerReference GetPosition(struct FVector* ReturnValue);
	struct FBlendSpacePlayerReference GetPlayRate(float* ReturnValue);
	struct FBlendSpacePlayerReference GetLoop(bool* ReturnValue);
	struct FBlendSpacePlayerReference GetBlendSpace(class UBlendSpace** ReturnValue);
	struct FBlendSpacePlayerReference ConvertToBlendSpacePlayerPure(bool* Result);
	struct FAnimNodeReference ConvertToBlendSpacePlayer(enum class EAnimNodeReferenceConversionResult* Result, struct FBlendSpacePlayerReference* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.KismetAnimationLibrary
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetAnimationLibrary* GetDefaultObj();

	float K2_TwoBoneIK();
	void K2_StartProfilingTimer();
	float K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, struct FVector* ReturnValue);
	float K2_MakePerlinNoiseAndRemap(float Value, float* ReturnValue);
	float K2_LookAt(struct FTransform* ReturnValue);
	class FString K2_EndProfilingTimer(float* ReturnValue);
	bool K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent** Component, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax, float* ReturnValue);
	class FName K2_DirectionBetweenSockets(class USkeletalMeshComponent** Component, struct FVector* ReturnValue);
	float K2_CalculateVelocityFromSockets(class USkeletalMeshComponent** Component, enum class EEasingFuncType* EasingType, struct FRuntimeFloatCurve* CustomCurve, float* ReturnValue);
	float K2_CalculateVelocityFromPositionHistory(const struct FVector& Position, float* ReturnValue);
	void CalculateDirection(struct FVector* Velocity, const struct FRotator& BaseRotation, float* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LayeredBoneBlendLibrary
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayeredBoneBlendLibrary* GetDefaultObj();

	class FName SetBlendMask(struct FAnimUpdateContext* UpdateContext, struct FLayeredBoneBlendReference* ReturnValue);
	struct FLayeredBoneBlendReference GetNumPoses(int32* ReturnValue);
	struct FAnimNodeReference ConvertToLayeredBoneBlend(enum class EAnimNodeReferenceConversionResult* Result, struct FLayeredBoneBlendReference* ReturnValue);
	struct FLayeredBoneBlendReference ConvertToLayeredBlendPerBonePure(bool* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LinkedAnimGraphLibrary
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULinkedAnimGraphLibrary* GetDefaultObj();

	struct FLinkedAnimGraphReference HasLinkedAnimInstance(bool* ReturnValue);
	struct FLinkedAnimGraphReference GetLinkedAnimInstance(class UAnimInstance** ReturnValue);
	struct FLinkedAnimGraphReference ConvertToLinkedAnimGraphPure(bool* Result);
	struct FAnimNodeReference ConvertToLinkedAnimGraph(enum class EAnimNodeReferenceConversionResult* Result, struct FLinkedAnimGraphReference* ReturnValue);
};

// 0x80 (0xA8 - 0x28)
// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x28(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0x48(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNotifyBegin;                                     // 0x58(0x10)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNotifyEnd;                                       // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1163[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlayMontageCallbackProxy* GetDefaultObj();

	class FName OnNotifyEndReceived(struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	class FName OnNotifyBeginReceived(struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	bool OnMontageEnded();
	bool OnMontageBlendingOut();
	class FName CreateProxyObjectForPlayMontage(class UAnimMontage* MontageToPlay, class UPlayMontageCallbackProxy** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequenceEvaluatorLibrary
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceEvaluatorLibrary* GetDefaultObj();

	float SetSequenceWithInertialBlending(struct FAnimUpdateContext* UpdateContext, struct FSequenceEvaluatorReference* SequenceEvaluator, class UAnimSequenceBase** Sequence, struct FSequenceEvaluatorReference* ReturnValue);
	void SetSequence(struct FSequenceEvaluatorReference* SequenceEvaluator, class UAnimSequenceBase** Sequence, struct FSequenceEvaluatorReference* ReturnValue);
	float SetExplicitTime(struct FSequenceEvaluatorReference* SequenceEvaluator, struct FSequenceEvaluatorReference* ReturnValue);
	void GetSequence(struct FSequenceEvaluatorReference* SequenceEvaluator, class UAnimSequenceBase** ReturnValue);
	void GetAccumulatedTime(struct FSequenceEvaluatorReference* SequenceEvaluator, float* ReturnValue);
	struct FAnimNodeReference ConvertToSequenceEvaluatorPure(struct FSequenceEvaluatorReference* SequenceEvaluator, bool* Result);
	struct FAnimNodeReference ConvertToSequenceEvaluator(enum class EAnimNodeReferenceConversionResult* Result, struct FSequenceEvaluatorReference* ReturnValue);
	float AdvanceTime(struct FAnimUpdateContext* UpdateContext, struct FSequenceEvaluatorReference* SequenceEvaluator, struct FSequenceEvaluatorReference* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencePlayerLibrary
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencePlayerLibrary* GetDefaultObj();

	float SetStartPosition(struct FSequencePlayerReference* ReturnValue);
	float SetSequenceWithInertialBlending(struct FAnimUpdateContext* UpdateContext, class UAnimSequenceBase** Sequence, struct FSequencePlayerReference* ReturnValue);
	struct FSequencePlayerReference SetSequence(class UAnimSequenceBase** Sequence, struct FSequencePlayerReference* ReturnValue);
	float SetPlayRate(struct FSequencePlayerReference* ReturnValue);
	float SetAccumulatedTime(struct FSequencePlayerReference* ReturnValue);
	struct FSequencePlayerReference GetStartPosition(float* ReturnValue);
	struct FSequencePlayerReference GetSequencePure(class UAnimSequenceBase** ReturnValue);
	class UAnimSequenceBase* GetSequence(struct FSequencePlayerReference* ReturnValue);
	struct FSequencePlayerReference GetPlayRate(float* ReturnValue);
	struct FSequencePlayerReference GetLoopAnimation(bool* ReturnValue);
	struct FSequencePlayerReference GetAccumulatedTime(float* ReturnValue);
	struct FSequencePlayerReference ConvertToSequencePlayerPure(bool* Result);
	struct FAnimNodeReference ConvertToSequencePlayer(enum class EAnimNodeReferenceConversionResult* Result, struct FSequencePlayerReference* ReturnValue);
	float ComputePlayRateFromDuration(float* ReturnValue);
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

	struct FSkeletalControlReference SetAlpha(float* Alpha, struct FSkeletalControlReference* ReturnValue);
	struct FSkeletalControlReference GetAlpha(float* ReturnValue);
	struct FSkeletalControlReference ConvertToSkeletalControlPure(bool* Result);
	struct FAnimNodeReference ConvertToSkeletalControl(enum class EAnimNodeReferenceConversionResult* Result, struct FSkeletalControlReference* ReturnValue);
};

}


