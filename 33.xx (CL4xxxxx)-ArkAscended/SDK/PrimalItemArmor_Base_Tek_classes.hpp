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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEB8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             MyTekArmorBuff;                                    // 0xEC8(0x30)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xEF8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xEFC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B66[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMapSpecificTekArmorBuffs>     MapSpecificTekArmorBuffs;                          // 0xF00(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	class UClass*                                CachedResolvedTekArmorBuff;                        // 0xF10(0x8)(ConstParm, Parm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bTekBuffDirty;                                     // 0xF18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Base_Tek_C* GetDefaultObj();

	int32 BPGetMaxAmmo();
	class ABuff_TekArmor_C* IsInfiniteAmmo(bool* K2Node_DynamicCast_bSuccess);
	void ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	void RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue);
	bool GetInternalMapRestrictedTekArmorBuff(int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, struct FMapSpecificTekArmorBuffs* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1);
	class UClass* GetResolvedTekArmorBuff(class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess);
	bool FillEmptyArmorElementWhenAvailable(int32* CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	class UClass* InitBuff(class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
	void BlueprintOwnerPosssessed(class AController* PossessedByController);
	class UClass* BlueprintUnequipped(class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	double BPGetCustomInventoryWidgetText(int32* CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	bool Can_Element_Decrease(bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool BlueprintEquipped(bool bIsFromSaveGame);
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void TekArmorSkinApplied();
	void TekArmorSkinRemoved();
	bool ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32* CallFunc_GetWeaponClipAmmo_ReturnValue, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_2, double* CallFunc_FClamp_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class AActor** CallFunc_GetOwner_ReturnValue_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class AActor** CallFunc_GetOwner_ReturnValue_2, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class AActor** CallFunc_GetOwner_ReturnValue_3, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_3, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue_1);
};

}


