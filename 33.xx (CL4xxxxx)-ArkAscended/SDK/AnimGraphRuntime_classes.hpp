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

	struct FBlendSpaceReference SnapToPosition(const struct FVector& NewPosition);
	struct FBlendSpaceReference GetPosition(const struct FVector& ReturnValue);
	struct FBlendSpaceReference GetFilteredPosition(const struct FVector& ReturnValue);
	bool ConvertToBlendSpacePure(const struct FAnimNodeReference& Node);
	enum class EAnimNodeReferenceConversionResult ConvertToBlendSpace(const struct FAnimNodeReference& Node, const struct FBlendSpaceReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimationStateMachineLibrary
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimationStateMachineLibrary* GetDefaultObj();

	float SetState(const struct FAnimationStateMachineReference& Node, class FName TargetState, enum class ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, enum class EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve);
	struct FAnimUpdateContext IsStateBlendingOut(const struct FAnimationStateResultReference& Node, bool ReturnValue);
	struct FAnimUpdateContext IsStateBlendingIn(const struct FAnimationStateResultReference& Node, bool ReturnValue);
	struct FAnimUpdateContext GetState(const struct FAnimationStateMachineReference& Node, class FName ReturnValue);
	struct FAnimUpdateContext GetRelevantAnimTimeRemainingFraction(const struct FAnimationStateResultReference& Node, float ReturnValue);
	struct FAnimUpdateContext GetRelevantAnimTimeRemaining(const struct FAnimationStateResultReference& Node, float ReturnValue);
	bool ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node);
	enum class EAnimNodeReferenceConversionResult ConvertToAnimationStateResult(const struct FAnimNodeReference& Node);
	bool ConvertToAnimationStateMachinePure(const struct FAnimNodeReference& Node);
	enum class EAnimNodeReferenceConversionResult ConvertToAnimationStateMachine(const struct FAnimNodeReference& Node);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimExecutionContextLibrary
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimExecutionContextLibrary* GetDefaultObj();

	void GetDeltaTime(struct FAnimUpdateContext* Context, float ReturnValue);
	void GetCurrentWeight(struct FAnimUpdateContext* Context, float ReturnValue);
	void GetAnimNodeReference(class UAnimInstance** Instance, int32* Index, const struct FAnimNodeReference& ReturnValue);
	void GetAnimInstance(struct FAnimExecutionContext* Context, class UAnimInstance* ReturnValue);
	enum class EAnimExecutionContextConversionResult ConvertToUpdateContext(struct FAnimExecutionContext* Context, const struct FAnimUpdateContext& ReturnValue);
	enum class EAnimExecutionContextConversionResult ConvertToPoseContext(struct FAnimExecutionContext* Context, const struct FAnimPoseContext& ReturnValue);
	enum class EAnimExecutionContextConversionResult ConvertToInitializationContext(struct FAnimExecutionContext* Context, const struct FAnimInitializationContext& ReturnValue);
	enum class EAnimExecutionContextConversionResult ConvertToComponentSpacePoseContext(struct FAnimExecutionContext* Context, const struct FAnimComponentSpacePoseContext& ReturnValue);
};

// 0x8 (0x48 - 0x40)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	class FName                                  NotifyName;                                        // 0x40(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotify* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	class FName                                  NotifyName;                                        // 0x30(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotifyWindow* GetDefaultObj();

};

