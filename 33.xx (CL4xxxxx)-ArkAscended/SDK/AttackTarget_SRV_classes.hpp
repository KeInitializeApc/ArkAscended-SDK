#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass AttackTarget_SRV.AttackTarget_SRV_C
class UAttackTarget_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAttackTarget_SRV_C* GetDefaultObj();

	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveDeactivation(class AActor** OwnerActor);
	int32 ExecuteUbergraph_AttackTarget_SRV(class AActor* K2Node_Event_OwnerActor, class AActor* K2Node_Event_OwnerActor_1);
};

}


