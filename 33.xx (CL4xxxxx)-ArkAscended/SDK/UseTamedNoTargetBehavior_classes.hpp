#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C
class UUseTamedNoTargetBehavior_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUseTamedNoTargetBehavior_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor** OwnerActor);
	bool ExecuteUbergraph_UseTamedNoTargetBehavior(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


