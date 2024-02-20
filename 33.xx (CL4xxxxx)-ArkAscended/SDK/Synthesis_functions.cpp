#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Synthesis.AudioImpulseResponse
// (None)

class UClass* UAudioImpulseResponse::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioImpulseResponse");

	return Clss;
}


// AudioImpulseResponse Synthesis.Default__AudioImpulseResponse
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioImpulseResponse* UAudioImpulseResponse::GetDefaultObj()
{
	static class UAudioImpulseResponse* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioImpulseResponse*>(UAudioImpulseResponse::StaticClass()->DefaultObject);

	return Default;
}


// Class Synthesis.ModularSynthPresetBank
// (None)

class UClass* UModularSynthPresetBank::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularSynthPresetBank");

	return Clss;
}


// ModularSynthPresetBank Synthesis.Default__ModularSynthPresetBank
// (Public, ClassDefaultObject, ArchetypeObject)

class UModularSynthPresetBank* UModularSynthPresetBank::GetDefaultObj()
{
	static class UModularSynthPresetBank* Default = nullptr;

	if (!Default)
		Default = static_cast<UModularSynthPresetBank*>(UModularSynthPresetBank::StaticClass()->DefaultObject);

	return Default;
}


// Class Synthesis.ModularSynthLibrary
// (None)

class UClass* UModularSynthLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularSynthLibrary");

	return Clss;
}


// ModularSynthLibrary Synthesis.Default__ModularSynthLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModularSynthLibrary* UModularSynthLibrary::GetDefaultObj()
{
	static class UModularSynthLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModularSynthLibrary*>(UModularSynthLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UModularSynthPresetBank*     InBank                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// struct FModularSynthPreset         Preset                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      PresetName                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthLibrary::AddModularSynthPresetToBankAsset(class UModularSynthPresetBank** InBank, struct FModularSynthPreset* Preset, class FString* PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthLibrary", "AddModularSynthPresetToBankAsset");

	Params::UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InBank != nullptr)
		*InBank = Parms.InBank;

	if (Preset != nullptr)
		*Preset = std::move(Parms.Preset);

	if (PresetName != nullptr)
		*PresetName = std::move(Parms.PresetName);

}


// Class Synthesis.ModularSynthComponent
// (SceneComponent)

class UClass* UModularSynthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularSynthComponent");

	return Clss;
}


// ModularSynthComponent Synthesis.Default__ModularSynthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UModularSynthComponent* UModularSynthComponent::GetDefaultObj()
{
	static class UModularSynthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UModularSynthComponent*>(UModularSynthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.ModularSynthComponent.SetSynthPreset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModularSynthPreset         SynthPreset                                                      (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FModularSynthPreset UModularSynthComponent::SetSynthPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSynthPreset");

	Params::UModularSynthComponent_SetSynthPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetSustainGain(float SustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSustainGain");

	Params::UModularSynthComponent_SetSustainGain_Params Parms{};

	Parms.SustainGain = SustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayWetlevel                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetStereoDelayWetlevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayWetlevel");

	Params::UModularSynthComponent_SetStereoDelayWetlevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayTimeMsec                                                    (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetStereoDelayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayTime");

	Params::UModularSynthComponent_SetStereoDelayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayRatio                                                       (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetStereoDelayRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayRatio");

	Params::UModularSynthComponent_SetStereoDelayRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthStereoDelayMode   StereoDelayMode                                                  (BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayMode");

	Params::UModularSynthComponent_SetStereoDelayMode_Params Parms{};

	Parms.StereoDelayMode = StereoDelayMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               StereoDelayEnabled                                               (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool UModularSynthComponent::SetStereoDelayIsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayIsEnabled");

	Params::UModularSynthComponent_SetStereoDelayIsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayFeedback                                                    (BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetStereoDelayFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayFeedback");

	Params::UModularSynthComponent_SetStereoDelayFeedback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Spread                                                           (ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetSpread(float* Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSpread");

	Params::UModularSynthComponent_SetSpread_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Spread != nullptr)
		*Spread = Parms.Spread;

}


// Function Synthesis.ModularSynthComponent.SetReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReleaseTimeMsec                                                  (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetReleaseTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetReleaseTime");

	Params::UModularSynthComponent_SetReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetPortamento
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Portamento                                                       (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetPortamento(float* Portamento)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPortamento");

	Params::UModularSynthComponent_SetPortamento_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Portamento != nullptr)
		*Portamento = Parms.Portamento;

}


// Function Synthesis.ModularSynthComponent.SetPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PitchBend                                                        (ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetPitchBend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPitchBend");

	Params::UModularSynthComponent_SetPitchBend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetPan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pan                                                              (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetPan(float* Pan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPan");

	Params::UModularSynthComponent_SetPan_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pan != nullptr)
		*Pan = Parms.Pan;

}


// Function Synthesis.ModularSynthComponent.SetOscType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// enum class ESynth1OscType          OscType                                                          (Edit, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class ESynth1OscType UModularSynthComponent::SetOscType(int32* OscIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscType");

	Params::UModularSynthComponent_SetOscType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OscIndex != nullptr)
		*OscIndex = Parms.OscIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSynced                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool UModularSynthComponent::SetOscSync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscSync");

	Params::UModularSynthComponent_SetOscSync_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscSemitones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              Semitones                                                        (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscSemitones(int32* OscIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscSemitones");

	Params::UModularSynthComponent_SetOscSemitones_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OscIndex != nullptr)
		*OscIndex = Parms.OscIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              Pulsewidth                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscPulsewidth(int32* OscIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscPulsewidth");

	Params::UModularSynthComponent_SetOscPulsewidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OscIndex != nullptr)
		*OscIndex = Parms.OscIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscOctave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              Octave                                                           (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscOctave(int32* OscIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscOctave");

	Params::UModularSynthComponent_SetOscOctave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OscIndex != nullptr)
		*OscIndex = Parms.OscIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              OscGainMod                                                       (Edit, BlueprintVisible, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscGainMod(int32* OscIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscGainMod");

	Params::UModularSynthComponent_SetOscGainMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OscIndex != nullptr)
		*OscIndex = Parms.OscIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              OscGain                                                          (ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscGain(int32* OscIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscGain");

	Params::UModularSynthComponent_SetOscGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OscIndex != nullptr)
		*OscIndex = Parms.OscIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              OscFreqMod                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscFrequencyMod(int32* OscIndex, float* OscFreqMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscFrequencyMod");

	Params::UModularSynthComponent_SetOscFrequencyMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OscIndex != nullptr)
		*OscIndex = Parms.OscIndex;

	if (OscFreqMod != nullptr)
		*OscFreqMod = Parms.OscFreqMod;

}


// Function Synthesis.ModularSynthComponent.SetOscCents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              Cents                                                            (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscCents(int32* OscIndex, float* Cents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscCents");

	Params::UModularSynthComponent_SetOscCents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OscIndex != nullptr)
		*OscIndex = Parms.OscIndex;

	if (Cents != nullptr)
		*Cents = Parms.Cents;

}


// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetModEnvSustainGain(float SustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvSustainGain");

	Params::UModularSynthComponent_SetModEnvSustainGain_Params Parms{};

	Parms.SustainGain = SustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Release                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst)

void UModularSynthComponent::SetModEnvReleaseTime(float Release)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvReleaseTime");

	Params::UModularSynthComponent_SetModEnvReleaseTime_Params Parms{};

	Parms.Release = Release;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetModEnvPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthModEnvPatch       InPatchType                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvPatch(enum class ESynthModEnvPatch* InPatchType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvPatch");

	Params::UModularSynthComponent_SetModEnvPatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPatchType != nullptr)
		*InPatchType = Parms.InPatchType;

}


// Function Synthesis.ModularSynthComponent.SetModEnvInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UModularSynthComponent::SetModEnvInvert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvInvert");

	Params::UModularSynthComponent_SetModEnvInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)

float UModularSynthComponent::SetModEnvDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDepth");

	Params::UModularSynthComponent_SetModEnvDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvDecayTime(float* DecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDecayTime");

	Params::UModularSynthComponent_SetModEnvDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DecayTimeMsec != nullptr)
		*DecayTimeMsec = Parms.DecayTimeMsec;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthModEnvBiasPatch   InPatchType                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch* InPatchType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasPatch");

	Params::UModularSynthComponent_SetModEnvBiasPatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPatchType != nullptr)
		*InPatchType = Parms.InPatchType;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UModularSynthComponent::SetModEnvBiasInvert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasInvert");

	Params::UModularSynthComponent_SetModEnvBiasInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetModEnvAttackTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvAttackTime");

	Params::UModularSynthComponent_SetModEnvAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// enum class ESynthLFOType           LFOType                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

enum class ESynthLFOType UModularSynthComponent::SetLFOType(int32* LFOIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOType");

	Params::UModularSynthComponent_SetLFOType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LFOIndex != nullptr)
		*LFOIndex = Parms.LFOIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// enum class ESynthLFOPatchType      LFOPatchType                                                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetLFOPatch(int32* LFOIndex, enum class ESynthLFOPatchType* LFOPatchType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOPatch");

	Params::UModularSynthComponent_SetLFOPatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LFOIndex != nullptr)
		*LFOIndex = Parms.LFOIndex;

	if (LFOPatchType != nullptr)
		*LFOPatchType = Parms.LFOPatchType;

}


// Function Synthesis.ModularSynthComponent.SetLFOMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// enum class ESynthLFOMode           LFOMode                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetLFOMode(int32* LFOIndex, enum class ESynthLFOMode* LFOMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOMode");

	Params::UModularSynthComponent_SetLFOMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LFOIndex != nullptr)
		*LFOIndex = Parms.LFOIndex;

	if (LFOMode != nullptr)
		*LFOMode = Parms.LFOMode;

}


