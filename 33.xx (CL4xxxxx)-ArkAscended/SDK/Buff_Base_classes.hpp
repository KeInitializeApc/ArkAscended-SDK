#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xB71 - 0xB68)
// BlueprintGeneratedClass Buff_Base.Buff_Base_C
class ABuff_Base_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB68(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bDismountingBuff;                                  // 0xB70(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_Base_C* GetDefaultObj();

	int32 BPCustomAllowAddBuff(class APrimalCharacter** ForCharacter, class AActor* DamageCauser, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APrimalBuff* CallFunc_Array_Get_Item);
	void BPDeactivated(class AActor** ForInstigator);
	class APrimalBuff* ExecuteUbergraph_Buff_Base(int32* EntryPoint, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
};

}


