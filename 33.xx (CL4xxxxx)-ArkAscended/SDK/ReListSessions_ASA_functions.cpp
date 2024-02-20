#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReListSessions_ASA.ReListSessions_ASA_C
// (None)

class UClass* UReListSessions_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReListSessions_ASA_C");

	return Clss;
}


// ReListSessions_ASA_C ReListSessions_ASA.Default__ReListSessions_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReListSessions_ASA_C* UReListSessions_ASA_C::GetDefaultObj()
{
	static class UReListSessions_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReListSessions_ASA_C*>(UReListSessions_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReListSessions_ASA.ReListSessions_ASA_C.CreateNotifManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_NotificationManager_C*   CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class UUI_NotificationManager_C* UReListSessions_ASA_C::CreateNotifManager(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "CreateNotifManager");

	Params::UReListSessions_ASA_C_CreateNotifManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.UpdateFavoritesTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void UReListSessions_ASA_C::UpdateFavoritesTab(bool* CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "UpdateFavoritesTab");

	Params::UReListSessions_ASA_C_UpdateFavoritesTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_NotEqual_BoolBool_ReturnValue != nullptr)
		*CallFunc_NotEqual_BoolBool_ReturnValue = Parms.CallFunc_NotEqual_BoolBool_ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.HandleAscendDescendSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*             ComboBox                                                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// int32                              ForIndex                                                         (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

int32 UReListSessions_ASA_C::HandleAscendDescendSwitch(class UComboBoxString** ComboBox, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "HandleAscendDescendSwitch");

	Params::UReListSessions_ASA_C_HandleAscendDescendSwitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ComboBox != nullptr)
		*ComboBox = Parms.ComboBox;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.Update Horizontal Tab Enabled States
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UReListSessions_ASA_C::Update_Horizontal_Tab_Enabled_States(bool CallFunc_IsChecked_ReturnValue, class UWidget** CallFunc_SwitchButton_Widget, bool CallFunc_IsChecked_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "Update Horizontal Tab Enabled States");

	Params::UReListSessions_ASA_C_Update_Horizontal_Tab_Enabled_States_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SwitchButton_Widget != nullptr)
		*CallFunc_SwitchButton_Widget = Parms.CallFunc_SwitchButton_Widget;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.SetupPlatformSpecificTextBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool UReListSessions_ASA_C::SetupPlatformSpecificTextBox(const class FString& CallFunc_GetPlatformName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "SetupPlatformSpecificTextBox");

	Params::UReListSessions_ASA_C_SetupPlatformSpecificTextBox_Params Parms{};

	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FEventReply                 CallFunc_OnKeyDown_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UComboBoxString*             CallFunc_GetOpenComboBox_ReturnValue                             (BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

struct FEventReply UReListSessions_ASA_C::OnKeyDownEvent(const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue, class UWidget** CallFunc_SwitchButton_Widget, class UWidget** CallFunc_SwitchButton_Widget_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnKeyDownEvent");

	Params::UReListSessions_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_SwitchButton_Widget != nullptr)
		*CallFunc_SwitchButton_Widget = Parms.CallFunc_SwitchButton_Widget;

	if (CallFunc_SwitchButton_Widget_1 != nullptr)
		*CallFunc_SwitchButton_Widget_1 = Parms.CallFunc_SwitchButton_Widget_1;

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        LocalKey                                                         (ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDown_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

struct FEventReply UReListSessions_ASA_C::OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, struct FKey* LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, class UWidget** CallFunc_SwitchButton_Widget, class UWidget** CallFunc_SwitchButton_Widget_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnKeyDown");

	Params::UReListSessions_ASA_C_OnKeyDown_Params Parms{};

	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalKey != nullptr)
		*LocalKey = std::move(Parms.LocalKey);

	if (CallFunc_SwitchButton_Widget != nullptr)
		*CallFunc_SwitchButton_Widget = Parms.CallFunc_SwitchButton_Widget;

	if (CallFunc_SwitchButton_Widget_1 != nullptr)
		*CallFunc_SwitchButton_Widget_1 = Parms.CallFunc_SwitchButton_Widget_1;

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.GetSizeboxForExtraHandheldScaling
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UReListSessions_ASA_C::GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "GetSizeboxForExtraHandheldScaling");

	Params::UReListSessions_ASA_C_GetSizeboxForExtraHandheldScaling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UReListSessions_ASA_C::GetWidgetToScaleForHandheld(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "GetWidgetToScaleForHandheld");

	Params::UReListSessions_ASA_C_GetWidgetToScaleForHandheld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_1_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_1_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_1_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_2_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_2_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_2_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_3_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_3_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_3_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_SessionOrderName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_SessionOrderName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_SessionOrderName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_PlayerOrder_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_PlayerOrder_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_PlayerOrder_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_DayOrder_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_DayOrder_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_DayOrder_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_PingOrder_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_PingOrder_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_PingOrder_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPrivateServersButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_ShowPrivateServersButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_ShowPrivateServersButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_HideFullButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_HideFullButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_HideFullButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_AutoFavoriteButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_AutoFavoriteButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_AutoFavoriteButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_SettingsButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_SettingsButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_SettingsButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.OnServerListingClickedModPopup
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bNeedInit                                                        (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      ServerName                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<int64> UReListSessions_ASA_C::OnServerListingClickedModPopup(class FString* ServerName, int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnServerListingClickedModPopup");

	Params::UReListSessions_ASA_C_OnServerListingClickedModPopup_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

	if (ServerName != nullptr)
		*ServerName = std::move(Parms.ServerName);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIJoinEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UReListSessions_ASA_C::ModUIJoinEvent(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIJoinEvent");

	Params::UReListSessions_ASA_C_ModUIJoinEvent_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIBackEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::ModUIBackEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIBackEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIReportEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UReListSessions_ASA_C::ModUIReportEvent(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIReportEvent");

	Params::UReListSessions_ASA_C_ModUIReportEvent_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIFavoriteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UReListSessions_ASA_C::ModUIFavoriteEvent(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIFavoriteEvent");

	Params::UReListSessions_ASA_C_ModUIFavoriteEvent_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIError
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::ModUIError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIError");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.SetCurrentServerSearchType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ServerType                                                       (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

int32 UReListSessions_ASA_C::SetCurrentServerSearchType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "SetCurrentServerSearchType");

	Params::UReListSessions_ASA_C_SetCurrentServerSearchType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UReListSessions_ASA_C_BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BPSetupLayout
// (Event, Public, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BPSetupLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BPSetupLayout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ForceUpdateServerTypeSelection
// (Event, Public, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::ForceUpdateServerTypeSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ForceUpdateServerTypeSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UReListSessions_ASA_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "Tick");

	Params::UReListSessions_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_PlayerServersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_PlayerServersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_PlayerServersButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UReListSessions_ASA_C::BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UReListSessions_ASA_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ModFilterList_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_ModFilterList_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_ModFilterList_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature");

	Params::UReListSessions_ASA_C_BndEvt__ReListSessions_ASA_ModFilterList_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ExecuteUbergraph_ReListSessions_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsChecked_ReturnValue_2                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_Event_bNeedInit                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_Event_ModIds                                              (Edit, ConstParm, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_ServerName                                          (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_Event_ServerId                                            (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int64                              K2Node_CustomEvent_ServerId_2                                    (ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int64                              K2Node_CustomEvent_ServerId_1                                    (ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              K2Node_CustomEvent_ServerId                                      (ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Event_ServerType                                          (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_3                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsChecked_ReturnValue_4                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UBP_ServerModsWidget_C*      CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue_1                          (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int64                              CallFunc_Map_Find_Value                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UReListSessions_ASA_C::ExecuteUbergraph_ReListSessions_ASA(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_RegisterModelClass_ReturnValue, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsChecked_ReturnValue_3, bool* K2Node_ComponentBoundEvent_bIsChecked_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_4, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* K2Node_ComponentBoundEvent_bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ExecuteUbergraph_ReListSessions_ASA");

	Params::UReListSessions_ASA_C_ExecuteUbergraph_ReListSessions_ASA_Params Parms{};

	Parms.CallFunc_RegisterModelClass_ReturnValue = CallFunc_RegisterModelClass_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue_2 = CallFunc_IsChecked_ReturnValue_2;
	Parms.CallFunc_IsChecked_ReturnValue_3 = CallFunc_IsChecked_ReturnValue_3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_IsChecked_ReturnValue_4 = CallFunc_IsChecked_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (K2Node_ComponentBoundEvent_bIsChecked_1 != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked_1 = Parms.K2Node_ComponentBoundEvent_bIsChecked_1;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue_1 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_1 = Parms.CallFunc_GetIconForKeyName_ReturnValue_1;

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (K2Node_ComponentBoundEvent_bIsChecked != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked = Parms.K2Node_ComponentBoundEvent_bIsChecked;

	return Parms.ReturnValue;

}

}


