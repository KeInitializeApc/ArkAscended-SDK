#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass PrimalCharAnimFunctions.PrimalCharAnimFunctions_C
class UPrimalCharAnimFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPrimalCharAnimFunctions_C* GetDefaultObj();

	double UpdateGroundConformingVariables(bool* Has_Hit_The_Ground_Once, class UObject** __WorldContext, bool IsSwimming, bool IsFalling, bool Interpolate, bool* bFallingMovement, bool* bSwimmingMovement, bool* Is_Being_Dragged, float* CallFunc_GetImmersionDepth_ReturnValue, double* CallFunc_GetTimeSeconds_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast);
};

}


