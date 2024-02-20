#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0xF2D - 0xEE8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C
class UPrimalItemArmor_SaddleGeneric_Tek_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xEF0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             EquippedBuff;                                      // 0xEF8(0x30)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xF28(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xF2C(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* GetDefaultObj();

	int32 IGet_Max_Ammo();
	int32 CanElementDecrease(bool CanDecrease, bool* ReturnVal, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	class FString BPGetCustomInventoryWidgetText(const class FString& ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
	void BlueprintEquipped(bool bIsFromSaveGame);
	void BlueprintUnequipped();
	int32 TryToDecreaseElement();
	void SetElementToMax();
	void IncreaseElement(double* Percent);
	void ISetElementToMax();
	int32 ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(bool* K2Node_Event_bIsFromSaveGame, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff, bool K2Node_ClassDynamicCast_bSuccess, int32* K2Node_CustomEvent_AmountToDecreaseBy, bool* CallFunc_CanElementDecrease_CanDecrease, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool CallFunc_UseItemOntoItem_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_2, double* K2Node_CustomEvent_Percent, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double* CallFunc_FClamp_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_3, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
};

}


