#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C
// (None)

class UClass* UCharacterTrackFilter_SearchName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterTrackFilter_SearchName_C");

	return Clss;
}


// CharacterTrackFilter_SearchName_C CharacterTrackFilter_SearchName.Default__CharacterTrackFilter_SearchName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterTrackFilter_SearchName_C* UCharacterTrackFilter_SearchName_C::GetDefaultObj()
{
	static class UCharacterTrackFilter_SearchName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterTrackFilter_SearchName_C*>(UCharacterTrackFilter_SearchName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C.Is Found Substring
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// class FString                      SubString                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Exact                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FindSubstring_ReturnValue                               (Edit, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

bool UCharacterTrackFilter_SearchName_C::Is_Found_Substring(class FString* InputPin, const class FString& SubString, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32* CallFunc_FindSubstring_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrackFilter_SearchName_C", "Is Found Substring");

	Params::UCharacterTrackFilter_SearchName_C_Is_Found_Substring_Params Parms{};

	Parms.SubString = SubString;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = std::move(Parms.InputPin);

	if (CallFunc_FindSubstring_ReturnValue != nullptr)
		*CallFunc_FindSubstring_ReturnValue = Parms.CallFunc_FindSubstring_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C.ShouldActorBeTracked
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
// class FString                      Gender_string                                                    (Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Ret_should_show                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldActorBeTracked_Handled                            (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldActorBeTracked_ReturnValue                        (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (ConstParm, ExportObject, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_GetDinoIDsAsStrings_OutDinoID1                          (BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetDinoIDsAsStrings_OutDinoID2                          (Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsPrimalDino_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class ULevel*                      CallFunc_GetLevel_ReturnValue                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Is_Found_Substring_ReturnValue                          (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_1                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_2                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_3                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_4                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_5                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_6                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_7                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_8                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_9                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_10                       (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_11                       (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_12                       (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_13                       (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Is_Found_Substring_ReturnValue_14                       (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)

bool UCharacterTrackFilter_SearchName_C::ShouldActorBeTracked(class AActor** InvestigatedActor, int32 CustomTameSelectionType, int32 DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class AShooterCharacter** Requesting_player_Shooter_Character, bool* Debug_Enabled, bool Handled, bool* Ret_should_show, bool* CallFunc_ShouldActorBeTracked_Handled, bool* CallFunc_ShouldActorBeTracked_ReturnValue, class ADino_Character_BP_C** K2Node_DynamicCast_AsDino_Character_BP, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class FString* CallFunc_LinkedPlayerIDString_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterTrackFilter_SearchName_C", "ShouldActorBeTracked");

	Params::UCharacterTrackFilter_SearchName_C_ShouldActorBeTracked_Params Parms{};

	Parms.CustomTameSelectionType = CustomTameSelectionType;
	Parms.DinoGroup = DinoGroup;
	Parms.CustomTameSearchText = CustomTameSearchText;
	Parms.GameMode = GameMode;
	Parms.Handled = Handled;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;

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

	if (K2Node_DynamicCast_AsDino_Character_BP != nullptr)
		*K2Node_DynamicCast_AsDino_Character_BP = Parms.K2Node_DynamicCast_AsDino_Character_BP;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_LinkedPlayerIDString_ReturnValue != nullptr)
		*CallFunc_LinkedPlayerIDString_ReturnValue = std::move(Parms.CallFunc_LinkedPlayerIDString_ReturnValue);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


