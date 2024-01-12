#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C
// (None)

class UClass* UASAUI_MainMenu_LandingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_MainMenu_LandingScreen_C");

	return Clss;
}


// ASAUI_MainMenu_LandingScreen_C ASAUI_MainMenu_LandingScreen.Default__ASAUI_MainMenu_LandingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_MainMenu_LandingScreen_C* UASAUI_MainMenu_LandingScreen_C::GetDefaultObj()
{
	static class UASAUI_MainMenu_LandingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_MainMenu_LandingScreen_C*>(UASAUI_MainMenu_LandingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.BndEvt__ASAUI_MainMenu_LandingScreen_PressAToStartButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_LandingScreen_C::BndEvt__ASAUI_MainMenu_LandingScreen_PressAToStartButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "BndEvt__ASAUI_MainMenu_LandingScreen_PressAToStartButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.BndEvt__ASAUI_MainMenu_LandingScreen_GoToLastPlayedButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_LandingScreen_C::BndEvt__ASAUI_MainMenu_LandingScreen_GoToLastPlayedButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "BndEvt__ASAUI_MainMenu_LandingScreen_GoToLastPlayedButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_LandingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.RefreshAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_LandingScreen_C::RefreshAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "RefreshAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.ExecuteUbergraph_ASAUI_MainMenu_LandingScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue                         (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_MainMenu*                K2Node_DynamicCast_AsUI_Main_Menu                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UUMGSequencePlayer* UASAUI_MainMenu_LandingScreen_C::ExecuteUbergraph_ASAUI_MainMenu_LandingScreen(class UShooterGameViewportClient** CallFunc_GetViewportClient_ReturnValue, class UPrimalUI** CallFunc_GetUISceneFromClass_ReturnValue, class UUI_MainMenu* K2Node_DynamicCast_AsUI_Main_Menu, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "ExecuteUbergraph_ASAUI_MainMenu_LandingScreen");

	Params::UASAUI_MainMenu_LandingScreen_C_ExecuteUbergraph_ASAUI_MainMenu_LandingScreen_Params Parms{};

	Parms.K2Node_DynamicCast_AsUI_Main_Menu = K2Node_DynamicCast_AsUI_Main_Menu;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetViewportClient_ReturnValue != nullptr)
		*CallFunc_GetViewportClient_ReturnValue = Parms.CallFunc_GetViewportClient_ReturnValue;

	if (CallFunc_GetUISceneFromClass_ReturnValue != nullptr)
		*CallFunc_GetUISceneFromClass_ReturnValue = Parms.CallFunc_GetUISceneFromClass_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.OnGoToLastPlayedButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_LandingScreen_C::OnGoToLastPlayedButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "OnGoToLastPlayedButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.OnStartButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenu_LandingScreen_C::OnStartButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "OnStartButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


