#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB71 - 0xB71)
// BlueprintGeneratedClass Buff_Base_Disease_Low.Buff_Base_Disease_Low_C
class ABuff_Base_Disease_Low_C : public ABuff_Base_Disease_C
{
public:

	static class UClass* StaticClass();
	static class ABuff_Base_Disease_Low_C* GetDefaultObj();

	bool BPCustomAllowAddBuff(class APrimalCharacter** ForCharacter, class AActor* DamageCauser, bool* RetVal, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APrimalBuff* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess);
};

}


