#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0xF71 - 0xEE0)
// BlueprintGeneratedClass PrimalItemConsumable_TekCanteenCraftable.PrimalItemConsumable_TekCanteenCraftable_C
class UPrimalItemConsumable_TekCanteenCraftable_C : public UPrimalItemConsumableEatable_WaterContainer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       MaxShardPower;                                     // 0xEE8(0x8)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       PowerCostPerUse;                                   // 0xEF0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        UnpoweredBuffsToGive;                              // 0xEF8(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        PoweredBuffsToGive_Cold;                           // 0xF08(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        PoweredBuffsToGive_Hot;                            // 0xF18(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  DefaultWaterMode;                                  // 0xF28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  HotWaterBuffClearTag;                              // 0xF30(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ColdWaterBuffClearTag;                             // 0xF38(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          HotWaterModeTextColor;                             // 0xF40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          ColdWaterModeTextColor;                            // 0xF50(0x10)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          NormalWaterModeTextColor;                          // 0xF60(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseShardPowerCost;                                 // 0xF70(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumable_TekCanteenCraftable_C* GetDefaultObj();

	bool IsCustomContextMenuItemEnabled(bool* EnabledRet, class FName* CallFunc_GetCurrentWaterMode_WaterMode, bool* CallFunc_HasEnoughPowerForUse_bHasEnoughPower);
	bool BPGetCustomInventoryWidgetTextColor(struct FLinearColor* ColorToUse, class FName* CallFunc_GetCurrentWaterMode_WaterMode, bool* CallFunc_HasEnoughPowerForUse_bHasEnoughPower);
	bool HasEnoughPowerForUse(bool* bHasEnoughPower, bool* CallFunc_GetElementShardValue_HasData, double* CallFunc_GetElementShardValue_Value, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	bool ApplyUnpoweredBuffs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_Array_Get_Item, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	bool TryClearBuffs(class FName TempTagToUse, TArray<class UClass*>* BuffsToDeactivate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, class FName* CallFunc_GetCurrentWaterMode_WaterMode, class UClass* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_Array_Get_Item_1, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff);
	bool GetCurrentWaterMode(class FName* WaterMode, bool Temp_bool_Variable, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, class FName CallFunc_Array_Get_Item, class FName K2Node_Select_Default);
	class FString BPGetCustomInventoryWidgetText(bool* WasFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCustomContextMenuData& CallFunc_Array_Get_Item, const struct FCustomContextMenuData& CallFunc_Array_Get_Item_1, bool* CallFunc_HasEnoughPowerForUse_bHasEnoughPower, class FName* CallFunc_GetCurrentWaterMode_WaterMode);
	bool SetWaterMode(class FName NewWaterMode, struct FCustomItemData* WaterModeData, TArray<class FName>* K2Node_MakeArray_Array, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, class FName* CallFunc_GetCurrentWaterMode_WaterMode, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
	class FName SelectedCustomContextMenuItem(class AShooterPlayerController** ForPC);
	bool TryConsumeWithPower(TArray<class UClass*>* BuffSetToUse, const struct FCustomItemData& CustomData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName* CallFunc_GetCurrentWaterMode_WaterMode, class FName* CallFunc_GetCurrentWaterMode_WaterMode_1, class UClass* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const TArray<float>& K2Node_SetFieldsInStruct_CustomDataFloats_ImplicitCast, TArray<double>* K2Node_VariableSet_CustomFloats_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void BlueprintUsed();
	class FString SetShardDescription(bool* CallFunc_GetElementShardValue_HasData, double* CallFunc_GetElementShardValue_Value, class FText* CallFunc_Conv_DoubleToText_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, class UObject* CallFunc_GetDefaultObject_ReturnValue, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, class UPrimalItem** K2Node_DynamicCast_AsPrimal_Item, bool* K2Node_DynamicCast_bSuccess, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
	bool GetElementShardValue(bool* HasData, double* Value, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, double K2Node_VariableSet_OutVal_ImplicitCast);
	class UWorld* BPPostInitializeItem();
	void ExecuteUbergraph_PrimalItemConsumable_TekCanteenCraftable(int32* EntryPoint, class UWorld* K2Node_Event_OptionalInitWorld);
};

}