// Function Synthesis.ModularSynthComponent.SetLFOGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              GainMod                                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetLFOGainMod(int32* LFOIndex, float* GainMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOGainMod");

	Params::UModularSynthComponent_SetLFOGainMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LFOIndex != nullptr)
		*LFOIndex = Parms.LFOIndex;

	if (GainMod != nullptr)
		*GainMod = Parms.GainMod;

}


// Function Synthesis.ModularSynthComponent.SetLFOGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              Gain                                                             (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetLFOGain(int32* LFOIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOGain");

	Params::UModularSynthComponent_SetLFOGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LFOIndex != nullptr)
		*LFOIndex = Parms.LFOIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              FrequencyModHz                                                   (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetLFOFrequencyMod(int32* LFOIndex, float* FrequencyModHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequencyMod");

	Params::UModularSynthComponent_SetLFOFrequencyMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LFOIndex != nullptr)
		*LFOIndex = Parms.LFOIndex;

	if (FrequencyModHz != nullptr)
		*FrequencyModHz = Parms.FrequencyModHz;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// float                              FrequencyHz                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetLFOFrequency(int32* LFOIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequency");

	Params::UModularSynthComponent_SetLFOFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LFOIndex != nullptr)
		*LFOIndex = Parms.LFOIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetGainDb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              GainDb                                                           (Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetGainDb(float* GainDb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetGainDb");

	Params::UModularSynthComponent_SetGainDb_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GainDb != nullptr)
		*GainDb = Parms.GainDb;

}


// Function Synthesis.ModularSynthComponent.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthFilterType        FilterType                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetFilterType(enum class ESynthFilterType FilterType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterType");

	Params::UModularSynthComponent_SetFilterType_Params Parms{};

	Parms.FilterType = FilterType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetFilterQMod(float FilterQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQMod");

	Params::UModularSynthComponent_SetFilterQMod_Params Parms{};

	Parms.FilterQ = FilterQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetFilterQ(float FilterQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQ");

	Params::UModularSynthComponent_SetFilterQ_Params Parms{};

	Parms.FilterQ = FilterQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetFilterFrequencyMod(float* FilterFrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequencyMod");

	Params::UModularSynthComponent_SetFilterFrequencyMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterFrequencyHz != nullptr)
		*FilterFrequencyHz = Parms.FilterFrequencyHz;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetFilterFrequency(float* FilterFrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequency");

	Params::UModularSynthComponent_SetFilterFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterFrequencyHz != nullptr)
		*FilterFrequencyHz = Parms.FilterFrequencyHz;

}


// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthFilterAlgorithm   FilterAlgorithm                                                  (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterAlgorithm");

	Params::UModularSynthComponent_SetFilterAlgorithm_Params Parms{};

	Parms.FilterAlgorithm = FilterAlgorithm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetEnableUnison
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               EnableUnison                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetEnableUnison(bool* EnableUnison)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableUnison");

	Params::UModularSynthComponent_SetEnableUnison_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EnableUnison != nullptr)
		*EnableUnison = Parms.EnableUnison;

}


// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               RetriggerEnabled                                                 (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetEnableRetrigger(bool* RetriggerEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableRetrigger");

	Params::UModularSynthComponent_SetEnableRetrigger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RetriggerEnabled != nullptr)
		*RetriggerEnabled = Parms.RetriggerEnabled;

}


// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnablePolyphony                                                 (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetEnablePolyphony(bool* bEnablePolyphony)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnablePolyphony");

	Params::UModularSynthComponent_SetEnablePolyphony_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnablePolyphony != nullptr)
		*bEnablePolyphony = Parms.bEnablePolyphony;

}


// Function Synthesis.ModularSynthComponent.SetEnablePatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPatchId                    PatchId                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm)
// bool                               bIsEnabled                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPatchId UModularSynthComponent::SetEnablePatch(bool* bIsEnabled, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnablePatch");

	Params::UModularSynthComponent_SetEnablePatch_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsEnabled != nullptr)
		*bIsEnabled = Parms.bIsEnabled;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetEnableLegato
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               LegatoEnabled                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetEnableLegato(bool* LegatoEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableLegato");

	Params::UModularSynthComponent_SetEnableLegato_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LegatoEnabled != nullptr)
		*LegatoEnabled = Parms.LegatoEnabled;

}


// Function Synthesis.ModularSynthComponent.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetDecayTime(float* DecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetDecayTime");

	Params::UModularSynthComponent_SetDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DecayTimeMsec != nullptr)
		*DecayTimeMsec = Parms.DecayTimeMsec;

}


