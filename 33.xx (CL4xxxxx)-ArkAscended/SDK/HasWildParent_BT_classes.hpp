#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass HasWildParent_BT.HasWildParent_BT_C
class UHasWildParent_BT_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class UHasWildParent_BT_C* GetDefaultObj();

	class AActor* ReceiveConditionCheck();
	bool ExecuteUbergraph_HasWildParent_BT(int32* EntryPoint, class AActor** K2Node_Event_OwnerActor, class APrimalDinoAIController** K2Node_DynamicCast_AsPrimal_Dino_AIController, bool* K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, class APrimalDinoCharacter* CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue);
};

}


