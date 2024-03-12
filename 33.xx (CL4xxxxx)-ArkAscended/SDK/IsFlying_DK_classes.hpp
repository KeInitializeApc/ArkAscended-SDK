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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsFlying_DK_C* GetDefaultObj();

	class AActor* ReceiveConditionCheck();
	class AActor* ReceiveExecutionStart();
	enum class EBTNodeResult ReceiveExecutionFinish();
	bool ExecuteUbergraph_IsFlying_DK(int32* EntryPoint, class AActor** K2Node_Event_OwnerActor_1, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool* K2Node_DynamicCast_bSuccess_1, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_1, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_2, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_3, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_4, class UPrimalPathFollowingComponent** CallFunc_PFCFromAIController_ReturnValue_5, class AActor** K2Node_Event_OwnerActor_2, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController_2, bool* K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasBuffPreventingFlight_ReturnValue);
};

}


