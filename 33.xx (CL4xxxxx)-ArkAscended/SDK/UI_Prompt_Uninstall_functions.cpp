#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Prompt_Uninstall.UI_Prompt_Uninstall_C
// (None)

class UClass* UUI_Prompt_Uninstall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Prompt_Uninstall_C");

	return Clss;
}


// UI_Prompt_Uninstall_C UI_Prompt_Uninstall.Default__UI_Prompt_Uninstall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Prompt_Uninstall_C* UUI_Prompt_Uninstall_C::GetDefaultObj()
{
	static class UUI_Prompt_Uninstall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Prompt_Uninstall_C*>(UUI_Prompt_Uninstall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_Prompt_Uninstall_C::BPGamepadReleased(const struct FKey& TheKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "BPGamepadReleased");

	Params::UUI_Prompt_Uninstall_C_BPGamepadReleased_Params Parms{};

	Parms.TheKey = TheKey;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUI_Prompt_Uninstall_C::BPEscapeClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "BPEscapeClosed");

	Params::UUI_Prompt_Uninstall_C_BPEscapeClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUI_Prompt_Uninstall_C::BPHighlightWidgetOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "BPHighlightWidgetOnStart");

	Params::UUI_Prompt_Uninstall_C_BPHighlightWidgetOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.UpdateThemeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_Uninstall_C::UpdateThemeSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "UpdateThemeSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.InitializeUninstallIUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_Uninstall_C::InitializeUninstallIUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "InitializeUninstallIUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.Cancel Uninstall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_Uninstall_C::Cancel_Uninstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "Cancel Uninstall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Prompt_Uninstall_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Uninstall_C::BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Back_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Continue_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Prompt_Uninstall_C::BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Continue_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "BndEvt__UI_Prompt_Uninstall_UI_Button_Ark_Global_Continue_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UUI_Prompt_Uninstall_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "Tick");

	Params::UUI_Prompt_Uninstall_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_Prompt_Uninstall.UI_Prompt_Uninstall_C.ExecuteUbergraph_UI_Prompt_Uninstall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

FDelegateProperty_ UUI_Prompt_Uninstall_C::ExecuteUbergraph_UI_Prompt_Uninstall(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_Uninstall_C", "ExecuteUbergraph_UI_Prompt_Uninstall");

	Params::UUI_Prompt_Uninstall_C_ExecuteUbergraph_UI_Prompt_Uninstall_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}

}


