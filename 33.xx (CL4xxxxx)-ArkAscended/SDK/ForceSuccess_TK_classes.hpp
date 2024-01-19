#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass ForceSuccess_TK.ForceSuccess_TK_C
class UForceSuccess_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UForceSuccess_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	void ExecuteUbergraph_ForceSuccess_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


