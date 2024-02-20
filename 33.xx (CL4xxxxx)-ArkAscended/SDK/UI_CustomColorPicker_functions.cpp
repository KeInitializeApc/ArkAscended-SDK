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
// bool                               bInIsEnabled                                                     (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUI_CustomColorPicker_C::SetColorPickerEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "SetColorPickerEnabled");

	Params::UUI_CustomColorPicker_C_SetColorPickerEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.LimitTextSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SourceString                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
// class FString                      Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// TArray<class FString>              LocalArray                                                       (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UUI_CustomColorPicker_C::LimitTextSize(class FString* SourceString, class FString* Array, TArray<class FString>* LocalArray, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "LimitTextSize");

	Params::UUI_CustomColorPicker_C_LimitTextSize_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SourceString != nullptr)
		*SourceString = std::move(Parms.SourceString);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (LocalArray != nullptr)
		*LocalArray = std::move(Parms.LocalArray);

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.UpdateAllSliders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// float                              CallFunc_RGBToHSV_H                                              (ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_RGBToHSV_S                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_RGBToHSV_V                                              (EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_RGBToHSV_A                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_SRGBtoHEX_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

double UUI_CustomColorPicker_C::UpdateAllSliders(struct FLinearColor* Color, float* CallFunc_RGBToHSV_H, float* CallFunc_RGBToHSV_S, float* CallFunc_RGBToHSV_V, float* CallFunc_RGBToHSV_A, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, class FString* CallFunc_SRGBtoHEX_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, double* CallFunc_Divide_DoubleDouble_A_ImplicitCast, float* CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "UpdateAllSliders");

	Params::UUI_CustomColorPicker_C_UpdateAllSliders_Params Parms{};

	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (CallFunc_RGBToHSV_H != nullptr)
		*CallFunc_RGBToHSV_H = Parms.CallFunc_RGBToHSV_H;

	if (CallFunc_RGBToHSV_S != nullptr)
		*CallFunc_RGBToHSV_S = Parms.CallFunc_RGBToHSV_S;

	if (CallFunc_RGBToHSV_V != nullptr)
		*CallFunc_RGBToHSV_V = Parms.CallFunc_RGBToHSV_V;

	if (CallFunc_RGBToHSV_A != nullptr)
		*CallFunc_RGBToHSV_A = Parms.CallFunc_RGBToHSV_A;

	if (CallFunc_SRGBtoHEX_ReturnValue != nullptr)
		*CallFunc_SRGBtoHEX_ReturnValue = std::move(Parms.CallFunc_SRGBtoHEX_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Divide_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	if (CallFunc_SetValue_InValue_ImplicitCast != nullptr)
		*CallFunc_SetValue_InValue_ImplicitCast = Parms.CallFunc_SetValue_InValue_ImplicitCast;

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.GetFinalColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                FinalColor                                                       (Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetValue_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_GetValue_ReturnValue_2                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_3                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_CustomColorPicker_C::GetFinalColor(struct FLinearColor* FinalColor, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, const struct FVector2D& CallFunc_GetValue_ReturnValue_3, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "GetFinalColor");

	Params::UUI_CustomColorPicker_C_GetFinalColor_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;
	Parms.CallFunc_GetValue_ReturnValue_3 = CallFunc_GetValue_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast = CallFunc_HSVToRGB_H_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (FinalColor != nullptr)
		*FinalColor = std::move(Parms.FinalColor);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

double UUI_CustomColorPicker_C::OnUpdateOpacity(const struct FVector2D& CallFunc_GetValue_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast, float* CallFunc_SetValue_InValue_ImplicitCast, float* CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdateOpacity");

	Params::UUI_CustomColorPicker_C_OnUpdateOpacity_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast = CallFunc_HSVToRGB_H_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_SetValue_InValue_ImplicitCast != nullptr)
		*CallFunc_SetValue_InValue_ImplicitCast = Parms.CallFunc_SetValue_InValue_ImplicitCast;

	if (CallFunc_SetValue_InValue_ImplicitCast_1 != nullptr)
		*CallFunc_SetValue_InValue_ImplicitCast_1 = Parms.CallFunc_SetValue_InValue_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UUI_CustomColorPicker_C::OnUpdateValue(float CallFunc_GetValue_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdateValue");

	Params::UUI_CustomColorPicker_C_OnUpdateValue_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

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
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

double UUI_CustomColorPicker_C::OnUpdate2DSynth(const struct FVector2D& CallFunc_GetValue_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast, float* CallFunc_SetValue_InValue_ImplicitCast, float* CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "OnUpdate2DSynth");

	Params::UUI_CustomColorPicker_C_OnUpdate2DSynth_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast = CallFunc_HSVToRGB_H_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_SetValue_InValue_ImplicitCast != nullptr)
		*CallFunc_SetValue_InValue_ImplicitCast = Parms.CallFunc_SetValue_InValue_ImplicitCast;

	if (CallFunc_SetValue_InValue_ImplicitCast_1 != nullptr)
		*CallFunc_SetValue_InValue_ImplicitCast_1 = Parms.CallFunc_SetValue_InValue_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetValueBarValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (Edit, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (Edit, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)

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
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (Edit, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (Edit, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)

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
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)

void UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UUI_CustomColorPicker_C::BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_ComponentBoundEvent_Value_4                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_ComponentBoundEvent_Value_3                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// float                              K2Node_ComponentBoundEvent_Value_2                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_ComponentBoundEvent_Value_1                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                CallFunc_GetFinalColor_FinalColor                                (Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_SRGBtoHEX_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_LimitTextSize_Array                                     (BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FColor                      CallFunc_HEXtoSRGB_Color                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, SubobjectReference)

class FText UUI_CustomColorPicker_C::ExecuteUbergraph_UI_CustomColorPicker(bool* CallFunc_IsValid_ReturnValue, float* K2Node_ComponentBoundEvent_Value_4, float* K2Node_ComponentBoundEvent_Value_3, float* K2Node_ComponentBoundEvent_Value_2, float* K2Node_ComponentBoundEvent_Value_1, float* K2Node_ComponentBoundEvent_Value, const struct FLinearColor& CallFunc_GetFinalColor_FinalColor, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FString* CallFunc_SRGBtoHEX_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_LimitTextSize_Array, const struct FColor& CallFunc_HEXtoSRGB_Color, class FText* CallFunc_Conv_StringToText_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomColorPicker_C", "ExecuteUbergraph_UI_CustomColorPicker");

	Params::UUI_CustomColorPicker_C_ExecuteUbergraph_UI_CustomColorPicker_Params Parms{};

	Parms.CallFunc_GetFinalColor_FinalColor = CallFunc_GetFinalColor_FinalColor;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_HEXtoSRGB_Color = CallFunc_HEXtoSRGB_Color;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_ComponentBoundEvent_Value_4 != nullptr)
		*K2Node_ComponentBoundEvent_Value_4 = Parms.K2Node_ComponentBoundEvent_Value_4;

	if (K2Node_ComponentBoundEvent_Value_3 != nullptr)
		*K2Node_ComponentBoundEvent_Value_3 = Parms.K2Node_ComponentBoundEvent_Value_3;

	if (K2Node_ComponentBoundEvent_Value_2 != nullptr)
		*K2Node_ComponentBoundEvent_Value_2 = Parms.K2Node_ComponentBoundEvent_Value_2;

	if (K2Node_ComponentBoundEvent_Value_1 != nullptr)
		*K2Node_ComponentBoundEvent_Value_1 = Parms.K2Node_ComponentBoundEvent_Value_1;

	if (K2Node_ComponentBoundEvent_Value != nullptr)
		*K2Node_ComponentBoundEvent_Value = Parms.K2Node_ComponentBoundEvent_Value;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_SRGBtoHEX_ReturnValue != nullptr)
		*CallFunc_SRGBtoHEX_ReturnValue = std::move(Parms.CallFunc_SRGBtoHEX_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_LimitTextSize_Array != nullptr)
		*CallFunc_LimitTextSize_Array = std::move(Parms.CallFunc_LimitTextSize_Array);

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

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


