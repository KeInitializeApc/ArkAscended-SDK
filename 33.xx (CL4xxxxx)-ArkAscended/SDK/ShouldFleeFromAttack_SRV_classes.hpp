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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                ShouldFlee;                                        // 0xA0(0x28)(Edit, EditFixedSize, Transient, Config, DisableEditOnInstance, InstancedReference)
	struct FBlackboardKeySelector                IsFleeing;                                         // 0xC8(0x28)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig)
	bool                                         BabyUnderAttack;                                   // 0xF0(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UShouldFleeFromAttack_SRV_C* GetDefaultObj();

	void ReceiveTick(class AActor** OwnerActor, float DeltaSeconds);
	double ExecuteUbergraph_ShouldFleeFromAttack_SRV(int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_2, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_4, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_5, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GetBlackboardValueAsBool_ReturnValue_6, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, float* CallFunc_GetHealthPercentage_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_BPIsTamed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor** CallFunc_Array_Get_Item, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class AController** CallFunc_GetController_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_3, class AActor** CallFunc_GetTarget_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double* CallFunc_Greater_DoubleDouble_B_ImplicitCast, double* CallFunc_Greater_DoubleDouble_B_ImplicitCast_1, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


