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
// struct FKey                        TheKey                                                           (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UTermsAndConditions_C::BPGamepadReleased(const struct FKey& TheKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BPGamepadReleased");

	Params::UTermsAndConditions_C_BPGamepadReleased_Params Parms{};

	Parms.TheKey = TheKey;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TermsAndConditions.TermsAndConditions_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UUMGSequencePlayer* UTermsAndConditions_C::PlayFadeAnimation(enum class EUMGSequencePlayMode PlayMode, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "PlayFadeAnimation");

	Params::UTermsAndConditions_C_PlayFadeAnimation_Params Parms{};

	Parms.PlayMode = PlayMode;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

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
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue                         (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ListSessions*            K2Node_DynamicCast_AsUI_List_Sessions                            (ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_1                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_2                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue_1                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue_1                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue_2                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UUI_MainMenu*                K2Node_DynamicCast_AsUI_Main_Menu                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UUI_ListSessions*            K2Node_DynamicCast_AsUI_List_Sessions_1                          (ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

bool UTermsAndConditions_C::ExecuteUbergraph_TermsAndConditions(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UShooterGameViewportClient** CallFunc_GetViewportClient_ReturnValue, class UPrimalUI** CallFunc_GetUISceneFromClass_ReturnValue, class UUI_ListSessions* K2Node_DynamicCast_AsUI_List_Sessions, bool* K2Node_DynamicCast_bSuccess, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameViewportClient** CallFunc_GetViewportClient_ReturnValue_1, class UPrimalUI** CallFunc_GetUISceneFromClass_ReturnValue_1, class UPrimalUI** CallFunc_GetUISceneFromClass_ReturnValue_2, class UUI_MainMenu* K2Node_DynamicCast_AsUI_Main_Menu, bool* K2Node_DynamicCast_bSuccess_1, class UUI_ListSessions* K2Node_DynamicCast_AsUI_List_Sessions_1, bool* K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "ExecuteUbergraph_TermsAndConditions");

	Params::UTermsAndConditions_C_ExecuteUbergraph_TermsAndConditions_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_List_Sessions = K2Node_DynamicCast_AsUI_List_Sessions;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Main_Menu = K2Node_DynamicCast_AsUI_Main_Menu;
	Parms.K2Node_DynamicCast_AsUI_List_Sessions_1 = K2Node_DynamicCast_AsUI_List_Sessions_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetViewportClient_ReturnValue != nullptr)
		*CallFunc_GetViewportClient_ReturnValue = Parms.CallFunc_GetViewportClient_ReturnValue;

	if (CallFunc_GetUISceneFromClass_ReturnValue != nullptr)
		*CallFunc_GetUISceneFromClass_ReturnValue = Parms.CallFunc_GetUISceneFromClass_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_GetViewportClient_ReturnValue_1 != nullptr)
		*CallFunc_GetViewportClient_ReturnValue_1 = Parms.CallFunc_GetViewportClient_ReturnValue_1;

	if (CallFunc_GetUISceneFromClass_ReturnValue_1 != nullptr)
		*CallFunc_GetUISceneFromClass_ReturnValue_1 = Parms.CallFunc_GetUISceneFromClass_ReturnValue_1;

	if (CallFunc_GetUISceneFromClass_ReturnValue_2 != nullptr)
		*CallFunc_GetUISceneFromClass_ReturnValue_2 = Parms.CallFunc_GetUISceneFromClass_ReturnValue_2;

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


