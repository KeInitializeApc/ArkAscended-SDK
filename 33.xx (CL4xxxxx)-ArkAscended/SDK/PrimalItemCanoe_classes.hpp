#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItemCanoe.PrimalItemCanoe_C
class UPrimalItemCanoe_C : public UPrimalItem_Base_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemCanoe_C* GetDefaultObj();

	bool BPCanUse(bool CanUse_, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess);
	bool BPGetItemIcon(class AShooterPlayerController** ForPC, class UTexture2D* OutIcon_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess);
	bool BPGetCustomIconMaterialParent(class UMaterialInterface* OutMat_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess);
	int32 SetColors(const TArray<int32>& OutColors_Loc, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, double CallFunc_Array_Get_Item, int32 CallFunc_Round_ReturnValue, TArray<double>* CallFunc_Array_Length_TargetArray_ImplicitCast, const TArray<double>& CallFunc_Array_Get_TargetArray_ImplicitCast);
	void BPInitIconMaterial(const TArray<int32>& OutColors_Loc);
	class FString BPGetItemName(class AShooterPlayerController** ForPC, const class FString& OutName_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	class FString BPGetCustomDurabilityText(double OutDurabilityPercent_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, double K2Node_VariableSet_OutDurabilityPercent_Loc_ImplicitCast);
	float BPGetItemDurabilityPercentage(double OutPercent_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, double K2Node_VariableSet_OutPercent_Loc_ImplicitCast);
};

}