// 0x8 (0x350 - 0x348)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_1FF8[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	void ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool ReturnValue);
	bool SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FBlendSpacePlayerReference& ReturnValue);
	void SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float* PlayRate, const struct FBlendSpacePlayerReference& ReturnValue);
	bool SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FBlendSpacePlayerReference& ReturnValue);
	class UBlendSpace* SetBlendSpaceWithInertialBlending(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float BlendTime, const struct FBlendSpacePlayerReference& ReturnValue);
	class UBlendSpace* SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FBlendSpacePlayerReference& ReturnValue);
	void GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float ReturnValue);
	void GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& ReturnValue);
	void GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float ReturnValue);
	void GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool ReturnValue);
	void GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* ReturnValue);
	bool ConvertToBlendSpacePlayerPure(const struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& BlendSpacePlayer);
	enum class EAnimNodeReferenceConversionResult ConvertToBlendSpacePlayer(const struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.KismetAnimationLibrary
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetAnimationLibrary* GetDefaultObj();

	bool K2_TwoBoneIK(struct FVector* RootPos, struct FVector* JointPos, const struct FVector& EndPos, struct FVector* OutJointPos, struct FVector* OutEndPos, float StartStretchRatio, float MaxStretchScale);
	void K2_StartProfilingTimer();
	void K2_MakePerlinNoiseVectorAndRemap(float* X, float* Y, float* Z, float* RangeOutMinX, float* RangeOutMaxX, float* RangeOutMinY, float* RangeOutMaxY, float* RangeOutMinZ, float* RangeOutMaxZ, const struct FVector& ReturnValue);
	void K2_MakePerlinNoiseAndRemap(float* Value, float* RangeOutMin, float* RangeOutMax, float ReturnValue);
	void K2_LookAt(const struct FTransform& CurrentTransform, struct FVector* TargetPosition, struct FVector* LookAtVector, bool* bUseUpVector, const struct FVector& UpVector, float* ClampConeInDegree, const struct FTransform& ReturnValue);
	void K2_EndProfilingTimer(bool* bLog, class FString* LogPrefix, float ReturnValue);
	float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, class FName* SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float ReturnValue);
	void K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo, const struct FVector& ReturnValue);
	enum class EEasingFuncType K2_CalculateVelocityFromSockets(class USkeletalMeshComponent* Component, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, int32 NumberOfSamples, float VelocityMin, float VelocityMax, const struct FRuntimeFloatCurve& CustomCurve, float ReturnValue);
	struct FPositionHistory K2_CalculateVelocityFromPositionHistory(struct FVector* Position, int32 NumberOfSamples, float VelocityMin, float VelocityMax, float ReturnValue);
	struct FRotator CalculateDirection(float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LayeredBoneBlendLibrary
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayeredBoneBlendLibrary* GetDefaultObj();

	struct FAnimUpdateContext SetBlendMask(struct FLayeredBoneBlendReference* LayeredBoneBlend, int32 PoseIndex, class FName* BlendMaskName, const struct FLayeredBoneBlendReference& ReturnValue);
	void GetNumPoses(struct FLayeredBoneBlendReference* LayeredBoneBlend, int32 ReturnValue);
	enum class EAnimNodeReferenceConversionResult ConvertToLayeredBoneBlend(const struct FAnimNodeReference& Node, const struct FLayeredBoneBlendReference& ReturnValue);
	bool ConvertToLayeredBlendPerBonePure(const struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference* LayeredBoneBlend);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LinkedAnimGraphLibrary
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULinkedAnimGraphLibrary* GetDefaultObj();

	void HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node, bool ReturnValue);
	void GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node, class UAnimInstance* ReturnValue);
	bool ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph);
	enum class EAnimNodeReferenceConversionResult ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, const struct FLinkedAnimGraphReference& ReturnValue);
};

// 0x80 (0xA8 - 0x28)
// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x38(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0x48(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNotifyBegin;                                     // 0x58(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNotifyEnd;                                       // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_21E4[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPlayMontageCallbackProxy* GetDefaultObj();

	struct FBranchingPointNotifyPayload OnNotifyEndReceived(class FName NotifyName);
	struct FBranchingPointNotifyPayload OnNotifyBeginReceived(class FName NotifyName);
	void OnMontageEnded(class UAnimMontage** Montage, bool* bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage** Montage, bool* bInterrupted);
	class UAnimMontage* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, float* PlayRate, float* StartingPosition, class FName* StartingSection, class UPlayMontageCallbackProxy* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequenceEvaluatorLibrary
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceEvaluatorLibrary* GetDefaultObj();

	struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(class UAnimSequenceBase* Sequence, float BlendTime, const struct FSequenceEvaluatorReference& ReturnValue);
	struct FSequenceEvaluatorReference SetSequence(class UAnimSequenceBase* Sequence, const struct FSequenceEvaluatorReference& ReturnValue);
	float SetExplicitTime(const struct FSequenceEvaluatorReference& ReturnValue);
	struct FSequenceEvaluatorReference GetSequence(class UAnimSequenceBase* ReturnValue);
	struct FSequenceEvaluatorReference GetAccumulatedTime(float ReturnValue);
	bool ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node);
	enum class EAnimNodeReferenceConversionResult ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& ReturnValue);
	struct FSequenceEvaluatorReference AdvanceTime(float* PlayRate, const struct FSequenceEvaluatorReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencePlayerLibrary
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencePlayerLibrary* GetDefaultObj();

	float SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue);
	struct FAnimUpdateContext SetSequenceWithInertialBlending(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime, const struct FSequencePlayerReference& ReturnValue);
	void SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, const struct FSequencePlayerReference& ReturnValue);
	void SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float* PlayRate, const struct FSequencePlayerReference& ReturnValue);
	float SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue);
	void GetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	void GetSequencePure(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* ReturnValue);
	void GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** SequenceBase, const struct FSequencePlayerReference& ReturnValue);
	void GetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	void GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer, bool ReturnValue);
	void GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	bool ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, const struct FSequencePlayerReference& SequencePlayer);
	enum class EAnimNodeReferenceConversionResult ConvertToSequencePlayer(const struct FAnimNodeReference& Node, const struct FSequencePlayerReference& ReturnValue);
	float ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
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

	void SetAlpha(struct FSkeletalControlReference* SkeletalControl, float Alpha, const struct FSkeletalControlReference& ReturnValue);
	void GetAlpha(struct FSkeletalControlReference* SkeletalControl, float ReturnValue);
	bool ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl);
	enum class EAnimNodeReferenceConversionResult ConvertToSkeletalControl(const struct FAnimNodeReference& Node, const struct FSkeletalControlReference& ReturnValue);
};

}


