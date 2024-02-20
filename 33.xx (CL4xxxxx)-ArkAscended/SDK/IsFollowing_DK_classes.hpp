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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBlackboardKeySelector                NavigationTargetObjectKey;                         // 0xA8(0x28)(ConstParm, BlueprintVisible, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UIsFollowing_DK_C* GetDefaultObj();

	void ReceiveConditionCheck(class AActor** OwnerActor);
	bool ExecuteUbergraph_IsFollowing_DK(class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class AActor* CallFunc_GetTamedFollowTarget_ReturnValue, class AActor** CallFunc_GetTamedLandTarget_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
};

}


