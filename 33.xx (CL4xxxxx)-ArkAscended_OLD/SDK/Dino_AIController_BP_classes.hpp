#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xA78 - 0xA40)
// BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C
class ADino_AIController_BP_C : public APrimalDinoAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0xA48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FBlackboardKeySelector                NavKey;                                            // 0xA50(0x28)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_AIController_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	bool ExecuteUbergraph_Dino_AIController_BP(int32* EntryPoint, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController);
};

}

