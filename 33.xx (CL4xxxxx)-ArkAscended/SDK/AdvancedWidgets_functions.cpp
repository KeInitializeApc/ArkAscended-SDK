#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AdvancedWidgets.RadialSlider
// (None)

class UClass* URadialSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialSlider");

	return Clss;
}


// RadialSlider AdvancedWidgets.Default__RadialSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialSlider* URadialSlider::GetDefaultObj()
{
	static class URadialSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialSlider*>(URadialSlider::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedWidgets.RadialSlider.SetValueTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      InValueTags                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

TArray<float> URadialSlider::SetValueTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetValueTags");

	Params::URadialSlider_SetValueTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float URadialSlider::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetValue");

	Params::URadialSlider_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InUseVerticalDrag                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

bool URadialSlider::SetUseVerticalDrag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetUseVerticalDrag");

	Params::URadialSlider_SetUseVerticalDrag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float URadialSlider::SetStepSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetStepSize");

	Params::URadialSlider_SetStepSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetSliderRange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRuntimeFloatCurve          InSliderRange                                                    (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

struct FRuntimeFloatCurve URadialSlider::SetSliderRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderRange");

	Params::URadialSlider_SetSliderRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetSliderProgressColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor URadialSlider::SetSliderProgressColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderProgressColor");

	Params::URadialSlider_SetSliderProgressColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float URadialSlider::SetSliderHandleStartAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderHandleStartAngle");

	Params::URadialSlider_SetSliderHandleStartAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float URadialSlider::SetSliderHandleEndAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderHandleEndAngle");

	Params::URadialSlider_SetSliderHandleEndAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor URadialSlider::SetSliderHandleColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderHandleColor");

	Params::URadialSlider_SetSliderHandleColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor URadialSlider::SetSliderBarColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetSliderBarColor");

	Params::URadialSlider_SetSliderBarColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetShowSliderHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InShowSliderHandle                                               (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

bool URadialSlider::SetShowSliderHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetShowSliderHandle");

	Params::URadialSlider_SetShowSliderHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetShowSliderHand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InShowSliderHand                                                 (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

bool URadialSlider::SetShowSliderHand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetShowSliderHand");

	Params::URadialSlider_SetShowSliderHand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool URadialSlider::SetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetLocked");

	Params::URadialSlider_SetLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D URadialSlider::SetHandStartEndRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetHandStartEndRatio");

	Params::URadialSlider_SetHandStartEndRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float URadialSlider::SetCustomDefaultValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetCustomDefaultValue");

	Params::URadialSlider_SetCustomDefaultValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor URadialSlider::SetCenterBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetCenterBackgroundColor");

	Params::URadialSlider_SetCenterBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.SetAngularOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float URadialSlider::SetAngularOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "SetAngularOffset");

	Params::URadialSlider_SetAngularOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedWidgets.RadialSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URadialSlider::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "GetValue");

	Params::URadialSlider_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URadialSlider::GetNormalizedSliderHandlePosition(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "GetNormalizedSliderHandlePosition");

	Params::URadialSlider_GetNormalizedSliderHandlePosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URadialSlider::GetCustomDefaultValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialSlider", "GetCustomDefaultValue");

	Params::URadialSlider_GetCustomDefaultValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


