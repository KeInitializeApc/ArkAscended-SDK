#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass Seek_Srv.Seek_Srv_C
class USeek_Srv_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USeek_Srv_C* GetDefaultObj();

	void ReceiveActivation(class AActor** OwnerActor);
	bool ExecuteUbergraph_Seek_Srv(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController);
};

}


