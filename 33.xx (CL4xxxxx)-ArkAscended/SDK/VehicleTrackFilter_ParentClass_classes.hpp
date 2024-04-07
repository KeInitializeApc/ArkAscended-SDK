#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x59 - 0x59)
// BlueprintGeneratedClass VehicleTrackFilter_ParentClass.VehicleTrackFilter_ParentClass_C
class UVehicleTrackFilter_ParentClass_C : public UPrimalDinoTrackFilter_ParentClass_C
{
public:

	static class UClass* StaticClass();
	static class UVehicleTrackFilter_ParentClass_C* GetDefaultObj();

	bool ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue);
};

}


