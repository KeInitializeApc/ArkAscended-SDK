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
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UColorPicker_ASA_Widget_C::GetOverrideHighligteableWidgetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "GetOverrideHighligteableWidgetBP");

	Params::UColorPicker_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// double                             CallFunc_GetUnpausedTimeSeconds_ReturnValue                      (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetUnpausedTimeSeconds_ReturnValue_1                    (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<float>                      K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_FTrunc_ReturnValue                                      (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FColor                      CallFunc_ReadRenderTargetPixel_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// float                              K2Node_MakeArray__0__ImplicitCast                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_MakeArray__1__ImplicitCast                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, Net, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

float UColorPicker_ASA_Widget_C::UpdateColorSlider2D(double* CallFunc_GetUnpausedTimeSeconds_ReturnValue, double* CallFunc_GetUnpausedTimeSeconds_ReturnValue_1, const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool* K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, struct FColor* CallFunc_ReadRenderTargetPixel_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateColorSlider2D");

	Params::UColorPicker_ASA_Widget_C_UpdateColorSlider2D_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetUnpausedTimeSeconds_ReturnValue != nullptr)
		*CallFunc_GetUnpausedTimeSeconds_ReturnValue = Parms.CallFunc_GetUnpausedTimeSeconds_ReturnValue;

	if (CallFunc_GetUnpausedTimeSeconds_ReturnValue_1 != nullptr)
		*CallFunc_GetUnpausedTimeSeconds_ReturnValue_1 = Parms.CallFunc_GetUnpausedTimeSeconds_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_ReadRenderTargetPixel_ReturnValue != nullptr)
		*CallFunc_ReadRenderTargetPixel_ReturnValue = std::move(Parms.CallFunc_ReadRenderTargetPixel_ReturnValue);

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateSaturationBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UColorPicker_ASA_Widget_C::UpdateSaturationBar(const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateSaturationBar");

	Params::UColorPicker_ASA_Widget_C_UpdateSaturationBar_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.OnMouseMove_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (Edit, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FEventReply UColorPicker_ASA_Widget_C::OnMouseMove_0(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, struct FEventReply* CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "OnMouseMove_0");

	Params::UColorPicker_ASA_Widget_C_OnMouseMove_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	if (CallFunc_Handled_ReturnValue != nullptr)
		*CallFunc_Handled_ReturnValue = std::move(Parms.CallFunc_Handled_ReturnValue);

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
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UColorPicker_ASA_Widget_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "Tick");

	Params::UColorPicker_ASA_Widget_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UColorPicker_ASA_Widget_C::BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

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
// struct FVector2D                   Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UColorPicker_ASA_Widget_C::UpdateColorPickerValue(const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "UpdateColorPickerValue");

	Params::UColorPicker_ASA_Widget_C_UpdateColorPickerValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_Value_1                               (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   K2Node_CustomEvent_Value                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

int32 UColorPicker_ASA_Widget_C::ExecuteUbergraph_ColorPicker_ASA_Widget(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const struct FVector2D& K2Node_CustomEvent_Value, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorPicker_ASA_Widget_C", "ExecuteUbergraph_ColorPicker_ASA_Widget");

	Params::UColorPicker_ASA_Widget_C_ExecuteUbergraph_ColorPicker_ASA_Widget_Params Parms{};

	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


