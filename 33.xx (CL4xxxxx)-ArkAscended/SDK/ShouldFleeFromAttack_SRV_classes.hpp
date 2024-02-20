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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                ShouldFlee;                                        // 0xA0(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig)
	struct FBlackboardKeySelector                IsFleeing;                                         // 0xC8(0x28)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         BabyUnderAttack;                                   // 0xF0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UShouldFleeFromAttack_SRV_C* GetDefaultObj();

	float ReceiveTick(class AActor** OwnerActor);
	double ExecuteUbergraph_ShouldFleeFromAttack_SRV(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* CallFunc_IsValid_ReturnValue);
};

}


