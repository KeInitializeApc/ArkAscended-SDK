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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEC8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UPrimalItem*                           SelfObj;                                           // 0xED0(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             EquippedBuff;                                      // 0xED8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxAmmo;                                           // 0xF08(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bInfiniteAmmo;                                     // 0xF0C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_Tek_C* GetDefaultObj();

	void IGet_Max_Ammo(int32* RetVal);
	int32 CanElementDecrease(class UPrimalItem** CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	class FString BPGetCustomInventoryWidgetText(const class FString& ReturnValue);
	void BlueprintEquipped(bool* bIsFromSaveGame);
	void BlueprintUnequipped();
	int32 TryToDecreaseElement();
	void SetElementToMax();
	double IncreaseElement();
	void ISetElementToMax();
	int32 ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(int32 EntryPoint, bool* K2Node_Event_bIsFromSaveGame, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool* CallFunc_CanElementDecrease_CanDecrease, class UPrimalItem** CallFunc_BPGetItemOfTemplate_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, double K2Node_CustomEvent_Percent, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double* CallFunc_FClamp_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


