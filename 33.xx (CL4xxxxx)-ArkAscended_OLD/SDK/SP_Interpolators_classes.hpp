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

	struct FIIRInterpolatorVector ResetIIRInterpolatorVector();
	struct FIIRInterpolatorRotator ResetIIRInterpolatorRotator();
	struct FIIRInterpolatorFloat ResetIIRInterpolatorFloat();
	struct FDoubleIIRInterpolatorVector ResetDoubleIIRInterpolatorVector();
	struct FDoubleIIRInterpolatorRotator ResetDoubleIIRInterpolatorRotator();
	struct FDoubleIIRInterpolatorFloat ResetDoubleIIRInterpolatorFloat();
	struct FCritDampSpringInterpolatorVector ResetCritDampedSpringInterpolatorVector();
	struct FCritDampSpringInterpolatorRotator ResetCritDampedSpringInterpolatorRotator();
	struct FAccelerationInterpolatorVector ResetAccelInterpolatorVector();
	struct FAccelerationInterpolatorRotator ResetAccelInterpolatorRotator();
	struct FAccelerationInterpolatorFloat ResetAccelInterpolatorFloat();
	float EvalIIRInterpolatorVector(struct FVector* ReturnValue);
	float EvalIIRInterpolatorRotator(struct FRotator* ReturnValue);
	float EvalIIRInterpolatorFloat(float* ReturnValue);
	float EvalDoubleIIRInterpolatorVector(struct FVector* ReturnValue);
	float EvalDoubleIIRInterpolatorRotator(struct FRotator* ReturnValue);
	float EvalDoubleIIRInterpolatorFloat(float* ReturnValue);
	float EvalCritDampedSpringInterpolatorVector(struct FVector* ReturnValue);
	float EvalCritDampedSpringInterpolatorRotator(struct FRotator* ReturnValue);
	float EvalAccelInterpolatorVector(struct FVector* ReturnValue);
	float EvalAccelInterpolatorRotator(struct FRotator* ReturnValue);
	float EvalAccelInterpolatorFloat(float* ReturnValue);
};

}