// Function Synthesis.ModularSynthComponent.SetChorusFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Frequency                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetChorusFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusFrequency");

	Params::UModularSynthComponent_SetChorusFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetChorusFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Feedback                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetChorusFeedback(float* Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusFeedback");

	Params::UModularSynthComponent_SetChorusFeedback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Feedback != nullptr)
		*Feedback = Parms.Feedback;

}


// Function Synthesis.ModularSynthComponent.SetChorusEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               EnableChorus                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetChorusEnabled(bool* EnableChorus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusEnabled");

	Params::UModularSynthComponent_SetChorusEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EnableChorus != nullptr)
		*EnableChorus = Parms.EnableChorus;

}


// Function Synthesis.ModularSynthComponent.SetChorusDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)

float UModularSynthComponent::SetChorusDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusDepth");

	Params::UModularSynthComponent_SetChorusDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetAttackTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetAttackTime");

	Params::UModularSynthComponent_SetAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// int32                              Velocity                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)

float UModularSynthComponent::NoteOn(float* Note)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOn");

	Params::UModularSynthComponent_NoteOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Note != nullptr)
		*Note = Parms.Note;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// bool                               bAllNotesOff                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bKillAllNotes                                                    (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::NoteOff(float* Note, bool* bAllNotesOff, bool* bKillAllNotes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOff");

	Params::UModularSynthComponent_NoteOff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Note != nullptr)
		*Note = Parms.Note;

	if (bAllNotesOff != nullptr)
		*bAllNotesOff = Parms.bAllNotesOff;

	if (bKillAllNotes != nullptr)
		*bKillAllNotes = Parms.bKillAllNotes;

}


// Function Synthesis.ModularSynthComponent.CreatePatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ESynth1PatchSource      PatchSource                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FSynth1PatchCable>   PatchCables                                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               bEnableByDefault                                                 (Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// struct FPatchId                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UModularSynthComponent::CreatePatch(enum class ESynth1PatchSource* PatchSource, TArray<struct FSynth1PatchCable>* PatchCables, bool* bEnableByDefault, const struct FPatchId& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "CreatePatch");

	Params::UModularSynthComponent_CreatePatch_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PatchSource != nullptr)
		*PatchSource = Parms.PatchSource;

	if (PatchCables != nullptr)
		*PatchCables = std::move(Parms.PatchCables);

	if (bEnableByDefault != nullptr)
		*bEnableByDefault = Parms.bEnableByDefault;

}


// Class Synthesis.SourceEffectBitCrusherPreset
// (None)

class UClass* USourceEffectBitCrusherPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectBitCrusherPreset");

	return Clss;
}


// SourceEffectBitCrusherPreset Synthesis.Default__SourceEffectBitCrusherPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectBitCrusherPreset* USourceEffectBitCrusherPreset::GetDefaultObj()
{
	static class USourceEffectBitCrusherPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectBitCrusherPreset*>(USourceEffectBitCrusherPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectBitCrusherBaseSettingsSettings                                                         (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

void USourceEffectBitCrusherPreset::SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSettings");

	Params::USourceEffectBitCrusherPreset_SetSettings_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   InModulators                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

TSet<class USoundModulatorBase*> USourceEffectBitCrusherPreset::SetSampleRateModulators()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulators");

	Params::USourceEffectBitCrusherPreset_SetSampleRateModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectBitCrusherPreset::SetSampleRateModulator(class USoundModulatorBase** Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulator");

	Params::USourceEffectBitCrusherPreset_SetSampleRateModulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulator != nullptr)
		*Modulator = Parms.Modulator;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SampleRate                                                       (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, DuplicateTransient)

float USourceEffectBitCrusherPreset::SetSampleRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRate");

	Params::USourceEffectBitCrusherPreset_SetSampleRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectBitCrusherSettingsModulationSettings                                               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FSourceEffectBitCrusherSettings USourceEffectBitCrusherPreset::SetModulationSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetModulationSettings");

	Params::USourceEffectBitCrusherPreset_SetModulationSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Bits                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USourceEffectBitCrusherPreset::SetBits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBits");

	Params::USourceEffectBitCrusherPreset_SetBits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   InModulators                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

TSet<class USoundModulatorBase*> USourceEffectBitCrusherPreset::SetBitModulators()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulators");

	Params::USourceEffectBitCrusherPreset_SetBitModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectBitCrusherPreset::SetBitModulator(class USoundModulatorBase** Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulator");

	Params::USourceEffectBitCrusherPreset_SetBitModulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulator != nullptr)
		*Modulator = Parms.Modulator;

}


// Class Synthesis.SourceEffectChorusPreset
// (None)

class UClass* USourceEffectChorusPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectChorusPreset");

	return Clss;
}


// SourceEffectChorusPreset Synthesis.Default__SourceEffectChorusPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectChorusPreset* USourceEffectChorusPreset::GetDefaultObj()
{
	static class USourceEffectChorusPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectChorusPreset*>(USourceEffectChorusPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectChorusPreset.SetWetModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetWetModulators(TSet<class USoundModulatorBase*>* Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWetModulators");

	Params::USourceEffectChorusPreset_SetWetModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulators != nullptr)
		*Modulators = Parms.Modulators;

}


// Function Synthesis.SourceEffectChorusPreset.SetWetModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetWetModulator(class USoundModulatorBase** Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWetModulator");

	Params::USourceEffectChorusPreset_SetWetModulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulator != nullptr)
		*Modulator = Parms.Modulator;

}


// Function Synthesis.SourceEffectChorusPreset.SetWet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              WetAmount                                                        (BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float USourceEffectChorusPreset::SetWet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWet");

	Params::USourceEffectChorusPreset_SetWet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetSpreadModulators(TSet<class USoundModulatorBase*>* Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpreadModulators");

	Params::USourceEffectChorusPreset_SetSpreadModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulators != nullptr)
		*Modulators = Parms.Modulators;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetSpreadModulator(class USoundModulatorBase** Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpreadModulator");

	Params::USourceEffectChorusPreset_SetSpreadModulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulator != nullptr)
		*Modulator = Parms.Modulator;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Spread                                                           (ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetSpread(float* Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpread");

	Params::USourceEffectChorusPreset_SetSpread_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Spread != nullptr)
		*Spread = Parms.Spread;

}


// Function Synthesis.SourceEffectChorusPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusBaseSettingsSettings                                                         (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

void USourceEffectChorusPreset::SetSettings(const struct FSourceEffectChorusBaseSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSettings");

	Params::USourceEffectChorusPreset_SetSettings_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusSettings ModulationSettings                                               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FSourceEffectChorusSettings USourceEffectChorusPreset::SetModulationSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetModulationSettings");

	Params::USourceEffectChorusPreset_SetModulationSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetFrequencyModulators(TSet<class USoundModulatorBase*>* Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequencyModulators");

	Params::USourceEffectChorusPreset_SetFrequencyModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulators != nullptr)
		*Modulators = Parms.Modulators;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetFrequencyModulator(class USoundModulatorBase** Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequencyModulator");

	Params::USourceEffectChorusPreset_SetFrequencyModulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulator != nullptr)
		*Modulator = Parms.Modulator;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Frequency                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float USourceEffectChorusPreset::SetFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequency");

	Params::USourceEffectChorusPreset_SetFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetFeedbackModulators(TSet<class USoundModulatorBase*>* Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedbackModulators");

	Params::USourceEffectChorusPreset_SetFeedbackModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulators != nullptr)
		*Modulators = Parms.Modulators;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetFeedbackModulator(class USoundModulatorBase** Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedbackModulator");

	Params::USourceEffectChorusPreset_SetFeedbackModulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulator != nullptr)
		*Modulator = Parms.Modulator;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Feedback                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetFeedback(float* Feedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedback");

	Params::USourceEffectChorusPreset_SetFeedback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Feedback != nullptr)
		*Feedback = Parms.Feedback;

}


