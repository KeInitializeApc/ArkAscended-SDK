#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xD9 - 0xA8)
// BlueprintGeneratedClass SetBBBool_TK.SetBBBool_TK_C
class USetBBBool_TK_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0xB0(0x28)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Value;                                             // 0xD8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class USetBBBool_TK_C* GetDefaultObj();

	void ReceiveExecute(class AActor** OwnerActor);
	int32 ExecuteUbergraph_SetBBBool_TK(class AActor** K2Node_Event_OwnerActor);
};

}


