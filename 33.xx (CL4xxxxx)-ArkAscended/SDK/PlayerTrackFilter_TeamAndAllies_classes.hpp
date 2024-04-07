#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x57 - 0x57)
// BlueprintGeneratedClass PlayerTrackFilter_TeamAndAllies.PlayerTrackFilter_TeamAndAllies_C
class UPlayerTrackFilter_TeamAndAllies_C : public UPlayerTrackFilter_ParentClass_C
{
public:

	static class UClass* StaticClass();
	static class UPlayerTrackFilter_TeamAndAllies_C* GetDefaultObj();

	bool ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


