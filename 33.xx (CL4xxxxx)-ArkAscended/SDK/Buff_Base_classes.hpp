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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bDismountingBuff;                                  // 0xB68(0x1)(Edit, ConstParm, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_Base_C* GetDefaultObj();

	bool BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter, bool* ReturnValue, bool LOCAL_RetVal, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_BooleanAND_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	void BPDeactivated(class AActor* ForInstigator);
	class APrimalBuff* ExecuteUbergraph_Buff_Base(int32 EntryPoint, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
};

}


