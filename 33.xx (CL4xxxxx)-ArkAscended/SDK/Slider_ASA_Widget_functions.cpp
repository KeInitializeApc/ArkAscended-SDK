#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Slider_ASA_Widget.Slider_ASA_Widget_C
// (None)

class UClass* USlider_ASA_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Slider_ASA_Widget_C");

	return Clss;
}


// Slider_ASA_Widget_C Slider_ASA_Widget.Default__Slider_ASA_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlider_ASA_Widget_C* USlider_ASA_Widget_C::GetDefaultObj()
{
	static class USlider_ASA_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlider_ASA_Widget_C*>(USlider_ASA_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.GetOverrideHighligteableWidgetBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* USlider_ASA_Widget_C::GetOverrideHighligteableWidgetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "GetOverrideHighligteableWidgetBP");

	Params::USlider_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupSetPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// bool                               PreventRecallParent                                              (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (Edit, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast                     (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1                   (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float USlider_ASA_Widget_C::SetupSetPercent(float* InputPin, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, bool* K2Node_DynamicCast_bSuccess, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "SetupSetPercent");

	Params::USlider_ASA_Widget_C_SetupSetPercent_Params Parms{};

	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Divide_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
// bool                               PreventRecallParent                                              (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool USlider_ASA_Widget_C::SetupValue(double* Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "SetupValue");

	Params::USlider_ASA_Widget_C_SetupValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Float != nullptr)
		*Float = Parms.Float;

	return Parms.ReturnValue;

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void USlider_ASA_Widget_C::BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "BPExecutedCommandForPrimalUI");

	Params::USlider_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params Parms{};

	Parms.CommandName = CommandName;
	Parms.ExecParams = ExecParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float USlider_ASA_Widget_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "Tick");

	Params::USlider_ASA_Widget_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.ExecuteUbergraph_Slider_ASA_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        K2Node_Event_CommandName                                         (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_GetValue_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             K2Node_CustomEvent_Float                                         (Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_PreventRecallParent                           (BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float USlider_ASA_Widget_C::ExecuteUbergraph_Slider_ASA_Widget(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float CallFunc_GetValue_ReturnValue, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_GetValue_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "ExecuteUbergraph_Slider_ASA_Widget");

	Params::USlider_ASA_Widget_C_ExecuteUbergraph_Slider_ASA_Widget_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_EqualEqual_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_EqualEqual_DoubleDouble_ReturnValue = Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}

}


