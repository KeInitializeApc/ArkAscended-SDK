#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x53 - 0x50)
// BlueprintGeneratedClass CharacterTrackFilter_Base.CharacterTrackFilter_Base_C
class UCharacterTrackFilter_Base_C : public UDinoTrackFilterOption
{
public:
	bool                                         Use_Custom_Actor_List;                             // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Only_On_Same_Team;                                 // 0x51(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Only_Living;                                       // 0x52(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCharacterTrackFilter_Base_C* GetDefaultObj();

	TArray<class AActor*> GetActorsToSearchThrough_BP(class AShooterPlayerController** SPC);
	bool ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsDead_ReturnValue);
	TArray<class AActor*> GetActorsToSearchThrough();
	class AShooterPlayerState* Is_In_Dino_Group(class AActor* Checked_actor, class APlayerState* Player_state, int32 Dino_Group_Num, bool Is_favorited, bool Is_In_Group, bool Ret_is_in_group, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsDinoClassInOrderGroup_ReturnValue, bool CallFunc_IsDinoInOrderGroup_ReturnValue);
};

}


