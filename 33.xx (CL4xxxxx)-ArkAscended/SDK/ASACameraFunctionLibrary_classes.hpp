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

	struct FVector FinalOverridePivotLocation(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& DesiredPivotLocation, class UObject** __WorldContext);
	bool ShouldApplyAnyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, class UObject** __WorldContext, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character);
	double ApplyPitchBasedModifierToArmLengthInterp(class APrimalCharacter* CameraOwnerCharacter, class UObject** __WorldContext, double* PitchModifierAlpha, int32 FoundEntryIndex, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double* CallFunc_SelectFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast);
	bool DebugPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPitchBasedModifier* PitchBasedModifier, double* ModifierAlpha, class UObject** __WorldContext);
	TArray<struct FPrimalCameraPitchBasedModifier> FinalOverridePivotOffset(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& DesiredPivotOffset, class UObject** __WorldContext);
	float ApplyPitchBasedModifierToPivotOffset(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& DesiredPivotOffset, class UObject** __WorldContext, double* PitchModifierAlpha, int32 FoundEntryIndex, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double* CallFunc_SelectFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	double ApplyPitchBasedModifierToArmLength(class APrimalCharacter* CameraOwnerCharacter, double CurrentArmLength, double DesiredArmLength, class UObject** __WorldContext, double* PitchModifierAlpha, int32 FoundEntryIndex, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double* K2Node_VariableGet_DesiredArmLength_ImplicitCast, double CallFunc_SelectFloat_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, float* K2Node_VariableSetRef_Target_ImplicitCast, double* CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	double ShouldApplyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPitchBasedModifier* PitchBasedModifier, class UObject** __WorldContext, double* LerpAlpha, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double* CallFunc_FMin_ReturnValue, double* CallFunc_FMin_ReturnValue_1, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast);
	double ApplyPitchBasedModifierToInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraInterpParams* InterpParamsX, struct FPrimalCameraInterpParams* InterpParamsY, struct FPrimalCameraInterpParams* InterpParamsZ, class UObject** __WorldContext, double* PitchModifierAlpha, struct FPrimalCameraInterpParams* InterpParamsToModify, int32 FoundEntryIndex, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double* CallFunc_SelectFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast);
	struct FPrimalCameraParams FinalOverrideCameraArmLengthInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraInterpParams& OutInterpParams, class UObject** __WorldContext);
	bool FinalOverrideCameraArmLength(class APrimalCharacter* CharacterToKeepOnScreen, class APrimalCharacter* CameraOwnerCharacter, double CurrentCameraArmLength, double DesiredCameraArmLength, class UObject** __WorldContext, double ScreenAreaToUse, bool VelocityIsNearlyZero, const struct FVector& WorldLocationToProject, double CharacterScreenAreaY, double CharacterScreenAreaX);
	double Final_Override_Pivot_Interp_Params(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, struct FPrimalCameraInterpParams* LastPivotInterpParamsX, struct FPrimalCameraInterpParams* LastPivotInterpParamsY, struct FPrimalCameraInterpParams* LastPivotInterpParamsZ, const struct FPrimalCameraInterpParams& PivotInterpParamsX, const struct FPrimalCameraInterpParams& PivotInterpParamsY, const struct FPrimalCameraInterpParams& PivotInterpParamsZ, class UObject** __WorldContext, double PrintModifierAlpha, double TheScreenArea, double CharScreenAreaY, double CharScreenAreaX, int32 EntryIndexForLerping, double* LerpAlpha, bool* CallFunc_Not_PreBool_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsTimeSince_ReturnValue_1, bool CallFunc_IsTimeSince_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double* CallFunc_FInterpTo_Current_ImplicitCast, double* CallFunc_FInterpTo_Current_ImplicitCast_1, double* CallFunc_FInterpTo_Current_ImplicitCast_2, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast);
	double ApplyModifiersToInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraInterpParams& InterpParams, TArray<struct FPrimalCameraInterpScreenAreaModifier>* InterpParamsModifiers, class FName DebugScreenModifierId, class UObject** __WorldContext, const struct FPrimalCameraInterpScreenAreaModifier& ScreenModifierForDebug, double PrintModifierAlpha, double TheScreenArea, double CharScreenAreaY, double CharScreenAreaX, int32 EntryIndexForLerping, double* LerpAlpha, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double* CallFunc_FMin_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double* CallFunc_FMin_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue, double CallFunc_WorldLocationToScreenArea_ViewportSizeX, double CallFunc_WorldLocationToScreenArea_ViewportSizeY, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_SelectFloat_ReturnValue, struct FPrimalCameraInterpParams* K2Node_MakeStruct_PrimalCameraInterpParams, double* CallFunc_SelectFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* K2Node_MakeStruct_SpringStiffness_ImplicitCast, float* K2Node_MakeStruct_TargetVelocity_ImplicitCast, float* K2Node_MakeStruct_CriticalDamping_ImplicitCast);
	bool WorldLocationToScreenArea(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& WorldLocationToProject, class UObject** __WorldContext, double ScreenAreaX, double ScreenAreaY, double ViewportSizeX, double ViewportSizeY, double ScreenRawPosX, double ScreenRawPosY, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool* CallFunc_BooleanAND_ReturnValue, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast_1);
};

}


