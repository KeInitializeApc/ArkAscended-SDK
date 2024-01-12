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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       FixedWait;                                         // 0xB0(0x8)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       RandomWait;                                        // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       RandomPower;                                       // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bDontWaitOnFlyingNPC;                              // 0xC8(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class URandomWait_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	float ExecuteUbergraph_RandomWait_TK(class AActor* K2Node_Event_OwnerActor, bool* K2Node_DynamicCast_bSuccess, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue);
};

}


