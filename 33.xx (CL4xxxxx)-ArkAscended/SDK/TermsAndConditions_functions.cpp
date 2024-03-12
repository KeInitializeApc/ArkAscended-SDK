#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TermsAndConditions.TermsAndConditions_C
// (None)

class UClass* UTermsAndConditions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TermsAndConditions_C");

	return Clss;
}


// TermsAndConditions_C TermsAndConditions.Default__TermsAndConditions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTermsAndConditions_C* UTermsAndConditions_C::GetDefaultObj()
{
	static class UTermsAndConditions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTermsAndConditions_C*>(UTermsAndConditions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TermsAndConditions.TermsAndConditions_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UTermsAndConditions_C::BPGamepadReleased(struct FKey* TheKey, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BPGamepadReleased");

	Params::UTermsAndConditions_C_BPGamepadReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TheKey != nullptr)
		*TheKey = std::move(Parms.TheKey);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_1 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function TermsAndConditions.TermsAndConditions_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UTermsAndConditions_C::BPHighlightWidgetOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BPHighlightWidgetOnStart");

	Params::UTermsAndConditions_C_BPHighlightWidgetOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TermsAndConditions.TermsAndConditions_C.PlayFadeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUMGSequencePlayMode    PlayMode                                                         (Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UTermsAndConditions_C::PlayFadeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "PlayFadeAnimation");

	Params::UTermsAndConditions_C_PlayFadeAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TermsAndConditions.TermsAndConditions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.BndEvt__TermsAndConditions_Button_OpenTerm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::BndEvt__TermsAndConditions_Button_OpenTerm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BndEvt__TermsAndConditions_Button_OpenTerm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UTermsAndConditions_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "Tick");

	Params::UTermsAndConditions_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function TermsAndConditions.TermsAndConditions_C.BndEvt__TermsAndConditions_ButtonDeny_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::BndEvt__TermsAndConditions_ButtonDeny_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BndEvt__TermsAndConditions_ButtonDeny_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.BndEvt__TermsAndConditions_ButtonAccept_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::BndEvt__TermsAndConditions_ButtonAccept_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BndEvt__TermsAndConditions_ButtonAccept_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.ExecuteUbergraph_TermsAndConditions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ListSessions*            K2Node_DynamicCast_AsUI_List_Sessions                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_1                         (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_2                         (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_2                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue_1                         (Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue_1                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue_2                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UUI_MainMenu*                K2Node_DynamicCast_AsUI_Main_Menu                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UUI_ListSessions*            K2Node_DynamicCast_AsUI_List_Sessions_1                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FString UTermsAndConditions_C::ExecuteUbergraph_TermsAndConditions(int32* EntryPoint, class UWorld** CallFunc_K2_GetWorld_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue_1, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue_2, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "ExecuteUbergraph_TermsAndConditions");

	Params::UTermsAndConditions_C_ExecuteUbergraph_TermsAndConditions_Params Parms{};

	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1 = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2 = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_BPGetGlobalUIData_ReturnValue_1 != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue_1 = Parms.CallFunc_BPGetGlobalUIData_ReturnValue_1;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue_1 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_1 = Parms.CallFunc_GetIconForKeyName_ReturnValue_1;

	if (CallFunc_BPGetGlobalUIData_ReturnValue_2 != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue_2 = Parms.CallFunc_BPGetGlobalUIData_ReturnValue_2;

	if (CallFunc_GetIconForKeyName_ReturnValue_2 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_2 = Parms.CallFunc_GetIconForKeyName_ReturnValue_2;

	if (CallFunc_K2_GetWorld_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue_1 = Parms.CallFunc_K2_GetWorld_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	return Parms.ReturnValue;

}


// Function TermsAndConditions.TermsAndConditions_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::OnCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "OnCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.OnAgree__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::OnAgree__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "OnAgree__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


