#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomComboBox.UI_CustomComboBox_C
// (None)

class UClass* UUI_CustomComboBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomComboBox_C");

	return Clss;
}


// UI_CustomComboBox_C UI_CustomComboBox.Default__UI_CustomComboBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomComboBox_C* UUI_CustomComboBox_C::GetDefaultObj()
{
	static class UUI_CustomComboBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomComboBox_C*>(UUI_CustomComboBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Set Selected Option
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// bool                               CallOnOptionSelected_                                            (BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  OptionWidget                                                     (Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UUI_CustomComboBoxOption_C* UUI_CustomComboBox_C::Event_Set_Selected_Option(class FString* Option, bool* CallOnOptionSelected_, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Set Selected Option");

	Params::UUI_CustomComboBox_C_Event_Set_Selected_Option_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

	if (CallOnOptionSelected_ != nullptr)
		*CallOnOptionSelected_ = Parms.CallOnOptionSelected_;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.SetUpNavigationSingle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option                  (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)

FDelegateProperty_ UUI_CustomComboBox_C::SetUpNavigationSingle(class UObject** Object, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "SetUpNavigationSingle");

	Params::UUI_CustomComboBox_C_SetUpNavigationSingle_Params Parms{};

	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Object != nullptr)
		*Object = Parms.Object;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Nav to Options
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option                  (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_CustomComboBox_C::Nav_to_Options(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Nav to Options");

	Params::UUI_CustomComboBox_C_Nav_to_Options_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Nav Back Tomain Button
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_CustomComboBox_C::Nav_Back_Tomain_Button(enum class EUINavigation Navigation, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Nav Back Tomain Button");

	Params::UUI_CustomComboBox_C_Nav_Back_Tomain_Button_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.SetUpNavigation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option                  (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_1                (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_2                (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)

int32 UUI_CustomComboBox_C::SetUpNavigation(int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_1, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_2, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "SetUpNavigation");

	Params::UUI_CustomComboBox_C_SetUpNavigation_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;
	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_1 = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_1;
	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_2 = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Int32_SubOne_ReturnValue != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue = Parms.CallFunc_Int32_SubOne_ReturnValue;

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsHovered_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_CustomComboBox_C::OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnKeyDown");

	Params::UUI_CustomComboBox_C_OnKeyDown_Params Parms{};

	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsHovered_ReturnValue != nullptr)
		*CallFunc_IsHovered_ReturnValue = Parms.CallFunc_IsHovered_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.GetOptionAtIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class FString                      Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// class UUI_CustomComboBoxOption_C*  AsCustomComboBoxOption                                           (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               IsValid                                                          (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option                  (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_CustomComboBox_C::GetOptionAtIndex(int32* Index, class FString* Text, bool* CallFunc_IsValid_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "GetOptionAtIndex");

	Params::UUI_CustomComboBox_C_GetOptionAtIndex_Params Parms{};

	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_CustomComboBox_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "PreConstruct");

	Params::UUI_CustomComboBox_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Add Option
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRUCT_CustomComboBoxOptionCategoryInfo                                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

struct FSTRUCT_CustomComboBoxOption UUI_CustomComboBox_C::Event_Add_Option()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Add Option");

	Params::UUI_CustomComboBox_C_Event_Add_Option_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Open Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Event_Open_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Open Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Close Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Event_Close_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Close Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Clear Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Event_Clear_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Clear Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Generate Default Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Event_Generate_Default_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Generate Default Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOptionSelectedInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// int64                              ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// class UUI_CustomComboBoxOption_C*  OptionWidget                                                     (Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

class UUI_CustomComboBoxOption_C* UUI_CustomComboBox_C::OnOptionSelectedInterface(class FString* Option, int64* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnOptionSelectedInterface");

	Params::UUI_CustomComboBox_C_OnOptionSelectedInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

	if (ID != nullptr)
		*ID = Parms.ID;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.CloseOtherWay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::CloseOtherWay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "CloseOtherWay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Focus On
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Focus_On()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Focus On");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.FocusOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::FocusOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "FocusOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_CustomComboBox_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Tick");

	Params::UUI_CustomComboBox_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.ExecuteUbergraph_UI_CustomComboBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUI_CustomComboBoxSpacer_C*  CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// struct FSTRUCT_CustomComboBoxOptionK2Node_CustomEvent_CategoryInfo                                  (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_Event_Option                                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_Event_ID                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  K2Node_Event_OptionWidget                                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class UUI_CustomComboBoxOption_C*  CallFunc_Create_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_GetOptionAtIndex_Text                                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  CallFunc_GetOptionAtIndex_AsCustomComboBoxOption                 (ConstParm, ExportObject, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetOptionAtIndex_IsValid                                (Edit, ConstParm, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// struct FSTRUCT_CustomComboBoxOptionCallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_CustomComboBox_C::ExecuteUbergraph_UI_CustomComboBox(class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, const struct FSTRUCT_CustomComboBoxOption& K2Node_CustomEvent_CategoryInfo, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue_1, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8, class FString* CallFunc_GetOptionAtIndex_Text, class UUI_CustomComboBoxOption_C** CallFunc_GetOptionAtIndex_AsCustomComboBoxOption, bool* CallFunc_GetOptionAtIndex_IsValid, bool* Temp_bool_Variable, bool* K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, bool* CallFunc_IsValid_ReturnValue_11, bool* CallFunc_IsValid_ReturnValue_12, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, bool* CallFunc_IsValid_ReturnValue_15, class FText* CallFunc_Conv_StringToText_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasAnyUserFocus_ReturnValue, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "ExecuteUbergraph_UI_CustomComboBox");

	Params::UUI_CustomComboBox_C_ExecuteUbergraph_UI_CustomComboBox_Params Parms{};

	Parms.K2Node_CustomEvent_CategoryInfo = K2Node_CustomEvent_CategoryInfo;
	Parms.K2Node_Event_Option = K2Node_Event_Option;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.K2Node_Event_OptionWidget = K2Node_Event_OptionWidget;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	if (CallFunc_IsValid_ReturnValue_6 != nullptr)
		*CallFunc_IsValid_ReturnValue_6 = Parms.CallFunc_IsValid_ReturnValue_6;

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (CallFunc_GetOwningPlayer_ReturnValue_1 != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue_1 = Parms.CallFunc_GetOwningPlayer_ReturnValue_1;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_IsValid_ReturnValue_7 != nullptr)
		*CallFunc_IsValid_ReturnValue_7 = Parms.CallFunc_IsValid_ReturnValue_7;

	if (CallFunc_IsValid_ReturnValue_8 != nullptr)
		*CallFunc_IsValid_ReturnValue_8 = Parms.CallFunc_IsValid_ReturnValue_8;

	if (CallFunc_GetOptionAtIndex_Text != nullptr)
		*CallFunc_GetOptionAtIndex_Text = std::move(Parms.CallFunc_GetOptionAtIndex_Text);

	if (CallFunc_GetOptionAtIndex_AsCustomComboBoxOption != nullptr)
		*CallFunc_GetOptionAtIndex_AsCustomComboBoxOption = Parms.CallFunc_GetOptionAtIndex_AsCustomComboBoxOption;

	if (CallFunc_GetOptionAtIndex_IsValid != nullptr)
		*CallFunc_GetOptionAtIndex_IsValid = Parms.CallFunc_GetOptionAtIndex_IsValid;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_9 != nullptr)
		*CallFunc_IsValid_ReturnValue_9 = Parms.CallFunc_IsValid_ReturnValue_9;

	if (CallFunc_IsValid_ReturnValue_10 != nullptr)
		*CallFunc_IsValid_ReturnValue_10 = Parms.CallFunc_IsValid_ReturnValue_10;

	if (CallFunc_IsValid_ReturnValue_11 != nullptr)
		*CallFunc_IsValid_ReturnValue_11 = Parms.CallFunc_IsValid_ReturnValue_11;

	if (CallFunc_IsValid_ReturnValue_12 != nullptr)
		*CallFunc_IsValid_ReturnValue_12 = Parms.CallFunc_IsValid_ReturnValue_12;

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (CallFunc_GetOwningPlayer_ReturnValue_2 != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue_2 = Parms.CallFunc_GetOwningPlayer_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_13 != nullptr)
		*CallFunc_IsValid_ReturnValue_13 = Parms.CallFunc_IsValid_ReturnValue_13;

	if (CallFunc_IsValid_ReturnValue_14 != nullptr)
		*CallFunc_IsValid_ReturnValue_14 = Parms.CallFunc_IsValid_ReturnValue_14;

	if (CallFunc_IsValid_ReturnValue_15 != nullptr)
		*CallFunc_IsValid_ReturnValue_15 = Parms.CallFunc_IsValid_ReturnValue_15;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_HasAnyUserFocus_ReturnValue != nullptr)
		*CallFunc_HasAnyUserFocus_ReturnValue = Parms.CallFunc_HasAnyUserFocus_ReturnValue;

	if (K2Node_MakeStruct_ButtonStyle != nullptr)
		*K2Node_MakeStruct_ButtonStyle = std::move(Parms.K2Node_MakeStruct_ButtonStyle);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnCloseOption__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::OnCloseOption__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnCloseOption__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOpenOptions__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CustomComboBox_C*        NewParam                                                         (ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)

class UUI_CustomComboBox_C* UUI_CustomComboBox_C::OnOpenOptions__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnOpenOptions__DelegateSignature");

	Params::UUI_CustomComboBox_C_OnOpenOptions__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.PostPreConstruct__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::PostPreConstruct__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "PostPreConstruct__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UUI_CustomComboBox_C::OnOptionSelected__DelegateSignature(class FString* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnOptionSelected__DelegateSignature");

	Params::UUI_CustomComboBox_C_OnOptionSelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

}

}


