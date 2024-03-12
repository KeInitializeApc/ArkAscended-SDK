#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ASACameraFunctionLibrary.ASACameraFunctionLibrary_C
class UASACameraFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UASACameraFunctionLibrary_C* GetDefaultObj();

	struct FVector FinalOverridePivotLocation(class UObject* __WorldContext);
	bool ShouldApplyAnyPitchBasedModifier(class UObject* __WorldContext, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	float ApplyPitchBasedModifierToArmLengthInterp(struct FPrimalCameraInterpParams* ArmLengthInterpParams, class UObject* __WorldContext, double PitchModifierAlpha, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	bool DebugPitchBasedModifier(const struct FPrimalCameraPitchBasedModifier& PitchBasedModifier, double ModifierAlpha, class UObject* __WorldContext);
	struct FVector FinalOverridePivotOffset(class UObject* __WorldContext);
	float ApplyPitchBasedModifierToPivotOffset(class UObject* __WorldContext, double PitchModifierAlpha, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	float ApplyPitchBasedModifierToArmLength(class UObject* __WorldContext, double PitchModifierAlpha, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast);
	double ShouldApplyPitchBasedModifier(const struct FPrimalCameraPitchBasedModifier& PitchBasedModifier, class UObject* __WorldContext, double LerpAlpha, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double CallFunc_MapRangeClamped_Value_ImplicitCast);
	float ApplyPitchBasedModifierToInterpParams(class UObject* __WorldContext, double PitchModifierAlpha, bool* bOverrideInterpParams, int32 Temp_int_Array_Index_Variable, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item, bool Temp_bool_True_if_break_was_hit_Variable, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_2, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	struct FPrimalCameraParams FinalOverrideCameraArmLengthInterpParams(struct FPrimalCameraInterpParams* OutInterpParams, class UObject* __WorldContext);
	double FinalOverrideCameraArmLength(double CurrentCameraArmLength, double DesiredCameraArmLength, class UObject* __WorldContext, double ScreenAreaToUse, bool VelocityIsNearlyZero, const struct FVector& WorldLocationToProject);
	float Final_Override_Pivot_Interp_Params(struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastPivotInterpParamsX, const struct FPrimalCameraInterpParams& LastPivotInterpParamsY, const struct FPrimalCameraInterpParams& LastPivotInterpParamsZ, const struct FPrimalCameraInterpParams& PivotInterpParamsX, const struct FPrimalCameraInterpParams& PivotInterpParamsY, const struct FPrimalCameraInterpParams& PivotInterpParamsZ, class UObject* __WorldContext, double PrintModifierAlpha, double TheScreenArea, bool* bFoundInterpRange, double LerpAlpha, bool CallFunc_Less_DoubleDouble_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, bool CallFunc_IsTimeSince_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	float ApplyModifiersToInterpParams(class UObject* __WorldContext, bool* bIsCrouchedOrProne, const struct FPrimalCameraInterpScreenAreaModifier& ScreenModifierForDebug, double PrintModifierAlpha, double TheScreenArea, bool* bFoundInterpRange, double LerpAlpha, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const struct FPrimalCameraInterpScreenAreaModifier& CallFunc_Array_Get_Item, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue, const struct FPrimalCameraInterpParams& K2Node_Select_Default, double CallFunc_SelectFloat_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2);
	float WorldLocationToScreenArea(const struct FVector& WorldLocationToProject, class UObject* __WorldContext, double ScreenAreaX, double ScreenAreaY, double ViewportSizeX, double ViewportSizeY, double ScreenRawPosX, double ScreenRawPosY, class APlayerController* CallFunc_CastToPlayerController_ReturnValue);
};

}


