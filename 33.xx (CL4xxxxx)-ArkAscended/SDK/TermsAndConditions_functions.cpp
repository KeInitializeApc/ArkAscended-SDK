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
// struct FKey                        TheKey                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)

struct FKey UTermsAndConditions_C::BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BPGamepadReleased");

	Params::UTermsAndConditions_C_BPGamepadReleased_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TermsAndConditions.TermsAndConditions_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTermsAndConditions_C::BPHighlightWidgetOnStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BPHighlightWidgetOnStart");

	Params::UTermsAndConditions_C_BPHighlightWidgetOnStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TermsAndConditions.TermsAndConditions_C.PlayFadeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUMGSequencePlayMode    PlayMode                                                         (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UTermsAndConditions_C::PlayFadeAnimation(enum class EUMGSequencePlayMode PlayMode, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "PlayFadeAnimation");

	Params::UTermsAndConditions_C_PlayFadeAnimation_Params Parms{};

	Parms.PlayMode = PlayMode;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UTermsAndConditions_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "Tick");

	Params::UTermsAndConditions_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue                         (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_ListSessions*            K2Node_DynamicCast_AsUI_List_Sessions                            (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1                         (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_1                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2                         (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_2                         (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_2                         (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue_1                       (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue_2                       (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UUI_MainMenu*                K2Node_DynamicCast_AsUI_Main_Menu                                (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUI_ListSessions*            K2Node_DynamicCast_AsUI_List_Sessions_1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool UTermsAndConditions_C::ExecuteUbergraph_TermsAndConditions(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue, class UUI_ListSessions** K2Node_DynamicCast_AsUI_List_Sessions, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue_1, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue_2, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue_1, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue_1, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue_2, class UUI_MainMenu** K2Node_DynamicCast_AsUI_Main_Menu, class UUI_ListSessions** K2Node_DynamicCast_AsUI_List_Sessions_1, const class FString& CallFunc_GetPlatformName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "ExecuteUbergraph_TermsAndConditions");

	Params::UTermsAndConditions_C_ExecuteUbergraph_TermsAndConditions_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportClient_ReturnValue = CallFunc_GetViewportClient_ReturnValue;
	Parms.CallFunc_GetUISceneFromClass_ReturnValue = CallFunc_GetUISceneFromClass_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetViewportClient_ReturnValue_1 = CallFunc_GetViewportClient_ReturnValue_1;
	Parms.CallFunc_GetUISceneFromClass_ReturnValue_1 = CallFunc_GetUISceneFromClass_ReturnValue_1;
	Parms.CallFunc_GetUISceneFromClass_ReturnValue_2 = CallFunc_GetUISceneFromClass_ReturnValue_2;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsUI_List_Sessions != nullptr)
		*K2Node_DynamicCast_AsUI_List_Sessions = Parms.K2Node_DynamicCast_AsUI_List_Sessions;

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1 != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1 = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;

	if (CallFunc_BPGetGlobalUIData_ReturnValue_1 != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue_1 = Parms.CallFunc_BPGetGlobalUIData_ReturnValue_1;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue_1 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_1 = Parms.CallFunc_GetIconForKeyName_ReturnValue_1;

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2 != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2 = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2;

	if (CallFunc_BPGetGlobalUIData_ReturnValue_2 != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue_2 = Parms.CallFunc_BPGetGlobalUIData_ReturnValue_2;

	if (CallFunc_GetIconForKeyName_ReturnValue_2 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_2 = Parms.CallFunc_GetIconForKeyName_ReturnValue_2;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (K2Node_DynamicCast_AsUI_Main_Menu != nullptr)
		*K2Node_DynamicCast_AsUI_Main_Menu = Parms.K2Node_DynamicCast_AsUI_Main_Menu;

	if (K2Node_DynamicCast_AsUI_List_Sessions_1 != nullptr)
		*K2Node_DynamicCast_AsUI_List_Sessions_1 = Parms.K2Node_DynamicCast_AsUI_List_Sessions_1;

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


