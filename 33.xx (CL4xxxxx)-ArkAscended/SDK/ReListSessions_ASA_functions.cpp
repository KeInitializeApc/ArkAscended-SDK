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


// Function ReListSessions_ASA.ReListSessions_ASA_C.UpdateFavoritesTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)

bool UReListSessions_ASA_C::UpdateFavoritesTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "UpdateFavoritesTab");

	Params::UReListSessions_ASA_C_UpdateFavoritesTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.HandleAscendDescendSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*             ComboBox                                                         (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
// int32                              ForIndex                                                         (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UReListSessions_ASA_C::HandleAscendDescendSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "HandleAscendDescendSwitch");

	Params::UReListSessions_ASA_C_HandleAscendDescendSwitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.Update Horizontal Tab Enabled States
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UReListSessions_ASA_C::Update_Horizontal_Tab_Enabled_States(bool CallFunc_IsChecked_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "Update Horizontal Tab Enabled States");

	Params::UReListSessions_ASA_C_Update_Horizontal_Tab_Enabled_States_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.SetupPlatformSpecificTextBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

bool UReListSessions_ASA_C::SetupPlatformSpecificTextBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "SetupPlatformSpecificTextBox");

	Params::UReListSessions_ASA_C_SetupPlatformSpecificTextBox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FEventReply                 CallFunc_OnKeyDown_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UComboBoxString*             CallFunc_GetOpenComboBox_ReturnValue                             (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (Edit, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UComboBoxString* UReListSessions_ASA_C::OnKeyDownEvent(struct FGeometry* MyGeometry, bool* CallFunc_GetIsEnabled_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, struct FEventReply* CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnKeyDownEvent");

	Params::UReListSessions_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_SwitchButton_Widget_1 = CallFunc_SwitchButton_Widget_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Handled_ReturnValue != nullptr)
		*CallFunc_Handled_ReturnValue = std::move(Parms.CallFunc_Handled_ReturnValue);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        LocalKey                                                         (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDown_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (Edit, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UReListSessions_ASA_C::OnKeyDown(struct FGeometry* MyGeometry, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, struct FEventReply* CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnKeyDown");

	Params::UReListSessions_ASA_C_OnKeyDown_Params Parms{};

	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_SwitchButton_Widget_1 = CallFunc_SwitchButton_Widget_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (CallFunc_Handled_ReturnValue != nullptr)
		*CallFunc_Handled_ReturnValue = std::move(Parms.CallFunc_Handled_ReturnValue);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.GetSizeboxForExtraHandheldScaling
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USizeBox* UReListSessions_ASA_C::GetSizeboxForExtraHandheldScaling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "GetSizeboxForExtraHandheldScaling");

	Params::UReListSessions_ASA_C_GetSizeboxForExtraHandheldScaling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UReListSessions_ASA_C::GetWidgetToScaleForHandheld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "GetWidgetToScaleForHandheld");

	Params::UReListSessions_ASA_C_GetWidgetToScaleForHandheld_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UReListSessions_ASA_C::BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UReListSessions_ASA_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// bool                               bNeedInit                                                        (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<int64>                      ModIds                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class FString                      ServerName                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// int64                              ServerID                                                         (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

class FString UReListSessions_ASA_C::OnServerListingClickedModPopup(int64* ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnServerListingClickedModPopup");

	Params::UReListSessions_ASA_C_OnServerListingClickedModPopup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerID != nullptr)
		*ServerID = Parms.ServerID;

	return Parms.ReturnValue;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIJoinEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UReListSessions_ASA_C::ModUIJoinEvent(int64* ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIJoinEvent");

	Params::UReListSessions_ASA_C_ModUIJoinEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerID != nullptr)
		*ServerID = Parms.ServerID;

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
// int64                              ServerID                                                         (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UReListSessions_ASA_C::ModUIReportEvent(int64* ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIReportEvent");

	Params::UReListSessions_ASA_C_ModUIReportEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerID != nullptr)
		*ServerID = Parms.ServerID;

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIFavoriteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UReListSessions_ASA_C::ModUIFavoriteEvent(int64* ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIFavoriteEvent");

	Params::UReListSessions_ASA_C_ModUIFavoriteEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ServerID != nullptr)
		*ServerID = Parms.ServerID;

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
// int32                              ServerType                                                       (Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// bool                               bIsChecked                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

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
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UReListSessions_ASA_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "Tick");

	Params::UReListSessions_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

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


// Function ReListSessions_ASA.ReListSessions_ASA_C.ExecuteUbergraph_ReListSessions_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UBP_ServerModsWidget_C*      CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsChecked_ReturnValue_2                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsChecked_ReturnValue_3                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_Event_bNeedInit                                           (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// TArray<int64>                      K2Node_Event_ModIds                                              (Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FString                      K2Node_Event_ServerName                                          (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int64                              K2Node_Event_ServerId                                            (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int64                              K2Node_CustomEvent_ServerId_2                                    (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference, RepNotify, Interp)
// int64                              K2Node_CustomEvent_ServerId_1                                    (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference, Interp)
// int64                              K2Node_CustomEvent_ServerId                                      (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// int32                              K2Node_Event_ServerType                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_4                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, InstancedReference, SubobjectReference)

class UTexture2D* UReListSessions_ASA_C::ExecuteUbergraph_ReListSessions_ASA(bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, bool CallFunc_IsChecked_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsChecked_ReturnValue_4, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_RegisterModelClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ExecuteUbergraph_ReListSessions_ASA");

	Params::UReListSessions_ASA_C_ExecuteUbergraph_ReListSessions_ASA_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue_2 = CallFunc_IsChecked_ReturnValue_2;
	Parms.CallFunc_IsChecked_ReturnValue_3 = CallFunc_IsChecked_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_4 = CallFunc_IsChecked_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_RegisterModelClass_ReturnValue != nullptr)
		*CallFunc_RegisterModelClass_ReturnValue = Parms.CallFunc_RegisterModelClass_ReturnValue;

	return Parms.ReturnValue;

}

}


