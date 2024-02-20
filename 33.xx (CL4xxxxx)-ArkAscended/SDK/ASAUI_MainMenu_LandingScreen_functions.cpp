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


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.ModIDLinkRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModIDRequested                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

int64 UASAUI_MainMenu_LandingScreen_C::ModIDLinkRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "ModIDLinkRequested");

	Params::UASAUI_MainMenu_LandingScreen_C_ModIDLinkRequested_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.ExecuteUbergraph_ASAUI_MainMenu_LandingScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int64                              K2Node_CustomEvent_ModIDRequested                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue                         (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_MainMenu*                K2Node_DynamicCast_AsUI_Main_Menu                                (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UASAUI_MainMenu_LandingScreen_C::ExecuteUbergraph_ASAUI_MainMenu_LandingScreen(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue, class UUI_MainMenu** K2Node_DynamicCast_AsUI_Main_Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "ExecuteUbergraph_ASAUI_MainMenu_LandingScreen");

	Params::UASAUI_MainMenu_LandingScreen_C_ExecuteUbergraph_ASAUI_MainMenu_LandingScreen_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetViewportClient_ReturnValue = CallFunc_GetViewportClient_ReturnValue;
	Parms.CallFunc_GetUISceneFromClass_ReturnValue = CallFunc_GetUISceneFromClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsUI_Main_Menu != nullptr)
		*K2Node_DynamicCast_AsUI_Main_Menu = Parms.K2Node_DynamicCast_AsUI_Main_Menu;

	return Parms.ReturnValue;

}


// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.OnModIDLinkRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModIDRequested                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

int64 UASAUI_MainMenu_LandingScreen_C::OnModIDLinkRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenu_LandingScreen_C", "OnModIDLinkRequested__DelegateSignature");

	Params::UASAUI_MainMenu_LandingScreen_C_OnModIDLinkRequested__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

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


