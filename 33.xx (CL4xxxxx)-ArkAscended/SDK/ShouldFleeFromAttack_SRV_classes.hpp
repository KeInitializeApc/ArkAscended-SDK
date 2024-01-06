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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                ShouldFlee;                                        // 0xA0(0x28)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference)
	struct FBlackboardKeySelector                IsFleeing;                                         // 0xC8(0x28)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig)
	bool                                         BabyUnderAttack;                                   // 0xF0(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UShouldFleeFromAttack_SRV_C* GetDefaultObj();

	float ReceiveTick();
	double ExecuteUbergraph_ShouldFleeFromAttack_SRV(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_1);
};

}


