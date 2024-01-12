#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Dropdown.UI_Button_Dropdown_C
// (None)

class UClass* UUI_Button_Dropdown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Dropdown_C");

	return Clss;
}


// UI_Button_Dropdown_C UI_Button_Dropdown.Default__UI_Button_Dropdown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Dropdown_C* UUI_Button_Dropdown_C::GetDefaultObj()
{
	static class UUI_Button_Dropdown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Dropdown_C*>(UUI_Button_Dropdown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_Button_Dropdown_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "PreConstruct");

	Params::UUI_Button_Dropdown_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.ButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Dropdown_C::ButtonSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "ButtonSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.ButtonDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Dropdown_C::ButtonDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "ButtonDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Dropdown_C::BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Dropdown_C::BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Dropdown_C::BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Dropdown_C::BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "BndEvt__UI_Button_Dropdown_Button_DropDown_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.ExecuteUbergraph_UI_Button_Dropdown
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)

class UUMGSequencePlayer* UUI_Button_Dropdown_C::ExecuteUbergraph_UI_Button_Dropdown(float* CallFunc_GetAnimationCurrentTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "ExecuteUbergraph_UI_Button_Dropdown");

	Params::UUI_Button_Dropdown_C_ExecuteUbergraph_UI_Button_Dropdown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetAnimationCurrentTime_ReturnValue != nullptr)
		*CallFunc_GetAnimationCurrentTime_ReturnValue = Parms.CallFunc_GetAnimationCurrentTime_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.Dispatcher_OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Dropdown_C::Dispatcher_OnReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "Dispatcher_OnReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Dropdown.UI_Button_Dropdown_C.Dispatcher_OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Dropdown_C::Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Dropdown_C", "Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


