#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Sidebar.UI_Button_Sidebar_C
// (None)

class UClass* UUI_Button_Sidebar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Sidebar_C");

	return Clss;
}


// UI_Button_Sidebar_C UI_Button_Sidebar.Default__UI_Button_Sidebar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Sidebar_C* UUI_Button_Sidebar_C::GetDefaultObj()
{
	static class UUI_Button_Sidebar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Sidebar_C*>(UUI_Button_Sidebar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.UpdateThemeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_Button_Sidebar_C::UpdateThemeData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "UpdateThemeData");

	Params::UUI_Button_Sidebar_C_UpdateThemeData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UUI_Button_Sidebar_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "PreConstruct");

	Params::UUI_Button_Sidebar_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.BndEvt__UI_Button_Sidebar_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::BndEvt__UI_Button_Sidebar_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "BndEvt__UI_Button_Sidebar_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.ButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::ButtonSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "ButtonSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.ButtonDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::ButtonDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "ButtonDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.UpdateSlelectionTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

void UUI_Button_Sidebar_C::UpdateSlelectionTo(bool* Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "UpdateSlelectionTo");

	Params::UUI_Button_Sidebar_C_UpdateSlelectionTo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Condition != nullptr)
		*Condition = Parms.Condition;

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.InitSideButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::InitSideButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "InitSideButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.ExecuteUbergraph_UI_Button_Sidebar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_Event_IsDesignTime                                        (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_Condition                                     (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)

bool UUI_Button_Sidebar_C::ExecuteUbergraph_UI_Button_Sidebar(int32 EntryPoint, bool* K2Node_CustomEvent_Condition, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "ExecuteUbergraph_UI_Button_Sidebar");

	Params::UUI_Button_Sidebar_C_ExecuteUbergraph_UI_Button_Sidebar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_Condition != nullptr)
		*K2Node_CustomEvent_Condition = Parms.K2Node_CustomEvent_Condition;

	return Parms.ReturnValue;

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.Dispatcher_OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


