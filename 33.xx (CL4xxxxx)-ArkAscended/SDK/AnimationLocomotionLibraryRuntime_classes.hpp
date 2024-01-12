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

	struct FVector PredictGroundMovementStopLocation(float* BrakingDecelerationWalking);
	struct FVector PredictGroundMovementPivotLocation();
};

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimDistanceMatchingLibrary* GetDefaultObj();

	struct FSequencePlayerReference SetPlayrateToMatchSpeed();
	struct FSequenceEvaluatorReference DistanceMatchToTarget();
	struct FSequenceEvaluatorReference AdvanceTimeByDistanceMatching();
};

}


