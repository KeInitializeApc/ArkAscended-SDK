#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C
// (Actor, PlayerController)

class UClass* APlayerControllerBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerControllerBlueprint_C");

	return Clss;
}


// PlayerControllerBlueprint_C PlayerControllerBlueprint.Default__PlayerControllerBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerControllerBlueprint_C* APlayerControllerBlueprint_C::GetDefaultObj()
{
	static class APlayerControllerBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerControllerBlueprint_C*>(APlayerControllerBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.HandleAddPhotoModeMarker
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             Points                                                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      MarkerClass                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<double>                     VectorValues_HAP                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// TArray<float>                      K2Node_MakeStruct_FloatArrayParam1_ImplicitCast                  (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

TArray<float> APlayerControllerBlueprint_C::HandleAddPhotoModeMarker(class UClass** MarkerClass, const TArray<double>& VectorValues_HAP, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Array_Get_Item, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "HandleAddPhotoModeMarker");

	Params::APlayerControllerBlueprint_C_HandleAddPhotoModeMarker_Params Parms{};

	Parms.VectorValues_HAP = VectorValues_HAP;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MarkerClass != nullptr)
		*MarkerClass = Parms.MarkerClass;

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.IsPhotoModeAllowed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allowed                                                          (BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsAllowed_IPM                                                    (ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UPrimalUI*>           CallFunc_GetAllUIScenesFromClass_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsPrimalCharFalling_ReturnValue                         (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsSplitscreen_ReturnValue                               (BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool APlayerControllerBlueprint_C::IsPhotoModeAllowed(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsSplitscreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "IsPhotoModeAllowed");

	Params::APlayerControllerBlueprint_C_IsPhotoModeAllowed_Params Parms{};

	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Game_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Game_State = Parms.K2Node_DynamicCast_AsShooter_Game_State;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsSplitscreen_ReturnValue != nullptr)
		*CallFunc_IsSplitscreen_ReturnValue = Parms.CallFunc_IsSplitscreen_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.TogglePhotoMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class UPrimalUI*>           CallFunc_GetAllUIScenesFromClass_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetActorOfClass_ReturnValue                             (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// class UPrimalUI*                   CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_SelectTransform_ReturnValue                             (ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

double APlayerControllerBlueprint_C::TogglePhotoMode(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AActor** CallFunc_GetActorOfClass_ReturnValue, class UPrimalUI* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, struct FTransform* CallFunc_SelectTransform_ReturnValue, float* CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "TogglePhotoMode");

	Params::APlayerControllerBlueprint_C_TogglePhotoMode_Params Parms{};

	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (CallFunc_GetActorOfClass_ReturnValue != nullptr)
		*CallFunc_GetActorOfClass_ReturnValue = Parms.CallFunc_GetActorOfClass_ReturnValue;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_GreaterGreater_VectorRotator_ReturnValue != nullptr)
		*CallFunc_GreaterGreater_VectorRotator_ReturnValue = std::move(Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue);

	if (CallFunc_SelectTransform_ReturnValue != nullptr)
		*CallFunc_SelectTransform_ReturnValue = std::move(Parms.CallFunc_SelectTransform_ReturnValue);

	if (CallFunc_MakeRotator_Yaw_ImplicitCast != nullptr)
		*CallFunc_MakeRotator_Yaw_ImplicitCast = Parms.CallFunc_MakeRotator_Yaw_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.PlayerCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheCommand                                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_PlayerCommand_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FString APlayerControllerBlueprint_C::PlayerCommand(const class FString& TheCommand, class FString* CallFunc_PlayerCommand_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "PlayerCommand");

	Params::APlayerControllerBlueprint_C_PlayerCommand_Params Parms{};

	Parms.TheCommand = TheCommand;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_PlayerCommand_ReturnValue != nullptr)
		*CallFunc_PlayerCommand_ReturnValue = std::move(Parms.CallFunc_PlayerCommand_ReturnValue);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPSetFCustomTrackedPlayerInfoMembersByPlayerRef
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           HandledPlayer                                                    (BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Isfavorited                                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               IsATeammateOnMap                                                 (Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsTrackedWaypoint                                               (ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIsValidForCurrentFilter                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCustomTrackedActorInfo     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*Local_function_library                                           (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FCustomTrackedActorInfo     K2Node_MakeStruct_CustomTrackedActorInfo                         (Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FCustomTrackedActorInfo     CallFunc_BPSetFCustomTrackedPlayerInfoMembersByPlayerRef_ReturnValue(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FCustomTrackedActorInfo     CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue     (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*K2Node_DynamicCast_AsPlayer_Controller_Trame_Tracker_Functions   (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class UPlayerControllerTrameTrackerFunctions_C* APlayerControllerBlueprint_C::BPSetFCustomTrackedPlayerInfoMembersByPlayerRef(bool* bIsTrackedWaypoint, bool bIsValidForCurrentFilter, struct FCustomTrackedActorInfo* K2Node_MakeStruct_CustomTrackedActorInfo, class UWorld** CallFunc_K2_GetWorld_ReturnValue, struct FCustomTrackedActorInfo* CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPSetFCustomTrackedPlayerInfoMembersByPlayerRef");

	Params::APlayerControllerBlueprint_C_BPSetFCustomTrackedPlayerInfoMembersByPlayerRef_Params Parms{};

	Parms.bIsValidForCurrentFilter = bIsValidForCurrentFilter;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsTrackedWaypoint != nullptr)
		*bIsTrackedWaypoint = Parms.bIsTrackedWaypoint;

	if (K2Node_MakeStruct_CustomTrackedActorInfo != nullptr)
		*K2Node_MakeStruct_CustomTrackedActorInfo = std::move(Parms.K2Node_MakeStruct_CustomTrackedActorInfo);

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue != nullptr)
		*CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue = std::move(Parms.CallFunc_Create_Tracked_Actor_Info_Struct_Player_ReturnValue);

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Restrict Create Foliage Hit Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::Restrict_Create_Foliage_Hit_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "Restrict Create Foliage Hit Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnRecievedUpdatedCachedTeamTameList
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               IsInfoFresh                                                      (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Handled                                                          (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
// int32                              ScrollbarIndex                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*NewLocalVar_0                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Handle_sorting_tracked_actors_Handled                   (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool APlayerControllerBlueprint_C::BPOnRecievedUpdatedCachedTeamTameList(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool* IsInfoFresh, int32* DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned, bool Handled, int32* ScrollbarIndex, TArray<class AActor*>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPOnRecievedUpdatedCachedTeamTameList");

	Params::APlayerControllerBlueprint_C_BPOnRecievedUpdatedCachedTeamTameList_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Handled = Handled;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInfoFresh != nullptr)
		*IsInfoFresh = Parms.IsInfoFresh;

	if (DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned != nullptr)
		*DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned = Parms.DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned;

	if (ScrollbarIndex != nullptr)
		*ScrollbarIndex = Parms.ScrollbarIndex;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is creature being tracked atm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// bool                               NewParam                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool APlayerControllerBlueprint_C::Is_creature_being_tracked_atm(int32* InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "is creature being tracked atm");

	Params::APlayerControllerBlueprint_C_Is_creature_being_tracked_atm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is player being tracked atm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// bool                               NewParam                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Map_Find_Value_1                                        (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)

bool APlayerControllerBlueprint_C::Is_player_being_tracked_atm(int32* InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "is player being tracked atm");

	Params::APlayerControllerBlueprint_C_Is_player_being_tracked_atm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.If Room Remains Query More Entries From Source List
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
// TArray<int32>                      Missing_fav_creatures                                            (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_allies                                               (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_fav_teammates                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_creatures                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_allies                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_waypoint_teammates                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*Local_function_library2                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Track_actor_filter                                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Index_to_use                                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Info_to_use                                                      (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           CallFunc_GetControllerPlayer_ReturnValue                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*K2Node_DynamicCast_AsPlayer_Controller_Trame_Tracker_Functions   (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>CallFunc_GetAllCachedTeamTames_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_If_Room_Remains_Query_More_Entries_From_Source_List_1_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_If_Room_Remains_Query_More_Entries_From_Source_List_2_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double APlayerControllerBlueprint_C::If_Room_Remains_Query_More_Entries_From_Source_List(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<int32>* Removed_Tracked_Actors_IDs_Players1, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked, TMap<int32, bool> All_Tracked_Players_This_Tick, TMap<int32, bool> All_Tracked_Creatures_This_Tick, TArray<int32>* Removed_Teammates, TArray<int32>* Missing_fav_creatures, TArray<int32>* Missing_waypoint_teammates, int32* Index_to_use, int32 CallFunc_Max_ReturnValue, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, const TArray<struct FTrackedActorPlusInfoStruct>& CallFunc_GetAllCachedTeamTames_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "If Room Remains Query More Entries From Source List");

	Params::APlayerControllerBlueprint_C_If_Room_Remains_Query_More_Entries_From_Source_List_Params Parms{};

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
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetControllerPlayer_ReturnValue = CallFunc_GetControllerPlayer_ReturnValue;
	Parms.CallFunc_GetAllCachedTeamTames_ReturnValue = CallFunc_GetAllCachedTeamTames_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Removed_Tracked_Actors_IDs_Players1 != nullptr)
		*Removed_Tracked_Actors_IDs_Players1 = std::move(Parms.Removed_Tracked_Actors_IDs_Players1);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (Missing_fav_creatures != nullptr)
		*Missing_fav_creatures = std::move(Parms.Missing_fav_creatures);

	if (Missing_waypoint_teammates != nullptr)
		*Missing_waypoint_teammates = std::move(Parms.Missing_waypoint_teammates);

	if (Index_to_use != nullptr)
		*Index_to_use = Parms.Index_to_use;

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.get or create filter object
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterTrackFilter_Base_C*Already_Setup_Filter_Object                                      (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              TameSelectionType                                                (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*AsCreature_Track_Filter_Base                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Local_selection_type                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class UClass*>              Used_Filters                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UCharacterTrackFilter_Base_C*K2Node_DynamicCast_AsCharacter_Track_Filter_Base                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool APlayerControllerBlueprint_C::Get_or_create_filter_object(int32 Local_selection_type, TArray<class UClass*>* Used_Filters, bool* CallFunc_Array_IsValidIndex_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "get or create filter object");

	Params::APlayerControllerBlueprint_C_Get_or_create_filter_object_Params Parms{};

	Parms.Local_selection_type = Local_selection_type;
	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Used_Filters != nullptr)
		*Used_Filters = std::move(Parms.Used_Filters);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (CallFunc_K2_GetWorld_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue_1 = Parms.CallFunc_K2_GetWorld_ReturnValue_1;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_Array_IsValidIndex_ReturnValue_1 != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue_1 = Parms.CallFunc_Array_IsValidIndex_ReturnValue_1;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Greater_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_2 = Parms.CallFunc_Greater_IntInt_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.update tracked characters on server and client
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInfoFresh                                                      (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures1                           (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players1                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_creatures1                              (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players1                                (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players1                              (ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_From_Page_Tracked_Actors_IDs_Creatures1                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_From_Page_Tracked_Actors_IDs_Players1                    (ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_From_Page_Tracked_Actors_IDs_Players_Teammates           (Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*Local_function_library                                           (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Filtered_remove_non_teammates                                    (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Filtered_remove_teammates                                        (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Filtered_remove_creatures                                        (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Filtered_add_players                                             (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Filtered_add_creatures                                           (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Filtered_update_players                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Filtered_update_creatures                                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            Local_cast_shooter_game_mode                                     (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Did_update_freshness_on_client                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Favorites_players                                                (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Favorites_creatures                                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Local_Tracked_Info_Map_To_Use                                    (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_handling_favorited_actors                                     (ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Actor_info_to_use                                                (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Actor_id_to_use                                                  (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Players                               (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players                              (Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players                               (ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Tracked_Actors_IDs_Creatures                             (Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Creatures                               (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Local_tracked_actors_fav                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Local_tracked_actors                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Number_of_favorites_being_shown                                  (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      Local_actor                                                      (Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class UClass*>              Used_Filters                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors                                      (OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_5                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*K2Node_DynamicCast_AsPlayer_Controller_Trame_Tracker_Functions   (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_1                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_2                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_3                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_4                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_5                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Is_Player_Being_Tracked_Atm_NewParam                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_is_creature_being_tracked_atm_NewParam                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// struct FTrackedActorPlusInfoStruct CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_is_creature_being_tracked_atm_NewParam_1                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Is_Player_Being_Tracked_Atm_NewParam_1                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_6                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Is_Player_Being_Tracked_Atm_NewParam_2                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_7                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// struct FTrackedActorPlusInfoStruct CallFunc_Array_Get_Item_5                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_8                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Is_Player_Being_Tracked_Atm_NewParam_3                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_9                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_10                            (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_11                            (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_12                            (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_13                            (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// int32                              Temp_int_Array_Index_Variable_6                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Array_IsEmpty_ReturnValue_14                            (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// int32                              CallFunc_Array_Get_Item_6                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_is_creature_being_tracked_atm_NewParam_2                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Should_Fully_Refresh_List_ReturnValue                   (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool APlayerControllerBlueprint_C::Update_tracked_characters_on_server_and_client(bool* IsInfoFresh, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players1, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures1, const TArray<struct FTrackedActorPlusInfoStruct>& Updated_Tracked_Actor_Info_players1, const TArray<int32>& Removed_From_Page_Tracked_Actors_IDs_Players1, TArray<int32>* Filtered_remove_teammates, TArray<struct FTrackedActorPlusInfoStruct>* Filtered_add_creatures, TArray<struct FTrackedActorPlusInfoStruct>* Filtered_update_creatures, class AShooterGameMode** Local_cast_shooter_game_mode, bool* Did_update_freshness_on_client, TMap<int32, struct FTrackedActorPlusInfoStruct> Favorites_players, TMap<int32, struct FTrackedActorPlusInfoStruct>* Local_Tracked_Info_Map_To_Use, bool Is_handling_favorited_actors, int32 Actor_id_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures, const TArray<struct FTrackedActorPlusInfoStruct>& Local_tracked_actors, int32* Number_of_favorites_being_shown, TArray<class UClass*>* Used_Filters, TArray<class AActor*>* Non_favorite_tracked_actors, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_5, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Get_Item, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_1, bool CallFunc_is_creature_being_tracked_atm_NewParam, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_2, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_3, bool CallFunc_is_creature_being_tracked_atm_NewParam_1, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Array_Get_Item_4, const struct FTrackedActorPlusInfoStruct& CallFunc_Array_Get_Item_5, int32 Temp_int_Array_Index_Variable_6, int32 CallFunc_Array_Get_Item_6, bool CallFunc_is_creature_being_tracked_atm_NewParam_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "update tracked characters on server and client");

	Params::APlayerControllerBlueprint_C_Update_tracked_characters_on_server_and_client_Params Parms{};

	Parms.Replaced_Tracked_Actor_Info_Creatures1 = Replaced_Tracked_Actor_Info_Creatures1;
	Parms.Replaced_Tracked_Actor_Info_Players1 = Replaced_Tracked_Actor_Info_Players1;
	Parms.Updated_Tracked_Actor_Info_players1 = Updated_Tracked_Actor_Info_players1;
	Parms.Removed_From_Page_Tracked_Actors_IDs_Players1 = Removed_From_Page_Tracked_Actors_IDs_Players1;
	Parms.Favorites_players = Favorites_players;
	Parms.Is_handling_favorited_actors = Is_handling_favorited_actors;
	Parms.Actor_id_to_use = Actor_id_to_use;
	Parms.Replaced_Tracked_Actor_Info_Players = Replaced_Tracked_Actor_Info_Players;
	Parms.Local_tracked_actors = Local_tracked_actors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_is_creature_being_tracked_atm_NewParam = CallFunc_is_creature_being_tracked_atm_NewParam;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_is_creature_being_tracked_atm_NewParam_1 = CallFunc_is_creature_being_tracked_atm_NewParam_1;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_is_creature_being_tracked_atm_NewParam_2 = CallFunc_is_creature_being_tracked_atm_NewParam_2;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInfoFresh != nullptr)
		*IsInfoFresh = Parms.IsInfoFresh;

	if (Updated_Tracked_Actor_Info_creatures1 != nullptr)
		*Updated_Tracked_Actor_Info_creatures1 = std::move(Parms.Updated_Tracked_Actor_Info_creatures1);

	if (Filtered_remove_teammates != nullptr)
		*Filtered_remove_teammates = std::move(Parms.Filtered_remove_teammates);

	if (Filtered_add_creatures != nullptr)
		*Filtered_add_creatures = std::move(Parms.Filtered_add_creatures);

	if (Filtered_update_creatures != nullptr)
		*Filtered_update_creatures = std::move(Parms.Filtered_update_creatures);

	if (Local_cast_shooter_game_mode != nullptr)
		*Local_cast_shooter_game_mode = Parms.Local_cast_shooter_game_mode;

	if (Did_update_freshness_on_client != nullptr)
		*Did_update_freshness_on_client = Parms.Did_update_freshness_on_client;

	if (Local_Tracked_Info_Map_To_Use != nullptr)
		*Local_Tracked_Info_Map_To_Use = Parms.Local_Tracked_Info_Map_To_Use;

	if (Updated_Tracked_Actor_Info_creatures != nullptr)
		*Updated_Tracked_Actor_Info_creatures = std::move(Parms.Updated_Tracked_Actor_Info_creatures);

	if (Number_of_favorites_being_shown != nullptr)
		*Number_of_favorites_being_shown = Parms.Number_of_favorites_being_shown;

	if (Used_Filters != nullptr)
		*Used_Filters = std::move(Parms.Used_Filters);

	if (Non_favorite_tracked_actors != nullptr)
		*Non_favorite_tracked_actors = std::move(Parms.Non_favorite_tracked_actors);

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList_logic
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              ScrollbarIndex                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Skip_UI_List                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Skip_Map                                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Handled                                                          (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
// class UCharacterTrackFilter_Base_C*NewLocalVar_4                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UCharacterTrackFilter_Base_C*NewLocalVar_1                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class UClass*>              Used_Filters                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      Local_actor                                                      (Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_filter                                                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FCustomTrackedActorInfo>Tracked_Actor_Info                                               (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Tracked_Actors                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class UCharacterTrackFilter_Base_C*CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base(BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              CallFunc_GetActorsToSearchThrough_BP_ReturnValue                 (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Handle_sorting_tracked_actors_Handled                   (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Handle_sorting_tracked_actors_Handled_1                 (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)

bool APlayerControllerBlueprint_C::BPServerRequestCustomTrackedActorList_logic(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, int32* ScrollbarIndex, bool Skip_Map, bool Handled, TArray<class UClass*>* Used_Filters, class UCharacterTrackFilter_Base_C** Local_filter, const TArray<class AActor*>& Tracked_Actors, TArray<class AActor*>* K2Node_MakeArray_Array, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPServerRequestCustomTrackedActorList_logic");

	Params::APlayerControllerBlueprint_C_BPServerRequestCustomTrackedActorList_logic_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Skip_Map = Skip_Map;
	Parms.Handled = Handled;
	Parms.Tracked_Actors = Tracked_Actors;
	Parms.CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base = CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base;

	UObject::ProcessEvent(Func, &Parms);

	if (ScrollbarIndex != nullptr)
		*ScrollbarIndex = Parms.ScrollbarIndex;

	if (Used_Filters != nullptr)
		*Used_Filters = std::move(Parms.Used_Filters);

	if (Local_filter != nullptr)
		*Local_filter = Parms.Local_filter;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Handle sorting tracked actors
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// bool                               Handled                                                          (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
// TArray<int32>                      Missing_teammates_waypoints                                      (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_allies_waypoints                                         (Edit, ConstParm, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_creature_waypoints                                       (ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>NewLocalVar_3                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// TArray<int32>                      Missing_teammates_favs                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_allies_favs                                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Missing_creatures_favs                                           (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*Local_function_library                                           (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_Teammates                                                (Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_Creatures_This_Tick                                  (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCharacterTrackFilter_Base_C*NewLocalVar_2                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<int32>                      Removed_From_Page_Tracked_Actors_IDs_Creatures                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Removed_From_Page_Tracked_Actors_IDs_Players                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Adjusted_Scrollbar_Index                                         (ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, bool>                  All_Tracked_PlayerChars_This_Tick                                (ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Previously_Tracked_Creatures_That_Remain_Tracked                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Previously_Tracked_Players_That_Remain_Tracked                   (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>NewLocalVar                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UCharacterTrackFilter_Base_C*Local_track_actor_filter                                         (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            Local_cast_shooter_game_mode                                     (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Did_update_freshness_on_client                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Favorites_players                                                (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Favorites_creatures                                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TMap<int32, struct FTrackedActorPlusInfoStruct>Local_Tracked_Info_Map_To_Use                                    (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_handling_favorited_actors                                     (ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTrackedActorPlusInfoStruct Actor_info_to_use                                                (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Actor_id_to_use                                                  (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Players                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Players                              (Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_players                               (ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Updated_Tracked_Actor_Info_creatures                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Added_Tracked_Actor_Info_Creatures                               (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Local_tracked_actors_fav                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Local_tracked_actors                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Number_of_favorites_being_shown                                  (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      Local_actor                                                      (Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class UClass*>              Used_Filters                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>Replaced_Tracked_Actor_Info_Creatures                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              Non_favorite_tracked_actors                                      (OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetControllerPlayer_ReturnValue                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetControllerPlayer_ReturnValue_1                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// TArray<struct FTrackedActorPlusInfoStruct>CallFunc_GetAllCachedTeamTames_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTrackedActorPlusInfoStruct>K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetControllerPlayer_ReturnValue_2                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           CallFunc_GetControllerPlayer_ReturnValue_3                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// TArray<struct FTrackedActorPlusInfoStruct>CallFunc_GetAllCachedTeamTames_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_2                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_3                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_4                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue_5                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// class AShooterCharacter*           CallFunc_GetControllerPlayer_ReturnValue_4                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*K2Node_DynamicCast_AsPlayer_Controller_Trame_Tracker_Functions   (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UCharacterTrackFilter_Base_C*CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base(BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_handle_missing_waypoints_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_handle_missing_waypoints_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast_1(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast_1(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Handle_sorting_tracked_actors_first_stuff_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double APlayerControllerBlueprint_C::Handle_sorting_tracked_actors(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool* IsInfoFresh, bool Skip_Map, bool Handled, TArray<int32>* Missing_teammates_waypoints, TArray<int32>* Missing_allies_waypoints, const TArray<int32>& Missing_teammates_favs, const TArray<int32>& Missing_allies_favs, TArray<int32>* Removed_Teammates, TMap<int32, bool> All_Tracked_Creatures_This_Tick, const TArray<int32>& Removed_From_Page_Tracked_Actors_IDs_Creatures, TArray<int32>* Removed_From_Page_Tracked_Actors_IDs_Players, int32 Adjusted_Scrollbar_Index, TMap<int32, struct FTrackedActorPlusInfoStruct> Previously_Tracked_Players_That_Remain_Tracked, class UCharacterTrackFilter_Base_C* Local_track_actor_filter, class AShooterGameMode** Local_cast_shooter_game_mode, bool* Did_update_freshness_on_client, TMap<int32, struct FTrackedActorPlusInfoStruct> Favorites_players, TMap<int32, struct FTrackedActorPlusInfoStruct>* Local_Tracked_Info_Map_To_Use, bool Is_handling_favorited_actors, int32 Actor_id_to_use, const TArray<struct FTrackedActorPlusInfoStruct>& Replaced_Tracked_Actor_Info_Players, TArray<struct FTrackedActorPlusInfoStruct>* Updated_Tracked_Actor_Info_creatures, const TArray<struct FTrackedActorPlusInfoStruct>& Local_tracked_actors, int32* Number_of_favorites_being_shown, TArray<class UClass*>* Used_Filters, TArray<class AActor*>* Non_favorite_tracked_actors, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue, TArray<struct FTrackedActorPlusInfoStruct>* K2Node_MakeArray_Array, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue_1, const TArray<struct FTrackedActorPlusInfoStruct>& CallFunc_GetAllCachedTeamTames_ReturnValue, TArray<struct FTrackedActorPlusInfoStruct>* K2Node_MakeArray_Array_1, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue_2, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue_3, const TArray<struct FTrackedActorPlusInfoStruct>& CallFunc_GetAllCachedTeamTames_ReturnValue_1, class AShooterCharacter* CallFunc_GetControllerPlayer_ReturnValue_4, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class UCharacterTrackFilter_Base_C* CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast, double CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "Handle sorting tracked actors");

	Params::APlayerControllerBlueprint_C_Handle_sorting_tracked_actors_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Skip_Map = Skip_Map;
	Parms.Handled = Handled;
	Parms.Missing_teammates_favs = Missing_teammates_favs;
	Parms.Missing_allies_favs = Missing_allies_favs;
	Parms.All_Tracked_Creatures_This_Tick = All_Tracked_Creatures_This_Tick;
	Parms.Removed_From_Page_Tracked_Actors_IDs_Creatures = Removed_From_Page_Tracked_Actors_IDs_Creatures;
	Parms.Adjusted_Scrollbar_Index = Adjusted_Scrollbar_Index;
	Parms.Previously_Tracked_Players_That_Remain_Tracked = Previously_Tracked_Players_That_Remain_Tracked;
	Parms.Local_track_actor_filter = Local_track_actor_filter;
	Parms.Favorites_players = Favorites_players;
	Parms.Is_handling_favorited_actors = Is_handling_favorited_actors;
	Parms.Actor_id_to_use = Actor_id_to_use;
	Parms.Replaced_Tracked_Actor_Info_Players = Replaced_Tracked_Actor_Info_Players;
	Parms.Local_tracked_actors = Local_tracked_actors;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetControllerPlayer_ReturnValue = CallFunc_GetControllerPlayer_ReturnValue;
	Parms.CallFunc_GetControllerPlayer_ReturnValue_1 = CallFunc_GetControllerPlayer_ReturnValue_1;
	Parms.CallFunc_GetAllCachedTeamTames_ReturnValue = CallFunc_GetAllCachedTeamTames_ReturnValue;
	Parms.CallFunc_GetControllerPlayer_ReturnValue_2 = CallFunc_GetControllerPlayer_ReturnValue_2;
	Parms.CallFunc_GetControllerPlayer_ReturnValue_3 = CallFunc_GetControllerPlayer_ReturnValue_3;
	Parms.CallFunc_GetAllCachedTeamTames_ReturnValue_1 = CallFunc_GetAllCachedTeamTames_ReturnValue_1;
	Parms.CallFunc_GetControllerPlayer_ReturnValue_4 = CallFunc_GetControllerPlayer_ReturnValue_4;
	Parms.CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base = CallFunc_get_or_create_filter_object_AsCreature_Track_Filter_Base;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast = CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast;
	Parms.CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast_1 = CallFunc_handle_missing_favorites_ShouldUpdateTrackedActor_LocationChangeTolerance_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInfoFresh != nullptr)
		*IsInfoFresh = Parms.IsInfoFresh;

	if (Missing_teammates_waypoints != nullptr)
		*Missing_teammates_waypoints = std::move(Parms.Missing_teammates_waypoints);

	if (Missing_allies_waypoints != nullptr)
		*Missing_allies_waypoints = std::move(Parms.Missing_allies_waypoints);

	if (Removed_Teammates != nullptr)
		*Removed_Teammates = std::move(Parms.Removed_Teammates);

	if (Removed_From_Page_Tracked_Actors_IDs_Players != nullptr)
		*Removed_From_Page_Tracked_Actors_IDs_Players = std::move(Parms.Removed_From_Page_Tracked_Actors_IDs_Players);

	if (Local_cast_shooter_game_mode != nullptr)
		*Local_cast_shooter_game_mode = Parms.Local_cast_shooter_game_mode;

	if (Did_update_freshness_on_client != nullptr)
		*Did_update_freshness_on_client = Parms.Did_update_freshness_on_client;

	if (Local_Tracked_Info_Map_To_Use != nullptr)
		*Local_Tracked_Info_Map_To_Use = Parms.Local_Tracked_Info_Map_To_Use;

	if (Updated_Tracked_Actor_Info_creatures != nullptr)
		*Updated_Tracked_Actor_Info_creatures = std::move(Parms.Updated_Tracked_Actor_Info_creatures);

	if (Number_of_favorites_being_shown != nullptr)
		*Number_of_favorites_being_shown = Parms.Number_of_favorites_being_shown;

	if (Used_Filters != nullptr)
		*Used_Filters = std::move(Parms.Used_Filters);

	if (Non_favorite_tracked_actors != nullptr)
		*Non_favorite_tracked_actors = std::move(Parms.Non_favorite_tracked_actors);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Should Fully Refresh List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)

bool APlayerControllerBlueprint_C::Should_Fully_Refresh_List()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "Should Fully Refresh List");

	Params::APlayerControllerBlueprint_C_Should_Fully_Refresh_List_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Handled                                                          (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
// int32                              NewScrollbarIndex                                                (Edit, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPServerRequestCustomTrackedActorList_logic_Handled     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool APlayerControllerBlueprint_C::BPServerRequestCustomTrackedActorList(int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, bool Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPServerRequestCustomTrackedActorList");

	Params::APlayerControllerBlueprint_C_BPServerRequestCustomTrackedActorList_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.Handled = Handled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanFit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// double                             VerticalOffset                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
// double                             Angle                                                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             HorizontalOffset                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Radius                                                           (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             HalfHeight                                                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class AActor*                      SpawningActor                                                    (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      IgnoreActor                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               Can                                                              (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewLocation                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     TestLocation                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               LocalCan                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_CapsuleOverlapFast_FirstOverlappedActor                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_CapsuleOverlapFast_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_CapsuleOverlapFast_Radius_ImplicitCast                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_CapsuleOverlapFast_HalfHeight_ImplicitCast              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float APlayerControllerBlueprint_C::CanFit(struct FVector* Location, double VerticalOffset, double Radius, const struct FVector& NewLocation, TArray<class AActor*>* K2Node_MakeArray_Array, const struct FVector& CallFunc_MakeVector_ReturnValue, float* CallFunc_MakeRotator_Yaw_ImplicitCast, float* CallFunc_CapsuleOverlapFast_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "CanFit");

	Params::APlayerControllerBlueprint_C_CanFit_Params Parms{};

	Parms.VerticalOffset = VerticalOffset;
	Parms.Radius = Radius;
	Parms.NewLocation = NewLocation;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_MakeRotator_Yaw_ImplicitCast != nullptr)
		*CallFunc_MakeRotator_Yaw_ImplicitCast = Parms.CallFunc_MakeRotator_Yaw_ImplicitCast;

	if (CallFunc_CapsuleOverlapFast_Radius_ImplicitCast != nullptr)
		*CallFunc_CapsuleOverlapFast_Radius_ImplicitCast = Parms.CallFunc_CapsuleOverlapFast_Radius_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanDeploy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Class                                                            (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class AActor*                      IgnoreActor                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               Can                                                              (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewLocation                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      LocalFailureReason                                               (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             VerticalOffset                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
// double                             HorizontalOffset                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Angle                                                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               LocalCanDeploy                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     LocalLocation                                                    (Edit, ExportObject, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue_1                         (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_CanFit_Can                                              (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_CanFit_NewLocation                                      (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_CanFit_Can_1                                            (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_CanFit_NewLocation_1                                    (Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             K2Node_VariableSet_VerticalOffset_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_CanFit_HalfHeight_ImplicitCast                          (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_CanFit_HalfHeight_ImplicitCast_1                        (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             K2Node_VariableSet_HorizontalOffset_ImplicitCast                 (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_CanFit_Radius_ImplicitCast                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_CanFit_Radius_ImplicitCast_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)

double APlayerControllerBlueprint_C::CanDeploy(class UClass* Class, struct FVector* Location, class AActor** Actor, const struct FVector& NewLocation, const class FString& LocalFailureReason, double VerticalOffset, const struct FVector& LocalLocation, bool Temp_bool_Variable, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32* Temp_int_Variable, double* CallFunc_Multiply_IntFloat_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_1, int32* Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_IntFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double K2Node_VariableSet_HorizontalOffset_ImplicitCast, double* CallFunc_CanFit_Radius_ImplicitCast, double* CallFunc_CanFit_Radius_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "CanDeploy");

	Params::APlayerControllerBlueprint_C_CanDeploy_Params Parms{};

	Parms.Class = Class;
	Parms.NewLocation = NewLocation;
	Parms.LocalFailureReason = LocalFailureReason;
	Parms.VerticalOffset = VerticalOffset;
	Parms.LocalLocation = LocalLocation;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.K2Node_VariableSet_HorizontalOffset_ImplicitCast = K2Node_VariableSet_HorizontalOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Multiply_IntFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_IntFloat_ReturnValue = Parms.CallFunc_Multiply_IntFloat_ReturnValue;

	if (CallFunc_Multiply_IntFloat_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_IntFloat_ReturnValue_1 = Parms.CallFunc_Multiply_IntFloat_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_Multiply_IntFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_IntFloat_B_ImplicitCast = Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast;

	if (CallFunc_CanFit_Radius_ImplicitCast != nullptr)
		*CallFunc_CanFit_Radius_ImplicitCast = Parms.CallFunc_CanFit_Radius_ImplicitCast;

	if (CallFunc_CanFit_Radius_ImplicitCast_1 != nullptr)
		*CallFunc_CanFit_Radius_ImplicitCast_1 = Parms.CallFunc_CanFit_Radius_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPCheckCanDinoSpawnFromLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DinoClass                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CheckLocation                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     LocalLoc                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_CanDeploy_Can                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_CanDeploy_NewLocation                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector APlayerControllerBlueprint_C::BPCheckCanDinoSpawnFromLocation(const struct FVector& CheckLocation, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanDeploy_Can)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPCheckCanDinoSpawnFromLocation");

	Params::APlayerControllerBlueprint_C_BPCheckCanDinoSpawnFromLocation_Params Parms{};

	Parms.CheckLocation = CheckLocation;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_CanDeploy_Can = CallFunc_CanDeploy_Can;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_D7293B2D48183D83205E9295F5716E6E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

void APlayerControllerBlueprint_C::OnLoaded_D7293B2D48183D83205E9295F5716E6E(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "OnLoaded_D7293B2D48183D83205E9295F5716E6E");

	Params::APlayerControllerBlueprint_C_OnLoaded_D7293B2D48183D83205E9295F5716E6E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_BA98DE0848BC459B691689932D89326C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

void APlayerControllerBlueprint_C::OnLoaded_BA98DE0848BC459B691689932D89326C(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "OnLoaded_BA98DE0848BC459B691689932D89326C");

	Params::APlayerControllerBlueprint_C_OnLoaded_BA98DE0848BC459B691689932D89326C_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_CAE125AC424938179B7AD98DC7D71BB0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

void APlayerControllerBlueprint_C::OnLoaded_CAE125AC424938179B7AD98DC7D71BB0(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "OnLoaded_CAE125AC424938179B7AD98DC7D71BB0");

	Params::APlayerControllerBlueprint_C_OnLoaded_CAE125AC424938179B7AD98DC7D71BB0_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestUpdateTrackedWaypointsAndMapPlayers
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::BPServerRequestUpdateTrackedWaypointsAndMapPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPServerRequestUpdateTrackedWaypointsAndMapPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestUpdateTrackedWaypointsOnly
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::BPServerRequestUpdateTrackedWaypointsOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPServerRequestUpdateTrackedWaypointsOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnActorCustomEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventCustomName                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      EventCustomString                                                (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      InstigatorActor                                                  (BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class AActor* APlayerControllerBlueprint_C::OnActorCustomEvent_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "OnActorCustomEvent_Event");

	Params::APlayerControllerBlueprint_C_OnActorCustomEvent_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ServerTryTrackWIthoutWeapon
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::ServerTryTrackWIthoutWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "ServerTryTrackWIthoutWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SetupNewTrackBP
// (Event, Public, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::SetupNewTrackBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "SetupNewTrackBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ROS_ToggleGroundConformDebug
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::ROS_ToggleGroundConformDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "ROS_ToggleGroundConformDebug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPApplyFoliageHarvestEffectOnHitAndCollect
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     FoliageOrigin_ImpactPoint                                        (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     TraceEndpoint                                                    (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InteractDir                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector APlayerControllerBlueprint_C::BPApplyFoliageHarvestEffectOnHitAndCollect(struct FVector* InteractDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPApplyFoliageHarvestEffectOnHitAndCollect");

	Params::APlayerControllerBlueprint_C_BPApplyFoliageHarvestEffectOnHitAndCollect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InteractDir != nullptr)
		*InteractDir = std::move(Parms.InteractDir);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnSpawnPlayerCameraManager
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::BPOnSpawnPlayerCameraManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "BPOnSpawnPlayerCameraManager");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.DestroyPhotoModeMarker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerControllerBlueprint_C::DestroyPhotoModeMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "DestroyPhotoModeMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.AddPhotoModeMarker
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             Points                                                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      MarkerClass                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

TArray<struct FVector> APlayerControllerBlueprint_C::AddPhotoModeMarker(class UClass** MarkerClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "AddPhotoModeMarker");

	Params::APlayerControllerBlueprint_C_AddPhotoModeMarker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MarkerClass != nullptr)
		*MarkerClass = Parms.MarkerClass;

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SavePhotoModeMarker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MarkerName                                                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)

class FString APlayerControllerBlueprint_C::SavePhotoModeMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "SavePhotoModeMarker");

	Params::APlayerControllerBlueprint_C_SavePhotoModeMarker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsShipping_ReturnValue                                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        K2Node_CustomEvent_EventCustomName                               (ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      K2Node_CustomEvent_EventCustomString                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      K2Node_CustomEvent_InstigatorActor                               (ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_LeftS                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Split_RightS                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Split_ReturnValue                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Replace_ReturnValue                                     (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Split_LeftS_1                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Split_RightS_1                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Split_ReturnValue_1                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Replace_ReturnValue_1                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsNumeric_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Split_LeftS_2                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Split_RightS_2                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Split_ReturnValue_2                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Replace_ReturnValue_2                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsNumeric_ReturnValue_2                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Split_LeftS_3                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Split_RightS_3                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Split_ReturnValue_3                                     (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Replace_ReturnValue_3                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsNumeric_ReturnValue_3                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_3                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BPServerRequestCustomTrackedActorList_logic_Handled     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BPServerRequestCustomTrackedActorList_logic_Handled_1   (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BPTryMultiUse_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UClass*                      Temp_class_Variable                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_2                 (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            CallFunc_PawnToPrimalCharacter_ReturnValue                       (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UClass*                      K2Node_CustomEvent_Loaded_1                                      (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UClass*                      Temp_class_Variable_1                                            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UClass*                      K2Node_CustomEvent_Loaded_2                                      (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ATrackBinocularsBuff_C*      K2Node_DynamicCast_AsTrack_Binoculars_Buff                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UPlayerControllerTrameTrackerFunctions_C*CallFunc_SpawnObject_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FVector                     K2Node_Event_FoliageOrigin_ImpactPoint                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_Event_TraceEndpoint                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_Event_interactDir                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_K2_IsTimerActive_ReturnValue                            (ConstParm, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      Temp_class_Variable_2                                            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff_1                          (BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue_1                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ShouldSpawnWaterInteraction_ReturnValue                 (BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerCameraBlueprint_C*    K2Node_DynamicCast_AsPlayer_Camera_Blueprint                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// TArray<struct FVector>             K2Node_CustomEvent_Points                                        (ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      K2Node_CustomEvent_MarkerClass                                   (Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      K2Node_CustomEvent_MarkerName                                    (ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_OutRangeB_ImplicitCast                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_AddFoliageCapsuleInteractionEffect_Radius_ImplicitCast  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MapRangeClamped_OutRangeA_ImplicitCast                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_AddFoliageCapsuleInteractionEffect_FoliageInteractionStrength_ImplicitCast(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float APlayerControllerBlueprint_C::ExecuteUbergraph_PlayerControllerBlueprint(int32* EntryPoint, bool* CallFunc_IsShipping_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Replace_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, const class FString& CallFunc_Replace_ReturnValue_3, class UClass* K2Node_CustomEvent_Loaded, bool* CallFunc_IsValidSoftClassReference_ReturnValue, bool* CallFunc_IsValidSoftClassReference_ReturnValue_1, class UClass* Temp_class_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool* CallFunc_IsValidSoftClassReference_ReturnValue_2, class APrimalCharacter** CallFunc_PawnToPrimalCharacter_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class UClass* K2Node_CustomEvent_Loaded_1, class UClass* Temp_class_Variable_1, class UClass* K2Node_CustomEvent_Loaded_2, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff, bool* K2Node_DynamicCast_bSuccess_2, class UPlayerControllerTrameTrackerFunctions_C* CallFunc_SpawnObject_ReturnValue, struct FVector* K2Node_Event_FoliageOrigin_ImpactPoint, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UClass* Temp_class_Variable_2, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff_1, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_ShouldSpawnWaterInteraction_ReturnValue, bool* K2Node_DynamicCast_bSuccess_3, class FString* K2Node_CustomEvent_MarkerName, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, double* CallFunc_MapRangeClamped_OutRangeB_ImplicitCast, double* CallFunc_MapRangeClamped_OutRangeA_ImplicitCast, float CallFunc_AddFoliageCapsuleInteractionEffect_FoliageInteractionStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerControllerBlueprint_C", "ExecuteUbergraph_PlayerControllerBlueprint");

	Params::APlayerControllerBlueprint_C_ExecuteUbergraph_PlayerControllerBlueprint_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue_1 = CallFunc_Replace_ReturnValue_1;
	Parms.CallFunc_Replace_ReturnValue_2 = CallFunc_Replace_ReturnValue_2;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Replace_ReturnValue_3 = CallFunc_Replace_ReturnValue_3;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_ShouldSpawnWaterInteraction_ReturnValue = CallFunc_ShouldSpawnWaterInteraction_ReturnValue;
	Parms.CallFunc_AddFoliageCapsuleInteractionEffect_FoliageInteractionStrength_ImplicitCast = CallFunc_AddFoliageCapsuleInteractionEffect_FoliageInteractionStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_IsShipping_ReturnValue != nullptr)
		*CallFunc_IsShipping_ReturnValue = Parms.CallFunc_IsShipping_ReturnValue;

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValidSoftClassReference_ReturnValue != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue = Parms.CallFunc_IsValidSoftClassReference_ReturnValue;

	if (CallFunc_IsValidSoftClassReference_ReturnValue_1 != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue_1 = Parms.CallFunc_IsValidSoftClassReference_ReturnValue_1;

	if (CallFunc_IsValidSoftClassReference_ReturnValue_2 != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue_2 = Parms.CallFunc_IsValidSoftClassReference_ReturnValue_2;

	if (CallFunc_PawnToPrimalCharacter_ReturnValue != nullptr)
		*CallFunc_PawnToPrimalCharacter_ReturnValue = Parms.CallFunc_PawnToPrimalCharacter_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_ClassDynamicCast_AsPrimal_Buff != nullptr)
		*K2Node_ClassDynamicCast_AsPrimal_Buff = Parms.K2Node_ClassDynamicCast_AsPrimal_Buff;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_Event_FoliageOrigin_ImpactPoint != nullptr)
		*K2Node_Event_FoliageOrigin_ImpactPoint = std::move(Parms.K2Node_Event_FoliageOrigin_ImpactPoint);

	if (CallFunc_K2_GetWorld_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue_1 = Parms.CallFunc_K2_GetWorld_ReturnValue_1;

	if (K2Node_ClassDynamicCast_AsPrimal_Buff_1 != nullptr)
		*K2Node_ClassDynamicCast_AsPrimal_Buff_1 = Parms.K2Node_ClassDynamicCast_AsPrimal_Buff_1;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_CustomEvent_MarkerName != nullptr)
		*K2Node_CustomEvent_MarkerName = std::move(Parms.K2Node_CustomEvent_MarkerName);

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	if (CallFunc_MapRangeClamped_OutRangeB_ImplicitCast != nullptr)
		*CallFunc_MapRangeClamped_OutRangeB_ImplicitCast = Parms.CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;

	if (CallFunc_MapRangeClamped_OutRangeA_ImplicitCast != nullptr)
		*CallFunc_MapRangeClamped_OutRangeA_ImplicitCast = Parms.CallFunc_MapRangeClamped_OutRangeA_ImplicitCast;

	return Parms.ReturnValue;

}

}


