#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReMainMenuUI_ASA.ReMainMenuUI_ASA_C
// (None)

class UClass* UReMainMenuUI_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReMainMenuUI_ASA_C");

	return Clss;
}


// ReMainMenuUI_ASA_C ReMainMenuUI_ASA.Default__ReMainMenuUI_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReMainMenuUI_ASA_C* UReMainMenuUI_ASA_C::GetDefaultObj()
{
	static class UReMainMenuUI_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReMainMenuUI_ASA_C*>(UReMainMenuUI_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.DeepLinkModPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              RequestedModID                                                   (Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UReMainMenuUI_ASA_C::DeepLinkModPage(int64 RequestedModID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "DeepLinkModPage");

	Params::UReMainMenuUI_ASA_C_DeepLinkModPage_Params Parms{};

	Parms.RequestedModID = RequestedModID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.CreateNotifManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_NotificationManager_C*   CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class UUI_NotificationManager_C* UReMainMenuUI_ASA_C::CreateNotifManager(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "CreateNotifManager");

	Params::UReMainMenuUI_ASA_C_CreateNotifManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SettingsOverlayIsOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UReMainMenuUI_ASA_C::SettingsOverlayIsOpen(bool ReturnValue, class UObject** CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool* CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "SettingsOverlayIsOpen");

	Params::UReMainMenuUI_ASA_C_SettingsOverlayIsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue != nullptr)
		*CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;

	if (CallFunc_IsValidSoftObjectReference_ReturnValue != nullptr)
		*CallFunc_IsValidSoftObjectReference_ReturnValue = Parms.CallFunc_IsValidSoftObjectReference_ReturnValue;

	if (K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay != nullptr)
		*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay = Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay;

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightTheStartButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

void UReMainMenuUI_ASA_C::HighlightTheStartButton(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "HighlightTheStartButton");

	Params::UReMainMenuUI_ASA_C_HighlightTheStartButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        LocalKey                                                         (ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (Edit, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FGeometry UReMainMenuUI_ASA_C::OnKeyDownEvent(const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, struct FKey* LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, int32* CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool* K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnKeyDownEvent");

	Params::UReMainMenuUI_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_OnKeyDownEvent_ReturnValue = CallFunc_OnKeyDownEvent_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalKey != nullptr)
		*LocalKey = std::move(Parms.LocalKey);

	if (CallFunc_GetActiveWidgetIndex_ReturnValue != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetActiveWidgetIndex_ReturnValue_1 != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue_1 = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1;

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)

class UCanvasPanelSlot* UReMainMenuUI_ASA_C::UpdateLeftTextPosition(bool* Temp_bool_Variable, struct FMargin* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "UpdateLeftTextPosition");

	Params::UReMainMenuUI_ASA_C_UpdateLeftTextPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnCreditsClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnCreditsClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnCreditsClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnQuitGameClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnQuitGameClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnQuitGameClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnSettingsClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnSettingsClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnSettingsClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_6_OnModsClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_6_OnModsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_6_OnModsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__MainMenuUI_WebLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__MainMenuUI_WebLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__MainMenuUI_WebLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.EscapeMainMenuPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::EscapeMainMenuPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "EscapeMainMenuPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.StartMainMenuPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::StartMainMenuPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "StartMainMenuPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightStartButton
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::HighlightStartButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "HighlightStartButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnBackClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnBackClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnBackClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.StopAllCardAnims
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::StopAllCardAnims()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "StopAllCardAnims");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_4_OnCreateGameClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_4_OnCreateGameClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_4_OnCreateGameClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.ClosedEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::ClosedEvent_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "ClosedEvent_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadActiveChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsGamepadActive                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

bool UReMainMenuUI_ASA_C::OnGamepadActiveChangedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnGamepadActiveChangedBP");

	Params::UReMainMenuUI_ASA_C_OnGamepadActiveChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

class UWidget* UReMainMenuUI_ASA_C::OnGamepadSelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnGamepadSelectionChanged");

	Params::UReMainMenuUI_ASA_C_OnGamepadSelectionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnMediaReachedEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnMediaReachedEnd_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnMediaReachedEnd_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.JumpIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::JumpIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "JumpIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnMediaReachedEnd_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnMediaReachedEnd_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnMediaReachedEnd_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.StopIntroCinematic
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::StopIntroCinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "StopIntroCinematic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnCFCoreUIControllerInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnCFCoreUIControllerInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnCFCoreUIControllerInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SetMainJoinedButtonVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        NewVisibilty                                                     (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

enum class ESlateVisibility UReMainMenuUI_ASA_C::SetMainJoinedButtonVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "SetMainJoinedButtonVisibility");

	Params::UReMainMenuUI_ASA_C_SetMainJoinedButtonVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UReMainMenuUI_ASA_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "Tick");

	Params::UReMainMenuUI_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_9_OnSOTFClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_9_OnSOTFClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_9_OnSOTFClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.ExecuteUbergraph_ReMainMenuUI_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_Event_bIsGamepadActive                                    (ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UWidget*                     K2Node_Event_widget                                              (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCustomButtonWidget*         K2Node_DynamicCast_AsCustom_Button_Widget                        (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Play_ReturnValue                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Rewind_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Event_newVisibilty                                        (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Play_ReturnValue_1                                      (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*CallFunc_Create_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)

FDelegateProperty_ UReMainMenuUI_ASA_C::ExecuteUbergraph_ReMainMenuUI_ASA(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_RegisterModelClass_ReturnValue, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, class UObject** CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool* CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool K2Node_Event_bIsGamepadActive, class UWidget* K2Node_Event_widget, class UCustomButtonWidget* K2Node_DynamicCast_AsCustom_Button_Widget, bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_Rewind_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, enum class ESlateVisibility K2Node_Event_newVisibilty, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_IsValid_ReturnValue_2, TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "ExecuteUbergraph_ReMainMenuUI_ASA");

	Params::UReMainMenuUI_ASA_C_ExecuteUbergraph_ReMainMenuUI_ASA_Params Parms{};

	Parms.CallFunc_RegisterModelClass_ReturnValue = CallFunc_RegisterModelClass_ReturnValue;
	Parms.K2Node_Event_bIsGamepadActive = K2Node_Event_bIsGamepadActive;
	Parms.K2Node_Event_widget = K2Node_Event_widget;
	Parms.K2Node_DynamicCast_AsCustom_Button_Widget = K2Node_DynamicCast_AsCustom_Button_Widget;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsShooter_Game_Instance = K2Node_DynamicCast_AsShooter_Game_Instance;
	Parms.K2Node_Event_newVisibilty = K2Node_Event_newVisibilty;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_GetActiveWidgetIndex_ReturnValue != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue;

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue != nullptr)
		*CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;

	if (CallFunc_IsValidSoftObjectReference_ReturnValue != nullptr)
		*CallFunc_IsValidSoftObjectReference_ReturnValue = Parms.CallFunc_IsValidSoftObjectReference_ReturnValue;

	if (K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay != nullptr)
		*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay = Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_Rewind_ReturnValue != nullptr)
		*CallFunc_Rewind_ReturnValue = Parms.CallFunc_Rewind_ReturnValue;

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (CallFunc_GetGameInstance_ReturnValue != nullptr)
		*CallFunc_GetGameInstance_ReturnValue = Parms.CallFunc_GetGameInstance_ReturnValue;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	return Parms.ReturnValue;

}

}


