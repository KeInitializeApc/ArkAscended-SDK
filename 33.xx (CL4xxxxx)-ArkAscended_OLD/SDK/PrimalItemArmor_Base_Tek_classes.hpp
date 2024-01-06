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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEC0(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             MyTekArmorBuff;                                    // 0xEC8(0x30)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xEF8(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xEFC(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2981[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMapSpecificTekArmorBuffs>     MapSpecificTekArmorBuffs;                          // 0xF00(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	class UClass*                                CachedResolvedTekArmorBuff;                        // 0xF10(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bTekBuffDirty;                                     // 0xF18(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Base_Tek_C* GetDefaultObj();

	void BPGetMaxAmmo(int32* ReturnValue);
	bool IsInfiniteAmmo(bool CallFunc_BooleanOR_ReturnValue);
	bool ApplyingSkinOntoItem(bool* CallFunc_BooleanAND_ReturnValue);
	bool RemovedSkinFromItem(bool* CallFunc_BooleanAND_ReturnValue);
	class UClass* GetInternalMapRestrictedTekArmorBuff(bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FString* CallFunc_BPGetPrimaryMapName_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	class UClass* GetResolvedTekArmorBuff();
	bool FillEmptyArmorElementWhenAvailable(bool CallFunc_LessEqual_IntInt_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue);
	bool InitBuff(class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
	class AController* BlueprintOwnerPosssessed();
	bool BlueprintUnequipped(class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character);
	int32 BPGetCustomInventoryWidgetText(class FString* ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double* CallFunc_Divide_DoubleDouble_ReturnValue, class FString* CallFunc_Conv_IntToString_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	bool Can_Element_Decrease(class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	bool BlueprintEquipped();
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void TekArmorSkinApplied();
	void TekArmorSkinRemoved();
	bool ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32* EntryPoint, double CallFunc_FClamp_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class AActor** CallFunc_GetOwner_ReturnValue_1, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class AActor** CallFunc_GetOwner_ReturnValue_2, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, class AActor** CallFunc_GetOwner_ReturnValue_3, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue_1, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue);
};

}


