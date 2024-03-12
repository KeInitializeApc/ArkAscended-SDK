#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChatBoxUI.ChatBoxUI_C
// (None)

class UClass* UChatBoxUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatBoxUI_C");

	return Clss;
}


// ChatBoxUI_C ChatBoxUI.Default__ChatBoxUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChatBoxUI_C* UChatBoxUI_C::GetDefaultObj()
{
	static class UChatBoxUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatBoxUI_C*>(UChatBoxUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChatBoxUI.ChatBoxUI_C.Switch Chat Mode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UChatBoxUI_C::Switch_Chat_Mode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatBoxUI_C", "Switch Chat Mode");

	Params::UChatBoxUI_C_Switch_Chat_Mode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChatBoxUI.ChatBoxUI_C.BndEvt__ChatBoxUI_Button_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UChatBoxUI_C::BndEvt__ChatBoxUI_Button_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatBoxUI_C", "BndEvt__ChatBoxUI_Button_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChatBoxUI.ChatBoxUI_C.OnGamepadActiveChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsGamepadActive                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UChatBoxUI_C::OnGamepadActiveChangedBP(bool* bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatBoxUI_C", "OnGamepadActiveChangedBP");

	Params::UChatBoxUI_C_OnGamepadActiveChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsGamepadActive != nullptr)
		*bIsGamepadActive = Parms.bIsGamepadActive;

}


// Function ChatBoxUI.ChatBoxUI_C.ExecuteUbergraph_ChatBoxUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_bIsGamepadActive                                    (Edit, ConstParm, ExportObject, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)

void UChatBoxUI_C::ExecuteUbergraph_ChatBoxUI(int32* EntryPoint, bool* K2Node_Event_bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatBoxUI_C", "ExecuteUbergraph_ChatBoxUI");

	Params::UChatBoxUI_C_ExecuteUbergraph_ChatBoxUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_Event_bIsGamepadActive != nullptr)
		*K2Node_Event_bIsGamepadActive = Parms.K2Node_Event_bIsGamepadActive;

}

}


