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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                MoveAroundBlocakdeKey;                             // 0xA8(0x28)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoveAroundBlockade_DR_C* GetDefaultObj();

	enum class EBTNodeResult ReceiveExecutionFinish(class AActor** OwnerActor);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ReceiveExecutionStart(class AActor** OwnerActor);
	class UPrimalCharacterMovement* ExecuteUbergraph_MoveAroundBlockade_DR(class AActor** K2Node_Event_OwnerActor_2, class AActor** K2Node_Event_OwnerActor_1, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, class APawn** CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue_1, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_2, class APawn** CallFunc_K2_GetPawn_ReturnValue_2, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1);
};

}