// Function Synthesis.SourceEffectChorusPreset.SetDryModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetDryModulators(TSet<class USoundModulatorBase*>* Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDryModulators");

	Params::USourceEffectChorusPreset_SetDryModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulators != nullptr)
		*Modulators = Parms.Modulators;

}


// Function Synthesis.SourceEffectChorusPreset.SetDryModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetDryModulator(class USoundModulatorBase** Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDryModulator");

	Params::USourceEffectChorusPreset_SetDryModulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulator != nullptr)
		*Modulator = Parms.Modulator;

}


// Function Synthesis.SourceEffectChorusPreset.SetDry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DryAmount                                                        (ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float USourceEffectChorusPreset::SetDry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDry");

	Params::USourceEffectChorusPreset_SetDry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepthModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetDepthModulators(TSet<class USoundModulatorBase*>* Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepthModulators");

	Params::USourceEffectChorusPreset_SetDepthModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulators != nullptr)
		*Modulators = Parms.Modulators;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetDepthModulator(class USoundModulatorBase** Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepthModulator");

	Params::USourceEffectChorusPreset_SetDepthModulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modulator != nullptr)
		*Modulator = Parms.Modulator;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)

float USourceEffectChorusPreset::SetDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepth");

	Params::USourceEffectChorusPreset_SetDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectConvolutionReverbPreset
// (None)

class UClass* USourceEffectConvolutionReverbPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectConvolutionReverbPreset");

	return Clss;
}


// SourceEffectConvolutionReverbPreset Synthesis.Default__SourceEffectConvolutionReverbPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectConvolutionReverbPreset* USourceEffectConvolutionReverbPreset::GetDefaultObj()
{
	static class USourceEffectConvolutionReverbPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectConvolutionReverbPreset*>(USourceEffectConvolutionReverbPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectConvolutionReverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectConvolutionReverbSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectConvolutionReverbSettings USourceEffectConvolutionReverbPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetSettings");

	Params::USourceEffectConvolutionReverbPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioImpulseResponse*       InImpulseResponse                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class UAudioImpulseResponse* USourceEffectConvolutionReverbPreset::SetImpulseResponse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::USourceEffectConvolutionReverbPreset_SetImpulseResponse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectDynamicsProcessorPreset
// (None)

class UClass* USourceEffectDynamicsProcessorPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectDynamicsProcessorPreset");

	return Clss;
}


// SourceEffectDynamicsProcessorPreset Synthesis.Default__SourceEffectDynamicsProcessorPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectDynamicsProcessorPreset* USourceEffectDynamicsProcessorPreset::GetDefaultObj()
{
	static class USourceEffectDynamicsProcessorPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectDynamicsProcessorPreset*>(USourceEffectDynamicsProcessorPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectDynamicsProcessorSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectDynamicsProcessorSettings USourceEffectDynamicsProcessorPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectDynamicsProcessorPreset", "SetSettings");

	Params::USourceEffectDynamicsProcessorPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.EnvelopeFollowerListener
// (None)

class UClass* UEnvelopeFollowerListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvelopeFollowerListener");

	return Clss;
}


// EnvelopeFollowerListener Synthesis.Default__EnvelopeFollowerListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvelopeFollowerListener* UEnvelopeFollowerListener::GetDefaultObj()
{
	static class UEnvelopeFollowerListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvelopeFollowerListener*>(UEnvelopeFollowerListener::StaticClass()->DefaultObject);

	return Default;
}


// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// (None)

class UClass* USourceEffectEnvelopeFollowerPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectEnvelopeFollowerPreset");

	return Clss;
}


// SourceEffectEnvelopeFollowerPreset Synthesis.Default__SourceEffectEnvelopeFollowerPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectEnvelopeFollowerPreset* USourceEffectEnvelopeFollowerPreset::GetDefaultObj()
{
	static class USourceEffectEnvelopeFollowerPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectEnvelopeFollowerPreset*>(USourceEffectEnvelopeFollowerPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener** EnvelopeFollowerListener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "UnregisterEnvelopeFollowerListener");

	Params::USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EnvelopeFollowerListener != nullptr)
		*EnvelopeFollowerListener = Parms.EnvelopeFollowerListener;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectEnvelopeFollowerSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectEnvelopeFollowerSettings USourceEffectEnvelopeFollowerPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "SetSettings");

	Params::USourceEffectEnvelopeFollowerPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener** EnvelopeFollowerListener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "RegisterEnvelopeFollowerListener");

	Params::USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EnvelopeFollowerListener != nullptr)
		*EnvelopeFollowerListener = Parms.EnvelopeFollowerListener;

}


// Class Synthesis.SourceEffectEQPreset
// (None)

class UClass* USourceEffectEQPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectEQPreset");

	return Clss;
}


