#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0xF45 - 0xF00)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C
class UPrimalItemArmor_SaddleGeneric_Tek_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF00(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xF08(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             EquippedBuff;                                      // 0xF10(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xF40(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xF44(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* GetDefaultObj();

	void IGet_Max_Ammo(int32* RetVal);
	int32 CanElementDecrease(bool* CanDecrease, bool* ReturnVal, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	class FString BPGetCustomInventoryWidgetText(double* CallFunc_Multiply_IntFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	bool BlueprintEquipped();
	void BlueprintUnequipped();
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void ISetElementToMax();
	int32 ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(int32* EntryPoint, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, int32 K2Node_CustomEvent_AmountToDecreaseBy, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_UseItemOntoItem_ReturnValue, double* K2Node_CustomEvent_Percent, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_FClamp_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
};

}


