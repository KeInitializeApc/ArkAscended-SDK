#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTrackFilter_ParentClass.PlayerTrackFilter_ParentClass_C
// (None)

class UClass* UPlayerTrackFilter_ParentClass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTrackFilter_ParentClass_C");

	return Clss;
}


// PlayerTrackFilter_ParentClass_C PlayerTrackFilter_ParentClass.Default__PlayerTrackFilter_ParentClass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTrackFilter_ParentClass_C* UPlayerTrackFilter_ParentClass_C::GetDefaultObj()
{
	static class UPlayerTrackFilter_ParentClass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTrackFilter_ParentClass_C*>(UPlayerTrackFilter_ParentClass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerTrackFilter_ParentClass.PlayerTrackFilter_ParentClass_C.GetActorsToSearchThrough_BP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    SPC                                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class AActor*>              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class AActor*>              CallFunc_GetSpecialActorList_OutActors                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

TArray<class AActor*> UPlayerTrackFilter_ParentClass_C::GetActorsToSearchThrough_BP(class AShooterPlayerController** SPC, TArray<class AActor*>* CallFunc_GetSpecialActorList_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTrackFilter_ParentClass_C", "GetActorsToSearchThrough_BP");

	Params::UPlayerTrackFilter_ParentClass_C_GetActorsToSearchThrough_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SPC != nullptr)
		*SPC = Parms.SPC;

	if (CallFunc_GetSpecialActorList_OutActors != nullptr)
		*CallFunc_GetSpecialActorList_OutActors = std::move(Parms.CallFunc_GetSpecialActorList_OutActors);

	return Parms.ReturnValue;

}


// Function PlayerTrackFilter_ParentClass.PlayerTrackFilter_ParentClass_C.ShouldActorBeTracked
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
// bool                               CallFunc_ShouldActorBeTracked_Handled                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldActorBeTracked_ReturnValue                        (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

bool UPlayerTrackFilter_ParentClass_C::ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue, bool CallFunc_IsShooterCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTrackFilter_ParentClass_C", "ShouldActorBeTracked");

	Params::UPlayerTrackFilter_ParentClass_C_ShouldActorBeTracked_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Handled = Handled;
	Parms.CallFunc_IsShooterCharacter_ReturnValue = CallFunc_IsShooterCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InvestigatedActor != nullptr)
		*InvestigatedActor = Parms.InvestigatedActor;

	if (Requesting_player_Shooter_Character != nullptr)
		*Requesting_player_Shooter_Character = Parms.Requesting_player_Shooter_Character;

	if (Debug_Enabled != nullptr)
		*Debug_Enabled = Parms.Debug_Enabled;

	if (Ret_should_show != nullptr)
		*Ret_should_show = Parms.Ret_should_show;

	if (CallFunc_ShouldActorBeTracked_Handled != nullptr)
		*CallFunc_ShouldActorBeTracked_Handled = Parms.CallFunc_ShouldActorBeTracked_Handled;

	if (CallFunc_ShouldActorBeTracked_ReturnValue != nullptr)
		*CallFunc_ShouldActorBeTracked_ReturnValue = Parms.CallFunc_ShouldActorBeTracked_ReturnValue;

	return Parms.ReturnValue;

}

}


