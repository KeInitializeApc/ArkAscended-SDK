#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioWidgets.AudioMeter
// (None)

class UClass* UAudioMeter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioMeter");

	return Clss;
}


// AudioMeter AudioWidgets.Default__AudioMeter
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioMeter* UAudioMeter::GetDefaultObj()
{
	static class UAudioMeter* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioMeter*>(UAudioMeter::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioWidgets.AudioMeter.SetMeterValueColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioMeter::SetMeterValueColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterValueColor");

	Params::UAudioMeter_SetMeterValueColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioMeter::SetMeterScaleLabelColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterScaleLabelColor");

	Params::UAudioMeter_SetMeterScaleLabelColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioMeter.SetMeterScaleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioMeter::SetMeterScaleColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterScaleColor");

	Params::UAudioMeter_SetMeterScaleColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioMeter.SetMeterPeakColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioMeter::SetMeterPeakColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterPeakColor");

	Params::UAudioMeter_SetMeterPeakColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioMeter.SetMeterClippingColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioMeter::SetMeterClippingColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterClippingColor");

	Params::UAudioMeter_SetMeterClippingColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioMeter.SetMeterChannelInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMeterChannelInfo>   InMeterChannelInfo                                               (Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UAudioMeter::SetMeterChannelInfo(TArray<struct FMeterChannelInfo>* InMeterChannelInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterChannelInfo");

	Params::UAudioMeter_SetMeterChannelInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMeterChannelInfo != nullptr)
		*InMeterChannelInfo = std::move(Parms.InMeterChannelInfo);

}


// Function AudioWidgets.AudioMeter.SetMeterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioMeter::SetMeterBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterBackgroundColor");

	Params::UAudioMeter_SetMeterBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioMeter.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioMeter::SetBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetBackgroundColor");

	Params::UAudioMeter_SetBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
// (Public, Delegate)
// Parameters:
// TArray<struct FMeterChannelInfo>   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMeter::GetMeterChannelInfo__DelegateSignature(TArray<struct FMeterChannelInfo>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "GetMeterChannelInfo__DelegateSignature");

	Params::UAudioMeter_GetMeterChannelInfo__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AudioWidgets.AudioMeter.GetMeterChannelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMeterChannelInfo>   ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMeter::GetMeterChannelInfo(TArray<struct FMeterChannelInfo>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "GetMeterChannelInfo");

	Params::UAudioMeter_GetMeterChannelInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Class AudioWidgets.AudioRadialSlider
// (None)

class UClass* UAudioRadialSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioRadialSlider");

	return Clss;
}


// AudioRadialSlider AudioWidgets.Default__AudioRadialSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioRadialSlider* UAudioRadialSlider::GetDefaultObj()
{
	static class UAudioRadialSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioRadialSlider*>(UAudioRadialSlider::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioWidgets.AudioRadialSlider.SetWidgetLayout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAudioRadialSliderLayoutInLayout                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioRadialSlider::SetWidgetLayout(enum class EAudioRadialSliderLayout* InLayout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetWidgetLayout");

	Params::UAudioRadialSlider_SetWidgetLayout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLayout != nullptr)
		*InLayout = Parms.InLayout;

}


// Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReadOnly                                                      (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UAudioRadialSlider::SetValueTextReadOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetValueTextReadOnly");

	Params::UAudioRadialSlider_SetValueTextReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReadOnly                                                      (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UAudioRadialSlider::SetUnitsTextReadOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetUnitsTextReadOnly");

	Params::UAudioRadialSlider_SetUnitsTextReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.SetUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Units                                                            (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioRadialSlider::SetUnitsText(class FText* Units)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetUnitsText");

	Params::UAudioRadialSlider_SetUnitsText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Units != nullptr)
		*Units = Parms.Units;

}


// Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColor                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FSlateColor UAudioRadialSlider::SetTextLabelBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetTextLabelBackgroundColor");

	Params::UAudioRadialSlider_SetTextLabelBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.SetSliderThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InThickness                                                      (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioRadialSlider::SetSliderThickness(float* InThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetSliderThickness");

	Params::UAudioRadialSlider_SetSliderThickness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InThickness != nullptr)
		*InThickness = Parms.InThickness;

}


// Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioRadialSlider::SetSliderProgressColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetSliderProgressColor");

	Params::UAudioRadialSlider_SetSliderProgressColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioRadialSlider::SetSliderBarColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetSliderBarColor");

	Params::UAudioRadialSlider_SetSliderBarColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.SetShowUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowUnitsText                                                   (ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioRadialSlider::SetShowUnitsText(bool* bShowUnitsText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetShowUnitsText");

	Params::UAudioRadialSlider_SetShowUnitsText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShowUnitsText != nullptr)
		*bShowUnitsText = Parms.bShowUnitsText;

}


// Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowLabelOnlyOnHover                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioRadialSlider::SetShowLabelOnlyOnHover(bool* bShowLabelOnlyOnHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetShowLabelOnlyOnHover");

	Params::UAudioRadialSlider_SetShowLabelOnlyOnHover_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShowLabelOnlyOnHover != nullptr)
		*bShowLabelOnlyOnHover = Parms.bShowLabelOnlyOnHover;

}


