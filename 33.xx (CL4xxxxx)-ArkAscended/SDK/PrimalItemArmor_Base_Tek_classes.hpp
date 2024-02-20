#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0xF39 - 0xED8)
// BlueprintGeneratedClass PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C
class UPrimalItemArmor_Base_Tek_C : public UPrimalItemArmorGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xED8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEE0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             MyTekArmorBuff;                                    // 0xEE8(0x30)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xF18(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xF1C(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3056[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMapSpecificTekArmorBuffs>     MapSpecificTekArmorBuffs;                          // 0xF20(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UClass*                                CachedResolvedTekArmorBuff;                        // 0xF30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekBuffDirty;                                     // 0xF38(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Base_Tek_C* GetDefaultObj();

	void BPGetMaxAmmo(int32 ReturnValue);
	bool IsInfiniteAmmo(bool IsInfinite, bool IsBuffInfinite, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class ABuff_TekArmor_C** K2Node_DynamicCast_AsBuff_Tek_Armor);
	bool ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek);
	bool RemovedSkinFromItem(bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek);
	bool GetInternalMapRestrictedTekArmorBuff(class UClass** TekArmorBuff, class UClass** OutInternalBuff, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1);
	class UClass* GetResolvedTekArmorBuff(class UClass** ResolvedTekArmorBuff, class UClass** OutBuff, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek);
	bool FillEmptyArmorElementWhenAvailable(bool CallFunc_IsInfiniteAmmo_IsInfinite, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_UseItemOntoItem_ReturnValue);
	bool InitBuff(class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
	void BlueprintOwnerPosssessed(class AController* PossessedByController);
	bool BlueprintUnequipped(class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff);
	class FString BPGetCustomInventoryWidgetText(const class FString& ReturnValue, class FString* Return, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
	bool Can_Element_Decrease(bool* PreventCheckingInventory, bool CanDecrease, bool* Return_Val, bool CallFunc_IsInfiniteAmmo_IsInfinite, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	void BlueprintEquipped(bool bIsFromSaveGame, bool* Return_Val);
	int32 TryToDecreaseElement();
	void SetElementToMax();
	void IncreaseElement(double* Percent);
	void TekArmorSkinApplied();
	void TekArmorSkinRemoved();
	class UWorld* ExecuteUbergraph_PrimalItemArmor_Base_Tek(bool CallFunc_IsInfiniteAmmo_IsInfinite, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, double* K2Node_CustomEvent_Percent, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_2, double* CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32* K2Node_CustomEvent_AmountToDecreaseBy, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue_1, bool CallFunc_IsInfiniteAmmo_IsInfinite_1);
};

}


