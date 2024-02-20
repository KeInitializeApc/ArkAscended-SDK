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
	float EvalIIRInterpolatorVector(const struct FIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal, const struct FVector& ReturnValue);
	float EvalIIRInterpolatorRotator(const struct FIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, const struct FRotator& ReturnValue);
	float EvalIIRInterpolatorFloat(const struct FIIRInterpolatorFloat& Interpolator, float NewGoal, float ReturnValue);
	float EvalDoubleIIRInterpolatorVector(const struct FDoubleIIRInterpolatorVector& Interpolator, const struct FVector& NewGoal, const struct FVector& ReturnValue);
	float EvalDoubleIIRInterpolatorRotator(const struct FDoubleIIRInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, const struct FRotator& ReturnValue);
	float EvalDoubleIIRInterpolatorFloat(const struct FDoubleIIRInterpolatorFloat& Interpolator, float NewGoal, float ReturnValue);
	float EvalCritDampedSpringInterpolatorVector(const struct FCritDampSpringInterpolatorVector& Interpolator, const struct FVector& NewGoal, const struct FVector& ReturnValue);
	float EvalCritDampedSpringInterpolatorRotator(const struct FCritDampSpringInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, const struct FRotator& ReturnValue);
	float EvalAccelInterpolatorVector(const struct FAccelerationInterpolatorVector& Interpolator, const struct FVector& NewGoal, const struct FVector& ReturnValue);
	float EvalAccelInterpolatorRotator(const struct FAccelerationInterpolatorRotator& Interpolator, const struct FRotator& NewGoal, const struct FRotator& ReturnValue);
	float EvalAccelInterpolatorFloat(const struct FAccelerationInterpolatorFloat& Interpolator, float NewGoal, float ReturnValue);
};

}


