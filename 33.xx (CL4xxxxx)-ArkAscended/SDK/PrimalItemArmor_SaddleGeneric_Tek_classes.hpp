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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xED0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             EquippedBuff;                                      // 0xED8(0x30)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xF08(0x4)(BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xF0C(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* GetDefaultObj();

	void IGet_Max_Ammo(int32 RetVal);
	int32 CanElementDecrease(bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	class FString BPGetCustomInventoryWidgetText(class FString* ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue_1, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	bool BlueprintEquipped();
	void BlueprintUnequipped();
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void ISetElementToMax();
	int32 ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(int32 EntryPoint, bool* K2Node_Event_bIsFromSaveGame, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool CallFunc_CanElementDecrease_CanDecrease, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, int32* CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double K2Node_CustomEvent_Percent, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double* CallFunc_FClamp_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
};

}


