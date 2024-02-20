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

	float PredictGroundMovementStopLocation(const struct FVector& ReturnValue);
	float PredictGroundMovementPivotLocation(const struct FVector& Acceleration, const struct FVector& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimDistanceMatchingLibrary* GetDefaultObj();

	struct FVector2D SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue);
	class FName DistanceMatchToTarget(const struct FSequenceEvaluatorReference& ReturnValue);
	struct FVector2D AdvanceTimeByDistanceMatching(const struct FSequenceEvaluatorReference& ReturnValue);
};

}


