#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xA70 - 0xA38)
// BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C
class ADino_AIController_BP_C : public APrimalDinoAIController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0xA40(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FBlackboardKeySelector                NavKey;                                            // 0xA48(0x28)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class ADino_AIController_BP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	bool ExecuteUbergraph_Dino_AIController_BP(int32* EntryPoint, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess);
};

}


