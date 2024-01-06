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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                WithinAttackRangeKey;                              // 0xA8(0x28)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAttacking_DR_C* GetDefaultObj();

	class AActor* ReceiveExecutionStart();
	class AActor* ReceiveExecutionFinish(enum class EBTNodeResult NodeResult);
	class AActor* ReceiveConditionCheck();
	bool ExecuteUbergraph_Attacking_DR(int32 EntryPoint, class AActor** K2Node_Event_OwnerActor_2, class AActor** K2Node_Event_OwnerActor_1, enum class EBTNodeResult K2Node_Event_NodeResult, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController);
};

}


