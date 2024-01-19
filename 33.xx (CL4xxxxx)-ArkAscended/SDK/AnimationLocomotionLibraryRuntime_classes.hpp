#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
class UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimCharacterMovementLibrary* GetDefaultObj();

	float PredictGroundMovementStopLocation(bool* bUseSeparateBrakingFriction, float* BrakingFriction, float* GroundFriction, float* BrakingFrictionFactor, const struct FVector& ReturnValue);
	struct FVector PredictGroundMovementPivotLocation(float* GroundFriction, const struct FVector& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimDistanceMatchingLibrary* GetDefaultObj();

	void SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, struct FVector2D* PlayRateClamp, const struct FSequencePlayerReference& ReturnValue);
	void DistanceMatchToTarget(const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, class FName* DistanceCurveName, const struct FSequenceEvaluatorReference& ReturnValue);
	void AdvanceTimeByDistanceMatching(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, class FName* DistanceCurveName, struct FVector2D* PlayRateClamp, const struct FSequenceEvaluatorReference& ReturnValue);
};

}


