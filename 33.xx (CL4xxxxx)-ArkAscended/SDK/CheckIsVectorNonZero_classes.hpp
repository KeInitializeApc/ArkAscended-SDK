#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass CheckIsVectorNonZero.CheckIsVectorNonZero_C
class UCheckIsVectorNonZero_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                InVec;                                             // 0xB0(0x28)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheckIsVectorNonZero_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	bool ExecuteUbergraph_CheckIsVectorNonZero(class AActor** K2Node_Event_OwnerActor);
};

}


