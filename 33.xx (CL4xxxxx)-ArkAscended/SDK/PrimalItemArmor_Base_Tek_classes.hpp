#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0xF19 - 0xEB8)
// BlueprintGeneratedClass PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C
class UPrimalItemArmor_Base_Tek_C : public UPrimalItemArmorGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEC0(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             MyTekArmorBuff;                                    // 0xEC8(0x30)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xEF8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xEFC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4541[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMapSpecificTekArmorBuffs>     MapSpecificTekArmorBuffs;                          // 0xF00(0x10)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, DuplicateTransient)
	class UClass*                                CachedResolvedTekArmorBuff;                        // 0xF10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         bTekBuffDirty;                                     // 0xF18(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Base_Tek_C* GetDefaultObj();

	void BPGetMaxAmmo(int32 ReturnValue);
	bool IsInfiniteAmmo(class UObject* CallFunc_GetClassDefaultObject_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor);
	bool ApplyingSkinOntoItem(class UPrimalItem** ToOwnerItem, bool* bIsFirstTime, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool CallFunc_BooleanAND_ReturnValue);
	bool RemovedSkinFromItem(bool* bIsFirstTime, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool CallFunc_BooleanAND_ReturnValue);
	class UClass* GetInternalMapRestrictedTekArmorBuff(class UClass* TekArmorBuff, class UClass* OutInternalBuff, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, const struct FMapSpecificTekArmorBuffs& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class UClass* GetResolvedTekArmorBuff(class UClass* ResolvedTekArmorBuff, class UClass* OutBuff, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek);
	bool FillEmptyArmorElementWhenAvailable(class UPrimalItem** CallFunc_BPGetItemOfTemplate_ReturnValue);
	class APrimalBuff* InitBuff();
	void BlueprintOwnerPosssessed(class AController** PossessedByController);
	bool BlueprintUnequipped();
	class FString BPGetCustomInventoryWidgetText(const class FString& ReturnValue, const class FString& Return);
	bool Can_Element_Decrease(bool PreventCheckingInventory, bool Return_Val, class UPrimalItem** CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BlueprintEquipped(bool* bIsFromSaveGame, bool Return_Val);
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void TekArmorSkinApplied();
	void TekArmorSkinRemoved();
	bool ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32 EntryPoint, double K2Node_CustomEvent_Percent, double* CallFunc_FClamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1);
};

}


