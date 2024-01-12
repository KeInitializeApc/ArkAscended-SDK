#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass AttackSetRunning.AttackSetRunning_C
class UAttackSetRunning_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAttackSetRunning_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	class APawn* ExecuteUbergraph_AttackSetRunning(class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1);
};

}


