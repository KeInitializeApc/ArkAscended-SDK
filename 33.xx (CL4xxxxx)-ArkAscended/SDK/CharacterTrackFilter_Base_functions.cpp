#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterTrackFilter_Base.CharacterTrackFilter_Base_C
// (None)

class UClass* UCharacterTrackFilter_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterTrackFilter_Base_C");

	return Clss;
}


// CharacterTrackFilter_Base_C CharacterTrackFilter_Base.Default__CharacterTrackFilter_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterTrackFilter_Base_C* UCharacterTrackFilter_Base_C::GetDefaultObj()
{
	static class UCharacterTrackFilter_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterTrackFilter_Base_C*>(UCharacterTrackFilter_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.GetActorsToSearchThrough_BP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    SPC                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class AActor*> UCharacterTrackFilter_Base_C::GetActorsToSearchThrough_BP(class AShooterPlayerController** SPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrackFilter_Base_C", "GetActorsToSearchThrough_BP");

	Params::UCharacterTrackFilter_Base_C_GetActorsToSearchThrough_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SPC != nullptr)
		*SPC = Parms.SPC;

	return Parms.ReturnValue;

}


// Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.ShouldActorBeTracked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InvestigatedActor                                                (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CustomTameSelectionType                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DinoGroup                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CustomTameSearchText                                             (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterGameMode*            GameMode                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
// class APlayerState*                PlayerState                                                      (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig)
// class AShooterCharacter*           Requesting_player_Shooter_Character                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Debug_Enabled                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Handled                                                          (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Ret_should_show                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsDead_ReturnValue                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UCharacterTrackFilter_Base_C::ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsDead_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrackFilter_Base_C", "ShouldActorBeTracked");

	Params::UCharacterTrackFilter_Base_C_ShouldActorBeTracked_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Handled = Handled;

	UObject::ProcessEvent(Func, &Parms);

	if (InvestigatedActor != nullptr)
		*InvestigatedActor = Parms.InvestigatedActor;

	if (Requesting_player_Shooter_Character != nullptr)
		*Requesting_player_Shooter_Character = Parms.Requesting_player_Shooter_Character;

	if (Debug_Enabled != nullptr)
		*Debug_Enabled = Parms.Debug_Enabled;

	if (Ret_should_show != nullptr)
		*Ret_should_show = Parms.Ret_should_show;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_IsDead_ReturnValue != nullptr)
		*CallFunc_IsDead_ReturnValue = Parms.CallFunc_IsDead_ReturnValue;

	return Parms.ReturnValue;

}


// Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.GetActorsToSearchThrough
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<class AActor*> UCharacterTrackFilter_Base_C::GetActorsToSearchThrough()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrackFilter_Base_C", "GetActorsToSearchThrough");

	Params::UCharacterTrackFilter_Base_C_GetActorsToSearchThrough_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.Is In Dino Group
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Checked_actor                                                    (ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APlayerState*                Player_state                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Dino_Group_Num                                                   (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_favorited                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Is_In_Group                                                      (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Ret_is_in_group                                                  (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsDinoClassInOrderGroup_ReturnValue                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsDinoInOrderGroup_ReturnValue                          (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class AShooterPlayerState* UCharacterTrackFilter_Base_C::Is_In_Dino_Group(class AActor* Checked_actor, class APlayerState* Player_state, int32 Dino_Group_Num, bool Is_favorited, bool Is_In_Group, bool Ret_is_in_group, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsDinoClassInOrderGroup_ReturnValue, bool CallFunc_IsDinoInOrderGroup_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrackFilter_Base_C", "Is In Dino Group");

	Params::UCharacterTrackFilter_Base_C_Is_In_Dino_Group_Params Parms{};

	Parms.Checked_actor = Checked_actor;
	Parms.Player_state = Player_state;
	Parms.Dino_Group_Num = Dino_Group_Num;
	Parms.Is_favorited = Is_favorited;
	Parms.Is_In_Group = Is_In_Group;
	Parms.Ret_is_in_group = Ret_is_in_group;
	Parms.CallFunc_IsDinoInOrderGroup_ReturnValue = CallFunc_IsDinoInOrderGroup_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsDinoClassInOrderGroup_ReturnValue != nullptr)
		*CallFunc_IsDinoClassInOrderGroup_ReturnValue = Parms.CallFunc_IsDinoClassInOrderGroup_ReturnValue;

	return Parms.ReturnValue;

}

}


