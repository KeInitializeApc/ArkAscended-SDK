#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OverallFatMusclePicker.OverallFatMusclePicker_C
// (None)

class UClass* UOverallFatMusclePicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverallFatMusclePicker_C");

	return Clss;
}


// OverallFatMusclePicker_C OverallFatMusclePicker.Default__OverallFatMusclePicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOverallFatMusclePicker_C* UOverallFatMusclePicker_C::GetDefaultObj()
{
	static class UOverallFatMusclePicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverallFatMusclePicker_C*>(UOverallFatMusclePicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.GetOverrideHighligteableWidgetBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UOverallFatMusclePicker_C::GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "GetOverrideHighligteableWidgetBP");

	Params::UOverallFatMusclePicker_C_GetOverrideHighligteableWidgetBP_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorSlider2D
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_MakeStruct_FloatParam1_ImplicitCast                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_FloatParam2_ImplicitCast                       (Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

float UOverallFatMusclePicker_C::UpdateColorSlider2D(const struct FVector2D& CallFunc_GetValue_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "UpdateColorSlider2D");

	Params::UOverallFatMusclePicker_C_UpdateColorSlider2D_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	return Parms.ReturnValue;

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateSaturationBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UOverallFatMusclePicker_C::UpdateSaturationBar(struct FLinearColor* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "UpdateSaturationBar");

	Params::UOverallFatMusclePicker_C_UpdateSaturationBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOverallFatMusclePicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UOverallFatMusclePicker_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UOverallFatMusclePicker_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UOverallFatMusclePicker_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UOverallFatMusclePicker_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorPickerValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UOverallFatMusclePicker_C::UpdateColorPickerValue(struct FVector2D* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "UpdateColorPickerValue");

	Params::UOverallFatMusclePicker_C_UpdateColorPickerValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.ExecuteUbergraph_OverallFatMusclePicker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_Value_1                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FVector2D                   K2Node_CustomEvent_Value                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

struct FVector2D UOverallFatMusclePicker_C::ExecuteUbergraph_OverallFatMusclePicker(float* K2Node_ComponentBoundEvent_Value_1, float* K2Node_ComponentBoundEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "ExecuteUbergraph_OverallFatMusclePicker");

	Params::UOverallFatMusclePicker_C_ExecuteUbergraph_OverallFatMusclePicker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_ComponentBoundEvent_Value_1 != nullptr)
		*K2Node_ComponentBoundEvent_Value_1 = Parms.K2Node_ComponentBoundEvent_Value_1;

	if (K2Node_ComponentBoundEvent_Value != nullptr)
		*K2Node_ComponentBoundEvent_Value = Parms.K2Node_ComponentBoundEvent_Value;

	return Parms.ReturnValue;

}

}


