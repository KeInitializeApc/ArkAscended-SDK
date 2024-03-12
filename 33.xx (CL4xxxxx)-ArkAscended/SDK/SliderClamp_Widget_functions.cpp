#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SliderClamp_Widget.SliderClamp_Widget_C
// (None)

class UClass* USliderClamp_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SliderClamp_Widget_C");

	return Clss;
}


// SliderClamp_Widget_C SliderClamp_Widget.Default__SliderClamp_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USliderClamp_Widget_C* USliderClamp_Widget_C::GetDefaultObj()
{
	static class USliderClamp_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USliderClamp_Widget_C*>(USliderClamp_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SliderClamp_Widget.SliderClamp_Widget_C.UpdateMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Clamp_ReturnValue                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

int32 USliderClamp_Widget_C::UpdateMax(int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Clamp_ReturnValue, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "UpdateMax");

	Params::USliderClamp_Widget_C_UpdateMax_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FString                      Temp_string_Variable_2                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_3                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UPrimalUserWidget*           CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClampSliderPercentWIdget_C* K2Node_DynamicCast_AsClamp_Slider_Percent_WIdget                 (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)

int32 USliderClamp_Widget_C::Update(const class FString& Temp_string_Variable, int32* Temp_int_Variable, const class FString& Temp_string_Variable_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, class UPrimalUserWidget* CallFunc_Create_ReturnValue, int32* Temp_int_Variable_1, class UPanelSlot** CallFunc_AddChild_ReturnValue, class UClampSliderPercentWIdget_C** K2Node_DynamicCast_AsClamp_Slider_Percent_WIdget, bool* K2Node_DynamicCast_bSuccess, const class FString& K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "Update");

	Params::USliderClamp_Widget_C_Update_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (K2Node_DynamicCast_AsClamp_Slider_Percent_WIdget != nullptr)
		*K2Node_DynamicCast_AsClamp_Slider_Percent_WIdget = Parms.K2Node_DynamicCast_AsClamp_Slider_Percent_WIdget;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.RefreshInt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float USliderClamp_Widget_C::RefreshInt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "RefreshInt");

	Params::USliderClamp_Widget_C_RefreshInt_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.SetupValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config)
// bool                               PreventRecallParent                                              (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

void USliderClamp_Widget_C::SetupValue(double* Float, bool PreventRecallParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "SetupValue");

	Params::USliderClamp_Widget_C_SetupValue_Params Parms{};

	Parms.PreventRecallParent = PreventRecallParent;

	UObject::ProcessEvent(Func, &Parms);

	if (Float != nullptr)
		*Float = Parms.Float;

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void USliderClamp_Widget_C::BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "BPExecutedCommandForPrimalUI");

	Params::USliderClamp_Widget_C_BPExecutedCommandForPrimalUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

	if (ExecParams != nullptr)
		*ExecParams = std::move(Parms.ExecParams);

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USliderClamp_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool USliderClamp_Widget_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "PreConstruct");

	Params::USliderClamp_Widget_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.UpdateClampLimit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumClampLimits                                                   (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USliderClamp_Widget_C::UpdateClampLimit(int32* NumClampLimits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "UpdateClampLimit");

	Params::USliderClamp_Widget_C_UpdateClampLimit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NumClampLimits != nullptr)
		*NumClampLimits = Parms.NumClampLimits;

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.RefreshLimits
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USliderClamp_Widget_C::RefreshLimits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "RefreshLimits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USliderClamp_Widget_C::BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "BndEvt__SliderClamp_Widget_NextOption_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USliderClamp_Widget_C::BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "BndEvt__SliderClamp_Widget_PreviousOption_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SliderClamp_Widget.SliderClamp_Widget_C.ExecuteUbergraph_SliderClamp_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// double                             K2Node_CustomEvent_Float                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_CustomEvent_PreventRecallParent                           (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FName                        K2Node_Event_CommandName                                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              K2Node_CustomEvent_NumClampLimits                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_LastValue_ImplicitCast                        (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class FString USliderClamp_Widget_C::ExecuteUbergraph_SliderClamp_Widget(int32* EntryPoint, double K2Node_CustomEvent_Float, bool K2Node_CustomEvent_PreventRecallParent, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_Conv_IntToBool_ReturnValue, int32* Temp_int_Variable, int32* K2Node_CustomEvent_NumClampLimits, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32* Temp_int_Variable_1, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, float* K2Node_VariableSet_LastValue_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SliderClamp_Widget_C", "ExecuteUbergraph_SliderClamp_Widget");

	Params::USliderClamp_Widget_C_ExecuteUbergraph_SliderClamp_Widget_Params Parms{};

	Parms.K2Node_CustomEvent_Float = K2Node_CustomEvent_Float;
	Parms.K2Node_CustomEvent_PreventRecallParent = K2Node_CustomEvent_PreventRecallParent;
	Parms.K2Node_Event_CommandName = K2Node_Event_CommandName;
	Parms.K2Node_Event_ExecParams = K2Node_Event_ExecParams;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_CustomEvent_NumClampLimits != nullptr)
		*K2Node_CustomEvent_NumClampLimits = Parms.K2Node_CustomEvent_NumClampLimits;

	if (CallFunc_GetOuterObject_ReturnValue != nullptr)
		*CallFunc_GetOuterObject_ReturnValue = Parms.CallFunc_GetOuterObject_ReturnValue;

	if (CallFunc_GetOuterObject_ReturnValue_1 != nullptr)
		*CallFunc_GetOuterObject_ReturnValue_1 = Parms.CallFunc_GetOuterObject_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	if (K2Node_VariableSet_LastValue_ImplicitCast != nullptr)
		*K2Node_VariableSet_LastValue_ImplicitCast = Parms.K2Node_VariableSet_LastValue_ImplicitCast;

	return Parms.ReturnValue;

}

}