// Function AudioWidgets.AudioRadialSlider.SetOutputRange
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InOutputRange                                                    (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioRadialSlider::SetOutputRange(struct FVector2D* InOutputRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetOutputRange");

	Params::UAudioRadialSlider_SetOutputRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOutputRange != nullptr)
		*InOutputRange = std::move(Parms.InOutputRange);

}


// Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InHandStartEndRatio                                              (Edit, ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioRadialSlider::SetHandStartEndRatio(struct FVector2D* InHandStartEndRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetHandStartEndRatio");

	Params::UAudioRadialSlider_SetHandStartEndRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InHandStartEndRatio != nullptr)
		*InHandStartEndRatio = std::move(Parms.InHandStartEndRatio);

}


// Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioRadialSlider::SetCenterBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetCenterBackgroundColor");

	Params::UAudioRadialSlider_SetCenterBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.GetSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              OutputValue                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioRadialSlider::GetSliderValue(float OutputValue, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "GetSliderValue");

	Params::UAudioRadialSlider_GetSliderValue_Params Parms{};

	Parms.OutputValue = OutputValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.GetOutputValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSliderValue                                                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioRadialSlider::GetOutputValue(float InSliderValue, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "GetOutputValue");

	Params::UAudioRadialSlider_GetOutputValue_Params Parms{};

	Parms.InSliderValue = InSliderValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AudioWidgets.AudioVolumeRadialSlider
// (None)

class UClass* UAudioVolumeRadialSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioVolumeRadialSlider");

	return Clss;
}


