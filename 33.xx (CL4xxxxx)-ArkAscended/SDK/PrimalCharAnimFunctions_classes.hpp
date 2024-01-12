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

	bool UpdateGroundConformingVariables(class APrimalCharacter** PrimalCharacter, class UObject** __WorldContext, bool Interpolate, bool* K2Node_DynamicCast_bSuccess, double* CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, double* CallFunc_Greater_DoubleDouble_B_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast);
};

}


