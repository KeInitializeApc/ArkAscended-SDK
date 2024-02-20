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
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USlider_ASA_Widget_C::GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "GetOverrideHighligteableWidgetBP");

	Params::USlider_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupSetPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// bool                               PreventRecallParent                                              (Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

double USlider_ASA_Widget_C::SetupSetPercent(float* InputPin, class FString* CallFunc_Conv_DoubleToString_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "SetupSetPercent");

	Params::USlider_ASA_Widget_C_SetupSetPercent_Params Parms{};

	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_Subtract_DoubleFloat_A_ImplicitCast = CallFunc_Subtract_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1 = CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	if (CallFunc_Conv_DoubleToString_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToString_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToString_ReturnValue);

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config)
// bool                               PreventRecallParent                                              (Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

bool USlider_ASA_Widget_C::SetupValue(double Float)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "SetupValue");

	Params::USlider_ASA_Widget_C_SetupValue_Params Parms{};

	Parms.Float = Float;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

struct FBPNetExecParams USlider_ASA_Widget_C::BPExecutedCommandForPrimalUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "BPExecutedCommandForPrimalUI");

	Params::USlider_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USlider_ASA_Widget_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "Tick");

	Params::USlider_ASA_Widget_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.ExecuteUbergraph_Slider_ASA_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FName                        K2Node_Event_CommandName                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_GetValue_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             K2Node_CustomEvent_Float                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_PreventRecallParent                           (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

double USlider_ASA_Widget_C::ExecuteUbergraph_Slider_ASA_Widget(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float CallFunc_GetValue_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float* CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "ExecuteUbergraph_Slider_ASA_Widget");

	Params::USlider_ASA_Widget_C_ExecuteUbergraph_Slider_ASA_Widget_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_Conv_StringToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue = Parms.CallFunc_Conv_StringToDouble_ReturnValue;

	if (CallFunc_SetValue_InValue_ImplicitCast != nullptr)
		*CallFunc_SetValue_InValue_ImplicitCast = Parms.CallFunc_SetValue_InValue_ImplicitCast;

	return Parms.ReturnValue;

}

}


