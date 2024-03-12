#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C
class UPrimalItem_WeaponTekGrenadeLauncher_C : public UPrimalItemWeaponGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_WeaponTekGrenadeLauncher_C* GetDefaultObj();

	double BPGetItemDescription(class AShooterPlayerController** ForPC, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_JoinStringArrayWithNewlines_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UClass* CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	class FString BPGetCustomInventoryWidgetText();
};

}


