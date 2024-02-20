#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C
// (None)

class UClass* UColorPicker_ASA_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorPicker_ASA_Widget_C");

	return Clss;
}


// ColorPicker_ASA_Widget_C ColorPicker_ASA_Widget.Default__ColorPicker_ASA_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UColorPicker_ASA_Widget_C* UColorPicker_ASA_Widget_C::GetDefaultObj()
{
	static class UColorPicker_ASA_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorPicker_ASA_Widget_C*>(UColorPicker_ASA_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.GetOverrideHighligteableWidgetBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UColorPicker_ASA_Widget_C::GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "GetOverrideHighligteableWidgetBP");

	Params::UColorPicker_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.TimerCooldownColorCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::TimerCooldownColorCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "TimerCooldownColorCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorSlider2D
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetUnpausedTimeSeconds_ReturnValue                      (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetUnpausedTimeSeconds_ReturnValue_1                    (BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<float>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// int32                              CallFunc_FTrunc_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
// struct FColor                      CallFunc_ReadRenderTargetPixel_ReturnValue                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_MakeArray__0__ImplicitCast                                (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_MakeArray__1__ImplicitCast                                (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)

float UColorPicker_ASA_Widget_C::UpdateColorSlider2D(double* CallFunc_Subtract_DoubleFloat_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateColorSlider2D");

	Params::UColorPicker_ASA_Widget_C_UpdateColorSlider2D_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_NotEqual_LinearColorLinearColor_ReturnValue != nullptr)
		*CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateSaturationBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UColorPicker_ASA_Widget_C::UpdateSaturationBar(struct FLinearColor* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateSaturationBar");

	Params::UColorPicker_ASA_Widget_C_UpdateSaturationBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.OnMouseMove_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

struct FEventReply UColorPicker_ASA_Widget_C::OnMouseMove_0(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "OnMouseMove_0");

	Params::UColorPicker_ASA_Widget_C_OnMouseMove_0_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UColorPicker_ASA_Widget_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "Tick");

	Params::UColorPicker_ASA_Widget_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.SetupColorRenderTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::SetupColorRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "SetupColorRenderTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorPickerValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UColorPicker_ASA_Widget_C::UpdateColorPickerValue(struct FVector2D* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateColorPickerValue");

	Params::UColorPicker_ASA_Widget_C_UpdateColorPickerValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.ExecuteUbergraph_ColorPicker_ASA_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_Value_1                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   K2Node_CustomEvent_Value                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D UColorPicker_ASA_Widget_C::ExecuteUbergraph_ColorPicker_ASA_Widget(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float* K2Node_ComponentBoundEvent_Value_1, float* K2Node_ComponentBoundEvent_Value, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "ExecuteUbergraph_ColorPicker_ASA_Widget");

	Params::UColorPicker_ASA_Widget_C_ExecuteUbergraph_ColorPicker_ASA_Widget_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (K2Node_ComponentBoundEvent_Value_1 != nullptr)
		*K2Node_ComponentBoundEvent_Value_1 = Parms.K2Node_ComponentBoundEvent_Value_1;

	if (K2Node_ComponentBoundEvent_Value != nullptr)
		*K2Node_ComponentBoundEvent_Value = Parms.K2Node_ComponentBoundEvent_Value;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


