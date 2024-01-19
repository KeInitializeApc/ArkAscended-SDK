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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       FixedDistance;                                     // 0xB0(0x8)(ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	double                                       RandomDistance;                                    // 0xB8(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xC0(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGetRandomFleePoint_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	double ExecuteUbergraph_GetRandomFleePoint_TK(int32 EntryPoint, double* CallFunc_RandomFloat_ReturnValue, class AActor* K2Node_Event_OwnerActor, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1);
};

}


