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

	float UpdateGroundConformingVariables(class APrimalCharacter** PrimalCharacter, bool* Has_Hit_The_Ground_Once, class UObject* __WorldContext, bool* IsBeingDragged, bool* Should_Mark_Has_Hit_Ground_once, bool Interpolate, bool* bInterpolate, bool* Ret_Should_Mark_Has_Hit_Ground_once, bool* bFallingMovement, bool* bSwimmingMovement, bool* Is_Being_Dragged, bool* Is_Being_Dragged_And_Underwater, float* CallFunc_GetImmersionDepth_ReturnValue, class UPawnMovementComponent** CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool* CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
};

}


