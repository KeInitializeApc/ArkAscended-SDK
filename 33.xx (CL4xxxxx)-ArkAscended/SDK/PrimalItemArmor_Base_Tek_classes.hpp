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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEC0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             MyTekArmorBuff;                                    // 0xEC8(0x30)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xEF8(0x4)(BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xEFC(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5A0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMapSpecificTekArmorBuffs>     MapSpecificTekArmorBuffs;                          // 0xF00(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	class UClass*                                CachedResolvedTekArmorBuff;                        // 0xF10(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bTekBuffDirty;                                     // 0xF18(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Base_Tek_C* GetDefaultObj();

	void BPGetMaxAmmo(int32* ReturnValue);
	bool IsInfiniteAmmo(bool* CallFunc_BooleanOR_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor);
	bool ApplyingSkinOntoItem(bool* CallFunc_BooleanAND_ReturnValue);
	bool RemovedSkinFromItem(bool* CallFunc_BooleanAND_ReturnValue);
	class UClass* GetInternalMapRestrictedTekArmorBuff(class UClass* TekArmorBuff, class UClass* OutInternalBuff, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	class UClass* GetResolvedTekArmorBuff(class UClass* ResolvedTekArmorBuff, class UClass* OutBuff, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue);
	bool FillEmptyArmorElementWhenAvailable(bool CallFunc_LessEqual_IntInt_ReturnValue);
	class APrimalBuff* InitBuff(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	class AController* BlueprintOwnerPosssessed();
	bool BlueprintUnequipped(class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character);
	class FString BPGetCustomInventoryWidgetText(class FString* ReturnValue, const class FString& Return, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	bool Can_Element_Decrease(bool PreventCheckingInventory, bool Return_Val, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	bool BlueprintEquipped(bool Return_Val);
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void TekArmorSkinApplied();
	void TekArmorSkinRemoved();
	bool ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32 EntryPoint, double K2Node_CustomEvent_Percent, double* CallFunc_FClamp_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue_1);
};

}


