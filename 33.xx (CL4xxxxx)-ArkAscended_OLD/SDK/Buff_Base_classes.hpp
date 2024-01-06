#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xB69 - 0xB60)
// BlueprintGeneratedClass Buff_Base.Buff_Base_C
class ABuff_Base_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         bDismountingBuff;                                  // 0xB68(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_Base_C* GetDefaultObj();

	bool BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter, bool* ReturnValue, TArray<class APrimalBuff*>* CallFunc_GetAllBuffs_AllBuffs, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	void BPDeactivated(class AActor* ForInstigator);
	bool ExecuteUbergraph_Buff_Base(int32* EntryPoint, class AActor** K2Node_Event_ForInstigator, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
};

}


