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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                InVec;                                             // 0xB0(0x28)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCheckIsVectorNonZero_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	bool ExecuteUbergraph_CheckIsVectorNonZero(int32* EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


