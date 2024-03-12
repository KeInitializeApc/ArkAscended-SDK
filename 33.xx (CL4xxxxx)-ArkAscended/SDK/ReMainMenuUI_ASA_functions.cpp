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
// int64                              RequestedModID                                                   (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int64 UReMainMenuUI_ASA_C::DeepLinkModPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "DeepLinkModPage");

	Params::UReMainMenuUI_ASA_C_DeepLinkModPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.CreateNotifManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_NotificationManager_C*   CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UReMainMenuUI_ASA_C::CreateNotifManager(class UUI_NotificationManager_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "CreateNotifManager");

	Params::UReMainMenuUI_ASA_C_CreateNotifManager_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SettingsOverlayIsOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)

class UASAUI_MainMenuWidget_SettingsOverlay_C* UReMainMenuUI_ASA_C::SettingsOverlayIsOpen(bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "SettingsOverlayIsOpen");

	Params::UReMainMenuUI_ASA_C_SettingsOverlayIsOpen_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightTheStartButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UReMainMenuUI_ASA_C::HighlightTheStartButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "HighlightTheStartButton");

	Params::UReMainMenuUI_ASA_C_HighlightTheStartButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (ConstParm, BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        LocalKey                                                         (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool UReMainMenuUI_ASA_C::OnKeyDownEvent(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyboardEvent, struct FKey* CallFunc_GetKey_ReturnValue, struct FEventReply* CallFunc_OnKeyDownEvent_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnKeyDownEvent");

	Params::UReMainMenuUI_ASA_C_OnKeyDownEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (InKeyboardEvent != nullptr)
		*InKeyboardEvent = std::move(Parms.InKeyboardEvent);

	if (CallFunc_GetKey_ReturnValue != nullptr)
		*CallFunc_GetKey_ReturnValue = std::move(Parms.CallFunc_GetKey_ReturnValue);

	if (CallFunc_OnKeyDownEvent_ReturnValue != nullptr)
		*CallFunc_OnKeyDownEvent_ReturnValue = std::move(Parms.CallFunc_OnKeyDownEvent_ReturnValue);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_1 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

struct FMargin UReMainMenuUI_ASA_C::UpdateLeftTextPosition(bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "UpdateLeftTextPosition");

	Params::UReMainMenuUI_ASA_C_UpdateLeftTextPosition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

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
// bool                               bIsGamepadActive                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UReMainMenuUI_ASA_C::OnGamepadActiveChangedBP(bool* bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnGamepadActiveChangedBP");

	Params::UReMainMenuUI_ASA_C_OnGamepadActiveChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsGamepadActive != nullptr)
		*bIsGamepadActive = Parms.bIsGamepadActive;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

void UReMainMenuUI_ASA_C::OnGamepadSelectionChanged(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnGamepadSelectionChanged");

	Params::UReMainMenuUI_ASA_C_OnGamepadSelectionChanged_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

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
// enum class ESlateVisibility        NewVisibilty                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UReMainMenuUI_ASA_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "Tick");

	Params::UReMainMenuUI_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_Event_bIsGamepadActive                                    (Edit, ConstParm, ExportObject, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// class UWidget*                     K2Node_Event_widget                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCustomButtonWidget*         K2Node_DynamicCast_AsCustom_Button_Widget                        (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Play_ReturnValue                                        (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Rewind_ReturnValue                                      (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Event_newVisibilty                                        (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Play_ReturnValue_1                                      (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*CallFunc_Create_ReturnValue_1                                    (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)

FDelegateProperty_ UReMainMenuUI_ASA_C::ExecuteUbergraph_ReMainMenuUI_ASA(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue, class UCreditsUI_C* CallFunc_Create_ReturnValue, bool* K2Node_Event_bIsGamepadActive, bool* K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "ExecuteUbergraph_ReMainMenuUI_ASA");

	Params::UReMainMenuUI_ASA_C_ExecuteUbergraph_ReMainMenuUI_ASA_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Event_bIsGamepadActive != nullptr)
		*K2Node_Event_bIsGamepadActive = Parms.K2Node_Event_bIsGamepadActive;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	return Parms.ReturnValue;

}

}


