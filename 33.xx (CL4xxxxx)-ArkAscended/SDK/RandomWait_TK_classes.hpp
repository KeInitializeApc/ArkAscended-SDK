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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       FixedWait;                                         // 0xB0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       RandomWait;                                        // 0xB8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       RandomPower;                                       // 0xC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         bDontWaitOnFlyingNPC;                              // 0xC8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class URandomWait_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	float ExecuteUbergraph_RandomWait_TK(int32* EntryPoint, class AActor** K2Node_Event_OwnerActor, bool* K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue);
};

}


