#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass IsFollowing_DK.IsFollowing_DK_C
class UIsFollowing_DK_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetObjectKey;                         // 0xA8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsFollowing_DK_C* GetDefaultObj();

	class AActor* ReceiveConditionCheck();
	bool ExecuteUbergraph_IsFollowing_DK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class AActor* CallFunc_GetTamedLandTarget_ReturnValue);
};

}


