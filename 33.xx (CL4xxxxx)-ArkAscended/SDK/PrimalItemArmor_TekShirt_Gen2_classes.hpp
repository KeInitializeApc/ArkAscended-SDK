#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0xFC0 - 0xF60)
// BlueprintGeneratedClass PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C
class UPrimalItemArmor_TekShirt_Gen2_C : public UPrimalItemArmor_TekShirt_C
{
public:
	struct FTransform                            TekSuitVFXOffset;                                  // 0xF60(0x60)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_TekShirt_Gen2_C* GetDefaultObj();

	bool RemovedSkinFromItem();
	bool ApplyingSkinOntoItem();
	bool BlueprintEquipped();
	void BlueprintUnequipped();
	class APrimalBuff* TryTekSuitVFXOffset(const struct FTransform& CallFunc_MakeTransform_ReturnValue, struct FTransform* CallFunc_SelectTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, struct FTransform* CallFunc_SelectTransform_ReturnValue_1, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_3, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor_1, bool* K2Node_DynamicCast_bSuccess_4);
};

}


