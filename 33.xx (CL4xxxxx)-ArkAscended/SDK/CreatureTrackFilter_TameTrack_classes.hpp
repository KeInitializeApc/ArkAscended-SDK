#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x59 - 0x59)
// BlueprintGeneratedClass CreatureTrackFilter_TameTrack.CreatureTrackFilter_TameTrack_C
class UCreatureTrackFilter_TameTrack_C : public UCreatureTrackFilter_ParentClass_C
{
public:

	static class UClass* StaticClass();
	static class UCreatureTrackFilter_TameTrack_C* GetDefaultObj();

	class AGameModeBase* GetActorsToSearchThrough_BP(class AShooterPlayerController** SPC, TArray<class AActor*>* K2Node_MakeArray_Array, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess);
	bool ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


