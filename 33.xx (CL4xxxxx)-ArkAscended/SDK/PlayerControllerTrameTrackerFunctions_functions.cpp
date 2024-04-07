#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C
// (None)

class UClass* UPlayerControllerTrameTrackerFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerControllerTrameTrackerFunctions_C");

	return Clss;
}


// PlayerControllerTrameTrackerFunctions_C PlayerControllerTrameTrackerFunctions.Default__PlayerControllerTrameTrackerFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerControllerTrameTrackerFunctions_C* UPlayerControllerTrameTrackerFunctions_C::GetDefaultObj()
{
	static class UPlayerControllerTrameTrackerFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerControllerTrameTrackerFunctions_C*>(UPlayerControllerTrameTrackerFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.print remove string only if already tracked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Detected_id                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      InString                                                         (ExportObject, OutParm, Config, EditConst, SubobjectReference)
// bool                               Condition                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// TMap<int32, struct FTrackedActorPlusInfoStruct>TargetMap                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>TargetMap1                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>TargetMap2                                                       (Edit, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Map_Contains_ReturnValue_1                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Map_Contains_ReturnValue_2                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)

bool UPlayerControllerTrameTrackerFunctions_C::Print_remove_string_only_if_already_tracked(int32 Detected_id, class FString* InString, bool Condition, TMap<int32, struct FTrackedActorPlusInfoStruct> TargetMap1, TMap<int32, struct FTrackedActorPlusInfoStruct>* TargetMap2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "print remove string only if already tracked");

	Params::UPlayerControllerTrameTrackerFunctions_C_Print_remove_string_only_if_already_tracked_Params Parms{};

	Parms.Detected_id = Detected_id;
	Parms.Condition = Condition;
	Parms.TargetMap1 = TargetMap1;

	UObject::ProcessEvent(Func, &Parms);

	if (InString != nullptr)
		*InString = std::move(Parms.InString);

	if (TargetMap2 != nullptr)
		*TargetMap2 = Parms.TargetMap2;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle missing waypoints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies        (BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_creature_favorites                                       (Edit, ConstParm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_allies_favorites                                         (BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_teammates_favorites                                      (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Creatures_owned_by_this_teammate_or_their_tribe                  (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   Current_category                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      Actor_to_add                                                     (ConstParm, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_fav                                                           (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Waypoint_indicies_to_remove                                      (BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info_to_use                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index_to_use                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_1                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_2                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_2                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_3                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable_3                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FTrackedActorPlusInfoStruct K2Node_MakeStruct_TrackedActorPlusInfoStruct                     (Edit, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_4                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_5                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// TArray<class AActor*>              CallFunc_GetSpecialActorList_OutActors                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_6                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_5                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Was_Valid                         (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Get_ID_from_Actor_Ref_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar                    (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Get_ID_from_Actor_Ref_Cast_As_ShooterChar               (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_PrimalDinoChar                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   CallFunc_Get_ID_from_Actor_Ref_actor_category                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FTrackedActorPlusInfoStruct CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// int32                              CallFunc_Max_ReturnValue_1                                       (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_GetDinoIDs_OutDinoID1                                   (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetDinoIDs_OutDinoID2                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_5                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// struct FTrackedActorIDCategoryPairWithBoolCallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Find_ReturnValue_4                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_6                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FTrackedActorIDCategoryPairWithBoolCallFunc_Array_Get_Item_5                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Find_ReturnValue_5                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_7                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Handle_missing_waypoints(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, TMap<int32, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Missing_allies_favorites, const TArray<struct FTrackedActorPlusInfoStruct>& Creatures_owned_by_this_teammate_or_their_tribe, TArray<int32>* Missing_waypoint_teammates, class AActor* Actor_to_add, bool* Is_fav, int32* Index_to_use, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_True_if_break_was_hit_Variable_3, bool K2Node_SwitchEnum_CmpSuccess, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, TArray<class AActor*>* CallFunc_GetSpecialActorList_OutActors, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_5, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_3, int32 CallFunc_Max_ReturnValue_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool* K2Node_DynamicCast_bSuccess_1, int32* Temp_int_Variable, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_5, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item_4, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_6, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item_5, bool K2Node_SwitchEnum_CmpSuccess_3, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_7, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "handle missing waypoints");

	Params::UPlayerControllerTrameTrackerFunctions_C_Handle_missing_waypoints_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies = PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Missing_allies_favorites = Missing_allies_favorites;
	Parms.Creatures_owned_by_this_teammate_or_their_tribe = Creatures_owned_by_this_teammate_or_their_tribe;
	Parms.Actor_to_add = Actor_to_add;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_bool_True_if_break_was_hit_Variable_3 = Temp_bool_True_if_break_was_hit_Variable_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_TrackedActorPlusInfoStruct = K2Node_MakeStruct_TrackedActorPlusInfoStruct;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_ReturnValue = CallFunc_Get_ID_from_Actor_Ref_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar = CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar = CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (Is_fav != nullptr)
		*Is_fav = Parms.Is_fav;

	if (Index_to_use != nullptr)
		*Index_to_use = Parms.Index_to_use;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	if (CallFunc_GetSpecialActorList_OutActors != nullptr)
		*CallFunc_GetSpecialActorList_OutActors = std::move(Parms.CallFunc_GetSpecialActorList_OutActors);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_2 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_3 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_4 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_4 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_5 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_5 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_5;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_6 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_6 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_6;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_7 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_7 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_7;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle waypoints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_tracked_waypoint                                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies        (BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_creature_waypoints                                       (ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_allies_waypoints                                         (Edit, ConstParm, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_teammates_waypoints                                      (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info_to_use                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index_to_use                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FTrackedActorIDCategoryPairWithBoolCallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_2                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

bool UPlayerControllerTrameTrackerFunctions_C::Handle_waypoints(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_allies_waypoints, TArray<int32>* Missing_teammates_waypoints, TArray<int32>* Missing_fav_creatures, int32* Index_to_use, int32 Temp_int_Array_Index_Variable, bool* K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "handle waypoints");

	Params::UPlayerControllerTrameTrackerFunctions_C_Handle_waypoints_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies = PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (Is_tracked_waypoint != nullptr)
		*Is_tracked_waypoint = Parms.Is_tracked_waypoint;

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_allies_waypoints != nullptr)
		*Missing_allies_waypoints = std::move(Parms.Missing_allies_waypoints);

	if (Missing_teammates_waypoints != nullptr)
		*Missing_teammates_waypoints = std::move(Parms.Missing_teammates_waypoints);

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Index_to_use != nullptr)
		*Index_to_use = Parms.Index_to_use;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle missing favorites
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies        (BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_creature_favorites                                       (Edit, ConstParm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_allies_favorites                                         (BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_teammates_favorites                                      (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Creatures_owned_by_this_teammate_or_their_tribe                  (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   Current_category                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      Actor_to_add                                                     (ConstParm, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_fav                                                           (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Fav_indicies_to_remove                                           (ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info_to_use                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index_to_use                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable_2                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_True_if_break_was_hit_Variable_3                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FTrackedActorPlusInfoStruct K2Node_MakeStruct_TrackedActorPlusInfoStruct                     (Edit, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_2                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_1                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_2                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_3                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_4                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// TArray<class AActor*>              CallFunc_GetSpecialActorList_OutActors                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_5                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_5                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Was_Valid                         (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Get_ID_from_Actor_Ref_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar                    (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Get_ID_from_Actor_Ref_Cast_As_ShooterChar               (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_PrimalDinoChar                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   CallFunc_Get_ID_from_Actor_Ref_actor_category                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_6                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Max_ReturnValue_1                                       (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FTrackedActorIDCategoryPair CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_5                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_GetDinoIDs_OutDinoID1                                   (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetDinoIDs_OutDinoID2                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue_4                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_6                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FTrackedActorIDCategoryPair CallFunc_Array_Get_Item_5                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Find_ReturnValue_5                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_7                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Handle_missing_favorites(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, TMap<int32, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Missing_allies_favorites, const TArray<struct FTrackedActorPlusInfoStruct>& Creatures_owned_by_this_teammate_or_their_tribe, TArray<int32>* Missing_waypoint_teammates, class AActor* Actor_to_add, bool* Is_fav, int32* Index_to_use, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_True_if_break_was_hit_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_True_if_break_was_hit_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, bool K2Node_SwitchEnum_CmpSuccess, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, TArray<class AActor*>* CallFunc_GetSpecialActorList_OutActors, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_5, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue_1, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_3, bool* K2Node_DynamicCast_bSuccess, const struct FTrackedActorIDCategoryPair& CallFunc_Array_Get_Item_4, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_5, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_6, const struct FTrackedActorIDCategoryPair& CallFunc_Array_Get_Item_5, bool K2Node_SwitchEnum_CmpSuccess_3, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_7, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "handle missing favorites");

	Params::UPlayerControllerTrameTrackerFunctions_C_Handle_missing_favorites_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies = PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Missing_allies_favorites = Missing_allies_favorites;
	Parms.Creatures_owned_by_this_teammate_or_their_tribe = Creatures_owned_by_this_teammate_or_their_tribe;
	Parms.Actor_to_add = Actor_to_add;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable_2 = Temp_bool_True_if_break_was_hit_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_bool_True_if_break_was_hit_Variable_3 = Temp_bool_True_if_break_was_hit_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_TrackedActorPlusInfoStruct = K2Node_MakeStruct_TrackedActorPlusInfoStruct;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_ReturnValue = CallFunc_Get_ID_from_Actor_Ref_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar = CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar = CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (Is_fav != nullptr)
		*Is_fav = Parms.Is_fav;

	if (Index_to_use != nullptr)
		*Index_to_use = Parms.Index_to_use;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	if (CallFunc_GetSpecialActorList_OutActors != nullptr)
		*CallFunc_GetSpecialActorList_OutActors = std::move(Parms.CallFunc_GetSpecialActorList_OutActors);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_2 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_3 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_4 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_4 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_5 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_5 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_5;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_6 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_6 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_6;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_7 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_7 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_7;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.handle favorites
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_tracked_waypoint                                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies        (BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_creature_favorites                                       (Edit, ConstParm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_allies_favorites                                         (BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_teammates_favorites                                      (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info_to_use                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index_to_use                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// struct FTrackedActorIDCategoryPair CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_2                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

bool UPlayerControllerTrameTrackerFunctions_C::Handle_favorites(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct> PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Missing_allies_favorites, TArray<int32>* Missing_waypoint_teammates, int32* Index_to_use, int32 Temp_int_Array_Index_Variable, bool* K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, const struct FTrackedActorIDCategoryPair& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "handle favorites");

	Params::UPlayerControllerTrameTrackerFunctions_C_Handle_favorites_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies = PC_AllPlayersWhosInfoIsBeingSentToClientFromServer_allies;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Missing_allies_favorites = Missing_allies_favorites;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (Is_tracked_waypoint != nullptr)
		*Is_tracked_waypoint = Parms.Is_tracked_waypoint;

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (Index_to_use != nullptr)
		*Index_to_use = Parms.Index_to_use;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.If Room Remains Query More Entries From Source List_2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Scrollbar_Index                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Overwritten_Custom_Actor_Array                                   (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Previously_Tracked_Creatures_That_Remain_Tracked                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Previously_Tracked_Players_That_Remain_Tracked                   (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting(Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>All_cached_team_tames                                            (Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index_to_use                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Track_actor_filter                                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// struct FTrackedActorPlusInfoStruct K2Node_MakeStruct_TrackedActorPlusInfoStruct                     (Edit, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Was_Valid                         (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Get_ID_from_Actor_Ref_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar                    (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Get_ID_from_Actor_Ref_Cast_As_ShooterChar               (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_PrimalDinoChar                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   CallFunc_Get_ID_from_Actor_Ref_actor_category                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map_1                                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UPlayerControllerTrameTrackerFunctions_C::If_Room_Remains_Query_More_Entries_From_Source_List_2(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, int32* PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, const TArray<struct FTrackedActorPlusInfoStruct>& All_cached_team_tames, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, int32* Index_to_use, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "If Room Remains Query More Entries From Source List_2");

	Params::UPlayerControllerTrameTrackerFunctions_C_If_Room_Remains_Query_More_Entries_From_Source_List_2_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.Previously_Tracked_Players_That_Remain_Tracked = Previously_Tracked_Players_That_Remain_Tracked;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.All_cached_team_tames = All_cached_team_tames;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_TrackedActorPlusInfoStruct = K2Node_MakeStruct_TrackedActorPlusInfoStruct;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Get_ID_from_Actor_Ref_ReturnValue = CallFunc_Get_ID_from_Actor_Ref_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar = CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar = CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting != nullptr)
		*PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting = Parms.PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting;

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (Index_to_use != nullptr)
		*Index_to_use = Parms.Index_to_use;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.If Room Remains Query More Entries From Source List_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Scrollbar_Index                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Overwritten_Custom_Actor_Array                                   (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Previously_Tracked_Creatures_That_Remain_Tracked                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Previously_Tracked_Players_That_Remain_Tracked                   (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting(Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_Player                                                        (Edit, ConstParm, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index_to_use                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Track_actor_filter                                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// struct FTrackedActorPlusInfoStruct K2Node_MakeStruct_TrackedActorPlusInfoStruct                     (Edit, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Map_Contains_ReturnValue_1                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Was_Valid                         (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Get_ID_from_Actor_Ref_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar                    (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Get_ID_from_Actor_Ref_Cast_As_ShooterChar               (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_PrimalDinoChar                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   CallFunc_Get_ID_from_Actor_Ref_actor_category                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Map_Contains_ReturnValue_2                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map_1                                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UPlayerControllerTrameTrackerFunctions_C::If_Room_Remains_Query_More_Entries_From_Source_List_1(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, int32* PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, bool Is_Player, int32* Index_to_use, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, int32 Temp_int_Loop_Counter_Variable, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "If Room Remains Query More Entries From Source List_1");

	Params::UPlayerControllerTrameTrackerFunctions_C_If_Room_Remains_Query_More_Entries_From_Source_List_1_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.Previously_Tracked_Players_That_Remain_Tracked = Previously_Tracked_Players_That_Remain_Tracked;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Is_Player = Is_Player;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_TrackedActorPlusInfoStruct = K2Node_MakeStruct_TrackedActorPlusInfoStruct;
	Parms.CallFunc_Get_ID_from_Actor_Ref_ReturnValue = CallFunc_Get_ID_from_Actor_Ref_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar = CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar = CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting != nullptr)
		*PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting = Parms.PC_Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting;

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (Index_to_use != nullptr)
		*Index_to_use = Parms.Index_to_use;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Handle sorting tracked actors_first_stuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               IsInfoFresh                                                      (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Overwritten_Custom_Actor_Array                                   (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Already_Setup_Filter_Object                                      (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Scrollbar_Index                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Skip_Dino_List_UI                                                (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Skip_Map                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               PC_CustomActorTracking_HasJustChangedSelectionType               (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               PC_CustomActorTracking_HasJustChangedSearchText                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               PC_CustomActorTracking_HasJustChangedDinoGroup                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FCustomTrackedActorInfo>PC_TrackedActorIDs_TotalForFilter_Ordered                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam1                                                (Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick1                                 (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates1                                               (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_PlayerChars_This_Tick1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_From_Page_Tracked_Actors_IDs_Creatures1                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_From_Page_Tracked_Actors_IDs_Players1                    (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_creature_favorites                                       (Edit, ConstParm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_allies_favorites                                         (BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_teammates_favorites                                      (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_creature_waypoints                                       (ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_allies_waypoints                                         (Edit, ConstParm, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_teammates_waypoints                                      (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_handling_favorited_actors                                     (ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            Local_cast_shooter_game_mode                                     (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Local_CustomActorTracking_HasJustChangedDinoGroup                (ConstParm, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Local_CustomActorTracking_HasJustChangedSearchText               (OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Local_CustomActorTracking_HasJustChangedSelectionType            (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base(BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class AGameModeBase* UPlayerControllerTrameTrackerFunctions_C::Handle_sorting_tracked_actors_first_stuff(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool* IsInfoFresh, bool Skip_Map, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Removed_Teammates1, TMap<int32, bool>* All_Tracked_PlayerChars_This_Tick1, TArray<int32>* Removed_From_Page_Tracked_Actors_IDs_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, const TArray<int32>& Missing_allies_favorites, TArray<int32>* Missing_allies_waypoints, TArray<int32>* Missing_teammates_waypoints, bool Is_handling_favorited_actors, class AShooterGameMode** Local_cast_shooter_game_mode, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, bool Local_CustomActorTracking_HasJustChangedDinoGroup, bool* Local_CustomActorTracking_HasJustChangedSearchText, bool* Local_CustomActorTracking_HasJustChangedSelectionType, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Handle sorting tracked actors_first_stuff");

	Params::UPlayerControllerTrameTrackerFunctions_C_Handle_sorting_tracked_actors_first_stuff_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Skip_Map = Skip_Map;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Missing_allies_favorites = Missing_allies_favorites;
	Parms.Is_handling_favorited_actors = Is_handling_favorited_actors;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.Local_CustomActorTracking_HasJustChangedDinoGroup = Local_CustomActorTracking_HasJustChangedDinoGroup;
	Parms.CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base = CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInfoFresh != nullptr)
		*IsInfoFresh = Parms.IsInfoFresh;

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Removed_Teammates1 != nullptr)
		*Removed_Teammates1 = std::move(Parms.Removed_Teammates1);

	if (All_Tracked_PlayerChars_This_Tick1 != nullptr)
		*All_Tracked_PlayerChars_This_Tick1 = Parms.All_Tracked_PlayerChars_This_Tick1;

	if (Removed_From_Page_Tracked_Actors_IDs_Creatures1 != nullptr)
		*Removed_From_Page_Tracked_Actors_IDs_Creatures1 = std::move(Parms.Removed_From_Page_Tracked_Actors_IDs_Creatures1);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Missing_allies_waypoints != nullptr)
		*Missing_allies_waypoints = std::move(Parms.Missing_allies_waypoints);

	if (Missing_teammates_waypoints != nullptr)
		*Missing_teammates_waypoints = std::move(Parms.Missing_teammates_waypoints);

	if (Local_cast_shooter_game_mode != nullptr)
		*Local_cast_shooter_game_mode = Parms.Local_cast_shooter_game_mode;

	if (Local_CustomActorTracking_HasJustChangedSearchText != nullptr)
		*Local_CustomActorTracking_HasJustChangedSearchText = Parms.Local_CustomActorTracking_HasJustChangedSearchText;

	if (Local_CustomActorTracking_HasJustChangedSelectionType != nullptr)
		*Local_CustomActorTracking_HasJustChangedSelectionType = Parms.Local_CustomActorTracking_HasJustChangedSelectionType;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Create Tracked Actor Info Struct Player
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsTrackedWaypoint                                               (ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Isfavorited                                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsValidForCurrentFilter                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AShooterCharacter*           HandledPlayer                                                    (BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsATeammateOnMap                                                 (Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_POI_visible                                                   (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FCustomTrackedActorInfo     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FCustomTrackedActorInfo     Player_info                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, ExportObject, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetCharacterLevel_ReturnValue                           (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue                     (Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue_1                   (Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue_2                   (Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SafeDivide_ReturnValue_1                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue_2                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue_2                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_SafeDivide_A_ImplicitCast                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SafeDivide_A_ImplicitCast_1                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              K2Node_SetFieldsInStruct_HealthPercent_ImplicitCast              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SafeDivide_B_ImplicitCast_1                             (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_SafeDivide_A_ImplicitCast_2                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              K2Node_SetFieldsInStruct_HungerPercent_ImplicitCast              (ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SafeDivide_B_ImplicitCast_2                             (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              K2Node_SetFieldsInStruct_TorpidityPercent_ImplicitCast           (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float UPlayerControllerTrameTrackerFunctions_C::Create_Tracked_Actor_Info_Struct_Player(bool* bIsTrackedWaypoint, bool bIsValidForCurrentFilter, bool Is_POI_visible, const struct FCustomTrackedActorInfo& Player_info, class FString* CallFunc_LinkedPlayerIDString_ReturnValue, int32* CallFunc_GetCharacterLevel_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue, float* CallFunc_BPGetMaxStatusValue_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, float* CallFunc_BPGetMaxStatusValue_ReturnValue_1, float* CallFunc_BPGetCurrentStatusValue_ReturnValue_2, double CallFunc_SafeDivide_ReturnValue_1, float* CallFunc_BPGetMaxStatusValue_ReturnValue_2, double CallFunc_SafeDivide_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float* K2Node_SetFieldsInStruct_HungerPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Create Tracked Actor Info Struct Player");

	Params::UPlayerControllerTrameTrackerFunctions_C_Create_Tracked_Actor_Info_Struct_Player_Params Parms{};

	Parms.bIsValidForCurrentFilter = bIsValidForCurrentFilter;
	Parms.Is_POI_visible = Is_POI_visible;
	Parms.Player_info = Player_info;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue_1 = CallFunc_SafeDivide_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue_2 = CallFunc_SafeDivide_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTrackedWaypoint != nullptr)
		*bIsTrackedWaypoint = Parms.bIsTrackedWaypoint;

	if (CallFunc_LinkedPlayerIDString_ReturnValue != nullptr)
		*CallFunc_LinkedPlayerIDString_ReturnValue = std::move(Parms.CallFunc_LinkedPlayerIDString_ReturnValue);

	if (CallFunc_GetCharacterLevel_ReturnValue != nullptr)
		*CallFunc_GetCharacterLevel_ReturnValue = Parms.CallFunc_GetCharacterLevel_ReturnValue;

	if (CallFunc_BPGetCurrentStatusValue_ReturnValue != nullptr)
		*CallFunc_BPGetCurrentStatusValue_ReturnValue = Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue;

	if (CallFunc_BPGetCurrentStatusValue_ReturnValue_1 != nullptr)
		*CallFunc_BPGetCurrentStatusValue_ReturnValue_1 = Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue_1;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue_1 != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue_1 = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue_1;

	if (CallFunc_BPGetCurrentStatusValue_ReturnValue_2 != nullptr)
		*CallFunc_BPGetCurrentStatusValue_ReturnValue_2 = Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue_2;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue_2 != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue_2 = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue_2;

	if (K2Node_SetFieldsInStruct_HungerPercent_ImplicitCast != nullptr)
		*K2Node_SetFieldsInStruct_HungerPercent_ImplicitCast = Parms.K2Node_SetFieldsInStruct_HungerPercent_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Create Tracked Actor Info Struct Dino
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsTrackedWaypoint                                               (ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Isfavorited                                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        HandledDino                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsValidForCurrentFilter                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Is_POI_visible                                                   (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ByPlayerTargetingTeam                                            (Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCustomTrackedActorInfo     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FCustomTrackedActorInfo     Dino_info                                                        (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FCustomTrackedActorInfo     CallFunc_SetFCustomTrackedDinoInfoMembersByDinoRef_ReturnValue   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FCustomTrackedActorInfo     K2Node_SetFieldsInStruct_StructOut                               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Create_Tracked_Actor_Info_Struct_Dino(bool* bIsTrackedWaypoint, class APrimalDinoCharacter** HandledDino, bool bIsValidForCurrentFilter, bool Is_POI_visible, struct FCustomTrackedActorInfo* K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Create Tracked Actor Info Struct Dino");

	Params::UPlayerControllerTrameTrackerFunctions_C_Create_Tracked_Actor_Info_Struct_Dino_Params Parms{};

	Parms.bIsValidForCurrentFilter = bIsValidForCurrentFilter;
	Parms.Is_POI_visible = Is_POI_visible;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTrackedWaypoint != nullptr)
		*bIsTrackedWaypoint = Parms.bIsTrackedWaypoint;

	if (HandledDino != nullptr)
		*HandledDino = Parms.HandledDino;

	if (K2Node_SetFieldsInStruct_StructOut != nullptr)
		*K2Node_SetFieldsInStruct_StructOut = std::move(Parms.K2Node_SetFieldsInStruct_StructOut);

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Remove
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_is_shooter_char                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Detected_id                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Actor_info_to_use                                                (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Remove_tribemates                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Remove_allied_players                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Remove_creatures                                                 (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>TargetMap                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>TargetMap1                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>TargetMap2                                                       (Edit, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      InString                                                         (ExportObject, OutParm, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

int32 UPlayerControllerTrameTrackerFunctions_C::Remove(bool Local_is_shooter_char, int32 Detected_id, class APrimalCharacter** Player_controller_shooter_character, TMap<int32, struct FTrackedActorPlusInfoStruct> TargetMap1, TMap<int32, struct FTrackedActorPlusInfoStruct>* TargetMap2, class FString* InString, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Remove");

	Params::UPlayerControllerTrameTrackerFunctions_C_Remove_Params Parms{};

	Parms.Local_is_shooter_char = Local_is_shooter_char;
	Parms.Detected_id = Detected_id;
	Parms.TargetMap1 = TargetMap1;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (TargetMap2 != nullptr)
		*TargetMap2 = Parms.TargetMap2;

	if (InString != nullptr)
		*InString = std::move(Parms.InString);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Should Actor be Tracked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Investigated_Actor                                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Dino_group                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class UDinoTrackFilterOption*      Actor_filter_object                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_favorited                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// class APlayerState*                PlayerState                                                      (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig)
// class AShooterCharacter*           Requesting_player_Shooter_Character                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_Enabled                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UCharacterTrackFilter_Base_C*NewLocalVar                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class UClass*>              Used_Filters                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UDinoTrackFilterOption*      Filter_object                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Ret_can_track                                                    (Edit, ConstParm, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*K2Node_DynamicCast_AsCharacter_Track_Filter_Base                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UCharacterTrackFilter_Base_C*CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base(BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base_1(BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UCharacterTrackFilter_Base_C*K2Node_DynamicCast_AsCharacter_Track_Filter_Base_1               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_ShouldActorBeTracked_Handled                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldActorBeTracked_ReturnValue                        (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UCharacterTrackFilter_Base_C* UPlayerControllerTrameTrackerFunctions_C::Should_Actor_be_Tracked(int32 CustomTameSelectionType, const class FString& CustomTameSearchText, bool Is_favorited, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, TArray<class UClass*>* Used_Filters, class UDinoTrackFilterOption* Filter_object, bool Ret_can_track, bool* K2Node_DynamicCast_bSuccess, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Should Actor be Tracked");

	Params::UPlayerControllerTrameTrackerFunctions_C_Should_Actor_be_Tracked_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Is_favorited = Is_favorited;
	Parms.GameMode = GameMode;
	Parms.Filter_object = Filter_object;
	Parms.Ret_can_track = Ret_can_track;
	Parms.CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base = CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base;
	Parms.CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base_1 = CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Requesting_player_Shooter_Character != nullptr)
		*Requesting_player_Shooter_Character = Parms.Requesting_player_Shooter_Character;

	if (Debug_Enabled != nullptr)
		*Debug_Enabled = Parms.Debug_Enabled;

	if (Used_Filters != nullptr)
		*Used_Filters = std::move(Parms.Used_Filters);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_ShouldActorBeTracked_Handled != nullptr)
		*CallFunc_ShouldActorBeTracked_Handled = Parms.CallFunc_ShouldActorBeTracked_Handled;

	if (CallFunc_ShouldActorBeTracked_ReturnValue != nullptr)
		*CallFunc_ShouldActorBeTracked_ReturnValue = Parms.CallFunc_ShouldActorBeTracked_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.add to actors in page count
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Should_be_favorited                                              (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Actor_info_to_use                                                (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors                                      (OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Local_should_show_being_tracked                                  (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Local_is_teammate                                                (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)

bool UPlayerControllerTrameTrackerFunctions_C::Add_to_actors_in_page_count(TArray<class AActor*>* Non_favorite_tracked_actors, bool Local_should_show_being_tracked, bool* Local_is_teammate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "add to actors in page count");

	Params::UPlayerControllerTrameTrackerFunctions_C_Add_to_actors_in_page_count_Params Parms{};

	Parms.Local_should_show_being_tracked = Local_should_show_being_tracked;

	UObject::ProcessEvent(Func, &Parms);

	if (Non_favorite_tracked_actors != nullptr)
		*Non_favorite_tracked_actors = std::move(Parms.Non_favorite_tracked_actors);

	if (Local_is_teammate != nullptr)
		*Local_is_teammate = Parms.Local_is_teammate;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is actor valid for this filter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Should_be_favorited                                              (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Actor_info_to_use                                                (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Dino_group                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Show_being_tracked                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_teammate                                                      (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Requesting_player_Shooter_Character                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_Enabled                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsValid                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
// bool                               Actor_should_be_tracked                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Is_In_Dino_Group_Is_In_Group                            (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Should_Actor_be_Tracked_ReturnValue                     (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Is_actor_valid_for_this_filter(int32 CustomTameSelectionType, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, bool Show_being_tracked, class APlayerState* PC_PlayerState, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool* Actor_should_be_tracked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "is actor valid for this filter");

	Params::UPlayerControllerTrameTrackerFunctions_C_Is_actor_valid_for_this_filter_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.Show_being_tracked = Show_being_tracked;
	Parms.PC_PlayerState = PC_PlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (Requesting_player_Shooter_Character != nullptr)
		*Requesting_player_Shooter_Character = Parms.Requesting_player_Shooter_Character;

	if (Debug_Enabled != nullptr)
		*Debug_Enabled = Parms.Debug_Enabled;

	if (Actor_should_be_tracked != nullptr)
		*Actor_should_be_tracked = Parms.Actor_should_be_tracked;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.ShouldTrackedActorReplicateToClientAgain
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int32, struct FTrackedActorPlusInfoStruct>TrackedInfoMap                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              TrackedInfoActorKey                                              (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Should_be_favorited                                              (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Actor_info_to_use                                                (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Not_using_map_but_instead_direct_struct                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_tracked_waypoint                                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_teammate                                                      (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Should_POI_be_visible                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Should_Replicate                                                 (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Local_current_hp                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Should_actor_replicate                                           (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsPrimalCharacter_ReturnValue                           (Edit, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character_1                     (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsPrimalDino_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetHealth_ReturnValue                                   (Edit, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue                     (Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue_1                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct K2Node_SetFieldsInStruct_StructOut                               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_2                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_2                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_NotEqual_VectorVector_ErrorTolerance_ImplicitCast       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SafeDivide_A_ImplicitCast                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SafeDivide_B_ImplicitCast_1                             (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_SafeDivide_A_ImplicitCast_1                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast_1                 (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)

double UPlayerControllerTrameTrackerFunctions_C::ShouldTrackedActorReplicateToClientAgain(TMap<int32, struct FTrackedActorPlusInfoStruct>* TrackedInfoMap, bool* Is_tracked_waypoint, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, bool Should_POI_be_visible, bool* Should_Replicate, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsPrimalCharacter_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Len_ReturnValue, bool CallFunc_IsShooterCharacter_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_3, double CallFunc_SafeDivide_ReturnValue, float CallFunc_GetHealth_ReturnValue, float* CallFunc_BPGetMaxStatusValue_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue, double CallFunc_SafeDivide_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FTrackedActorPlusInfoStruct* K2Node_SetFieldsInStruct_StructOut, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool* CallFunc_NotEqual_StrStr_ReturnValue, bool* CallFunc_NotEqual_StrStr_ReturnValue_1, bool* CallFunc_NotEqual_StrStr_ReturnValue_2, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, double* CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1, double* CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "ShouldTrackedActorReplicateToClientAgain");

	Params::UPlayerControllerTrameTrackerFunctions_C_ShouldTrackedActorReplicateToClientAgain_Params Parms{};

	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Should_POI_be_visible = Should_POI_be_visible;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_IsShooterCharacter_ReturnValue = CallFunc_IsShooterCharacter_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue_1 = CallFunc_SafeDivide_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1 = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TrackedInfoMap != nullptr)
		*TrackedInfoMap = Parms.TrackedInfoMap;

	if (Is_tracked_waypoint != nullptr)
		*Is_tracked_waypoint = Parms.Is_tracked_waypoint;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Should_Replicate != nullptr)
		*Should_Replicate = Parms.Should_Replicate;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsPrimalCharacter_ReturnValue != nullptr)
		*CallFunc_IsPrimalCharacter_ReturnValue = Parms.CallFunc_IsPrimalCharacter_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character_1;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue;

	if (CallFunc_BPGetCurrentStatusValue_ReturnValue != nullptr)
		*CallFunc_BPGetCurrentStatusValue_ReturnValue = Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue;

	if (K2Node_SetFieldsInStruct_StructOut != nullptr)
		*K2Node_SetFieldsInStruct_StructOut = std::move(Parms.K2Node_SetFieldsInStruct_StructOut);

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;

	if (CallFunc_NotEqual_StrStr_ReturnValue != nullptr)
		*CallFunc_NotEqual_StrStr_ReturnValue = Parms.CallFunc_NotEqual_StrStr_ReturnValue;

	if (CallFunc_NotEqual_StrStr_ReturnValue_1 != nullptr)
		*CallFunc_NotEqual_StrStr_ReturnValue_1 = Parms.CallFunc_NotEqual_StrStr_ReturnValue_1;

	if (CallFunc_NotEqual_StrStr_ReturnValue_2 != nullptr)
		*CallFunc_NotEqual_StrStr_ReturnValue_2 = Parms.CallFunc_NotEqual_StrStr_ReturnValue_2;

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue_2 != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue_2 = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;

	if (CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast = Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;

	if (CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast_1 = Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Do the logic to handle tracking single actor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int32, struct FTrackedActorPlusInfoStruct>TrackedInfoMap                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              TrackedInfoActorKey                                              (Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Actor_info_to_use                                                (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Dino_group                                                       (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors                                      (OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players                               (ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players                              (Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Not_using_map_but_instead_direct_struct                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_Map_Player                                                    (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Remove_actors_creatures                                          (ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Remove_allied_players                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Remove_tribemates                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Scrollbar_Index                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Will_Be_Added                                                    (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Will_Be_Updated                                                  (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// bool                               Is_a_favorite                                                    (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_POI_visible                                                   (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   Detected_category                                                (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_a_tracked_waypoint                                            (Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_teammate                                                      (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Actor_is_valid_for_this_filter                                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Detected_id                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Local_is_shooter_char                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Local_is_primal_dino_char                                        (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Should_Fully_Refresh_List_ReturnValue                   (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Should_Fully_Refresh_List_ReturnValue_1                 (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Should_Fully_Refresh_List_ReturnValue_2                 (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// struct FTrackedActorIDCategoryPair CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// struct FTrackedActorIDCategoryPairWithBoolCallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Find_ReturnValue_4                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Find_ReturnValue_5                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_5                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsDead_ReturnValue                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_is_actor_valid_for_this_filter_isvalid                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_6                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_7                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_2                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_3                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_4                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Was_Valid                         (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Get_ID_from_Actor_Ref_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar                    (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Get_ID_from_Actor_Ref_Cast_As_ShooterChar               (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_PrimalDinoChar                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   CallFunc_Get_ID_from_Actor_Ref_actor_category                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldTrackedActorReplicateToClientAgain_Should_Replicate(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FCustomTrackedActorInfo     CallFunc_Create_Tracked_Actor_Info_Struct_Dino_ReturnValue       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FCustomTrackedActorInfo     CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue     (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)

int32 UPlayerControllerTrameTrackerFunctions_C::Do_the_logic_to_handle_tracking_single_actor(TMap<int32, struct FTrackedActorPlusInfoStruct>* TrackedInfoMap, int32 CustomTameSelectionType, const class FString& CustomTameSearchText, TArray<class AActor*>* Non_favorite_tracked_actors, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players, class AShooterGameMode* GameMode, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, bool Is_Map_Player, const TArray<int32>& Remove_actors_creatures, int32* PC_TargetingTeam, class APlayerState* PC_PlayerState, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, bool Will_Be_Added, bool Is_POI_visible, bool Actor_is_valid_for_this_filter, int32 Detected_id, bool Local_is_shooter_char, bool* Local_is_primal_dino_char, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool* K2Node_DynamicCast_bSuccess, const struct FTrackedActorIDCategoryPair& CallFunc_Array_Get_Item, const struct FTrackedActorIDCategoryPairWithBool& CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_4, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_5, bool* CallFunc_IsDead_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_6, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_7, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, bool* CallFunc_ShouldTrackedActorReplicateToClientAgain_Should_Replicate, struct FCustomTrackedActorInfo* CallFunc_Create_Tracked_Actor_Info_Struct_Dino_ReturnValue, struct FCustomTrackedActorInfo* CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Do the logic to handle tracking single actor");

	Params::UPlayerControllerTrameTrackerFunctions_C_Do_the_logic_to_handle_tracking_single_actor_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Replaced_Tracked_Actor_Info_Players = Replaced_Tracked_Actor_Info_Players;
	Parms.GameMode = GameMode;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.Is_Map_Player = Is_Map_Player;
	Parms.Remove_actors_creatures = Remove_actors_creatures;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Will_Be_Added = Will_Be_Added;
	Parms.Is_POI_visible = Is_POI_visible;
	Parms.Actor_is_valid_for_this_filter = Actor_is_valid_for_this_filter;
	Parms.Detected_id = Detected_id;
	Parms.Local_is_shooter_char = Local_is_shooter_char;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Get_ID_from_Actor_Ref_ReturnValue = CallFunc_Get_ID_from_Actor_Ref_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar = CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar = CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (TrackedInfoMap != nullptr)
		*TrackedInfoMap = Parms.TrackedInfoMap;

	if (Non_favorite_tracked_actors != nullptr)
		*Non_favorite_tracked_actors = std::move(Parms.Non_favorite_tracked_actors);

	if (Updated_Tracked_Actor_Info_creatures != nullptr)
		*Updated_Tracked_Actor_Info_creatures = std::move(Parms.Updated_Tracked_Actor_Info_creatures);

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (Local_is_primal_dino_char != nullptr)
		*Local_is_primal_dino_char = Parms.Local_is_primal_dino_char;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_2 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_3 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_3 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_4 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_4 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_5 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_5 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_5;

	if (CallFunc_IsDead_ReturnValue != nullptr)
		*CallFunc_IsDead_ReturnValue = Parms.CallFunc_IsDead_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_6 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_6 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_6;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_7 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_7 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_7;

	if (CallFunc_ShouldTrackedActorReplicateToClientAgain_Should_Replicate != nullptr)
		*CallFunc_ShouldTrackedActorReplicateToClientAgain_Should_Replicate = Parms.CallFunc_ShouldTrackedActorReplicateToClientAgain_Should_Replicate;

	if (CallFunc_Create_Tracked_Actor_Info_Struct_Dino_ReturnValue != nullptr)
		*CallFunc_Create_Tracked_Actor_Info_Struct_Dino_ReturnValue = std::move(Parms.CallFunc_Create_Tracked_Actor_Info_Struct_Dino_ReturnValue);

	if (CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue != nullptr)
		*CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue = std::move(Parms.CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue);

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update all actors in map
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_Player                                                        (Edit, ConstParm, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Tracked_info_map_to_use                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_teammates                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>DeadPlayersSkipped                                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_non_teammates_1                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures_1                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Actor_id_to_use                                                  (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<int32>                      CallFunc_Map_Keys_Keys                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Update_all_actors_in_map(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool Is_Player, class AShooterGameMode* GameMode, TMap<int32, struct FTrackedActorPlusInfoStruct> Tracked_info_map_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_teammates, TMap<int32, struct FTrackedActorPlusInfoStruct>* DeadPlayersSkipped, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Removed_Tracked_Actors_IDs_Creatures_1, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, int32 Actor_id_to_use, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, TArray<int32>* CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "update all actors in map");

	Params::UPlayerControllerTrameTrackerFunctions_C_Update_all_actors_in_map_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Is_Player = Is_Player;
	Parms.GameMode = GameMode;
	Parms.Tracked_info_map_to_use = Tracked_info_map_to_use;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Removed_Tracked_Actors_IDs_Creatures_1 = Removed_Tracked_Actors_IDs_Creatures_1;
	Parms.Actor_id_to_use = Actor_id_to_use;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (Is_teammates != nullptr)
		*Is_teammates = Parms.Is_teammates;

	if (DeadPlayersSkipped != nullptr)
		*DeadPlayersSkipped = Parms.DeadPlayersSkipped;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (CallFunc_Map_Keys_Keys != nullptr)
		*CallFunc_Map_Keys_Keys = std::move(Parms.CallFunc_Map_Keys_Keys);

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Update All Actors In Actor Map Actor Array
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// TMap<int32, class AActor*>         Tracked_info_map_to_use                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Actor_Array                                                      (BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_tracked_waypoint                                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info_to_use                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index_to_use                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// struct FTrackedActorPlusInfoStruct K2Node_MakeStruct_TrackedActorPlusInfoStruct                     (Edit, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Was_Valid                         (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Get_ID_from_Actor_Ref_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar                    (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Get_ID_from_Actor_Ref_Cast_As_ShooterChar               (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_PrimalDinoChar                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   CallFunc_Get_ID_from_Actor_Ref_actor_category                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map_1                                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map_2                                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map_3                                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map_4                                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_2                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added_1             (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated_1           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed_1           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info_1                      (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added_2             (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated_2           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed_2           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info_2                      (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map_5                                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added_3             (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated_3           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed_3           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info_3                      (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map_6                                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added_4             (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated_4           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed_4           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info_4                      (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)

bool UPlayerControllerTrameTrackerFunctions_C::Update_All_Actors_In_Actor_Map_Actor_Array(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, TMap<int32, class AActor*> Tracked_info_map_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, const TArray<class AActor*>& Actor_Array, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, int32* Index_to_use, int32 CallFunc_Max_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info_1, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info_2, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info_3, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Update All Actors In Actor Map Actor Array");

	Params::UPlayerControllerTrameTrackerFunctions_C_Update_All_Actors_In_Actor_Map_Actor_Array_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Tracked_info_map_to_use = Tracked_info_map_to_use;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.Actor_Array = Actor_Array;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_TrackedActorPlusInfoStruct = K2Node_MakeStruct_TrackedActorPlusInfoStruct;
	Parms.CallFunc_Get_ID_from_Actor_Ref_ReturnValue = CallFunc_Get_ID_from_Actor_Ref_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar = CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar = CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;
	Parms.CallFunc_update_single_tracked_actor_info_1 = CallFunc_update_single_tracked_actor_info_1;
	Parms.CallFunc_update_single_tracked_actor_info_2 = CallFunc_update_single_tracked_actor_info_2;
	Parms.CallFunc_update_single_tracked_actor_info_3 = CallFunc_update_single_tracked_actor_info_3;
	Parms.CallFunc_update_single_tracked_actor_info_4 = CallFunc_update_single_tracked_actor_info_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (Is_tracked_waypoint != nullptr)
		*Is_tracked_waypoint = Parms.Is_tracked_waypoint;

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (Index_to_use != nullptr)
		*Index_to_use = Parms.Index_to_use;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Get ID from Actor Ref
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// int32                              Targeting_Team                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Was_Valid                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Is_ShooterChar                                                   (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Cast_As_ShooterChar                                              (Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_PrimalDinoChar                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        Cast_As_PrimalDinoChar                                           (BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   Actor_category                                                   (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_GetDinoIDs_OutDinoID1                                   (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetDinoIDs_OutDinoID2                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, ExportObject, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsPrimalCharacter_ReturnValue                           (Edit, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Get_ID_from_Actor_Ref(class AActor** Object, class AShooterCharacter* Cast_As_ShooterChar, bool Is_PrimalDinoChar, class APrimalDinoCharacter* Cast_As_PrimalDinoChar, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class FString* CallFunc_LinkedPlayerIDString_ReturnValue, bool* CallFunc_IsPrimalCharacter_ReturnValue, bool CallFunc_IsShooterCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Get ID from Actor Ref");

	Params::UPlayerControllerTrameTrackerFunctions_C_Get_ID_from_Actor_Ref_Params Parms{};

	Parms.Cast_As_ShooterChar = Cast_As_ShooterChar;
	Parms.Is_PrimalDinoChar = Is_PrimalDinoChar;
	Parms.Cast_As_PrimalDinoChar = Cast_As_PrimalDinoChar;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_IsShooterCharacter_ReturnValue = CallFunc_IsShooterCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Object != nullptr)
		*Object = Parms.Object;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_LinkedPlayerIDString_ReturnValue != nullptr)
		*CallFunc_LinkedPlayerIDString_ReturnValue = std::move(Parms.CallFunc_LinkedPlayerIDString_ReturnValue);

	if (CallFunc_IsPrimalCharacter_ReturnValue != nullptr)
		*CallFunc_IsPrimalCharacter_ReturnValue = Parms.CallFunc_IsPrimalCharacter_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.debug print results of a tracked actor handled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Was_added                                                        (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Was_updated                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Was_removed                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// class FString                      Category                                                         (ExportObject, Parm, OutParm, Transient)
// int32                              Scrollbar_Index                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_Enabled                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

int32 UPlayerControllerTrameTrackerFunctions_C::Debug_print_results_of_a_tracked_actor_handled(bool Was_updated, class FString* Category, bool* Debug_Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "debug print results of a tracked actor handled");

	Params::UPlayerControllerTrameTrackerFunctions_C_Debug_print_results_of_a_tracked_actor_handled_Params Parms{};

	Parms.Was_updated = Was_updated;

	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	if (Debug_Enabled != nullptr)
		*Debug_Enabled = Parms.Debug_Enabled;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update single tracked actor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_Player                                                        (Edit, ConstParm, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Actor_info                                                       (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>TrackedInfoMap                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Actor_id                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Not_using_map_but_instead_direct_struct                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_A_Map_Player                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_tracked_waypoint                                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>DeadPlayersSkipped                                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Scrollbar_Index                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_non_teammates_1                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures_1                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Will_Be_Added                                                    (Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Will_Be_Updated                                                  (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Will_Be_Removed                                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// class AActor*                      Local_actor                                                      (Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsDead_ReturnValue                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Do_the_logic_to_handle_tracking_single_actor_Will_Be_Added(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Do_the_logic_to_handle_tracking_single_actor_Will_Be_Updated(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Do_the_logic_to_handle_tracking_single_actor_info       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Update_single_tracked_actor(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool Is_Player, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, const struct FTrackedActorPlusInfoStruct& Actor_info, TMap<int32, struct FTrackedActorPlusInfoStruct>* TrackedInfoMap, int32* Actor_id, TMap<int32, bool> All_Tracked_Players_This_Tick, bool* Is_A_Map_Player, TMap<int32, bool> All_Tracked_Creatures_This_Tick, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct>* DeadPlayersSkipped, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Removed_Teammates, const TArray<int32>& Removed_Tracked_Actors_IDs_Creatures_1, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, bool Will_Be_Added, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool* CallFunc_IsDead_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const struct FTrackedActorPlusInfoStruct& CallFunc_Do_the_logic_to_handle_tracking_single_actor_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "update single tracked actor");

	Params::UPlayerControllerTrameTrackerFunctions_C_Update_single_tracked_actor_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Is_Player = Is_Player;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.Actor_info = Actor_info;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Removed_Tracked_Actors_IDs_Creatures_1 = Removed_Tracked_Actors_IDs_Creatures_1;
	Parms.Will_Be_Added = Will_Be_Added;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_Do_the_logic_to_handle_tracking_single_actor_info = CallFunc_Do_the_logic_to_handle_tracking_single_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (TrackedInfoMap != nullptr)
		*TrackedInfoMap = Parms.TrackedInfoMap;

	if (Actor_id != nullptr)
		*Actor_id = Parms.Actor_id;

	if (Is_A_Map_Player != nullptr)
		*Is_A_Map_Player = Parms.Is_A_Map_Player;

	if (Is_tracked_waypoint != nullptr)
		*Is_tracked_waypoint = Parms.Is_tracked_waypoint;

	if (DeadPlayersSkipped != nullptr)
		*DeadPlayersSkipped = Parms.DeadPlayersSkipped;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsDead_ReturnValue != nullptr)
		*CallFunc_IsDead_ReturnValue = Parms.CallFunc_IsDead_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is creature being tracked atm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               NewParam                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Is_creature_being_tracked_atm(int32* InputPin, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "is creature being tracked atm");

	Params::UPlayerControllerTrameTrackerFunctions_C_Is_creature_being_tracked_atm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.is player being tracked atm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               NewParam                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

bool UPlayerControllerTrameTrackerFunctions_C::Is_player_being_tracked_atm(int32* InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "is player being tracked atm");

	Params::UPlayerControllerTrameTrackerFunctions_C_Is_player_being_tracked_atm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Add All Teammates
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Overwritten_Custom_Actor_Array                                   (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates1    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Creatures     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_non_teammates_1                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures_1                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Dead_Players_Skipped                                             (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<int32>                      CallFunc_Map_Keys_Keys                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<class AActor*>              CallFunc_GetSpecialActorList_OutActors                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct K2Node_MakeStruct_TrackedActorPlusInfoStruct                     (Edit, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Was_Valid                         (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Get_ID_from_Actor_Ref_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar                    (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Get_ID_from_Actor_Ref_Cast_As_ShooterChar               (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Get_ID_from_Actor_Ref_Is_PrimalDinoChar                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ETrackedActorCategory   CallFunc_Get_ID_from_Actor_Ref_actor_category                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

int32 UPlayerControllerTrameTrackerFunctions_C::Add_All_Teammates(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, int32* PC_TargetingTeam, class APlayerState* PC_PlayerState, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, const TArray<int32>& Removed_Tracked_Actors_IDs_Creatures_1, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, TMap<int32, struct FTrackedActorPlusInfoStruct> Dead_Players_Skipped, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, TArray<int32>* CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, bool Temp_bool_Variable, TArray<class AActor*>* CallFunc_GetSpecialActorList_OutActors, class AActor* CallFunc_Array_Get_Item_1, const struct FTrackedActorPlusInfoStruct& K2Node_MakeStruct_TrackedActorPlusInfoStruct, int32 CallFunc_Get_ID_from_Actor_Ref_ReturnValue, bool CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar, class APrimalDinoCharacter* CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info, int32 Temp_int_Loop_Counter_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Add All Teammates");

	Params::UPlayerControllerTrameTrackerFunctions_C_Add_All_Teammates_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Removed_Tracked_Actors_IDs_Creatures_1 = Removed_Tracked_Actors_IDs_Creatures_1;
	Parms.Dead_Players_Skipped = Dead_Players_Skipped;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_TrackedActorPlusInfoStruct = K2Node_MakeStruct_TrackedActorPlusInfoStruct;
	Parms.CallFunc_Get_ID_from_Actor_Ref_ReturnValue = CallFunc_Get_ID_from_Actor_Ref_ReturnValue;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar = CallFunc_Get_ID_from_Actor_Ref_Is_ShooterChar;
	Parms.CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar = CallFunc_Get_ID_from_Actor_Ref_Cast_As_PrimalDinoChar;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (CallFunc_Map_Keys_Keys != nullptr)
		*CallFunc_Map_Keys_Keys = std::move(Parms.CallFunc_Map_Keys_Keys);

	if (CallFunc_GetSpecialActorList_OutActors != nullptr)
		*CallFunc_GetSpecialActorList_OutActors = std::move(Parms.CallFunc_GetSpecialActorList_OutActors);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.update all actors in actor map
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_Player                                                        (Edit, ConstParm, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// TMap<int32, class AActor*>         Tracked_info_map_to_use                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_tracked_waypoint                                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Initial_Max_Count_Of_Listed_Tracked_Actors_For_DIsplay_Sorting   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              CallFunc_Map_Values_Values                                       (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<int32> UPlayerControllerTrameTrackerFunctions_C::Update_all_actors_in_actor_map(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool Is_Player, class AShooterGameMode* GameMode, TMap<int32, class AActor*> Tracked_info_map_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, bool* Is_tracked_waypoint, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, TArray<class AActor*>* CallFunc_Map_Values_Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "update all actors in actor map");

	Params::UPlayerControllerTrameTrackerFunctions_C_Update_all_actors_in_actor_map_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Is_Player = Is_Player;
	Parms.GameMode = GameMode;
	Parms.Tracked_info_map_to_use = Tracked_info_map_to_use;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (Is_tracked_waypoint != nullptr)
		*Is_tracked_waypoint = Parms.Is_tracked_waypoint;

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (CallFunc_Map_Values_Values != nullptr)
		*CallFunc_Map_Values_Values = std::move(Parms.CallFunc_Map_Values_Values);

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Add New Known Characters in Page Range
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// bool                               Is_handling_favorited_actors1                                    (EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors1                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures1                            (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Scrollbar_Index                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Players_This_Tick                                    (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FCustomTrackedActorInfo>PC_TrackedActorIDs_TotalForFilter_Ordered                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_NotTeammates  (ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllPlayersWhosInfoIsBeingSentTOClientFromServer_Teammates     (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer             (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapPlayers                                (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, int32>                 PC_TrackedActorIDsOrderMapCreatures                              (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                PC_PlayerState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_TargetingTeam                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           Player_controller_shooter_character                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_actor_tracking                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TorporChangeTolerance                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_TameAffinityChangeTolerance             (ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_HPChangeTolerance                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             ShouldUpdateTrackedActor_LocationChangeTolerance                 (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_teammate                                                      (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_Player                                                        (Edit, ConstParm, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Struct_for_actor                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Local_actor_id                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              This_entry_scrollbar_index                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_MakeMap_Map                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_2                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable_2                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Added               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Updated             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_update_single_tracked_actor_Will_Be_Removed             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_update_single_tracked_actor_info                        (Edit, ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UPlayerControllerTrameTrackerFunctions_C::Add_New_Known_Characters_in_Page_Range(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, TMap<int32, struct FTrackedActorPlusInfoStruct>* PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer, class APlayerState* PC_PlayerState, int32* PC_TargetingTeam, class AShooterCharacter** Player_controller_shooter_character, double* ShouldUpdateTrackedActor_TameAffinityChangeTolerance, double ShouldUpdateTrackedActor_HPChangeTolerance, double* ShouldUpdateTrackedActor_LocationChangeTolerance, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, bool Is_Player, bool* CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable_2, TMap<int32, struct FTrackedActorPlusInfoStruct> K2Node_Select_Default, TMap<int32, struct FTrackedActorPlusInfoStruct> K2Node_Select_Default_1, const struct FTrackedActorPlusInfoStruct& CallFunc_update_single_tracked_actor_info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Add New Known Characters in Page Range");

	Params::UPlayerControllerTrameTrackerFunctions_C_Add_New_Known_Characters_in_Page_Range_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.All_Tracked_Players_This_Tick = All_Tracked_Players_This_Tick;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.PC_PlayerState = PC_PlayerState;
	Parms.ShouldUpdateTrackedActor_HPChangeTolerance = ShouldUpdateTrackedActor_HPChangeTolerance;
	Parms.Is_Player = Is_Player;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_update_single_tracked_actor_info = CallFunc_update_single_tracked_actor_info;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer != nullptr)
		*PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer = Parms.PC_AllCreaturesWhosInfoIsBeingSentToClientFromServer;

	if (PC_TargetingTeam != nullptr)
		*PC_TargetingTeam = Parms.PC_TargetingTeam;

	if (Player_controller_shooter_character != nullptr)
		*Player_controller_shooter_character = Parms.Player_controller_shooter_character;

	if (ShouldUpdateTrackedActor_TameAffinityChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_TameAffinityChangeTolerance = Parms.ShouldUpdateTrackedActor_TameAffinityChangeTolerance;

	if (ShouldUpdateTrackedActor_LocationChangeTolerance != nullptr)
		*ShouldUpdateTrackedActor_LocationChangeTolerance = Parms.ShouldUpdateTrackedActor_LocationChangeTolerance;

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.Should Fully Refresh List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CustomActorTracking_HasJustChangedSelectionType                  (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedSearchText                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CustomActorTracking_HasJustChangedDinoGroup                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)

bool UPlayerControllerTrameTrackerFunctions_C::Should_Fully_Refresh_List()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "Should Fully Refresh List");

	Params::UPlayerControllerTrameTrackerFunctions_C_Should_Fully_Refresh_List_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerControllerTrameTrackerFunctions.PlayerControllerTrameTrackerFunctions_C.get or create filter object
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterTrackFilter_Base_C*Already_Setup_Filter_Object                                      (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              TameSelectionType                                                (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PC_CustomActorTracking_DisplayedResultsCount                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*AsCreature_Track_Filter_Base                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Local_selection_type                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class UClass*>              Used_Filters                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetWorldContextObject_ReturnValue                       (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetWorldContextObject_ReturnValue_1                     (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UClass*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UCharacterTrackFilter_Base_C*K2Node_DynamicCast_AsCharacter_Track_Filter_Base                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class UCharacterTrackFilter_Base_C* UPlayerControllerTrameTrackerFunctions_C::Get_or_create_filter_object(int32 Local_selection_type, TArray<class UClass*>* Used_Filters, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue_2, class UClass* CallFunc_Array_Get_Item, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerTrameTrackerFunctions_C", "get or create filter object");

	Params::UPlayerControllerTrameTrackerFunctions_C_Get_or_create_filter_object_Params Parms{};

	Parms.Local_selection_type = Local_selection_type;
	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Used_Filters != nullptr)
		*Used_Filters = std::move(Parms.Used_Filters);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_Array_IsValidIndex_ReturnValue_1 != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue_1 = Parms.CallFunc_Array_IsValidIndex_ReturnValue_1;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (CallFunc_Greater_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_2 = Parms.CallFunc_Greater_IntInt_ReturnValue_2;

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


