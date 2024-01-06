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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xED0(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             EquippedBuff;                                      // 0xED8(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xF08(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xF0C(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* GetDefaultObj();

	void IGet_Max_Ammo(int32* RetVal);
	int32 CanElementDecrease(class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	int32 BPGetCustomInventoryWidgetText(class FString* ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, double* CallFunc_Divide_DoubleDouble_ReturnValue, class FString* CallFunc_Conv_IntToString_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	bool BlueprintEquipped();
	void BlueprintUnequipped();
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void ISetElementToMax();
	int32 ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(int32* EntryPoint, bool K2Node_Event_bIsFromSaveGame, bool* K2Node_ClassDynamicCast_bSuccess, bool CallFunc_CanElementDecrease_CanDecrease, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_FClamp_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
};

}

