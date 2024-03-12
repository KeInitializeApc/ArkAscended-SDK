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

	void ResetIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator);
	void ResetIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator);
	void ResetIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator);
	void ResetDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator);
	void ResetDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator);
	void ResetDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator);
	void ResetCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator);
	void ResetCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator);
	void ResetAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator);
	void ResetAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator);
	void ResetAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator);
	struct FVector EvalIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal);
	struct FRotator EvalIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal);
	float EvalIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator, float NewGoal);
	struct FVector EvalDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal);
	struct FRotator EvalDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal);
	float EvalDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator, float NewGoal);
	struct FVector EvalCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator, const struct FVector& NewGoal);
	struct FRotator EvalCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator, const struct FRotator& NewGoal);
	struct FVector EvalAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator, const struct FVector& NewGoal);
	struct FRotator EvalAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator, const struct FRotator& NewGoal);
	float EvalAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator, float NewGoal);
};

}


