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

	float UpdateGroundConformingVariables(class APrimalCharacter* PrimalCharacter, bool* Has_Hit_The_Ground_Once, class UObject* __WorldContext, bool IsBeingDragged, bool* IsSwimming, bool IsFalling, bool Should_Mark_Has_Hit_Ground_once, bool* Interpolate, bool Ret_Should_Mark_Has_Hit_Ground_once, bool* bFallingMovement, bool* bSwimmingMovement, bool* Is_Being_Dragged, bool Is_Being_Dragged_And_Underwater, bool* K2Node_DynamicCast_bSuccess, float* CallFunc_GetImmersionDepth_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
};

}


