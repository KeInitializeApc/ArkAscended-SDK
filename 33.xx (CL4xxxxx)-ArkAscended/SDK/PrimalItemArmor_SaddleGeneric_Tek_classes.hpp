#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0xF0D - 0xEC8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C
class UPrimalItemArmor_SaddleGeneric_Tek_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xED0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             EquippedBuff;                                      // 0xED8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xF08(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xF0C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* GetDefaultObj();

	int32 IGet_Max_Ammo();
	bool CanElementDecrease(bool* ReturnVal, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue);
	double BPGetCustomInventoryWidgetText(int32* CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void BlueprintEquipped(bool bIsFromSaveGame);
	void BlueprintUnequipped();
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void ISetElementToMax();
	int32 ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(class UClass* CallFunc_ClassAssetResolve_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_2, double* CallFunc_FClamp_ReturnValue, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_3, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


