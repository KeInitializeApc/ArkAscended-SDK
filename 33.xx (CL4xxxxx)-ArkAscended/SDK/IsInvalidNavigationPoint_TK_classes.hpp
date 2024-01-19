#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C
class UIsInvalidNavigationPoint_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xB0(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsInvalidNavigationPoint_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	double ExecuteUbergraph_IsInvalidNavigationPoint_TK(int32 EntryPoint, struct FVector* CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* K2Node_Event_OwnerActor, bool CallFunc_Less_DoubleDouble_ReturnValue);
};

}


