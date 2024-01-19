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


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SettingsOverlayIsOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (Edit, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UReMainMenuUI_ASA_C::SettingsOverlayIsOpen(bool ReturnValue, bool* CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "SettingsOverlayIsOpen");

	Params::UReMainMenuUI_ASA_C_SettingsOverlayIsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsVisible_ReturnValue != nullptr)
		*CallFunc_IsVisible_ReturnValue = Parms.CallFunc_IsVisible_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightTheStartButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        LocalKey                                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (Edit, ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UReMainMenuUI_ASA_C::OnKeyDownEvent(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyboardEvent, const struct FEventReply& ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnKeyDownEvent");

	Params::UReMainMenuUI_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InKeyboardEvent != nullptr)
		*InKeyboardEvent = std::move(Parms.InKeyboardEvent);

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

struct FMargin UReMainMenuUI_ASA_C::UpdateLeftTextPosition(bool* IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "UpdateLeftTextPosition");

	Params::UReMainMenuUI_ASA_C_UpdateLeftTextPosition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCTAVisible != nullptr)
		*IsCTAVisible = Parms.IsCTAVisible;

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
// bool                               bIsGamepadActive                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// class UWidget*                     Widget                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst)

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
// enum class ESlateVisibility        NewVisibilty                                                     (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

float UReMainMenuUI_ASA_C::Tick(const struct FGeometry& MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "Tick");

	Params::UReMainMenuUI_ASA_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (Edit, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               K2Node_Event_bIsGamepadActive                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UWidget*                     K2Node_Event_widget                                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class UCustomButtonWidget*         K2Node_DynamicCast_AsCustom_Button_Widget                        (Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Play_ReturnValue                                        (ExportObject, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Rewind_ReturnValue                                      (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (Edit, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Event_newVisibilty                                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Play_ReturnValue_1                                      (ExportObject, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*CallFunc_Create_ReturnValue_1                                    (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)

TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> UReMainMenuUI_ASA_C::ExecuteUbergraph_ReMainMenuUI_ASA(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool* CallFunc_IsVisible_ReturnValue, class UCreditsUI_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool* CallFunc_Play_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_Play_ReturnValue_1, class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "ExecuteUbergraph_ReMainMenuUI_ASA");

	Params::UReMainMenuUI_ASA_C_ExecuteUbergraph_ReMainMenuUI_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (CallFunc_IsVisible_ReturnValue != nullptr)
		*CallFunc_IsVisible_ReturnValue = Parms.CallFunc_IsVisible_ReturnValue;

	if (CallFunc_Play_ReturnValue != nullptr)
		*CallFunc_Play_ReturnValue = Parms.CallFunc_Play_ReturnValue;

	if (CallFunc_K2_SetTimerDelegate_ReturnValue != nullptr)
		*CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(Parms.CallFunc_K2_SetTimerDelegate_ReturnValue);

	if (CallFunc_K2_SetTimerDelegate_ReturnValue_1 != nullptr)
		*CallFunc_K2_SetTimerDelegate_ReturnValue_1 = std::move(Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1);

	if (CallFunc_GetGameInstance_ReturnValue != nullptr)
		*CallFunc_GetGameInstance_ReturnValue = Parms.CallFunc_GetGameInstance_ReturnValue;

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_Play_ReturnValue_1 != nullptr)
		*CallFunc_Play_ReturnValue_1 = Parms.CallFunc_Play_ReturnValue_1;

	return Parms.ReturnValue;

}

}


