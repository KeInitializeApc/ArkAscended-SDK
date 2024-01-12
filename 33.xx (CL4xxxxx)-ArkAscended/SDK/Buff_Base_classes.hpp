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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	bool                                         bDismountingBuff;                                  // 0xB68(0x1)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_Base_C* GetDefaultObj();

	bool BPCustomAllowAddBuff(class AActor* DamageCauser, const TArray<class APrimalBuff*>& CallFunc_GetAllBuffs_AllBuffs, int32* CallFunc_Array_Length_ReturnValue, class APrimalBuff** CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	class AActor* BPDeactivated();
	class AActor* ExecuteUbergraph_Buff_Base(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue);
};

}


