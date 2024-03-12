#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xEE8 - 0xEE0)
// BlueprintGeneratedClass PrimalItemArmor_Glider.PrimalItemArmor_Glider_C
class UPrimalItemArmor_Glider_C : public UPrimalItemSkinGeneric_C
{
public:
	class UPrimalItem*                           Ref_OwnerItem;                                     // 0xEE0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Glider_C* GetDefaultObj();

	bool RemovedSkinFromItem();
	bool ApplyingSkinOntoItem();
	bool BlueprintUnequipped(class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff);
	bool BlueprintEquipped(struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
};

}


