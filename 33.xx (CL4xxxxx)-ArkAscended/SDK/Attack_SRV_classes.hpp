#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xC8 - 0x98)
// BlueprintGeneratedClass Attack_SRV.Attack_SRV_C
class UAttack_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                IsAttackingKey;                                    // 0xA0(0x28)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UAttack_SRV_C* GetDefaultObj();

	class AActor* ReceiveActivation();
	class AActor* ReceiveDeactivation();
	void ExecuteUbergraph_Attack_SRV(int32 EntryPoint, class AActor** K2Node_Event_OwnerActor, class AActor** K2Node_Event_OwnerActor_1);
};

}

