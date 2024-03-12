#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0xB98 - 0xB71)
// BlueprintGeneratedClass Buff_HazardSuit_Base.Buff_HazardSuit_Base_C
class ABuff_HazardSuit_Base_C : public ABuff_Base_OnlyRelevantToOwner_C
{
public:
	uint8                                        Pad_136B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class APrimalBuff>>     PreventAddingBuffs;                                // 0xB78(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<double>                               DurabilityCostForPreventAddingBuff;                // 0xB88(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_HazardSuit_Base_C* GetDefaultObj();

	bool BPPreventAddingOtherBuff(class UClass** AnotherBuffClass, int32* CallFunc_IsChildOfClassesSoftRef_ReturnValue, double CallFunc_Array_Get_Item, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


