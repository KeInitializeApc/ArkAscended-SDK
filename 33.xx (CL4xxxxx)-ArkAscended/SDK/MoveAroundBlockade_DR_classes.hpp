#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass MoveAroundBlockade_DR.MoveAroundBlockade_DR_C
class UMoveAroundBlockade_DR_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                MoveAroundBlocakdeKey;                             // 0xA8(0x28)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoveAroundBlockade_DR_C* GetDefaultObj();

	void ReceiveExecutionFinish(class AActor** OwnerActor, enum class EBTNodeResult* NodeResult);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ReceiveExecutionStart(class AActor** OwnerActor);
	class UPrimalCharacterMovement* ExecuteUbergraph_MoveAroundBlockade_DR(class AActor* K2Node_Event_OwnerActor_2, class AActor* K2Node_Event_OwnerActor_1, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_1, struct FVector* CallFunc_GetVelocity_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_2, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_2, bool* K2Node_DynamicCast_bSuccess_3, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_4);
};

}


