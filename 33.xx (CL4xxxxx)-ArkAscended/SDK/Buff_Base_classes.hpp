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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDismountingBuff;                                  // 0xB68(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_Base_C* GetDefaultObj();

	int32 BPCustomAllowAddBuff(bool ReturnValue);
	class AActor* BPDeactivated();
	bool ExecuteUbergraph_Buff_Base(class AActor** K2Node_Event_ForInstigator, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
};

}


