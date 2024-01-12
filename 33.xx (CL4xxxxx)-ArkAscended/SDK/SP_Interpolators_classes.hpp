#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SP_Interpolators.SPInterpolatorsBPLibrary
class USPInterpolatorsBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USPInterpolatorsBPLibrary* GetDefaultObj();

	void ResetIIRInterpolatorVector(struct FIIRInterpolatorVector* Interpolator);
	void ResetIIRInterpolatorRotator(struct FIIRInterpolatorRotator* Interpolator);
	void ResetIIRInterpolatorFloat(struct FIIRInterpolatorFloat* Interpolator);
	void ResetDoubleIIRInterpolatorVector(struct FDoubleIIRInterpolatorVector* Interpolator);
	void ResetDoubleIIRInterpolatorRotator(struct FDoubleIIRInterpolatorRotator* Interpolator);
	void ResetDoubleIIRInterpolatorFloat(struct FDoubleIIRInterpolatorFloat* Interpolator);
	void ResetCritDampedSpringInterpolatorVector(struct FCritDampSpringInterpolatorVector* Interpolator);
	void ResetCritDampedSpringInterpolatorRotator(struct FCritDampSpringInterpolatorRotator* Interpolator);
	void ResetAccelInterpolatorVector(struct FAccelerationInterpolatorVector* Interpolator);
	void ResetAccelInterpolatorRotator(struct FAccelerationInterpolatorRotator* Interpolator);
	void ResetAccelInterpolatorFloat(struct FAccelerationInterpolatorFloat* Interpolator);
	struct FVector EvalIIRInterpolatorVector(struct FIIRInterpolatorVector* Interpolator, struct FVector* NewGoal, float* DeltaTime);
	struct FRotator EvalIIRInterpolatorRotator(struct FIIRInterpolatorRotator* Interpolator, struct FRotator* NewGoal, float* DeltaTime);
	float EvalIIRInterpolatorFloat(struct FIIRInterpolatorFloat* Interpolator, float* NewGoal, float* DeltaTime);
	struct FVector EvalDoubleIIRInterpolatorVector(struct FDoubleIIRInterpolatorVector* Interpolator, struct FVector* NewGoal, float* DeltaTime);
	struct FRotator EvalDoubleIIRInterpolatorRotator(struct FDoubleIIRInterpolatorRotator* Interpolator, struct FRotator* NewGoal, float* DeltaTime);
	float EvalDoubleIIRInterpolatorFloat(struct FDoubleIIRInterpolatorFloat* Interpolator, float* NewGoal, float* DeltaTime);
	struct FVector EvalCritDampedSpringInterpolatorVector(struct FCritDampSpringInterpolatorVector* Interpolator, struct FVector* NewGoal, float* DeltaTime);
	struct FRotator EvalCritDampedSpringInterpolatorRotator(struct FCritDampSpringInterpolatorRotator* Interpolator, struct FRotator* NewGoal, float* DeltaTime);
	struct FVector EvalAccelInterpolatorVector(struct FAccelerationInterpolatorVector* Interpolator, struct FVector* NewGoal, float* DeltaTime);
	struct FRotator EvalAccelInterpolatorRotator(struct FAccelerationInterpolatorRotator* Interpolator, struct FRotator* NewGoal, float* DeltaTime);
	float EvalAccelInterpolatorFloat(struct FAccelerationInterpolatorFloat* Interpolator, float* NewGoal, float* DeltaTime);
};

}


