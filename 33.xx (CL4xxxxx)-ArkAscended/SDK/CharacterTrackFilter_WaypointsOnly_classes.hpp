#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x57 - 0x57)
// BlueprintGeneratedClass CharacterTrackFilter_WaypointsOnly.CharacterTrackFilter_WaypointsOnly_C
class UCharacterTrackFilter_WaypointsOnly_C : public UCharacterTrackFilter_SearchName_C
{
public:

	static class UClass* StaticClass();
	static class UCharacterTrackFilter_WaypointsOnly_C* GetDefaultObj();

	int32 ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, int32 Temp_int_Array_Index_Variable, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class FString* CallFunc_LinkedPlayerIDString_ReturnValue, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsShooterCharacter_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1);
};

}


