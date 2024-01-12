#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass IsFlying_DK.IsFlying_DK_C
class UIsFlying_DK_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsFlying_DK_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ReceiveExecutionStart(class AActor** OwnerActor);
	void ReceiveExecutionFinish(class AActor** OwnerActor, enum class EBTNodeResult* NodeResult);
	bool ExecuteUbergraph_IsFlying_DK(class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_OwnerActor_2, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_2, bool* K2Node_DynamicCast_bSuccess_2, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_3);
};

}


