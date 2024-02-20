#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xE8 - 0xA8)
// BlueprintGeneratedClass GetRandomFleePoint_TK.GetRandomFleePoint_TK_C
class UGetRandomFleePoint_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       FixedDistance;                                     // 0xB0(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	double                                       RandomDistance;                                    // 0xB8(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xC0(0x28)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UGetRandomFleePoint_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	bool ExecuteUbergraph_GetRandomFleePoint_TK(class AActor** K2Node_Event_OwnerActor, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, double* CallFunc_Add_DoubleDouble_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_2);
};

}


