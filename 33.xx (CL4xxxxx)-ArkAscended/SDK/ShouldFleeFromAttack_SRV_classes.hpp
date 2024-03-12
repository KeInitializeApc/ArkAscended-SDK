#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0xF1 - 0x98)
// BlueprintGeneratedClass ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C
class UShouldFleeFromAttack_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FBlackboardKeySelector                ShouldFlee;                                        // 0xA0(0x28)(ConstParm, Net, Transient, DisableEditOnInstance, InstancedReference)
	struct FBlackboardKeySelector                IsFleeing;                                         // 0xC8(0x28)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig)
	bool                                         BabyUnderAttack;                                   // 0xF0(0x1)(Edit, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UShouldFleeFromAttack_SRV_C* GetDefaultObj();

	class AActor* ReceiveTick(float* DeltaSeconds);
	double ExecuteUbergraph_ShouldFleeFromAttack_SRV(int32* EntryPoint, int32 Temp_int_Loop_Counter_Variable, class AActor** K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_Array_Get_Item, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_3);
};

}


