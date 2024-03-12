#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xA9 - 0xA0)
// BlueprintGeneratedClass ForceAggro_BT.ForceAggro_BT_C
class UForceAggro_BT_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         BabyUnderAttack;                                   // 0xA8(0x1)(Edit, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UForceAggro_BT_C* GetDefaultObj();

	class AActor* ReceiveConditionCheck();
	bool ExecuteUbergraph_ForceAggro_BT(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_Array_Get_Item, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable);
};

}


