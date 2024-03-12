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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0xB0(0x28)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Value;                                             // 0xD8(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

	static class UClass* StaticClass();
	static class USetBBBool_TK_C* GetDefaultObj();

	class AActor* ReceiveExecute();
	void ExecuteUbergraph_SetBBBool_TK(int32* EntryPoint, class AActor** K2Node_Event_OwnerActor);
};

}


