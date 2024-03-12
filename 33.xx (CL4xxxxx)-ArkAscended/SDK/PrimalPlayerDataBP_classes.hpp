#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x628 - 0x620)
// BlueprintGeneratedClass PrimalPlayerDataBP.PrimalPlayerDataBP_C
class UPrimalPlayerDataBP_C : public UPrimalPlayerDataBP_Base_C
{
public:
	class AShooterPlayerState*                   Used_Player_State;                                 // 0x620(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalPlayerDataBP_C* GetDefaultObj();

	bool Delay_Fix_Outdated_Female_Bone_Modifiers();
	class AShooterCharacter* BPAppliedToPlayerState(class AShooterPlayerState* ForPlayerState, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess);
	bool BPApplyToPlayerCharacter(class AShooterPlayerState* ForPlayerState, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
};

}


