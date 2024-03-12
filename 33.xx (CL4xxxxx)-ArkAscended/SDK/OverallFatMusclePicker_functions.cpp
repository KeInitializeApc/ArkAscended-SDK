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
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UOverallFatMusclePicker_C::GetOverrideHighligteableWidgetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "GetOverrideHighligteableWidgetBP");

	Params::UOverallFatMusclePicker_C_GetOverrideHighligteableWidgetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorSlider2D
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// float                              K2Node_MakeStruct_FloatParam1_ImplicitCast                       (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_MakeStruct_FloatParam2_ImplicitCast                       (ConstParm, Net, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class UPrimalUserWidget* UOverallFatMusclePicker_C::UpdateColorSlider2D(class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, bool* K2Node_DynamicCast_bSuccess, float K2Node_MakeStruct_FloatParam1_ImplicitCast, float K2Node_MakeStruct_FloatParam2_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "UpdateColorSlider2D");

	Params::UOverallFatMusclePicker_C_UpdateColorSlider2D_Params Parms{};

	Parms.K2Node_MakeStruct_FloatParam1_ImplicitCast = K2Node_MakeStruct_FloatParam1_ImplicitCast;
	Parms.K2Node_MakeStruct_FloatParam2_ImplicitCast = K2Node_MakeStruct_FloatParam2_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOuterObject_ReturnValue != nullptr)
		*CallFunc_GetOuterObject_ReturnValue = Parms.CallFunc_GetOuterObject_ReturnValue;

	if (CallFunc_GetOuterObject_ReturnValue_1 != nullptr)
		*CallFunc_GetOuterObject_ReturnValue_1 = Parms.CallFunc_GetOuterObject_ReturnValue_1;

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateSaturationBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

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
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

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
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

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
// struct FVector2D                   Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (BlueprintVisible, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FVector2D                   K2Node_CustomEvent_Value                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

void UOverallFatMusclePicker_C::ExecuteUbergraph_OverallFatMusclePicker(int32* EntryPoint, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector2D& K2Node_CustomEvent_Value, struct FVector2D* CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverallFatMusclePicker_C", "ExecuteUbergraph_OverallFatMusclePicker");

	Params::UOverallFatMusclePicker_C_ExecuteUbergraph_OverallFatMusclePicker_Params Parms{};

	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

}

}


