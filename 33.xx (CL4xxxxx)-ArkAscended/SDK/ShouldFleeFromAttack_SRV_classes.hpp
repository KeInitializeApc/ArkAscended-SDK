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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                ShouldFlee;                                        // 0xA0(0x28)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig)
	struct FBlackboardKeySelector                IsFleeing;                                         // 0xC8(0x28)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
	bool                                         BabyUnderAttack;                                   // 0xF0(0x1)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UShouldFleeFromAttack_SRV_C* GetDefaultObj();

	float ReceiveTick();
	double ExecuteUbergraph_ShouldFleeFromAttack_SRV(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class AActor* K2Node_Event_OwnerActor, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, double* CallFunc_Subtract_DoubleDouble_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BPIsTamed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_Array_Get_Item, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, class AController** CallFunc_GetController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