// AudioVolumeRadialSlider AudioWidgets.Default__AudioVolumeRadialSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioVolumeRadialSlider* UAudioVolumeRadialSlider::GetDefaultObj()
{
	static class UAudioVolumeRadialSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioVolumeRadialSlider*>(UAudioVolumeRadialSlider::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWidgets.AudioFrequencyRadialSlider
// (None)

class UClass* UAudioFrequencyRadialSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioFrequencyRadialSlider");

	return Clss;
}


// AudioFrequencyRadialSlider AudioWidgets.Default__AudioFrequencyRadialSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioFrequencyRadialSlider* UAudioFrequencyRadialSlider::GetDefaultObj()
{
	static class UAudioFrequencyRadialSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioFrequencyRadialSlider*>(UAudioFrequencyRadialSlider::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWidgets.AudioSliderBase
// (None)

class UClass* UAudioSliderBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioSliderBase");

	return Clss;
}


// AudioSliderBase AudioWidgets.Default__AudioSliderBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioSliderBase* UAudioSliderBase::GetDefaultObj()
{
	static class UAudioSliderBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioSliderBase*>(UAudioSliderBase::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioSliderBase::SetWidgetBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetWidgetBackgroundColor");

	Params::UAudioSliderBase_SetWidgetBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReadOnly                                                      (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UAudioSliderBase::SetValueTextReadOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetValueTextReadOnly");

	Params::UAudioSliderBase_SetValueTextReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReadOnly                                                      (ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UAudioSliderBase::SetUnitsTextReadOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetUnitsTextReadOnly");

	Params::UAudioSliderBase_SetUnitsTextReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.SetUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Units                                                            (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioSliderBase::SetUnitsText(class FText* Units)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetUnitsText");

	Params::UAudioSliderBase_SetUnitsText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Units != nullptr)
		*Units = Parms.Units;

}


// Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColor                                                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FSlateColor UAudioSliderBase::SetTextLabelBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetTextLabelBackgroundColor");

	Params::UAudioSliderBase_SetTextLabelBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.SetSliderThumbColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioSliderBase::SetSliderThumbColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetSliderThumbColor");

	Params::UAudioSliderBase_SetSliderThumbColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioSliderBase::SetSliderBarColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetSliderBarColor");

	Params::UAudioSliderBase_SetSliderBarColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)

struct FLinearColor UAudioSliderBase::SetSliderBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetSliderBackgroundColor");

	Params::UAudioSliderBase_SetSliderBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.SetShowUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowUnitsText                                                   (ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioSliderBase::SetShowUnitsText(bool* bShowUnitsText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetShowUnitsText");

	Params::UAudioSliderBase_SetShowUnitsText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShowUnitsText != nullptr)
		*bShowUnitsText = Parms.bShowUnitsText;

}


// Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowLabelOnlyOnHover                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioSliderBase::SetShowLabelOnlyOnHover(bool* bShowLabelOnlyOnHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetShowLabelOnlyOnHover");

	Params::UAudioSliderBase_SetShowLabelOnlyOnHover_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShowLabelOnlyOnHover != nullptr)
		*bShowLabelOnlyOnHover = Parms.bShowLabelOnlyOnHover;

}


// Function AudioWidgets.AudioSliderBase.GetSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              OutputValue                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioSliderBase::GetSliderValue(float OutputValue, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "GetSliderValue");

	Params::UAudioSliderBase_GetSliderValue_Params Parms{};

	Parms.OutputValue = OutputValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.GetOutputValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSliderValue                                                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioSliderBase::GetOutputValue(float InSliderValue, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "GetOutputValue");

	Params::UAudioSliderBase_GetOutputValue_Params Parms{};

	Parms.InSliderValue = InSliderValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.GetLinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              OutputValue                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioSliderBase::GetLinValue(float OutputValue, float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "GetLinValue");

	Params::UAudioSliderBase_GetLinValue_Params Parms{};

	Parms.OutputValue = OutputValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AudioWidgets.AudioSlider
// (None)

class UClass* UAudioSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioSlider");

	return Clss;
}


// AudioSlider AudioWidgets.Default__AudioSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioSlider* UAudioSlider::GetDefaultObj()
{
	static class UAudioSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioSlider*>(UAudioSlider::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWidgets.AudioVolumeSlider
// (None)

class UClass* UAudioVolumeSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioVolumeSlider");

	return Clss;
}


// AudioVolumeSlider AudioWidgets.Default__AudioVolumeSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioVolumeSlider* UAudioVolumeSlider::GetDefaultObj()
{
	static class UAudioVolumeSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioVolumeSlider*>(UAudioVolumeSlider::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioWidgets.AudioFrequencySlider
// (None)

class UClass* UAudioFrequencySlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioFrequencySlider");

	return Clss;
}


// AudioFrequencySlider AudioWidgets.Default__AudioFrequencySlider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioFrequencySlider* UAudioFrequencySlider::GetDefaultObj()
{
	static class UAudioFrequencySlider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioFrequencySlider*>(UAudioFrequencySlider::StaticClass()->DefaultObject);

	return Default;
}

}

