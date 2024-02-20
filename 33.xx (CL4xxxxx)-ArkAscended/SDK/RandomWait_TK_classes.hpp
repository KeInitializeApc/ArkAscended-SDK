#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xC9 - 0xA8)
// BlueprintGeneratedClass RandomWait_TK.RandomWait_TK_C
class URandomWait_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       FixedWait;                                         // 0xB0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       RandomWait;                                        // 0xB8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       RandomPower;                                       // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDontWaitOnFlyingNPC;                              // 0xC8(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class URandomWait_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	float ExecuteUbergraph_RandomWait_TK(class AActor** K2Node_Event_OwnerActor, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue);
};

}


