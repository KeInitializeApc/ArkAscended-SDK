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
	float EvalIIRInterpolatorVector(const struct FVector& ReturnValue);
	float EvalIIRInterpolatorRotator(const struct FRotator& ReturnValue);
	float EvalIIRInterpolatorFloat(float ReturnValue);
	float EvalDoubleIIRInterpolatorVector(const struct FVector& ReturnValue);
	float EvalDoubleIIRInterpolatorRotator(const struct FRotator& ReturnValue);
	float EvalDoubleIIRInterpolatorFloat(float ReturnValue);
	float EvalCritDampedSpringInterpolatorVector(const struct FVector& ReturnValue);
	float EvalCritDampedSpringInterpolatorRotator(const struct FRotator& ReturnValue);
	float EvalAccelInterpolatorVector(const struct FVector& ReturnValue);
	float EvalAccelInterpolatorRotator(const struct FRotator& ReturnValue);
	float EvalAccelInterpolatorFloat(float ReturnValue);
};

}


