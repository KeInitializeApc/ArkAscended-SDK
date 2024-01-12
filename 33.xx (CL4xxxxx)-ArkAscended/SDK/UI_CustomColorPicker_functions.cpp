#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomColorPicker.UI_CustomColorPicker_C
// (None)

class UClass* UUI_CustomColorPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomColorPicker_C");

	return Clss;
}


// UI_CustomColorPicker_C UI_CustomColorPicker.Default__UI_CustomColorPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomColorPicker_C* UUI_CustomColorPicker_C::GetDefaultObj()
{
	static class UUI_CustomColorPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomColorPicker_C*>(UUI_CustomColorPicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetColorPickerEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_CustomColorPicker_C::SetColorPickerEnabled(bool* bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "SetColorPickerEnabled");

	Params::UUI_CustomColorPicker_C_SetColorPickerEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bInIsEnabled != nullptr)
		*bInIsEnabled = Parms.bInIsEnabled;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.LimitTextSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SourceString                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// class FString                      Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// TArray<class FString>              LocalArray                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<class FString> UUI_CustomColorPicker_C::LimitTextSize(class FString* SourceString, class FString* Array, const class FString& CallFunc_JoinStringArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "LimitTextSize");

	Params::UUI_CustomColorPicker_C_LimitTextSize_Params Parms{};

	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SourceString != nullptr)
		*SourceString = std::move(Parms.SourceString);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.UpdateAllSliders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// float                              CallFunc_RGBToHSV_H                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CallFunc_RGBToHSV_S                                              (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CallFunc_RGBToHSV_V                                              (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CallFunc_RGBToHSV_A                                              (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_SRGBtoHEX_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UUI_CustomColorPicker_C::UpdateAllSliders(struct FLinearColor* Color, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "UpdateAllSliders");

	Params::UUI_CustomColorPicker_C_UpdateAllSliders_Params Parms{};

	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.GetFinalColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                FinalColor                                                       (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetValue_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_GetValue_ReturnValue_2                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_3                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

float UUI_CustomColorPicker_C::GetFinalColor(float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, const struct FVector2D& CallFunc_GetValue_ReturnValue_3, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double* CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "GetFinalColor");

	Params::UUI_CustomColorPicker_C_GetFinalColor_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;
	Parms.CallFunc_GetValue_ReturnValue_3 = CallFunc_GetValue_ReturnValue_3;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

float UUI_CustomColorPicker_C::OnUpdateOpacity(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double* CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdateOpacity");

	Params::UUI_CustomColorPicker_C_OnUpdateOpacity_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UUI_CustomColorPicker_C::OnUpdateValue(float CallFunc_GetValue_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdateValue");

	Params::UUI_CustomColorPicker_C_OnUpdateValue_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateSaturation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::OnUpdateSaturation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdateSaturation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdate2DSynth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

float UUI_CustomColorPicker_C::OnUpdate2DSynth(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double* CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdate2DSynth");

	Params::UUI_CustomColorPicker_C_OnUpdate2DSynth_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetValueBarValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)

class UMaterialInstanceDynamic* UUI_CustomColorPicker_C::SetValueBarValue(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "SetValueBarValue");

	Params::UUI_CustomColorPicker_C_SetValueBarValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetSaturationBarColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)

class UMaterialInstanceDynamic* UUI_CustomColorPicker_C::SetSaturationBarColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "SetSaturationBarColor");

	Params::UUI_CustomColorPicker_C_SetSaturationBarColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.ExecuteUbergraph_UI_CustomColorPicker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_Value_4                               (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_ComponentBoundEvent_Value_3                               (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// float                              K2Node_ComponentBoundEvent_Value_2                               (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_ComponentBoundEvent_Value_1                               (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_GetFinalColor_FinalColor                                (ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_SRGBtoHEX_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_LimitTextSize_Array                                     (ConstParm, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// struct FColor                      CallFunc_HEXtoSRGB_Color                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

struct FColor UUI_CustomColorPicker_C::ExecuteUbergraph_UI_CustomColorPicker(bool* CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_Value_4, float K2Node_ComponentBoundEvent_Value_3, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "ExecuteUbergraph_UI_CustomColorPicker");

	Params::UUI_CustomColorPicker_C_ExecuteUbergraph_UI_CustomColorPicker_Params Parms{};

	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OptionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomColorPicker_C::OptionChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OptionChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnColorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UUI_CustomColorPicker_C::OnColorChanged__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnColorChanged__DelegateSignature");

	Params::UUI_CustomColorPicker_C_OnColorChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}

}


