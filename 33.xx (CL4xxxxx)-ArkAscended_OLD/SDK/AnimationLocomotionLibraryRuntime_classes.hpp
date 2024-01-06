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

	float PredictGroundMovementStopLocation(struct FVector* Velocity, bool* bUseSeparateBrakingFriction, float* BrakingFriction, float* GroundFriction, float* BrakingFrictionFactor, struct FVector* ReturnValue);
	struct FVector PredictGroundMovementPivotLocation(struct FVector* Velocity, float* GroundFriction, struct FVector* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimDistanceMatchingLibrary* GetDefaultObj();

	struct FSequencePlayerReference SetPlayrateToMatchSpeed(float* SpeedToMatch, struct FVector2D* PlayRateClamp, struct FSequencePlayerReference* ReturnValue);
	void DistanceMatchToTarget(struct FSequenceEvaluatorReference* SequenceEvaluator, float* DistanceToTarget, class FName* DistanceCurveName, struct FSequenceEvaluatorReference* ReturnValue);
	void AdvanceTimeByDistanceMatching(struct FAnimUpdateContext* UpdateContext, struct FSequenceEvaluatorReference* SequenceEvaluator, float* DistanceTraveled, class FName* DistanceCurveName, struct FVector2D* PlayRateClamp, struct FSequenceEvaluatorReference* ReturnValue);
};

}


