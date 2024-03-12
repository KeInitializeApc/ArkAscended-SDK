#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x114 (0x3094 - 0x2F80)
// BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C
class APlayerControllerBlueprint_C : public AShooterPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F80(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPrimalUserWidget*                     InventoryScene;                                    // 0x2F88(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TSoftClassPtr<class APrimalBuff>             GroundConformDebugBuffSoftClass;                   // 0x2F90(0x30)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class ETameTrackerFilterCategory        TameTrackerCategory;                               // 0x2FC0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D46[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class UPrimalItem>             TrackPingItem;                                     // 0x2FC8(0x30)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TSoftClassPtr<class APrimalBuff_ChangeMaterialScalarParamOverTime_C> TrackPingBuff;                                     // 0x2FF8(0x30)(Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting; // 0x3028(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Debug_actor_tracking;                              // 0x302C(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Last_known_skip_list_ui;                           // 0x302D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         Last_known_skip_map;                               // 0x302E(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D47[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ShouldUpdateTrackedActor_TorporChangeTolerance;    // 0x3030(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       ShouldUpdateTrackedActor_TameAffinityChangeTolerance; // 0x3038(0x8)(ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       ShouldUpdateTrackedActor_HPChangeTolerance;        // 0x3040(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ShouldUpdateTrackedActor_LocationChangeTolerance;  // 0x3048(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D48[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AWaterInteractionBP_C*                 FluidInteractionManager;                           // 0x3050(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UPlayerControllerTrameTrackerFunctions_C* DEBUG_Tame_Tracker_functions_object;               // 0x3058(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageHarvestEffect_RestrictedIntervalBetweenHitEffects; // 0x3060(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D49[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       FoliageHarvestEffect_MinRadius;                    // 0x3068(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       FoliageHarvestEffect_MaxRadius;                    // 0x3070(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       FoliageHarvestEffect_HeightThatMatchesMinRadius;   // 0x3078(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       FoliageHarvestEffect_HeightThatMatchesMaxRadius;   // 0x3080(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageHarvestEffect_InteractionStrength_MaxRadius; // 0x3088(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageHarvestEffect_Plasticity;                   // 0x308C(0x4)(Edit, ConstParm, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FoliageHarvestEffect_InteractionStrength_MinRadius; // 0x3090(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class APlayerControllerBlueprint_C* GetDefaultObj();

	TArray<float> HandleAddPhotoModeMarker(class UClass** MarkerClass, const TArray<double>& VectorValues_HAP, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Array_Get_Item, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	bool IsPhotoModeAllowed(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsSplitscreen_ReturnValue);
	double TogglePhotoMode(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AActor** CallFunc_GetActorOfClass_ReturnValue, class UPrimalUI* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, struct FTransform* CallFunc_SelectTransform_ReturnValue, float* CallFunc_MakeRotator_Yaw_ImplicitCast);
	class FString PlayerCommand(const class FString& TheCommand, class FString* CallFunc_PlayerCommand_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	class UPlayerControllerTrameTrackerFunctions_C* BPSetFCustomTrackedPlayerInfoMembersByPlayerRef(bool* bIsTrackedWaypoint, bool bIsValidForCurrentFilter, struct FCustomTrackedActorInfo* K2Node_MakeStruct_CustomTrackedActorInfo, class UWorld** CallFunc_K2_GetWorld_ReturnValue, struct FCustomTrackedActorInfo* CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	void Restrict_Create_Foliage_Hit_Effect();
	bool BPOnRecievedUpdatedCachedTeamTameList(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool* IsInfoFresh, int32* DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned, bool Handled, int32* ScrollbarIndex, TArray<class AActor*>* K2Node_MakeArray_Array);
	bool Is_creature_being_tracked_atm(int32* InputPin);
	bool Is_player_being_tracked_atm(int32* InputPin);
	double If_Room_Remains_Query_More_Entries_From_Source_List(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, int32* Index_to_use, int32 CallFunc_Max_ReturnValue, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, const TArray<struct FTrackedActorPlusInfoStruct>& CallFunc_GetAllCachedTeamTames_ReturnValue);
	bool Get_or_create_filter_object(int32 Local_selection_type, TArray<class UClass*>* Used_Filters, bool* CallFunc_Array_IsValidIndex_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue_2);
	bool Update_tracked_characters_on_server_and_client(bool* IsInfoFresh, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, const TArray<int32>& Removed_From_Page_Tracked_Actors_IDs_Players1, TArray<int32>* Filtered_remove_teammates, TArray<struct FTrackedActorPlusInfoStruct>* Filtered_add_creatures, TArray<struct FTrackedActorPlusInfoStruct>* Filtered_update_creatures, class AShooterGameMode** Local_cast_shooter_game_mode, bool* Did_update_freshness_on_client, TMap<int32, struct FTrackedActorPlusInfoStruct> Favorites_players, TMap<int32, struct FTrackedActorPlusInfoStruct>* Local_Tracked_Info_Map_To_Use, bool Is_handling_favorited_actors, int32 Actor_id_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures, const TArray<struct FTrackedActorPlusInfoStruct>& Local_tracked_actors, int32* Number_of_favorites_being_shown, TArray<class UClass*>* Used_Filters, TArray<class AActor*>* Non_favorite_tracked_actors, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_5, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_1, bool CallFunc_is_creature_being_tracked_atm_NewParam, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_2, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_3, bool CallFunc_is_creature_being_tracked_atm_NewParam_1, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Array_Get_Item_4, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_5, int32 Temp_int_Array_Index_Variable_6, int32 CallFunc_Array_Get_Item_6, bool CallFunc_is_creature_being_tracked_atm_NewParam_2);
	bool BPServerRequestCustomTrackedActorList_logic(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, int32* ScrollbarIndex, bool Skip_Map, bool Handled, TArray<class UClass*>* Used_Filters, class UCharacterTrackFilter_Base_C** Local_filter, const TArray<class AActor*>& Tracked_Actors, TArray<class AActor*>* K2Node_MakeArray_Array, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base, bool* CallFunc_Greater_IntInt_ReturnValue);
	double Handle_sorting_tracked_actors(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool* IsInfoFresh, bool Skip_Map, bool Handled, TArray<int32>* Missing_teammates_waypoints, TArray<int32>* Missing_allies_waypoints, const TArray<int32>& Missing_teammates_favs, const TArray<int32>& Missing_allies_favs, TArray<int32>* Removed_Teammates, TMap<int32, bool> All_Tracked_Creatures_This_Tick, const TArray<int32>& Removed_From_Page_Tracked_Actors_IDs_Creatures, TArray<int32>* Removed_From_Page_Tracked_Actors_IDs_Players, int32 Adjusted_Scrollbar_Index, TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, class AShooterGameMode** Local_cast_shooter_game_mode, bool* Did_update_freshness_on_client, TMap<int32, struct FTrackedActorPlusInfoStruct> Favorites_players, TMap<int32, struct FTrackedActorPlusInfoStruct>* Local_Tracked_Info_Map_To_Use, bool Is_handling_favorited_actors, int32 Actor_id_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures, const TArray<struct FTrackedActorPlusInfoStruct>& Local_tracked_actors, int32* Number_of_favorites_being_shown, TArray<class UClass*>* Used_Filters, TArray<class AActor*>* Non_favorite_tracked_actors, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue, TArray<struct FTrackedActorPlusInfoStruct>* K2Node_MakeArray_Array, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue_1, const TArray<struct FTrackedActorPlusInfoStruct>& CallFunc_GetAllCachedTeamTames_ReturnValue, TArray<struct FTrackedActorPlusInfoStruct>* K2Node_MakeArray_Array_1, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue_2, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue_3, const TArray<struct FTrackedActorPlusInfoStruct>& CallFunc_GetAllCachedTeamTames_ReturnValue_1, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue_4, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast, double CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast_1);
	bool Should_Fully_Refresh_List();
	bool BPServerRequestCustomTrackedActorList(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool Handled);
	float CanFit(struct FVector* Location, double VerticalOffset, double Radius, const struct FVector& NewLocation, TArray<class AActor*>* K2Node_MakeArray_Array, const struct FVector& CallFunc_MakeVector_ReturnValue, float* CallFunc_MakeRotator_Yaw_ImplicitCast, float* CallFunc_CapsuleOverlapFast_Radius_ImplicitCast);
	double CanDeploy(class UClass* Class, struct FVector* Location, class AActor** Actor, const struct FVector& NewLocation, const class FString& LocalFailureReason, double VerticalOffset, const struct FVector& LocalLocation, bool Temp_bool_Variable, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32* Temp_int_Variable, double* CallFunc_Multiply_IntFloat_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_1, int32* Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double K2Node_VariableSet_HorizontalOffset_ImplicitCast, double* CallFunc_CanFit_Radius_ImplicitCast, double* CallFunc_CanFit_Radius_ImplicitCast_1);
	struct FVector BPCheckCanDinoSpawnFromLocation(const struct FVector& CheckLocation, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanDeploy_Can);
	void OnLoaded_D7293B2D48183D83205E9295F5716E6E(class UClass* Loaded);
	void OnLoaded_BA98DE0848BC459B691689932D89326C(class UClass* Loaded);
	void OnLoaded_CAE125AC424938179B7AD98DC7D71BB0(class UClass* Loaded);
	void BPServerRequestUpdateTrackedWaypointsAndMapPlayers();
	void BPServerRequestUpdateTrackedWaypointsOnly();
	class AActor* OnActorCustomEvent_Event();
	void ReceiveBeginPlay();
	void ServerTryTrackWIthoutWeapon();
	void SetupNewTrackBP();
	void ROS_ToggleGroundConformDebug();
	struct FVector BPApplyFoliageHarvestEffectOnHitAndCollect(struct FVector* InteractDir);
	void BPOnSpawnPlayerCameraManager();
	void DestroyPhotoModeMarker();
	TArray<struct FVector> AddPhotoModeMarker(class UClass** MarkerClass);
	class FString SavePhotoModeMarker();
	float ExecuteUbergraph_PlayerControllerBlueprint(int32* EntryPoint, bool* CallFunc_IsShipping_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, const class FString& CallFunc_Replace_ReturnValue_3, class UClass* K2Node_CustomEvent_Loaded, bool* CallFunc_IsValidSoftClassReference_ReturnValue, bool* CallFunc_IsValidSoftClassReference_ReturnValue_1, class UClass* Temp_class_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool* CallFunc_IsValidSoftClassReference_ReturnValue_2, class APrimalCharacter** CallFunc_PawnToPrimalCharacter_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class UClass* K2Node_CustomEvent_Loaded_1, class UClass* Temp_class_Variable_1, class UClass* K2Node_CustomEvent_Loaded_2, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, bool* K2Node_DynamicCast_bSuccess_2, class UPlayerControllerTrameTrackerFunctions_C* CallFunc_SpawnObject_ReturnValue, struct FVector* K2Node_Event_FoliageOrigin_ImpactPoint, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UClass* Temp_class_Variable_2, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff_1, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_ShouldSpawnWaterInteraction_ReturnValue, bool* K2Node_DynamicCast_bSuccess_3, class FString* K2Node_CustomEvent_MarkerName, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, double* CallFunc_MapRangeClamped_OutRangeB_ImplicitCast, double* CallFunc_MapRangeClamped_OutRangeA_ImplicitCast, float CallFunc_AddFoliageCapsuleInteractionEffect_FoliageInteractionStrength_ImplicitCast);
};

}


