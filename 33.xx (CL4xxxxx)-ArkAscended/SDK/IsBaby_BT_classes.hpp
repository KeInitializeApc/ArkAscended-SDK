#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass IsBaby_BT.IsBaby_BT_C
class UIsBaby_BT_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsBaby_BT_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor** OwnerActor);
	class APawn* ExecuteUbergraph_IsBaby_BT(class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1);
};

}


