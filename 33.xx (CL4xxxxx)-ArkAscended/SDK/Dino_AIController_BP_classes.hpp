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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0xA48(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FBlackboardKeySelector                NavKey;                                            // 0xA50(0x28)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_AIController_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	bool ExecuteUbergraph_Dino_AIController_BP(class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController);
};

}


