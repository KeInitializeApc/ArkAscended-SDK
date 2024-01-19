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
// class UModularSynthPresetBank*     InBank                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FModularSynthPreset         Preset                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class FString                      PresetName                                                       (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

class UModularSynthPresetBank* UModularSynthLibrary::AddModularSynthPresetToBankAsset(const struct FModularSynthPreset& Preset, const class FString& PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthLibrary", "AddModularSynthPresetToBankAsset");

	Params::UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params Parms{};

	Parms.Preset = Preset;
	Parms.PresetName = PresetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FModularSynthPreset         SynthPreset                                                      (Edit, ExportObject, BlueprintReadOnly, Config, EditConst, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetSynthPreset(const struct FModularSynthPreset& SynthPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSynthPreset");

	Params::UModularSynthComponent_SetSynthPreset_Params Parms{};

	Parms.SynthPreset = SynthPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetSustainGain(float* SustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSustainGain");

	Params::UModularSynthComponent_SetSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SustainGain != nullptr)
		*SustainGain = Parms.SustainGain;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayWetlevel                                                    (Edit, BlueprintReadOnly, Config, EditConst, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayWetlevel");

	Params::UModularSynthComponent_SetStereoDelayWetlevel_Params Parms{};

	Parms.DelayWetlevel = DelayWetlevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayTimeMsec                                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// float                              DelayRatio                                                       (ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// enum class ESynthStereoDelayMode   StereoDelayMode                                                  (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetStereoDelayMode(enum class ESynthStereoDelayMode* StereoDelayMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayMode");

	Params::UModularSynthComponent_SetStereoDelayMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StereoDelayMode != nullptr)
		*StereoDelayMode = Parms.StereoDelayMode;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               StereoDelayEnabled                                               (Edit, ConstParm, BlueprintVisible, Config, EditConst, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayIsEnabled");

	Params::UModularSynthComponent_SetStereoDelayIsEnabled_Params Parms{};

	Parms.StereoDelayEnabled = StereoDelayEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayFeedback                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

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
// float                              Spread                                                           (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetSpread(float Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSpread");

	Params::UModularSynthComponent_SetSpread_Params Parms{};

	Parms.Spread = Spread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReleaseTimeMsec                                                  (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetReleaseTime(float* ReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetReleaseTime");

	Params::UModularSynthComponent_SetReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReleaseTimeMsec != nullptr)
		*ReleaseTimeMsec = Parms.ReleaseTimeMsec;

}


// Function Synthesis.ModularSynthComponent.SetPortamento
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Portamento                                                       (ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetPortamento(float Portamento)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPortamento");

	Params::UModularSynthComponent_SetPortamento_Params Parms{};

	Parms.Portamento = Portamento;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PitchBend                                                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

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
// float                              Pan                                                              (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetPan(float Pan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPan");

	Params::UModularSynthComponent_SetPan_Params Parms{};

	Parms.Pan = Pan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetOscType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESynth1OscType          OscType                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class ESynth1OscType UModularSynthComponent::SetOscType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscType");

	Params::UModularSynthComponent_SetOscType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSynced                                                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

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
// int32                              OscIndex                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              Semitones                                                        (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscSemitones()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscSemitones");

	Params::UModularSynthComponent_SetOscSemitones_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              Pulsewidth                                                       (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscPulsewidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscPulsewidth");

	Params::UModularSynthComponent_SetOscPulsewidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscOctave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              Octave                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscOctave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscOctave");

	Params::UModularSynthComponent_SetOscOctave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              OscGainMod                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscGainMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscGainMod");

	Params::UModularSynthComponent_SetOscGainMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              OscGain                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscGain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscGain");

	Params::UModularSynthComponent_SetOscGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              OscFreqMod                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscFrequencyMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscFrequencyMod");

	Params::UModularSynthComponent_SetOscFrequencyMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetOscCents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              Cents                                                            (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetOscCents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscCents");

	Params::UModularSynthComponent_SetOscCents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvSustainGain(float* SustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvSustainGain");

	Params::UModularSynthComponent_SetModEnvSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SustainGain != nullptr)
		*SustainGain = Parms.SustainGain;

}


// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Release                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst)

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
// enum class ESynthModEnvPatch       InPatchType                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class ESynthModEnvPatch UModularSynthComponent::SetModEnvPatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvPatch");

	Params::UModularSynthComponent_SetModEnvPatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetModEnvInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvInvert(bool bInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvInvert");

	Params::UModularSynthComponent_SetModEnvInvert_Params Parms{};

	Parms.bInvert = bInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)

void UModularSynthComponent::SetModEnvDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDepth");

	Params::UModularSynthComponent_SetModEnvDepth_Params Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetModEnvDecayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDecayTime");

	Params::UModularSynthComponent_SetModEnvDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthModEnvBiasPatch   InPatchType                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class ESynthModEnvBiasPatch UModularSynthComponent::SetModEnvBiasPatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasPatch");

	Params::UModularSynthComponent_SetModEnvBiasPatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvert                                                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasInvert");

	Params::UModularSynthComponent_SetModEnvBiasInvert_Params Parms{};

	Parms.bInvert = bInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvAttackTime(float* AttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvAttackTime");

	Params::UModularSynthComponent_SetModEnvAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttackTimeMsec != nullptr)
		*AttackTimeMsec = Parms.AttackTimeMsec;

}


// Function Synthesis.ModularSynthComponent.SetLFOType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESynthLFOType           LFOType                                                          (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

enum class ESynthLFOType UModularSynthComponent::SetLFOType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOType");

	Params::UModularSynthComponent_SetLFOType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESynthLFOPatchType      LFOPatchType                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class ESynthLFOPatchType UModularSynthComponent::SetLFOPatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOPatch");

	Params::UModularSynthComponent_SetLFOPatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class ESynthLFOMode           LFOMode                                                          (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class ESynthLFOMode UModularSynthComponent::SetLFOMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOMode");

	Params::UModularSynthComponent_SetLFOMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              GainMod                                                          (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetLFOGainMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOGainMod");

	Params::UModularSynthComponent_SetLFOGainMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              Gain                                                             (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetLFOGain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOGain");

	Params::UModularSynthComponent_SetLFOGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              FrequencyModHz                                                   (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetLFOFrequencyMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequencyMod");

	Params::UModularSynthComponent_SetLFOFrequencyMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              FrequencyHz                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

int32 UModularSynthComponent::SetLFOFrequency(float FrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequency");

	Params::UModularSynthComponent_SetLFOFrequency_Params Parms{};

	Parms.FrequencyHz = FrequencyHz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetGainDb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              GainDb                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetGainDb(float GainDb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetGainDb");

	Params::UModularSynthComponent_SetGainDb_Params Parms{};

	Parms.GainDb = GainDb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthFilterType        FilterType                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetFilterType(enum class ESynthFilterType* FilterType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterType");

	Params::UModularSynthComponent_SetFilterType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterType != nullptr)
		*FilterType = Parms.FilterType;

}


// Function Synthesis.ModularSynthComponent.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetFilterQMod(float* FilterQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQMod");

	Params::UModularSynthComponent_SetFilterQMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterQ != nullptr)
		*FilterQ = Parms.FilterQ;

}


// Function Synthesis.ModularSynthComponent.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetFilterQ(float* FilterQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQ");

	Params::UModularSynthComponent_SetFilterQ_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterQ != nullptr)
		*FilterQ = Parms.FilterQ;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetFilterFrequencyMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequencyMod");

	Params::UModularSynthComponent_SetFilterFrequencyMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetFilterFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequency");

	Params::UModularSynthComponent_SetFilterFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthFilterAlgorithm   FilterAlgorithm                                                  (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetFilterAlgorithm(enum class ESynthFilterAlgorithm* FilterAlgorithm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterAlgorithm");

	Params::UModularSynthComponent_SetFilterAlgorithm_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilterAlgorithm != nullptr)
		*FilterAlgorithm = Parms.FilterAlgorithm;

}


// Function Synthesis.ModularSynthComponent.SetEnableUnison
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               EnableUnison                                                     (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UModularSynthComponent::SetEnableUnison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableUnison");

	Params::UModularSynthComponent_SetEnableUnison_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               RetriggerEnabled                                                 (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UModularSynthComponent::SetEnableRetrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableRetrigger");

	Params::UModularSynthComponent_SetEnableRetrigger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnablePolyphony                                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnablePolyphony");

	Params::UModularSynthComponent_SetEnablePolyphony_Params Parms{};

	Parms.bEnablePolyphony = bEnablePolyphony;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetEnablePatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPatchId                    PatchId                                                          (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm)
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UModularSynthComponent::SetEnablePatch(bool ReturnValue)
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

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetEnableLegato
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               LegatoEnabled                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UModularSynthComponent::SetEnableLegato()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableLegato");

	Params::UModularSynthComponent_SetEnableLegato_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UModularSynthComponent::SetDecayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetDecayTime");

	Params::UModularSynthComponent_SetDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetChorusFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Frequency                                                        (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Feedback                                                         (Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// bool                               EnableChorus                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UModularSynthComponent::SetChorusEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusEnabled");

	Params::UModularSynthComponent_SetChorusEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetChorusDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)

void UModularSynthComponent::SetChorusDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusDepth");

	Params::UModularSynthComponent_SetChorusDepth_Params Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.ModularSynthComponent.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetAttackTime(float* AttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetAttackTime");

	Params::UModularSynthComponent_SetAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttackTimeMsec != nullptr)
		*AttackTimeMsec = Parms.AttackTimeMsec;

}


// Function Synthesis.ModularSynthComponent.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// int32                              Velocity                                                         (Edit, ReturnParm, Config, EditConst, SubobjectReference)
// float                              Duration                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)

int32 UModularSynthComponent::NoteOn(float* Note, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOn");

	Params::UModularSynthComponent_NoteOn_Params Parms{};

	Parms.Duration = Duration;

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
// float                              Note                                                             (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// bool                               bAllNotesOff                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bKillAllNotes                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UModularSynthComponent::NoteOff(float* Note)
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

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.CreatePatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ESynth1PatchSource      PatchSource                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FSynth1PatchCable>   PatchCables                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bEnableByDefault                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FPatchId                    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UModularSynthComponent::CreatePatch(enum class ESynth1PatchSource PatchSource, const TArray<struct FSynth1PatchCable>& PatchCables, const struct FPatchId& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "CreatePatch");

	Params::UModularSynthComponent_CreatePatch_Params Parms{};

	Parms.PatchSource = PatchSource;
	Parms.PatchCables = PatchCables;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FSourceEffectBitCrusherBaseSettingsSettings                                                         (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

struct FSourceEffectBitCrusherBaseSettings USourceEffectBitCrusherPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSettings");

	Params::USourceEffectBitCrusherPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   InModulators                                                     (ConstParm, BlueprintVisible, Net, Config, EditConst, InstancedReference, SubobjectReference)

void USourceEffectBitCrusherPreset::SetSampleRateModulators(TSet<class USoundModulatorBase*> InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulators");

	Params::USourceEffectBitCrusherPreset_SetSampleRateModulators_Params Parms{};

	Parms.InModulators = InModulators;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectBitCrusherPreset::SetSampleRateModulator(class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulator");

	Params::USourceEffectBitCrusherPreset_SetSampleRateModulator_Params Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SampleRate                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, DuplicateTransient)

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
// struct FSourceEffectBitCrusherSettingsModulationSettings                                               (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              Bits                                                             (Edit, BlueprintVisible, ExportObject, Net, Config, EditConst, InstancedReference, SubobjectReference)

void USourceEffectBitCrusherPreset::SetBits(float Bits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBits");

	Params::USourceEffectBitCrusherPreset_SetBits_Params Parms{};

	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   InModulators                                                     (ConstParm, BlueprintVisible, Net, Config, EditConst, InstancedReference, SubobjectReference)

void USourceEffectBitCrusherPreset::SetBitModulators(TSet<class USoundModulatorBase*> InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulators");

	Params::USourceEffectBitCrusherPreset_SetBitModulators_Params Parms{};

	Parms.InModulators = InModulators;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectBitCrusherPreset::SetBitModulator(class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulator");

	Params::USourceEffectBitCrusherPreset_SetBitModulator_Params Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetWetModulators(TSet<class USoundModulatorBase*> Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWetModulators");

	Params::USourceEffectChorusPreset_SetWetModulators_Params Parms{};

	Parms.Modulators = Modulators;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetWetModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetWetModulator(class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWetModulator");

	Params::USourceEffectChorusPreset_SetWetModulator_Params Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetWet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              WetAmount                                                        (ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetSpreadModulators(TSet<class USoundModulatorBase*> Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpreadModulators");

	Params::USourceEffectChorusPreset_SetSpreadModulators_Params Parms{};

	Parms.Modulators = Modulators;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetSpreadModulator(class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpreadModulator");

	Params::USourceEffectChorusPreset_SetSpreadModulator_Params Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Spread                                                           (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetSpread(float Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpread");

	Params::USourceEffectChorusPreset_SetSpread_Params Parms{};

	Parms.Spread = Spread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusBaseSettingsSettings                                                         (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

struct FSourceEffectChorusBaseSettings USourceEffectChorusPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSettings");

	Params::USourceEffectChorusPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusSettings ModulationSettings                                               (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetFrequencyModulators(TSet<class USoundModulatorBase*> Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequencyModulators");

	Params::USourceEffectChorusPreset_SetFrequencyModulators_Params Parms{};

	Parms.Modulators = Modulators;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetFrequencyModulator(class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequencyModulator");

	Params::USourceEffectChorusPreset_SetFrequencyModulator_Params Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Frequency                                                        (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetFeedbackModulators(TSet<class USoundModulatorBase*> Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedbackModulators");

	Params::USourceEffectChorusPreset_SetFeedbackModulators_Params Parms{};

	Parms.Modulators = Modulators;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetFeedbackModulator(class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedbackModulator");

	Params::USourceEffectChorusPreset_SetFeedbackModulator_Params Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Feedback                                                         (Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetDryModulators(TSet<class USoundModulatorBase*> Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDryModulators");

	Params::USourceEffectChorusPreset_SetDryModulators_Params Parms{};

	Parms.Modulators = Modulators;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetDryModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetDryModulator(class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDryModulator");

	Params::USourceEffectChorusPreset_SetDryModulator_Params Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetDry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DryAmount                                                        (BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetDepthModulators(TSet<class USoundModulatorBase*> Modulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepthModulators");

	Params::USourceEffectChorusPreset_SetDepthModulators_Params Parms{};

	Parms.Modulators = Modulators;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USourceEffectChorusPreset::SetDepthModulator(class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepthModulator");

	Params::USourceEffectChorusPreset_SetDepthModulator_Params Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)

void USourceEffectChorusPreset::SetDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepth");

	Params::USourceEffectChorusPreset_SetDepth_Params Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectConvolutionReverbSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectConvolutionReverbPreset::SetSettings(const struct FSourceEffectConvolutionReverbSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetSettings");

	Params::USourceEffectConvolutionReverbPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioImpulseResponse*       InImpulseResponse                                                (BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)

void USourceEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::USourceEffectConvolutionReverbPreset_SetImpulseResponse_Params Parms{};

	Parms.InImpulseResponse = InImpulseResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectDynamicsProcessorSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectDynamicsProcessorPreset::SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectDynamicsProcessorPreset", "SetSettings");

	Params::USourceEffectDynamicsProcessorPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)

class UEnvelopeFollowerListener* USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "UnregisterEnvelopeFollowerListener");

	Params::USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectEnvelopeFollowerSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectEnvelopeFollowerPreset::SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "SetSettings");

	Params::USourceEffectEnvelopeFollowerPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)

class UEnvelopeFollowerListener* USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "RegisterEnvelopeFollowerListener");

	Params::USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FSourceEffectEQSettings     InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectEQPreset::SetSettings(const struct FSourceEffectEQSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEQPreset", "SetSettings");

	Params::USourceEffectEQPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectFilterSettings InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectFilterPreset::SetSettings(const struct FSourceEffectFilterSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectFilterPreset", "SetSettings");

	Params::USourceEffectFilterPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectFoldbackDistortionSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectFoldbackDistortionPreset::SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectFoldbackDistortionPreset", "SetSettings");

	Params::USourceEffectFoldbackDistortionPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectMidSideSpreaderSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectMidSideSpreaderPreset::SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectMidSideSpreaderPreset", "SetSettings");

	Params::USourceEffectMidSideSpreaderPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectMotionFilterSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectMotionFilterPreset::SetSettings(const struct FSourceEffectMotionFilterSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectMotionFilterPreset", "SetSettings");

	Params::USourceEffectMotionFilterPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectPannerSettings InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectPannerPreset::SetSettings(const struct FSourceEffectPannerSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectPannerPreset", "SetSettings");

	Params::USourceEffectPannerPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectPhaserSettings InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectPhaserPreset::SetSettings(const struct FSourceEffectPhaserSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectPhaserPreset", "SetSettings");

	Params::USourceEffectPhaserPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectRingModulationSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectRingModulationPreset::SetSettings(const struct FSourceEffectRingModulationSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectRingModulationPreset", "SetSettings");

	Params::USourceEffectRingModulationPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectSimpleDelaySettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectSimpleDelayPreset::SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectSimpleDelayPreset", "SetSettings");

	Params::USourceEffectSimpleDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectStereoDelaySettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectStereoDelayPreset::SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectStereoDelayPreset", "SetSettings");

	Params::USourceEffectStereoDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSourceEffectWaveShaperSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectWaveShaperPreset::SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectWaveShaperPreset", "SetSettings");

	Params::USourceEffectWaveShaperPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSubmixEffectConvolutionReverbSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectConvolutionReverbPreset::SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetSettings");

	Params::USubmixEffectConvolutionReverbPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioImpulseResponse*       InImpulseResponse                                                (BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)

void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Params Parms{};

	Parms.InImpulseResponse = InImpulseResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MaximumDelayLength                                               (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USubmixEffectDelayStatics::SetMaximumDelayLength(const struct FSubmixEffectDelaySettings& DelaySettings, const struct FSubmixEffectDelaySettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetMaximumDelayLength");

	Params::USubmixEffectDelayStatics_SetMaximumDelayLength_Params Parms{};

	Parms.DelaySettings = DelaySettings;
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
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// float                              InterpolationTime                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USubmixEffectDelayStatics::SetInterpolationTime(const struct FSubmixEffectDelaySettings& DelaySettings, const struct FSubmixEffectDelaySettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetInterpolationTime");

	Params::USubmixEffectDelayStatics_SetInterpolationTime_Params Parms{};

	Parms.DelaySettings = DelaySettings;
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
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DelayLength                                                      (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USubmixEffectDelayStatics::SetDelayLength(const struct FSubmixEffectDelaySettings& DelaySettings, const struct FSubmixEffectDelaySettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetDelayLength");

	Params::USubmixEffectDelayStatics_SetDelayLength_Params Parms{};

	Parms.DelaySettings = DelaySettings;
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
// struct FSubmixEffectDelaySettings  InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectDelayPreset::SetSettings(const struct FSubmixEffectDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetSettings");

	Params::USubmixEffectDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

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
// struct FSubmixEffectDelaySettings  InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectDelayPreset::SetDefaultSettings(const struct FSubmixEffectDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetDefaultSettings");

	Params::USubmixEffectDelayPreset_SetDefaultSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FSubmixEffectFilterSettings InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectFilterPreset::SetSettings(const struct FSubmixEffectFilterSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetSettings");

	Params::USubmixEffectFilterPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESubmixFilterType       InType                                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

void USubmixEffectFilterPreset::SetFilterType(enum class ESubmixFilterType InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterType");

	Params::USubmixEffectFilterPreset_SetFilterType_Params Parms{};

	Parms.InType = InType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

void USubmixEffectFilterPreset::SetFilterQMod(float InQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQMod");

	Params::USubmixEffectFilterPreset_SetFilterQMod_Params Parms{};

	Parms.InQ = InQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

void USubmixEffectFilterPreset::SetFilterQ(float InQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQ");

	Params::USubmixEffectFilterPreset_SetFilterQ_Params Parms{};

	Parms.InQ = InQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequencyMod");

	Params::USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params Parms{};

	Parms.InFrequency = InFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequency");

	Params::USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params Parms{};

	Parms.InFrequency = InFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESubmixFilterAlgorithm  InAlgorithm                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

void USubmixEffectFilterPreset::SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterAlgorithm");

	Params::USubmixEffectFilterPreset_SetFilterAlgorithm_Params Parms{};

	Parms.InAlgorithm = InAlgorithm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSubmixEffectFlexiverbSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectFlexiverbPreset::SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFlexiverbPreset", "SetSettings");

	Params::USubmixEffectFlexiverbPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSubmixEffectMultibandCompressorSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectMultibandCompressorPreset::SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetSettings");

	Params::USubmixEffectMultibandCompressorPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*                Submix                                                           (BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

void USubmixEffectMultibandCompressorPreset::SetAudioBus(class UAudioBus** AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetAudioBus");

	Params::USubmixEffectMultibandCompressorPreset_SetAudioBus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AudioBus != nullptr)
		*AudioBus = Parms.AudioBus;

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
// struct FSubmixEffectStereoDelaySettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectStereoDelayPreset::SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectStereoDelayPreset", "SetSettings");

	Params::USubmixEffectStereoDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSubmixEffectStereoToQuadSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectStereoToQuadPreset::SetSettings(const struct FSubmixEffectStereoToQuadSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectStereoToQuadPreset", "SetSettings");

	Params::USubmixEffectStereoToQuadPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              TapId                                                            (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTapDelayInfo               TapInfo                                                          (ConstParm, Parm, Config, EditConst, InstancedReference, SubobjectReference)

int32 USubmixEffectTapDelayPreset::SetTap(const struct FTapDelayInfo& TapInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetTap");

	Params::USubmixEffectTapDelayPreset_SetTap_Params Parms{};

	Parms.TapInfo = TapInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectTapDelaySettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectTapDelayPreset::SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetSettings");

	Params::USubmixEffectTapDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

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
// int32                              TapId                                                            (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// TArray<int32>                      TapIds                                                           (Edit, ConstParm, BlueprintVisible, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void USubmixEffectTapDelayPreset::GetTapIds(const TArray<int32>& TapIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTapIds");

	Params::USubmixEffectTapDelayPreset_GetTapIds_Params Parms{};

	Parms.TapIds = TapIds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FTapDelayInfo               TapInfo                                                          (ConstParm, Parm, Config, EditConst, InstancedReference, SubobjectReference)

int32 USubmixEffectTapDelayPreset::GetTap(const struct FTapDelayInfo& TapInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTap");

	Params::USubmixEffectTapDelayPreset_GetTap_Params Parms{};

	Parms.TapInfo = TapInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              TapId                                                            (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// float                              SustainGain                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UGranularSynth::SetSustainGain(float* SustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetSustainGain");

	Params::UGranularSynth_SetSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SustainGain != nullptr)
		*SustainGain = Parms.SustainGain;

}


// Function Synthesis.GranularSynth.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  InSoundWave                                                      (OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetSoundWave(class USoundWave** InSoundWave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetSoundWave");

	Params::UGranularSynth_SetSoundWave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSoundWave != nullptr)
		*InSoundWave = Parms.InSoundWave;

}


// Function Synthesis.GranularSynth.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScrubMode                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetScrubMode(bool bScrubMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetScrubMode");

	Params::UGranularSynth_SetScrubMode_Params Parms{};

	Parms.bScrubMode = bScrubMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetReleaseTimeMsec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReleaseTimeMsec                                                  (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UGranularSynth::SetReleaseTimeMsec(float* ReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetReleaseTimeMsec");

	Params::UGranularSynth_SetReleaseTimeMsec_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReleaseTimeMsec != nullptr)
		*ReleaseTimeMsec = Parms.ReleaseTimeMsec;

}


// Function Synthesis.GranularSynth.SetPlayheadTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPositionSec                                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              LerpTimeSec                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EGranularSynthSeekType  SeekType                                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetPlayheadTime");

	Params::UGranularSynth_SetPlayheadTime_Params Parms{};

	Parms.InPositionSec = InPositionSec;
	Parms.LerpTimeSec = LerpTimeSec;
	Parms.SeekType = SeekType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPlayheadRate                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetPlaybackSpeed");

	Params::UGranularSynth_SetPlaybackSpeed_Params Parms{};

	Parms.InPlayheadRate = InPlayheadRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetGrainVolume
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseVolume                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   VolumeRange                                                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainVolume");

	Params::UGranularSynth_SetGrainVolume_Params Parms{};

	Parms.BaseVolume = BaseVolume;
	Parms.VolumeRange = VolumeRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetGrainsPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InGrainsPerSecond                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainsPerSecond");

	Params::UGranularSynth_SetGrainsPerSecond_Params Parms{};

	Parms.InGrainsPerSecond = InGrainsPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetGrainProbability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InGrainProbability                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetGrainProbability(float InGrainProbability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainProbability");

	Params::UGranularSynth_SetGrainProbability_Params Parms{};

	Parms.InGrainProbability = InGrainProbability;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetGrainPitch
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BasePitch                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PitchRange                                                       (Edit, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainPitch");

	Params::UGranularSynth_SetGrainPitch_Params Parms{};

	Parms.BasePitch = BasePitch;
	Parms.PitchRange = PitchRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetGrainPan
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BasePan                                                          (BlueprintVisible, ExportObject, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PanRange                                                         (Edit, ConstParm, BlueprintVisible, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetGrainPan(float BasePan, const struct FVector2D& PanRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainPan");

	Params::UGranularSynth_SetGrainPan_Params Parms{};

	Parms.BasePan = BasePan;
	Parms.PanRange = PanRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetGrainEnvelopeType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGranularSynthEnvelopeTypeEnvelopeType                                                     (Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainEnvelopeType");

	Params::UGranularSynth_SetGrainEnvelopeType_Params Parms{};

	Parms.EnvelopeType = EnvelopeType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetGrainDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseDurationMsec                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   DurationRange                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainDuration");

	Params::UGranularSynth_SetGrainDuration_Params Parms{};

	Parms.BaseDurationMsec = BaseDurationMsec;
	Parms.DurationRange = DurationRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.GranularSynth.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float UGranularSynth::SetDecayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetDecayTime");

	Params::UGranularSynth_SetDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UGranularSynth::SetAttackTime(float* AttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetAttackTime");

	Params::UGranularSynth_SetAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttackTimeMsec != nullptr)
		*AttackTimeMsec = Parms.AttackTimeMsec;

}


// Function Synthesis.GranularSynth.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// int32                              Velocity                                                         (Edit, ReturnParm, Config, EditConst, SubobjectReference)
// float                              Duration                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)

int32 UGranularSynth::NoteOn(float* Note, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "NoteOn");

	Params::UGranularSynth_NoteOn_Params Parms{};

	Parms.Duration = Duration;

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
// float                              Note                                                             (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// bool                               bKill                                                            (Edit, ConstParm, ExportObject, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UGranularSynth::NoteOff(float* Note, bool bKill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "NoteOff");

	Params::UGranularSynth_NoteOff_Params Parms{};

	Parms.bKill = bKill;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Note != nullptr)
		*Note = Parms.Note;

}


// Function Synthesis.GranularSynth.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InPosition                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float USynthComponentMonoWaveTable::SetWaveTablePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetWaveTablePosition");

	Params::USynthComponentMonoWaveTable_SetWaveTablePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSustainPedalState                                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetSustainPedalState(bool* InSustainPedalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetSustainPedalState");

	Params::USynthComponentMonoWaveTable_SetSustainPedalState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSustainPedalState != nullptr)
		*InSustainPedalState = Parms.InSustainPedalState;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthLFOType           InLfoType                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPosLfoType(enum class ESynthLFOType* InLfoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoType");

	Params::USynthComponentMonoWaveTable_SetPosLfoType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLfoType != nullptr)
		*InLfoType = Parms.InLfoType;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLfoFrequency                                                   (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPosLfoFrequency(float* InLfoFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoFrequency");

	Params::USynthComponentMonoWaveTable_SetPosLfoFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLfoFrequency != nullptr)
		*InLfoFrequency = Parms.InLfoFrequency;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLfoDepth                                                       (Edit, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPosLfoDepth(float* InLfoDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoDepth");

	Params::USynthComponentMonoWaveTable_SetPosLfoDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLfoDepth != nullptr)
		*InLfoDepth = Parms.InLfoDepth;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float* InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSustainGain != nullptr)
		*InSustainGain = Parms.InSustainGain;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float* InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InReleaseTimeMsec != nullptr)
		*InReleaseTimeMsec = Parms.InReleaseTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool* bInInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInInvert != nullptr)
		*bInInvert = Parms.bInInvert;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float* InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDepth != nullptr)
		*InDepth = Parms.InDepth;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float* InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDecayTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDecayTimeMsec != nullptr)
		*InDecayTimeMsec = Parms.InDecayTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool* bInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInBiasInvert != nullptr)
		*bInBiasInvert = Parms.bInBiasInvert;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float* InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDepth != nullptr)
		*InDepth = Parms.InDepth;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float* InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAttackTimeMsec != nullptr)
		*InAttackTimeMsec = Parms.InAttackTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewQ                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float* InNewQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetLowPassFilterResonance");

	Params::USynthComponentMonoWaveTable_SetLowPassFilterResonance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNewQ != nullptr)
		*InNewQ = Parms.InNewQ;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float* InMidiNote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyWithMidiNote");

	Params::USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMidiNote != nullptr)
		*InMidiNote = Parms.InMidiNote;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrequencyOffsetCents                                             (ConstParm, BlueprintReadOnly, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float* FrequencyOffsetCents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyPitchBend");

	Params::USynthComponentMonoWaveTable_SetFrequencyPitchBend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FrequencyOffsetCents != nullptr)
		*FrequencyOffsetCents = Parms.FrequencyOffsetCents;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrequencyHz                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequency");

	Params::USynthComponentMonoWaveTable_SetFrequency_Params Parms{};

	Parms.FrequencyHz = FrequencyHz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float* InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSustainGain != nullptr)
		*InSustainGain = Parms.InSustainGain;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float* InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InReleaseTimeMsec != nullptr)
		*InReleaseTimeMsec = Parms.InReleaseTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float* InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopenDecayTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDecayTimeMsec != nullptr)
		*InDecayTimeMsec = Parms.InDecayTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool* bInInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInInvert != nullptr)
		*bInInvert = Parms.bInInvert;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float* InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDepth != nullptr)
		*InDepth = Parms.InDepth;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool* bInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInBiasInvert != nullptr)
		*bInBiasInvert = Parms.bInBiasInvert;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float* InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDepth != nullptr)
		*InDepth = Parms.InDepth;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float* InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAttackTimeMsec != nullptr)
		*InAttackTimeMsec = Parms.InAttackTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              KeyframeIndex                                                    (ConstParm, ExportObject, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              NewValue                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USynthComponentMonoWaveTable::SetCurveValue(int32* KeyframeIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveValue");

	Params::USynthComponentMonoWaveTable_SetCurveValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (KeyframeIndex != nullptr)
		*KeyframeIndex = Parms.KeyframeIndex;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InNewTangent                                                     (Edit, ConstParm, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USynthComponentMonoWaveTable::SetCurveTangent(float* InNewTangent, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveTangent");

	Params::USynthComponentMonoWaveTable_SetCurveTangent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNewTangent != nullptr)
		*InNewTangent = Parms.InNewTangent;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECurveInterpolationType InterpolationType                                                (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// int32                              TableIndex                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USynthComponentMonoWaveTable::SetCurveInterpolationType(enum class ECurveInterpolationType* InterpolationType, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveInterpolationType");

	Params::USynthComponentMonoWaveTable_SetCurveInterpolationType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InterpolationType != nullptr)
		*InterpolationType = Parms.InterpolationType;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float* InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSustainGain != nullptr)
		*InSustainGain = Parms.InSustainGain;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float* InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InReleaseTimeMsec != nullptr)
		*InReleaseTimeMsec = Parms.InReleaseTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool* bInInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInInvert != nullptr)
		*bInInvert = Parms.bInInvert;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float* InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDepth != nullptr)
		*InDepth = Parms.InDepth;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float* InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDecayTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDecayTimeMsec != nullptr)
		*InDecayTimeMsec = Parms.InDecayTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool* bInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInBiasInvert != nullptr)
		*bInBiasInvert = Parms.bInBiasInvert;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float* InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InDepth != nullptr)
		*InDepth = Parms.InDepth;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float* InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAttackTimeMsec != nullptr)
		*InAttackTimeMsec = Parms.InAttackTimeMsec;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 USynthComponentMonoWaveTable::RefreshWaveTable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshWaveTable");

	Params::USynthComponentMonoWaveTable_RefreshWaveTable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              InMidiNote                                                       (EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              InVelocity                                                       (ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::NoteOn(float* InMidiNote, float* InVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOn");

	Params::USynthComponentMonoWaveTable_NoteOn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMidiNote != nullptr)
		*InMidiNote = Parms.InMidiNote;

	if (InVelocity != nullptr)
		*InVelocity = Parms.InVelocity;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::NoteOff(float* InMidiNote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOff");

	Params::USynthComponentMonoWaveTable_NoteOff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMidiNote != nullptr)
		*InMidiNote = Parms.InMidiNote;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              TableIndex                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<float>                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(const TArray<float>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetKeyFrameValuesForTable");

	Params::USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USynthComponentMonoWaveTable::GetCurveTangent(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetCurveTangent");

	Params::USynthComponentMonoWaveTable_GetCurveTangent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              InVolume                                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentToneGenerator::SetVolume(float* InVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentToneGenerator", "SetVolume");

	Params::USynthComponentToneGenerator_SetVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InVolume != nullptr)
		*InVolume = Parms.InVolume;

}


// Function Synthesis.SynthComponentToneGenerator.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

void USynthComponentToneGenerator::SetFrequency(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentToneGenerator", "SetFrequency");

	Params::USynthComponentToneGenerator_SetFrequency_Params Parms{};

	Parms.InFrequency = InFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class USoundWave*                  InSoundWave                                                      (OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthSamplePlayer::SetSoundWave(class USoundWave** InSoundWave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetSoundWave");

	Params::USynthSamplePlayer_SetSoundWave_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSoundWave != nullptr)
		*InSoundWave = Parms.InSoundWave;

}


// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScrubTimeWidthSec                                              (ConstParm, BlueprintVisible, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetScrubTimeWidth");

	Params::USynthSamplePlayer_SetScrubTimeWidth_Params Parms{};

	Parms.InScrubTimeWidthSec = InScrubTimeWidthSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthSamplePlayer.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScrubMode                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void USynthSamplePlayer::SetScrubMode(bool bScrubMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetScrubMode");

	Params::USynthSamplePlayer_SetScrubMode_Params Parms{};

	Parms.bScrubMode = bScrubMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Synthesis.SynthSamplePlayer.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPitch                                                          (Edit, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              TimeSec                                                          (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USynthSamplePlayer::SetPitch(float InPitch, float* TimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetPitch");

	Params::USynthSamplePlayer_SetPitch_Params Parms{};

	Parms.InPitch = InPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TimeSec != nullptr)
		*TimeSec = Parms.TimeSec;

}


// Function Synthesis.SynthSamplePlayer.SeekToTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeSec                                                          (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESamplePlayerSeekType   SeekType                                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bWrap                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void USynthSamplePlayer::SeekToTime(float* TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SeekToTime");

	Params::USynthSamplePlayer_SeekToTime_Params Parms{};

	Parms.SeekType = SeekType;
	Parms.bWrap = bWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TimeSec != nullptr)
		*TimeSec = Parms.TimeSec;

}


// Function Synthesis.SynthSamplePlayer.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InLinearValue                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              InDomainMin                                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              InDomainMax                                                      (ConstParm, BlueprintVisible, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float* InRangeMin, float* InRangeMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLogFrequency");

	Params::USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Params Parms{};

	Parms.InLinearValue = InLinearValue;
	Parms.InDomainMin = InDomainMin;
	Parms.InDomainMax = InDomainMax;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRangeMin != nullptr)
		*InRangeMin = Parms.InRangeMin;

	if (InRangeMax != nullptr)
		*InRangeMax = Parms.InRangeMax;

}


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InLogFrequencyValue                                              (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              InDomainMin                                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              InDomainMax                                                      (ConstParm, BlueprintVisible, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float* InRangeMin, float* InRangeMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLinearFrequency");

	Params::USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Params Parms{};

	Parms.InLogFrequencyValue = InLogFrequencyValue;
	Parms.InDomainMin = InDomainMin;
	Parms.InDomainMax = InDomainMax;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRangeMin != nullptr)
		*InRangeMin = Parms.InRangeMin;

	if (InRangeMax != nullptr)
		*InRangeMax = Parms.InRangeMax;

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
// struct FVector2D                   InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// float                              InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// struct FLinearColor                InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// struct FVector2D                   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// float                              InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               InValue                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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


