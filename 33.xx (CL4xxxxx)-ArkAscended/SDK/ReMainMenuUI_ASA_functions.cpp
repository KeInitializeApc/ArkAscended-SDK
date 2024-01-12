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
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UReMainMenuUI_ASA_C::SettingsOverlayIsOpen(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "SettingsOverlayIsOpen");

	Params::UReMainMenuUI_ASA_C_SettingsOverlayIsOpen_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay != nullptr)
		*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay = Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightTheStartButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

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
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        LocalKey                                                         (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UReMainMenuUI_ASA_C::OnKeyDownEvent(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnKeyDownEvent");

	Params::UReMainMenuUI_ASA_C_OnKeyDownEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

class UCanvasPanelSlot* UReMainMenuUI_ASA_C::UpdateLeftTextPosition(bool* IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, struct FMargin* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "UpdateLeftTextPosition");

	Params::UReMainMenuUI_ASA_C_UpdateLeftTextPosition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCTAVisible != nullptr)
		*IsCTAVisible = Parms.IsCTAVisible;

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
// bool                               bIsGamepadActive                                                 (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UReMainMenuUI_ASA_C::OnGamepadActiveChangedBP(bool bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnGamepadActiveChangedBP");

	Params::UReMainMenuUI_ASA_C_OnGamepadActiveChangedBP_Params Parms{};

	Parms.bIsGamepadActive = bIsGamepadActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

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
// enum class ESlateVisibility        NewVisibilty                                                     (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               K2Node_Event_bIsGamepadActive                                    (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UWidget*                     K2Node_Event_widget                                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UCustomButtonWidget*         K2Node_DynamicCast_AsCustom_Button_Widget                        (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Play_ReturnValue                                        (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Rewind_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Event_newVisibilty                                        (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Play_ReturnValue_1                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference, Interp)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*CallFunc_Create_ReturnValue_1                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UReMainMenuUI_ASA_C::ExecuteUbergraph_ReMainMenuUI_ASA(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_RegisterModelClass_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C** K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool* K2Node_DynamicCast_bSuccess, class UWidget** K2Node_Event_widget, class UCustomButtonWidget** K2Node_DynamicCast_AsCustom_Button_Widget, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_Play_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_Rewind_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool* K2Node_DynamicCast_bSuccess_2, enum class ESlateVisibility* K2Node_Event_newVisibilty, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool CallFunc_Play_ReturnValue_1, TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "ExecuteUbergraph_ReMainMenuUI_ASA");

	Params::UReMainMenuUI_ASA_C_ExecuteUbergraph_ReMainMenuUI_ASA_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.CallFunc_Rewind_ReturnValue = CallFunc_Rewind_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Instance = K2Node_DynamicCast_AsShooter_Game_Instance;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Play_ReturnValue_1 = CallFunc_Play_ReturnValue_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_RegisterModelClass_ReturnValue != nullptr)
		*CallFunc_RegisterModelClass_ReturnValue = Parms.CallFunc_RegisterModelClass_ReturnValue;

	if (K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay != nullptr)
		*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay = Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Event_widget != nullptr)
		*K2Node_Event_widget = Parms.K2Node_Event_widget;

	if (K2Node_DynamicCast_AsCustom_Button_Widget != nullptr)
		*K2Node_DynamicCast_AsCustom_Button_Widget = Parms.K2Node_DynamicCast_AsCustom_Button_Widget;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetGameInstance_ReturnValue != nullptr)
		*CallFunc_GetGameInstance_ReturnValue = Parms.CallFunc_GetGameInstance_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_Event_newVisibilty != nullptr)
		*K2Node_Event_newVisibilty = Parms.K2Node_Event_newVisibilty;

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	return Parms.ReturnValue;

}

}


