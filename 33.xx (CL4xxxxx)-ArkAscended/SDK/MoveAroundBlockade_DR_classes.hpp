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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                MoveAroundBlocakdeKey;                             // 0xA8(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoveAroundBlockade_DR_C* GetDefaultObj();

	class AActor* ReceiveExecutionFinish(enum class EBTNodeResult* NodeResult);
	class AActor* ReceiveConditionCheck();
	class AActor* ReceiveExecutionStart();
	bool ExecuteUbergraph_MoveAroundBlockade_DR(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_2, enum class EBTNodeResult* K2Node_Event_NodeResult, class AActor* K2Node_Event_OwnerActor_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, struct FVector* CallFunc_GetVelocity_ReturnValue, double CallFunc_DoubleToFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, class AActor* K2Node_Event_OwnerActor, double CallFunc_DoubleToFloat_ReturnValue_1, double* CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue_1);
};

}


