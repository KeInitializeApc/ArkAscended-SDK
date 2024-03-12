#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0xF49 - 0xEE8)
// BlueprintGeneratedClass PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C
class UPrimalItemArmor_Base_Tek_C : public UPrimalItemArmorGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             MyTekArmorBuff;                                    // 0xEF8(0x30)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xF28(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xF2C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_167B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMapSpecificTekArmorBuffs>     MapSpecificTekArmorBuffs;                          // 0xF30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, DuplicateTransient)
	class UClass*                                CachedResolvedTekArmorBuff;                        // 0xF40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekBuffDirty;                                     // 0xF48(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Base_Tek_C* GetDefaultObj();

	int32 BPGetMaxAmmo();
	bool IsInfiniteAmmo(bool* IsInfinite, bool* IsBuffInfinite, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool* K2Node_DynamicCast_bSuccess);
	bool ApplyingSkinOntoItem(class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess);
	bool RemovedSkinFromItem(class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess);
	class UClass* GetInternalMapRestrictedTekArmorBuff(class AShooterCharacter** OwningPlayer, class UClass** OutInternalBuff, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, const struct FMapSpecificTekArmorBuffs& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StriStri_ReturnValue);
	class UClass* GetResolvedTekArmorBuff(class UClass** OutBuff, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1);
	bool FillEmptyArmorElementWhenAvailable(bool* CallFunc_IsInfiniteAmmo_IsInfinite, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_UseItemOntoItem_ReturnValue);
	class APrimalBuff* InitBuff(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	class AController* BlueprintOwnerPosssessed();
	class UClass* BlueprintUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	class FString BPGetCustomInventoryWidgetText(double* CallFunc_Multiply_IntFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	bool Can_Element_Decrease(bool* PreventCheckingInventory, bool* CanDecrease, bool* CallFunc_IsInfiniteAmmo_IsInfinite, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	bool BlueprintEquipped();
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void TekArmorSkinApplied();
	void TekArmorSkinRemoved();
	class APrimalBuff* ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32* EntryPoint, bool* CallFunc_IsInfiniteAmmo_IsInfinite, double* K2Node_CustomEvent_Percent, double CallFunc_FClamp_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Can_Element_Decrease_CanDecrease, int32 CallFunc_Clamp_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_3, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_3, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff, class UClass* CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, bool* CallFunc_IsInfiniteAmmo_IsInfinite_1);
};

}


