#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BeginFly_TK.BeginFly_TK_C
class UBeginFly_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                OnFlyKey;                                          // 0xB0(0x28)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UBeginFly_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	class APawn* ExecuteUbergraph_BeginFly_TK(bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess_2, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_3);
};

}


