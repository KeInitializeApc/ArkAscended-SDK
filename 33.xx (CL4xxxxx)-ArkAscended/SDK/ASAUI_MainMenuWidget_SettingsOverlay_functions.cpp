#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C
// (None)

class UClass* UASAUI_MainMenuWidget_SettingsOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_MainMenuWidget_SettingsOverlay_C");

	return Clss;
}


// ASAUI_MainMenuWidget_SettingsOverlay_C ASAUI_MainMenuWidget_SettingsOverlay.Default__ASAUI_MainMenuWidget_SettingsOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_MainMenuWidget_SettingsOverlay_C* UASAUI_MainMenuWidget_SettingsOverlay_C::GetDefaultObj()
{
	static class UASAUI_MainMenuWidget_SettingsOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_MainMenuWidget_SettingsOverlay_C*>(UASAUI_MainMenuWidget_SettingsOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (ConstParm, BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        LocalKey                                                         (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FKey UASAUI_MainMenuWidget_SettingsOverlay_C::OnKeyDownEvent(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyboardEvent, struct FKey* CallFunc_GetKey_ReturnValue, struct FEventReply* CallFunc_OnKeyDownEvent_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnKeyDownEvent");

	Params::UASAUI_MainMenuWidget_SettingsOverlay_C_OnKeyDownEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (InKeyboardEvent != nullptr)
		*InKeyboardEvent = std::move(Parms.InKeyboardEvent);

	if (CallFunc_GetKey_ReturnValue != nullptr)
		*CallFunc_GetKey_ReturnValue = std::move(Parms.CallFunc_GetKey_ReturnValue);

	if (CallFunc_OnKeyDownEvent_ReturnValue != nullptr)
		*CallFunc_OnKeyDownEvent_ReturnValue = std::move(Parms.CallFunc_OnKeyDownEvent_ReturnValue);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UASAUI_MainMenuWidget_SettingsOverlay_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "Tick");

	Params::UASAUI_MainMenuWidget_SettingsOverlay_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BPVirtualCursorinit
// (Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BPVirtualCursorinit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BPVirtualCursorinit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsConsoleBuild_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UASAUI_MainMenuWidget_SettingsOverlay_C::ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay(int32* EntryPoint, bool CallFunc_IsConsoleBuild_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay");

	Params::UASAUI_MainMenuWidget_SettingsOverlay_C_ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay_Params Parms{};

	Parms.CallFunc_IsConsoleBuild_ReturnValue = CallFunc_IsConsoleBuild_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnQuitGameClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnQuitGameClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnQuitGameClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnCreditsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnCreditsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnCreditsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnSettingsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnSettingsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnSettingsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnBackSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnBackSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnBackSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


