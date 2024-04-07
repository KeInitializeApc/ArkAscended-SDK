#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C
class UPlayerControllerTrameTrackerFunctions_C : public UObject_WithWorldContext
{
public:

	static class UClass* StaticClass();
	static class UPlayerControllerTrameTrackerFunctions_C* GetDefaultObj();

	bool Print_remove_string_only_if_already_tracked(int32 Detected_id, class FString* InString, bool Condition, TMap<int32, struct FTrackedActorPlusInfoStruct> TargetMap1, TMap<int32, struct FTrackedActorPlusInfoStruct>* TargetMap2);
	bool Handle_missing_waypoints(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, TMap<int32, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Missing_allies_favorites, const TArray<struct FTrackedActorPlusInfoStruct>& Creatures_owned_by_this_teammate_or_their_tribe, TArray<int32>* Missing_waypoint_teammates, class AActor* Actor_to_add, bool* Is_fav, int32* Index_to_use, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_True_if_break_was_hit_Variable_3, bool K2Node_SwitchEnum_CmpSuccess, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, TArray<class AActor*>* CallFunc_GetSpecialActorList_OutActors, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_5, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_3, int32 CallFunc_Max_ReturnValue_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool* K2Node_DynamicCast_bSuccess_1, int32* Temp_int_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_5, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item_4, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_6, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item_5, bool K2Node_SwitchEnum_CmpSuccess_3, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_7, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info);
	bool Handle_waypoints(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_allies_waypoints, TArray<int32>* Missing_teammates_waypoints, TArray<int32>* Missing_fav_creatures, int32* Index_to_use, int32 Temp_int_Array_Index_Variable, bool* K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info);
	bool Handle_missing_favorites(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, TMap<int32, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Missing_allies_favorites, const TArray<struct FTrackedActorPlusInfoStruct>& Creatures_owned_by_this_teammate_or_their_tribe, TArray<int32>* Missing_waypoint_teammates, class AActor* Actor_to_add, bool* Is_fav, int32* Index_to_use, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_True_if_break_was_hit_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, bool K2Node_SwitchEnum_CmpSuccess, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, TArray<class AActor*>* CallFunc_GetSpecialActorList_OutActors, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_5, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue_1, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_3, bool* K2Node_DynamicCast_bSuccess, const struct FTrackedActorIDCategoryPair& CallFunc_Array_Get_Item_4, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_5, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_6, const struct FTrackedActorIDCategoryPair& CallFunc_Array_Get_Item_5, bool K2Node_SwitchEnum_CmpSuccess_3, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_7, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info);
	bool Handle_favorites(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Missing_allies_favorites, TArray<int32>* Missing_waypoint_teammates, int32* Index_to_use, int32 Temp_int_Array_Index_Variable, bool* K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, const struct FTrackedActorIDCategoryPair& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info);
	int32 If_Room_Remains_Query_More_Entries_From_Source_List_2(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, int32* PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, const TArray<struct FTrackedActorPlusInfoStruct>& All_cached_team_tames, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, int32* Index_to_use, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	int32 If_Room_Remains_Query_More_Entries_From_Source_List_1(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, int32* PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, bool Is_Player, int32* Index_to_use, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, int32 Temp_int_Loop_Counter_Variable, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
	class AGameModeBase* Handle_sorting_tracked_actors_first_stuff(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool* IsInfoFresh, bool Skip_Map, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Removed_Teammates1, TMap<int32, bool>* All_Tracked_PlayerChars_This_Tick1, TArray<int32>* Removed_From_Page_Tracked_Actors_IDs_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, const TArray<int32>& Missing_allies_favorites, TArray<int32>* Missing_allies_waypoints, TArray<int32>* Missing_teammates_waypoints, bool Is_handling_favorited_actors, class AShooterGameMode** Local_cast_shooter_game_mode, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, bool Local_CustomActorTracking_HasJustChangedDinoGroup, bool* Local_CustomActorTracking_HasJustChangedSearchText, bool* Local_CustomActorTracking_HasJustChangedSelectionType, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess);
	float Create_Tracked_Actor_Info_Struct_Player(bool* bIsTrackedWaypoint, bool bIsValidForCurrentFilter, bool Is_POI_visible, const struct FCustomTrackedActorInfo& Player_info, class FString* CallFunc_LinkedPlayerIDString_ReturnValue, int32* CallFunc_GetCharacterLevel_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue, float* CallFunc_BPGetMaxStatusValue_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, float* CallFunc_BPGetMaxStatusValue_ReturnValue_1, float* CallFunc_BPGetCurrentStatusValue_ReturnValue_2, double CallFunc_SafeDivide_ReturnValue_1, float* CallFunc_BPGetMaxStatusValue_ReturnValue_2, double CallFunc_SafeDivide_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float* K2Node_SetFieldsInStruct_HungerPercent_ImplicitCast);
	bool Create_Tracked_Actor_Info_Struct_Dino(bool* bIsTrackedWaypoint, class APrimalDinoCharacter** HandledDino, bool bIsValidForCurrentFilter, bool Is_POI_visible, struct FCustomTrackedActorInfo* K2Node_SetFieldsInStruct_StructOut);
	int32 Remove(bool Local_is_shooter_char, int32 Detected_id, class APrimalCharacter** Player_controller_shooter_character, TMap<int32, struct FTrackedActorPlusInfoStruct> TargetMap1, TMap<int32, struct FTrackedActorPlusInfoStruct>* TargetMap2, class FString* InString, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	class UCharacterTrackFilter_Base_C* Should_Actor_be_Tracked(int32 CustomTameSelectionType, const class FString& CustomTameSearchText, bool Is_favorited, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, TArray<class UClass*>* Used_Filters, class UDinoTrackFilterOption* Filter_object, bool Ret_can_track, bool* K2Node_DynamicCast_bSuccess, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue);
	bool Add_to_actors_in_page_count(TArray<class AActor*>* Non_favorite_tracked_actors, bool Local_should_show_being_tracked, bool* Local_is_teammate);
	bool Is_actor_valid_for_this_filter(int32 CustomTameSelectionType, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, bool Show_being_tracked, class APlayerState* PC_PlayerState, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool* Actor_should_be_tracked);
	double ShouldTrackedActorReplicateToClientAgain(TMap<int32, struct FTrackedActorPlusInfoStruct>* TrackedInfoMap, bool* Is_tracked_waypoint, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, bool Should_POI_be_visible, bool* Should_Replicate, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsPrimalCharacter_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_IsShooterCharacter_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_3, double CallFunc_SafeDivide_ReturnValue, float CallFunc_GetHealth_ReturnValue, float* CallFunc_BPGetMaxStatusValue_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue, double CallFunc_SafeDivide_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FTrackedActorPlusInfoStruct* K2Node_SetFieldsInStruct_StructOut, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool* CallFunc_NotEqual_StrStr_ReturnValue, bool* CallFunc_NotEqual_StrStr_ReturnValue_1, bool* CallFunc_NotEqual_StrStr_ReturnValue_2, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, double* CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1, double* CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast_1);
	int32 Do_the_logic_to_handle_tracking_single_actor(TMap<int32, struct FTrackedActorPlusInfoStruct>* TrackedInfoMap, int32 CustomTameSelectionType, const class FString& CustomTameSearchText, TArray<class AActor*>* Non_favorite_tracked_actors, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players, class AShooterGameMode* GameMode, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, bool Is_Map_Player, const TArray<int32>& Remove_actors_creatures, int32* PC_TargetingTeam, class APlayerState* PC_PlayerState, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, bool Will_Be_Added, bool Is_POI_visible, bool Actor_is_valid_for_this_filter, int32 Detected_id, bool Local_is_shooter_char, bool* Local_is_primal_dino_char, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool* K2Node_DynamicCast_bSuccess, const struct FTrackedActorIDCategoryPair& CallFunc_Array_Get_Item, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_5, bool* CallFunc_IsDead_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_6, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_7, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, bool* CallFunc_ShouldTrackedActorReplicateToClientAgain_Should_Replicate, struct FCustomTrackedActorInfo* CallFunc_Create_Tracked_Actor_Info_Struct_Dino_ReturnValue, struct FCustomTrackedActorInfo* CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3);
	bool Update_all_actors_in_map(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool Is_Player, class AShooterGameMode* GameMode, TMap<int32, struct FTrackedActorPlusInfoStruct> Tracked_info_map_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_teammates, TMap<int32, struct FTrackedActorPlusInfoStruct>* DeadPlayersSkipped, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Removed_Tracked_Actors_IDs_Creatures_1, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, int32 Actor_id_to_use, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, TArray<int32>* CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info);
	bool Update_All_Actors_In_Actor_Map_Actor_Array(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, TMap<int32, class AActor*> Tracked_info_map_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, const TArray<class AActor*>& Actor_Array, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, int32* Index_to_use, int32 CallFunc_Max_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info_1, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info_2, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info_3, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info_4);
	bool Get_ID_from_Actor_Ref(class AActor** Object, class AShooterCharacter* Cast_As_ShooterChar, bool Is_PrimalDinoChar, class APrimalDinoCharacter* Cast_As_PrimalDinoChar, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FString* CallFunc_LinkedPlayerIDString_ReturnValue, bool* CallFunc_IsPrimalCharacter_ReturnValue, bool CallFunc_IsShooterCharacter_ReturnValue);
	int32 Debug_print_results_of_a_tracked_actor_handled(bool Was_updated, class FString* Category, bool* Debug_Enabled);
	bool Update_single_tracked_actor(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool Is_Player, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, const struct FTrackedActorPlusInfoStruct& Actor_info, TMap<int32, struct FTrackedActorPlusInfoStruct>* TrackedInfoMap, int32* Actor_id, TMap<int32, bool> All_Tracked_Players_This_Tick, bool* Is_A_Map_Player, TMap<int32, bool> All_Tracked_Creatures_This_Tick, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct>* DeadPlayersSkipped, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Removed_Teammates, const TArray<int32>& Removed_Tracked_Actors_IDs_Creatures_1, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, bool Will_Be_Added, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool* CallFunc_IsDead_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const struct FTrackedActorPlusInfoStruct& CallFunc_Do_the_logic_to_handle_tracking_single_actor_info);
	bool Is_creature_being_tracked_atm(int32* InputPin, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer);
	bool Is_player_being_tracked_atm(int32* InputPin);
	int32 Add_All_Teammates(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, int32* PC_TargetingTeam, class APlayerState* PC_PlayerState, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Removed_Tracked_Actors_IDs_Creatures_1, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, TMap<int32, struct FTrackedActorPlusInfoStruct> Dead_Players_Skipped, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, TArray<int32>* CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, bool Temp_bool_Variable, TArray<class AActor*>* CallFunc_GetSpecialActorList_OutActors, class AActor* CallFunc_Array_Get_Item_1, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info, int32 Temp_int_Loop_Counter_Variable_1);
	TArray<int32> Update_all_actors_in_actor_map(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool Is_Player, class AShooterGameMode* GameMode, TMap<int32, class AActor*> Tracked_info_map_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, TArray<class AActor*>* CallFunc_Map_Values_Values);
	bool Add_New_Known_Characters_in_Page_Range(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, bool Is_Player, bool* CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable_2, TMap<int32, struct FTrackedActorPlusInfoStruct> K2Node_Select_Default, TMap<int32, struct FTrackedActorPlusInfoStruct> K2Node_Select_Default_1, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info);
	bool Should_Fully_Refresh_List();
	class UCharacterTrackFilter_Base_C* Get_or_create_filter_object(int32 Local_selection_type, TArray<class UClass*>* Used_Filters, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue_2, class UClass* CallFunc_Array_Get_Item, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
};

}

