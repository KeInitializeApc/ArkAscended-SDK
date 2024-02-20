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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UForceSuccess_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	int32 ExecuteUbergraph_ForceSuccess_TK(class AActor** K2Node_Event_OwnerActor);
};

}


