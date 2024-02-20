#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass HasWildParent_BT.HasWildParent_BT_C
class UHasWildParent_BT_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHasWildParent_BT_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor** OwnerActor);
	class APrimalDinoCharacter* ExecuteUbergraph_HasWildParent_BT(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_IsValid_ReturnValue);
};

}