// SourceEffectEQPreset Synthesis.Default__SourceEffectEQPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectEQPreset* USourceEffectEQPreset::GetDefaultObj()
{
	static class USourceEffectEQPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectEQPreset*>(USourceEffectEQPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectEQPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectEQSettings     InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectEQSettings USourceEffectEQPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEQPreset", "SetSettings");

	Params::USourceEffectEQPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectFilterPreset
// (None)

class UClass* USourceEffectFilterPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectFilterPreset");

	return Clss;
}


// SourceEffectFilterPreset Synthesis.Default__SourceEffectFilterPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectFilterPreset* USourceEffectFilterPreset::GetDefaultObj()
{
	static class USourceEffectFilterPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectFilterPreset*>(USourceEffectFilterPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectFilterPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectFilterSettings InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectFilterSettings USourceEffectFilterPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectFilterPreset", "SetSettings");

	Params::USourceEffectFilterPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectFoldbackDistortionPreset
// (None)

class UClass* USourceEffectFoldbackDistortionPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectFoldbackDistortionPreset");

	return Clss;
}


// SourceEffectFoldbackDistortionPreset Synthesis.Default__SourceEffectFoldbackDistortionPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectFoldbackDistortionPreset* USourceEffectFoldbackDistortionPreset::GetDefaultObj()
{
	static class USourceEffectFoldbackDistortionPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectFoldbackDistortionPreset*>(USourceEffectFoldbackDistortionPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectFoldbackDistortionSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectFoldbackDistortionSettings USourceEffectFoldbackDistortionPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectFoldbackDistortionPreset", "SetSettings");

	Params::USourceEffectFoldbackDistortionPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectMidSideSpreaderPreset
// (None)

class UClass* USourceEffectMidSideSpreaderPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectMidSideSpreaderPreset");

	return Clss;
}


// SourceEffectMidSideSpreaderPreset Synthesis.Default__SourceEffectMidSideSpreaderPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectMidSideSpreaderPreset* USourceEffectMidSideSpreaderPreset::GetDefaultObj()
{
	static class USourceEffectMidSideSpreaderPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectMidSideSpreaderPreset*>(USourceEffectMidSideSpreaderPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectMidSideSpreaderSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectMidSideSpreaderSettings USourceEffectMidSideSpreaderPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectMidSideSpreaderPreset", "SetSettings");

	Params::USourceEffectMidSideSpreaderPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectMotionFilterPreset
// (None)

class UClass* USourceEffectMotionFilterPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectMotionFilterPreset");

	return Clss;
}


// SourceEffectMotionFilterPreset Synthesis.Default__SourceEffectMotionFilterPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectMotionFilterPreset* USourceEffectMotionFilterPreset::GetDefaultObj()
{
	static class USourceEffectMotionFilterPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectMotionFilterPreset*>(USourceEffectMotionFilterPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectMotionFilterPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectMotionFilterSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectMotionFilterSettings USourceEffectMotionFilterPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectMotionFilterPreset", "SetSettings");

	Params::USourceEffectMotionFilterPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectPannerPreset
// (None)

class UClass* USourceEffectPannerPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectPannerPreset");

	return Clss;
}


// SourceEffectPannerPreset Synthesis.Default__SourceEffectPannerPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectPannerPreset* USourceEffectPannerPreset::GetDefaultObj()
{
	static class USourceEffectPannerPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectPannerPreset*>(USourceEffectPannerPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectPannerPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectPannerSettings InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectPannerSettings USourceEffectPannerPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectPannerPreset", "SetSettings");

	Params::USourceEffectPannerPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectPhaserPreset
// (None)

class UClass* USourceEffectPhaserPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectPhaserPreset");

	return Clss;
}


// SourceEffectPhaserPreset Synthesis.Default__SourceEffectPhaserPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectPhaserPreset* USourceEffectPhaserPreset::GetDefaultObj()
{
	static class USourceEffectPhaserPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectPhaserPreset*>(USourceEffectPhaserPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectPhaserPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectPhaserSettings InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectPhaserSettings USourceEffectPhaserPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectPhaserPreset", "SetSettings");

	Params::USourceEffectPhaserPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectRingModulationPreset
// (None)

class UClass* USourceEffectRingModulationPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectRingModulationPreset");

	return Clss;
}


// SourceEffectRingModulationPreset Synthesis.Default__SourceEffectRingModulationPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectRingModulationPreset* USourceEffectRingModulationPreset::GetDefaultObj()
{
	static class USourceEffectRingModulationPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectRingModulationPreset*>(USourceEffectRingModulationPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectRingModulationSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectRingModulationSettings USourceEffectRingModulationPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectRingModulationPreset", "SetSettings");

	Params::USourceEffectRingModulationPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectSimpleDelayPreset
// (None)

class UClass* USourceEffectSimpleDelayPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectSimpleDelayPreset");

	return Clss;
}


// SourceEffectSimpleDelayPreset Synthesis.Default__SourceEffectSimpleDelayPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectSimpleDelayPreset* USourceEffectSimpleDelayPreset::GetDefaultObj()
{
	static class USourceEffectSimpleDelayPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectSimpleDelayPreset*>(USourceEffectSimpleDelayPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectSimpleDelaySettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectSimpleDelaySettings USourceEffectSimpleDelayPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectSimpleDelayPreset", "SetSettings");

	Params::USourceEffectSimpleDelayPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectStereoDelayPreset
// (None)

class UClass* USourceEffectStereoDelayPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectStereoDelayPreset");

	return Clss;
}


// SourceEffectStereoDelayPreset Synthesis.Default__SourceEffectStereoDelayPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectStereoDelayPreset* USourceEffectStereoDelayPreset::GetDefaultObj()
{
	static class USourceEffectStereoDelayPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectStereoDelayPreset*>(USourceEffectStereoDelayPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectStereoDelaySettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectStereoDelaySettings USourceEffectStereoDelayPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectStereoDelayPreset", "SetSettings");

	Params::USourceEffectStereoDelayPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SourceEffectWaveShaperPreset
// (None)

class UClass* USourceEffectWaveShaperPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SourceEffectWaveShaperPreset");

	return Clss;
}


// SourceEffectWaveShaperPreset Synthesis.Default__SourceEffectWaveShaperPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USourceEffectWaveShaperPreset* USourceEffectWaveShaperPreset::GetDefaultObj()
{
	static class USourceEffectWaveShaperPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USourceEffectWaveShaperPreset*>(USourceEffectWaveShaperPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectWaveShaperSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectWaveShaperSettings USourceEffectWaveShaperPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectWaveShaperPreset", "SetSettings");

	Params::USourceEffectWaveShaperPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SubmixEffectConvolutionReverbPreset
// (None)

class UClass* USubmixEffectConvolutionReverbPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectConvolutionReverbPreset");

	return Clss;
}


// SubmixEffectConvolutionReverbPreset Synthesis.Default__SubmixEffectConvolutionReverbPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectConvolutionReverbPreset* USubmixEffectConvolutionReverbPreset::GetDefaultObj()
{
	static class USubmixEffectConvolutionReverbPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectConvolutionReverbPreset*>(USubmixEffectConvolutionReverbPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectConvolutionReverbSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectConvolutionReverbSettings USubmixEffectConvolutionReverbPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetSettings");

	Params::USubmixEffectConvolutionReverbPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioImpulseResponse*       InImpulseResponse                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class UAudioImpulseResponse* USubmixEffectConvolutionReverbPreset::SetImpulseResponse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SubmixEffectDelayStatics
// (None)

class UClass* USubmixEffectDelayStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectDelayStatics");

	return Clss;
}


// SubmixEffectDelayStatics Synthesis.Default__SubmixEffectDelayStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectDelayStatics* USubmixEffectDelayStatics::GetDefaultObj()
{
	static class USubmixEffectDelayStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectDelayStatics*>(USubmixEffectDelayStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (Edit, ExportObject, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaximumDelayLength                                               (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USubmixEffectDelayStatics::SetMaximumDelayLength(const struct FSubmixEffectDelaySettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetMaximumDelayLength");

	Params::USubmixEffectDelayStatics_SetMaximumDelayLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayStatics.SetInterpolationTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (Edit, ExportObject, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              InterpolationTime                                                (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USubmixEffectDelayStatics::SetInterpolationTime(const struct FSubmixEffectDelaySettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetInterpolationTime");

	Params::USubmixEffectDelayStatics_SetInterpolationTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayStatics.SetDelayLength
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (Edit, ExportObject, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              DelayLength                                                      (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USubmixEffectDelayStatics::SetDelayLength(const struct FSubmixEffectDelaySettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetDelayLength");

	Params::USubmixEffectDelayStatics_SetDelayLength_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SubmixEffectDelayPreset
// (None)

class UClass* USubmixEffectDelayPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectDelayPreset");

	return Clss;
}


// SubmixEffectDelayPreset Synthesis.Default__SubmixEffectDelayPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectDelayPreset* USubmixEffectDelayPreset::GetDefaultObj()
{
	static class USubmixEffectDelayPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectDelayPreset*>(USubmixEffectDelayPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectDelaySettings USubmixEffectDelayPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetSettings");

	Params::USubmixEffectDelayPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float USubmixEffectDelayPreset::SetInterpolationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetInterpolationTime");

	Params::USubmixEffectDelayPreset_SetInterpolationTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayPreset.SetDelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Length                                                           (ConstParm, BlueprintVisible, Net, ReturnParm)

float USubmixEffectDelayPreset::SetDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetDelay");

	Params::USubmixEffectDelayPreset_SetDelay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectDelaySettings USubmixEffectDelayPreset::SetDefaultSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetDefaultSettings");

	Params::USubmixEffectDelayPreset_SetDefaultSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USubmixEffectDelayPreset::GetMaxDelayInMilliseconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "GetMaxDelayInMilliseconds");

	Params::USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Synthesis.SubmixEffectFilterPreset
// (None)

class UClass* USubmixEffectFilterPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectFilterPreset");

	return Clss;
}


// SubmixEffectFilterPreset Synthesis.Default__SubmixEffectFilterPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectFilterPreset* USubmixEffectFilterPreset::GetDefaultObj()
{
	static class USubmixEffectFilterPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectFilterPreset*>(USubmixEffectFilterPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectFilterPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectFilterSettings InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectFilterSettings USubmixEffectFilterPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetSettings");

	Params::USubmixEffectFilterPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESubmixFilterType       InType                                                           (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class ESubmixFilterType USubmixEffectFilterPreset::SetFilterType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterType");

	Params::USubmixEffectFilterPreset_SetFilterType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USubmixEffectFilterPreset::SetFilterQMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQMod");

	Params::USubmixEffectFilterPreset_SetFilterQMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USubmixEffectFilterPreset::SetFilterQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQ");

	Params::USubmixEffectFilterPreset_SetFilterQ_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (Edit, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequencyMod");

	Params::USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (Edit, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USubmixEffectFilterPreset::SetFilterCutoffFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequency");

	Params::USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESubmixFilterAlgorithm  InAlgorithm                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class ESubmixFilterAlgorithm USubmixEffectFilterPreset::SetFilterAlgorithm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterAlgorithm");

	Params::USubmixEffectFilterPreset_SetFilterAlgorithm_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SubmixEffectFlexiverbPreset
// (None)

class UClass* USubmixEffectFlexiverbPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectFlexiverbPreset");

	return Clss;
}


// SubmixEffectFlexiverbPreset Synthesis.Default__SubmixEffectFlexiverbPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectFlexiverbPreset* USubmixEffectFlexiverbPreset::GetDefaultObj()
{
	static class USubmixEffectFlexiverbPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectFlexiverbPreset*>(USubmixEffectFlexiverbPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectFlexiverbSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectFlexiverbSettings USubmixEffectFlexiverbPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFlexiverbPreset", "SetSettings");

	Params::USubmixEffectFlexiverbPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SubmixEffectMultibandCompressorPreset
// (None)

class UClass* USubmixEffectMultibandCompressorPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectMultibandCompressorPreset");

	return Clss;
}


// SubmixEffectMultibandCompressorPreset Synthesis.Default__SubmixEffectMultibandCompressorPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectMultibandCompressorPreset* USubmixEffectMultibandCompressorPreset::GetDefaultObj()
{
	static class USubmixEffectMultibandCompressorPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectMultibandCompressorPreset*>(USubmixEffectMultibandCompressorPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectMultibandCompressorSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectMultibandCompressorSettings USubmixEffectMultibandCompressorPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetSettings");

	Params::USubmixEffectMultibandCompressorPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*                Submix                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void USubmixEffectMultibandCompressorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetExternalSubmix");

	Params::USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Params Parms{};

	Parms.Submix = Submix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

class UAudioBus* USubmixEffectMultibandCompressorPreset::SetAudioBus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetAudioBus");

	Params::USubmixEffectMultibandCompressorPreset_SetAudioBus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USubmixEffectMultibandCompressorPreset::ResetKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "ResetKey");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Synthesis.SubmixEffectStereoDelayPreset
// (None)

class UClass* USubmixEffectStereoDelayPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectStereoDelayPreset");

	return Clss;
}


// SubmixEffectStereoDelayPreset Synthesis.Default__SubmixEffectStereoDelayPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectStereoDelayPreset* USubmixEffectStereoDelayPreset::GetDefaultObj()
{
	static class USubmixEffectStereoDelayPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectStereoDelayPreset*>(USubmixEffectStereoDelayPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectStereoDelaySettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectStereoDelaySettings USubmixEffectStereoDelayPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectStereoDelayPreset", "SetSettings");

	Params::USubmixEffectStereoDelayPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SubmixEffectStereoToQuadPreset
// (None)

class UClass* USubmixEffectStereoToQuadPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectStereoToQuadPreset");

	return Clss;
}


// SubmixEffectStereoToQuadPreset Synthesis.Default__SubmixEffectStereoToQuadPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectStereoToQuadPreset* USubmixEffectStereoToQuadPreset::GetDefaultObj()
{
	static class USubmixEffectStereoToQuadPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectStereoToQuadPreset*>(USubmixEffectStereoToQuadPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectStereoToQuadPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectStereoToQuadSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectStereoToQuadSettings USubmixEffectStereoToQuadPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectStereoToQuadPreset", "SetSettings");

	Params::USubmixEffectStereoToQuadPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SubmixEffectTapDelayPreset
// (None)

class UClass* USubmixEffectTapDelayPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectTapDelayPreset");

	return Clss;
}


// SubmixEffectTapDelayPreset Synthesis.Default__SubmixEffectTapDelayPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectTapDelayPreset* USubmixEffectTapDelayPreset::GetDefaultObj()
{
	static class USubmixEffectTapDelayPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectTapDelayPreset*>(USubmixEffectTapDelayPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTapDelayInfo               TapInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FTapDelayInfo USubmixEffectTapDelayPreset::SetTap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetTap");

	Params::USubmixEffectTapDelayPreset_SetTap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectTapDelaySettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FSubmixEffectTapDelaySettings USubmixEffectTapDelayPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetSettings");

	Params::USubmixEffectTapDelayPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float USubmixEffectTapDelayPreset::SetInterpolationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetInterpolationTime");

	Params::USubmixEffectTapDelayPreset_SetInterpolationTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 USubmixEffectTapDelayPreset::RemoveTap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "RemoveTap");

	Params::USubmixEffectTapDelayPreset_RemoveTap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      TapIds                                                           (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

TArray<int32> USubmixEffectTapDelayPreset::GetTapIds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTapIds");

	Params::USubmixEffectTapDelayPreset_GetTapIds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FTapDelayInfo               TapInfo                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FTapDelayInfo USubmixEffectTapDelayPreset::GetTap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTap");

	Params::USubmixEffectTapDelayPreset_GetTap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetMaxDelayInMilliseconds");

	Params::USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int32 USubmixEffectTapDelayPreset::AddTap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "AddTap");

	Params::USubmixEffectTapDelayPreset_AddTap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.GranularSynth
// (SceneComponent)

class UClass* UGranularSynth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GranularSynth");

	return Clss;
}


// GranularSynth Synthesis.Default__GranularSynth
// (Public, ClassDefaultObject, ArchetypeObject)

class UGranularSynth* UGranularSynth::GetDefaultObj()
{
	static class UGranularSynth* Default = nullptr;

	if (!Default)
		Default = static_cast<UGranularSynth*>(UGranularSynth::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.GranularSynth.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UGranularSynth::SetSustainGain(float SustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetSustainGain");

	Params::UGranularSynth_SetSustainGain_Params Parms{};

	Parms.SustainGain = SustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  InSoundWave                                                      (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class USoundWave* UGranularSynth::SetSoundWave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetSoundWave");

	Params::UGranularSynth_SetSoundWave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScrubMode                                                       (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool UGranularSynth::SetScrubMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetScrubMode");

	Params::UGranularSynth_SetScrubMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetReleaseTimeMsec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReleaseTimeMsec                                                  (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UGranularSynth::SetReleaseTimeMsec()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetReleaseTimeMsec");

	Params::UGranularSynth_SetReleaseTimeMsec_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetPlayheadTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPositionSec                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              LerpTimeSec                                                      (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// enum class EGranularSynthSeekType  SeekType                                                         (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class EGranularSynthSeekType UGranularSynth::SetPlayheadTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetPlayheadTime");

	Params::UGranularSynth_SetPlayheadTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPlayheadRate                                                   (Edit, ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UGranularSynth::SetPlaybackSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetPlaybackSpeed");

	Params::UGranularSynth_SetPlaybackSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetGrainVolume
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseVolume                                                       (Edit, BlueprintVisible, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   VolumeRange                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FVector2D UGranularSynth::SetGrainVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainVolume");

	Params::UGranularSynth_SetGrainVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetGrainsPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InGrainsPerSecond                                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UGranularSynth::SetGrainsPerSecond()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainsPerSecond");

	Params::UGranularSynth_SetGrainsPerSecond_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetGrainProbability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InGrainProbability                                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float UGranularSynth::SetGrainProbability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainProbability");

	Params::UGranularSynth_SetGrainProbability_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetGrainPitch
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BasePitch                                                        (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   PitchRange                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FVector2D UGranularSynth::SetGrainPitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainPitch");

	Params::UGranularSynth_SetGrainPitch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetGrainPan
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BasePan                                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   PanRange                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FVector2D UGranularSynth::SetGrainPan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainPan");

	Params::UGranularSynth_SetGrainPan_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetGrainEnvelopeType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGranularSynthEnvelopeTypeEnvelopeType                                                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class EGranularSynthEnvelopeType UGranularSynth::SetGrainEnvelopeType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainEnvelopeType");

	Params::UGranularSynth_SetGrainEnvelopeType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetGrainDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseDurationMsec                                                 (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector2D                   DurationRange                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FVector2D UGranularSynth::SetGrainDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainDuration");

	Params::UGranularSynth_SetGrainDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UGranularSynth::SetDecayTime(float* DecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetDecayTime");

	Params::UGranularSynth_SetDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DecayTimeMsec != nullptr)
		*DecayTimeMsec = Parms.DecayTimeMsec;

}


// Function Synthesis.GranularSynth.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

float UGranularSynth::SetAttackTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetAttackTime");

	Params::UGranularSynth_SetAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// int32                              Velocity                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)

float UGranularSynth::NoteOn(float* Note)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "NoteOn");

	Params::UGranularSynth_NoteOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Note != nullptr)
		*Note = Parms.Note;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// bool                               bKill                                                            (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool UGranularSynth::NoteOff(float* Note)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "NoteOff");

	Params::UGranularSynth_NoteOff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Note != nullptr)
		*Note = Parms.Note;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGranularSynth::IsLoaded(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "IsLoaded");

	Params::UGranularSynth_IsLoaded_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGranularSynth::GetSampleDuration(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "GetSampleDuration");

	Params::UGranularSynth_GetSampleDuration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGranularSynth::GetCurrentPlayheadTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "GetCurrentPlayheadTime");

	Params::UGranularSynth_GetCurrentPlayheadTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Synthesis.MonoWaveTableSynthPreset
// (None)

class UClass* UMonoWaveTableSynthPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonoWaveTableSynthPreset");

	return Clss;
}


// MonoWaveTableSynthPreset Synthesis.Default__MonoWaveTableSynthPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class UMonoWaveTableSynthPreset* UMonoWaveTableSynthPreset::GetDefaultObj()
{
	static class UMonoWaveTableSynthPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonoWaveTableSynthPreset*>(UMonoWaveTableSynthPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class Synthesis.SynthComponentMonoWaveTable
// (SceneComponent)

class UClass* USynthComponentMonoWaveTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthComponentMonoWaveTable");

	return Clss;
}


// SynthComponentMonoWaveTable Synthesis.Default__SynthComponentMonoWaveTable
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthComponentMonoWaveTable* USynthComponentMonoWaveTable::GetDefaultObj()
{
	static class USynthComponentMonoWaveTable* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthComponentMonoWaveTable*>(USynthComponentMonoWaveTable::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPosition                                                       (Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetWaveTablePosition(float* InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetWaveTablePosition");

	Params::USynthComponentMonoWaveTable_SetWaveTablePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPosition != nullptr)
		*InPosition = Parms.InPosition;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSustainPedalState                                              (ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool USynthComponentMonoWaveTable::SetSustainPedalState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetSustainPedalState");

	Params::USynthComponentMonoWaveTable_SetSustainPedalState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthLFOType           InLfoType                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

enum class ESynthLFOType USynthComponentMonoWaveTable::SetPosLfoType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoType");

	Params::USynthComponentMonoWaveTable_SetPosLfoType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLfoFrequency                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetPosLfoFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoFrequency");

	Params::USynthComponentMonoWaveTable_SetPosLfoFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLfoDepth                                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetPosLfoDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoDepth");

	Params::USynthComponentMonoWaveTable_SetPosLfoDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool USynthComponentMonoWaveTable::SetPositionEnvelopeInvert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetPositionEnvelopeDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDecayTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewQ                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetLowPassFilterResonance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetLowPassFilterResonance");

	Params::USynthComponentMonoWaveTable_SetLowPassFilterResonance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetFrequencyWithMidiNote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyWithMidiNote");

	Params::USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrequencyOffsetCents                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetFrequencyPitchBend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyPitchBend");

	Params::USynthComponentMonoWaveTable_SetFrequencyPitchBend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrequencyHz                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float USynthComponentMonoWaveTable::SetFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequency");

	Params::USynthComponentMonoWaveTable_SetFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopenDecayTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool USynthComponentMonoWaveTable::SetFilterEnvelopeInvert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetFilterEnvelopeDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// int32                              KeyframeIndex                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 USynthComponentMonoWaveTable::SetCurveValue(int32 TableIndex, float* NewValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveValue");

	Params::USynthComponentMonoWaveTable_SetCurveValue_Params Parms{};

	Parms.TableIndex = TableIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// float                              InNewTangent                                                     (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthComponentMonoWaveTable::SetCurveTangent(int32 TableIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveTangent");

	Params::USynthComponentMonoWaveTable_SetCurveTangent_Params Parms{};

	Parms.TableIndex = TableIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECurveInterpolationType InterpolationType                                                (ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthComponentMonoWaveTable::SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType, int32 TableIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveInterpolationType");

	Params::USynthComponentMonoWaveTable_SetCurveInterpolationType_Params Parms{};

	Parms.InterpolationType = InterpolationType;
	Parms.TableIndex = TableIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool USynthComponentMonoWaveTable::SetAmpEnvelopeInvert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetAmpEnvelopeDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDecayTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void USynthComponentMonoWaveTable::RefreshWaveTable(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshWaveTable");

	Params::USynthComponentMonoWaveTable_RefreshWaveTable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponentMonoWaveTable::RefreshAllWaveTables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshAllWaveTables");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              InVelocity                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::NoteOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOn");

	Params::USynthComponentMonoWaveTable_NoteOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::NoteOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOff");

	Params::USynthComponentMonoWaveTable_NoteOff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthComponentMonoWaveTable::GetNumTableEntries(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetNumTableEntries");

	Params::USynthComponentMonoWaveTable_GetNumTableEntries_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthComponentMonoWaveTable::GetMaxTableIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetMaxTableIndex");

	Params::USynthComponentMonoWaveTable_GetMaxTableIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// TArray<float>                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex, const TArray<float>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetKeyFrameValuesForTable");

	Params::USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params Parms{};

	Parms.TableIndex = TableIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthComponentMonoWaveTable::GetCurveTangent(int32 TableIndex, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetCurveTangent");

	Params::USynthComponentMonoWaveTable_GetCurveTangent_Params Parms{};

	Parms.TableIndex = TableIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Synthesis.SynthComponentToneGenerator
// (SceneComponent)

class UClass* USynthComponentToneGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthComponentToneGenerator");

	return Clss;
}


// SynthComponentToneGenerator Synthesis.Default__SynthComponentToneGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthComponentToneGenerator* USynthComponentToneGenerator::GetDefaultObj()
{
	static class USynthComponentToneGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthComponentToneGenerator*>(USynthComponentToneGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SynthComponentToneGenerator.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InVolume                                                         (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentToneGenerator::SetVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentToneGenerator", "SetVolume");

	Params::USynthComponentToneGenerator_SetVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentToneGenerator.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (Edit, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthComponentToneGenerator::SetFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentToneGenerator", "SetFrequency");

	Params::USynthComponentToneGenerator_SetFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.SynthSamplePlayer
// (SceneComponent)

class UClass* USynthSamplePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthSamplePlayer");

	return Clss;
}


// SynthSamplePlayer Synthesis.Default__SynthSamplePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthSamplePlayer* USynthSamplePlayer::GetDefaultObj()
{
	static class USynthSamplePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthSamplePlayer*>(USynthSamplePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SynthSamplePlayer.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  InSoundWave                                                      (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

class USoundWave* USynthSamplePlayer::SetSoundWave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetSoundWave");

	Params::USynthSamplePlayer_SetSoundWave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScrubTimeWidthSec                                              (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USynthSamplePlayer::SetScrubTimeWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetScrubTimeWidth");

	Params::USynthSamplePlayer_SetScrubTimeWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScrubMode                                                       (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

bool USynthSamplePlayer::SetScrubMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetScrubMode");

	Params::USynthSamplePlayer_SetScrubMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPitch                                                          (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              TimeSec                                                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float USynthSamplePlayer::SetPitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetPitch");

	Params::USynthSamplePlayer_SetPitch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.SeekToTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeSec                                                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class ESamplePlayerSeekType   SeekType                                                         (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bWrap                                                            (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

enum class ESamplePlayerSeekType USynthSamplePlayer::SeekToTime(bool* bWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SeekToTime");

	Params::USynthSamplePlayer_SeekToTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bWrap != nullptr)
		*bWrap = Parms.bWrap;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthSamplePlayer::IsLoaded(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "IsLoaded");

	Params::USynthSamplePlayer_IsLoaded_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthSamplePlayer.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthSamplePlayer::GetSampleDuration(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetSampleDuration");

	Params::USynthSamplePlayer_GetSampleDuration_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthSamplePlayer::GetCurrentPlaybackProgressTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressTime");

	Params::USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthSamplePlayer::GetCurrentPlaybackProgressPercent(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressPercent");

	Params::USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// (None)

class UClass* USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthesisUtilitiesBlueprintFunctionLibrary");

	return Clss;
}


// SynthesisUtilitiesBlueprintFunctionLibrary Synthesis.Default__SynthesisUtilitiesBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthesisUtilitiesBlueprintFunctionLibrary* USynthesisUtilitiesBlueprintFunctionLibrary::GetDefaultObj()
{
	static class USynthesisUtilitiesBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthesisUtilitiesBlueprintFunctionLibrary*>(USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InLinearValue                                                    (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              InDomainMin                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              InDomainMax                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLogFrequency");

	Params::USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InLogFrequencyValue                                              (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              InDomainMin                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              InDomainMax                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLinearFrequency");

	Params::USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Synthesis.Synth2DSlider
// (None)

class UClass* USynth2DSlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Synth2DSlider");

	return Clss;
}


// Synth2DSlider Synthesis.Default__Synth2DSlider
// (Public, ClassDefaultObject, ArchetypeObject)

class USynth2DSlider* USynth2DSlider::GetDefaultObj()
{
	static class USynth2DSlider* Default = nullptr;

	if (!Default)
		Default = static_cast<USynth2DSlider*>(USynth2DSlider::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.Synth2DSlider.SetValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D USynth2DSlider::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetValue");

	Params::USynth2DSlider_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.Synth2DSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USynth2DSlider::SetStepSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetStepSize");

	Params::USynth2DSlider_SetStepSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.Synth2DSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor USynth2DSlider::SetSliderHandleColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetSliderHandleColor");

	Params::USynth2DSlider_SetSliderHandleColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.Synth2DSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool USynth2DSlider::SetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetLocked");

	Params::USynth2DSlider_SetLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.Synth2DSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool USynth2DSlider::SetIndentHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetIndentHandle");

	Params::USynth2DSlider_SetIndentHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.Synth2DSlider.GetValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynth2DSlider::GetValue(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "GetValue");

	Params::USynth2DSlider_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Synthesis.SynthKnob
// (None)

class UClass* USynthKnob::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthKnob");

	return Clss;
}


// SynthKnob Synthesis.Default__SynthKnob
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthKnob* USynthKnob::GetDefaultObj()
{
	static class USynthKnob* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthKnob*>(USynthKnob::StaticClass()->DefaultObject);

	return Default;
}


// Function Synthesis.SynthKnob.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USynthKnob::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "SetValue");

	Params::USynthKnob_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthKnob.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USynthKnob::SetStepSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "SetStepSize");

	Params::USynthKnob_SetStepSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthKnob.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool USynthKnob::SetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "SetLocked");

	Params::USynthKnob_SetLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthKnob.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthKnob::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "GetValue");

	Params::USynthKnob_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


