#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalDinoTrackFilter_ParentClass.PrimalDinoTrackFilter_ParentClass_C
// (None)

class UClass* UPrimalDinoTrackFilter_ParentClass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalDinoTrackFilter_ParentClass_C");

	return Clss;
}


// PrimalDinoTrackFilter_ParentClass_C PrimalDinoTrackFilter_ParentClass.Default__PrimalDinoTrackFilter_ParentClass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalDinoTrackFilter_ParentClass_C* UPrimalDinoTrackFilter_ParentClass_C::GetDefaultObj()
{
	static class UPrimalDinoTrackFilter_ParentClass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalDinoTrackFilter_ParentClass_C*>(UPrimalDinoTrackFilter_ParentClass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalDinoTrackFilter_ParentClass.PrimalDinoTrackFilter_ParentClass_C.ShouldActorBeTracked
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
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsPrimalDino_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

bool UPrimalDinoTrackFilter_ParentClass_C::ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDinoTrackFilter_ParentClass_C", "ShouldActorBeTracked");

	Params::UPrimalDinoTrackFilter_ParentClass_C_ShouldActorBeTracked_Params Parms{};

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

	if (CallFunc_ShouldActorBeTracked_Handled != nullptr)
		*CallFunc_ShouldActorBeTracked_Handled = Parms.CallFunc_ShouldActorBeTracked_Handled;

	if (CallFunc_ShouldActorBeTracked_ReturnValue != nullptr)
		*CallFunc_ShouldActorBeTracked_ReturnValue = Parms.CallFunc_ShouldActorBeTracked_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


