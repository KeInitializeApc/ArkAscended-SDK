#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass Attacking_dR.Attacking_DR_C
class UAttacking_DR_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                WithinAttackRangeKey;                              // 0xA8(0x28)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAttacking_DR_C* GetDefaultObj();

	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ReceiveExecutionFinish(class AActor** OwnerActor, enum class EBTNodeResult* NodeResult);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	enum class EBTNodeResult ExecuteUbergraph_Attacking_DR(class AActor* K2Node_Event_OwnerActor_2, class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess);
};

}


