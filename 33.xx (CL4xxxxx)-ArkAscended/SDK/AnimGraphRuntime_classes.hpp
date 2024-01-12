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

	void SnapToPosition(struct FBlendSpaceReference* BlendSpace, const struct FVector& NewPosition);
	struct FVector GetPosition(struct FBlendSpaceReference* BlendSpace);
	struct FVector GetFilteredPosition(struct FBlendSpaceReference* BlendSpace);
	struct FAnimNodeReference ConvertToBlendSpacePure(struct FBlendSpaceReference* BlendSpace, bool* Result);
	struct FBlendSpaceReference ConvertToBlendSpace(enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimationStateMachineLibrary
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimationStateMachineLibrary* GetDefaultObj();

	class UBlendProfile* SetState(class FName TargetState, enum class ETransitionLogicType BlendType, enum class EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve);
	bool IsStateBlendingOut();
	bool IsStateBlendingIn();
	class FName GetState();
	float GetRelevantAnimTimeRemainingFraction();
	float GetRelevantAnimTimeRemaining();
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

	float GetDeltaTime();
	float GetCurrentWeight();
	struct FAnimNodeReference GetAnimNodeReference(class UAnimInstance** Instance);
	class UAnimInstance* GetAnimInstance();
	struct FAnimUpdateContext ConvertToUpdateContext(enum class EAnimExecutionContextConversionResult* Result);
	struct FAnimPoseContext ConvertToPoseContext(enum class EAnimExecutionContextConversionResult* Result);
	struct FAnimInitializationContext ConvertToInitializationContext(enum class EAnimExecutionContextConversionResult* Result);
	struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(enum class EAnimExecutionContextConversionResult* Result);
};

// 0x8 (0x48 - 0x40)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	class FName                                  NotifyName;                                        // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotify* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	class FName                                  NotifyName;                                        // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotifyWindow* GetDefaultObj();

};

// 0x8 (0x350 - 0x348)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_1643[0x8];                                     // Fixing Size Of Struct > TateDumper <

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

	void SnapToPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& NewPosition);
	bool ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	struct FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool* bReset);
	struct FBlendSpacePlayerReference SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate);
	struct FBlendSpacePlayerReference SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop);
	struct FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace** BlendSpace, float* BlendTime);
	struct FBlendSpacePlayerReference SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace** BlendSpace);
	float GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	struct FVector GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	float GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	bool GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	class UBlendSpace* GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	struct FAnimNodeReference ConvertToBlendSpacePlayerPure(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool* Result);
	struct FBlendSpacePlayerReference ConvertToBlendSpacePlayer(enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.KismetAnimationLibrary
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetAnimationLibrary* GetDefaultObj();

	void K2_TwoBoneIK(struct FVector* RootPos, struct FVector* JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	void K2_StartProfilingTimer();
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float* RangeOutMinX, float* RangeOutMaxX, float* RangeOutMinY, float* RangeOutMaxY, float* RangeOutMinZ, float* RangeOutMaxZ);
	float K2_MakePerlinNoiseAndRemap(float Value, float* RangeOutMin, float RangeOutMax);
	struct FTransform K2_LookAt(struct FTransform* CurrentTransform, const struct FVector& LookAtVector, bool bUseUpVector, struct FVector* UpVector, float ClampConeInDegree);
	float K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix);
	float K2_DistanceBetweenTwoSocketsAndMapRange(class FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange);
	struct FVector K2_DirectionBetweenSockets(class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo);
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax);
	float CalculateDirection();
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LayeredBoneBlendLibrary
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayeredBoneBlendLibrary* GetDefaultObj();

	struct FLayeredBoneBlendReference SetBlendMask(struct FLayeredBoneBlendReference* LayeredBoneBlend, class FName* BlendMaskName);
	int32 GetNumPoses(struct FLayeredBoneBlendReference* LayeredBoneBlend);
	struct FLayeredBoneBlendReference ConvertToLayeredBoneBlend(enum class EAnimNodeReferenceConversionResult* Result);
	struct FAnimNodeReference ConvertToLayeredBlendPerBonePure(struct FLayeredBoneBlendReference* LayeredBoneBlend, bool* Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LinkedAnimGraphLibrary
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULinkedAnimGraphLibrary* GetDefaultObj();

	bool HasLinkedAnimInstance();
	class UAnimInstance* GetLinkedAnimInstance();
	struct FAnimNodeReference ConvertToLinkedAnimGraphPure(struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result);
	struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(enum class EAnimNodeReferenceConversionResult* Result);
};

// 0x80 (0xA8 - 0x28)
// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x38(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0x48(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNotifyBegin;                                     // 0x58(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNotifyEnd;                                       // 0x68(0x10)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_183A[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlayMontageCallbackProxy* GetDefaultObj();

	void OnNotifyEndReceived(class FName NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, float PlayRate, float* StartingPosition, class FName* StartingSection);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequenceEvaluatorLibrary
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceEvaluatorLibrary* GetDefaultObj();

	struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(float* BlendTime);
	struct FSequenceEvaluatorReference SetSequence();
	struct FSequenceEvaluatorReference SetExplicitTime(float Time);
	class UAnimSequenceBase* GetSequence();
	float GetAccumulatedTime();
	struct FSequenceEvaluatorReference ConvertToSequenceEvaluatorPure(bool* Result);
	struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(enum class EAnimNodeReferenceConversionResult* Result);
	struct FSequenceEvaluatorReference AdvanceTime(float PlayRate);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencePlayerLibrary
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencePlayerLibrary* GetDefaultObj();

	struct FSequencePlayerReference SetStartPosition(float* StartPosition);
	struct FSequencePlayerReference SetSequenceWithInertialBlending(float* BlendTime);
	struct FSequencePlayerReference SetSequence();
	struct FSequencePlayerReference SetPlayRate(float PlayRate);
	struct FSequencePlayerReference SetAccumulatedTime(float Time);
	float GetStartPosition();
	class UAnimSequenceBase* GetSequencePure();
	struct FSequencePlayerReference GetSequence(class UAnimSequenceBase** SequenceBase);
	float GetPlayRate();
	bool GetLoopAnimation();
	float GetAccumulatedTime();
	struct FSequencePlayerReference ConvertToSequencePlayerPure(bool* Result);
	struct FSequencePlayerReference ConvertToSequencePlayer(enum class EAnimNodeReferenceConversionResult* Result);
	float ComputePlayRateFromDuration();
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

	struct FSkeletalControlReference SetAlpha(struct FSkeletalControlReference* SkeletalControl, float Alpha);
	float GetAlpha(struct FSkeletalControlReference* SkeletalControl);
	struct FAnimNodeReference ConvertToSkeletalControlPure(struct FSkeletalControlReference* SkeletalControl, bool* Result);
	struct FSkeletalControlReference ConvertToSkeletalControl(enum class EAnimNodeReferenceConversionResult* Result);
};

}


