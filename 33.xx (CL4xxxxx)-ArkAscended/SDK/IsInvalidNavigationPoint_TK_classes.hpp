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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetKey;                               // 0xB0(0x28)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsInvalidNavigationPoint_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	bool ExecuteUbergraph_IsInvalidNavigationPoint_TK(class AActor** K2Node_Event_OwnerActor);
};

}


