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
// class UModularSynthPresetBank*     InBank                                                           (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FModularSynthPreset         Preset                                                           (ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      PresetName                                                       (BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// struct FModularSynthPreset         SynthPreset                                                      (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetSynthPreset(struct FModularSynthPreset* SynthPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSynthPreset");

	Params::UModularSynthComponent_SetSynthPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SynthPreset != nullptr)
		*SynthPreset = std::move(Parms.SynthPreset);

}


// Function Synthesis.ModularSynthComponent.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              DelayWetlevel                                                    (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetStereoDelayWetlevel(float* DelayWetlevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayWetlevel");

	Params::UModularSynthComponent_SetStereoDelayWetlevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DelayWetlevel != nullptr)
		*DelayWetlevel = Parms.DelayWetlevel;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayTimeMsec                                                    (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetStereoDelayTime(float* DelayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayTime");

	Params::UModularSynthComponent_SetStereoDelayTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DelayTimeMsec != nullptr)
		*DelayTimeMsec = Parms.DelayTimeMsec;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayRatio                                                       (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetStereoDelayRatio(float* DelayRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayRatio");

	Params::UModularSynthComponent_SetStereoDelayRatio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DelayRatio != nullptr)
		*DelayRatio = Parms.DelayRatio;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthStereoDelayMode   StereoDelayMode                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class ESynthStereoDelayMode UModularSynthComponent::SetStereoDelayMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayMode");

	Params::UModularSynthComponent_SetStereoDelayMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               StereoDelayEnabled                                               (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetStereoDelayIsEnabled(bool* StereoDelayEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayIsEnabled");

	Params::UModularSynthComponent_SetStereoDelayIsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StereoDelayEnabled != nullptr)
		*StereoDelayEnabled = Parms.StereoDelayEnabled;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayFeedback                                                    (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetStereoDelayFeedback(float* DelayFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayFeedback");

	Params::UModularSynthComponent_SetStereoDelayFeedback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DelayFeedback != nullptr)
		*DelayFeedback = Parms.DelayFeedback;

}


// Function Synthesis.ModularSynthComponent.SetSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Spread                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              ReleaseTimeMsec                                                  (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Portamento                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              PitchBend                                                        (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetPitchBend(float* PitchBend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPitchBend");

	Params::UModularSynthComponent_SetPitchBend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PitchBend != nullptr)
		*PitchBend = Parms.PitchBend;

}


// Function Synthesis.ModularSynthComponent.SetPan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pan                                                              (ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// int32                              OscIndex                                                         (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESynth1OscType          OscType                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscType(int32* OscIndex, enum class ESynth1OscType* OscType)
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

	if (OscType != nullptr)
		*OscType = Parms.OscType;

}


// Function Synthesis.ModularSynthComponent.SetOscSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSynced                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscSync(bool* bIsSynced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscSync");

	Params::UModularSynthComponent_SetOscSync_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsSynced != nullptr)
		*bIsSynced = Parms.bIsSynced;

}


// Function Synthesis.ModularSynthComponent.SetOscSemitones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Semitones                                                        (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscSemitones(int32* OscIndex, float* Semitones)
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

	if (Semitones != nullptr)
		*Semitones = Parms.Semitones;

}


// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Pulsewidth                                                       (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscPulsewidth(int32* OscIndex, float* Pulsewidth)
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

	if (Pulsewidth != nullptr)
		*Pulsewidth = Parms.Pulsewidth;

}


// Function Synthesis.ModularSynthComponent.SetOscOctave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Octave                                                           (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscOctave(int32* OscIndex, float* Octave)
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

	if (Octave != nullptr)
		*Octave = Parms.Octave;

}


// Function Synthesis.ModularSynthComponent.SetOscGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              OscGainMod                                                       (Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscGainMod(int32* OscIndex, float* OscGainMod)
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

	if (OscGainMod != nullptr)
		*OscGainMod = Parms.OscGainMod;

}


// Function Synthesis.ModularSynthComponent.SetOscGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              OscGain                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetOscGain(int32* OscIndex, float* OscGain)
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

	if (OscGain != nullptr)
		*OscGain = Parms.OscGain;

}


// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              OscFreqMod                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              OscIndex                                                         (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Cents                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              SustainGain                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Release                                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig)

float UModularSynthComponent::SetModEnvReleaseTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvReleaseTime");

	Params::UModularSynthComponent_SetModEnvReleaseTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetModEnvPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthModEnvPatch       InPatchType                                                      (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInvert                                                          (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvInvert(bool* bInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvInvert");

	Params::UModularSynthComponent_SetModEnvInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInvert != nullptr)
		*bInvert = Parms.bInvert;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)

void UModularSynthComponent::SetModEnvDepth(float* Depth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDepth");

	Params::UModularSynthComponent_SetModEnvDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Depth != nullptr)
		*Depth = Parms.Depth;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class ESynthModEnvBiasPatch   InPatchType                                                      (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInvert                                                          (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetModEnvBiasInvert(bool* bInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasInvert");

	Params::UModularSynthComponent_SetModEnvBiasInvert_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInvert != nullptr)
		*bInvert = Parms.bInvert;

}


// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESynthLFOType           LFOType                                                          (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetLFOType(int32* LFOIndex, enum class ESynthLFOType* LFOType)
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

	if (LFOType != nullptr)
		*LFOType = Parms.LFOType;

}


// Function Synthesis.ModularSynthComponent.SetLFOPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESynthLFOPatchType      LFOPatchType                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESynthLFOMode           LFOMode                                                          (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              GainMod                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Gain                                                             (BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FrequencyModHz                                                   (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              LFOIndex                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FrequencyHz                                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UModularSynthComponent::SetLFOFrequency(int32* LFOIndex, float* FrequencyHz)
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

	if (FrequencyHz != nullptr)
		*FrequencyHz = Parms.FrequencyHz;

}


// Function Synthesis.ModularSynthComponent.SetGainDb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              GainDb                                                           (BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// enum class ESynthFilterType        FilterType                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class ESynthFilterType UModularSynthComponent::SetFilterType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterType");

	Params::UModularSynthComponent_SetFilterType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetFilterQMod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQMod");

	Params::UModularSynthComponent_SetFilterQMod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UModularSynthComponent::SetFilterQ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQ");

	Params::UModularSynthComponent_SetFilterQ_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              FilterFrequencyHz                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class ESynthFilterAlgorithm   FilterAlgorithm                                                  (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

enum class ESynthFilterAlgorithm UModularSynthComponent::SetFilterAlgorithm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterAlgorithm");

	Params::UModularSynthComponent_SetFilterAlgorithm_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetEnableUnison
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               EnableUnison                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               RetriggerEnabled                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bEnablePolyphony                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// struct FPatchId                    PatchId                                                          (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate)
// bool                               bIsEnabled                                                       (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UModularSynthComponent::SetEnablePatch(struct FPatchId* PatchId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnablePatch");

	Params::UModularSynthComponent_SetEnablePatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PatchId != nullptr)
		*PatchId = std::move(Parms.PatchId);

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetEnableLegato
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               LegatoEnabled                                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              DecayTimeMsec                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              Frequency                                                        (BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UModularSynthComponent::SetChorusFrequency(float* Frequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusFrequency");

	Params::UModularSynthComponent_SetChorusFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Frequency != nullptr)
		*Frequency = Parms.Frequency;

}


// Function Synthesis.ModularSynthComponent.SetChorusFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Feedback                                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// bool                               EnableChorus                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              Depth                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)

void UModularSynthComponent::SetChorusDepth(float* Depth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusDepth");

	Params::UModularSynthComponent_SetChorusDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Depth != nullptr)
		*Depth = Parms.Depth;

}


// Function Synthesis.ModularSynthComponent.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Note                                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
// int32                              Velocity                                                         (Config, EditConst, GlobalConfig)
// float                              Duration                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)

float UModularSynthComponent::NoteOn(int32 Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOn");

	Params::UModularSynthComponent_NoteOn_Params Parms{};

	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
// bool                               bAllNotesOff                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bKillAllNotes                                                    (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UModularSynthComponent::NoteOff(bool* bAllNotesOff, bool* bKillAllNotes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOff");

	Params::UModularSynthComponent_NoteOff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bAllNotesOff != nullptr)
		*bAllNotesOff = Parms.bAllNotesOff;

	if (bKillAllNotes != nullptr)
		*bKillAllNotes = Parms.bKillAllNotes;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.CreatePatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ESynth1PatchSource      PatchSource                                                      (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FSynth1PatchCable>   PatchCables                                                      (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bEnableByDefault                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPatchId                    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPatchId UModularSynthComponent::CreatePatch(bool* bEnableByDefault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "CreatePatch");

	Params::UModularSynthComponent_CreatePatch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnableByDefault != nullptr)
		*bEnableByDefault = Parms.bEnableByDefault;

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
// struct FSourceEffectBitCrusherBaseSettingsSettings                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

void USourceEffectBitCrusherPreset::SetSettings(struct FSourceEffectBitCrusherBaseSettings* Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSettings");

	Params::USourceEffectBitCrusherPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Settings != nullptr)
		*Settings = std::move(Parms.Settings);

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   InModulators                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectBitCrusherPreset::SetSampleRateModulators(TSet<class USoundModulatorBase*>* InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulators");

	Params::USourceEffectBitCrusherPreset_SetSampleRateModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InModulators != nullptr)
		*InModulators = Parms.InModulators;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              SampleRate                                                       (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)

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
// struct FSourceEffectBitCrusherSettingsModulationSettings                                               (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// float                              Bits                                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectBitCrusherPreset::SetBits(float* Bits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBits");

	Params::USourceEffectBitCrusherPreset_SetBits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Bits != nullptr)
		*Bits = Parms.Bits;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   InModulators                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectBitCrusherPreset::SetBitModulators(TSet<class USoundModulatorBase*>* InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulators");

	Params::USourceEffectBitCrusherPreset_SetBitModulators_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InModulators != nullptr)
		*InModulators = Parms.InModulators;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class USoundModulatorBase*         Modulator                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              WetAmount                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetWet(float* WetAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWet");

	Params::USourceEffectChorusPreset_SetWet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WetAmount != nullptr)
		*WetAmount = Parms.WetAmount;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class USoundModulatorBase*         Modulator                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Spread                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// struct FSourceEffectChorusBaseSettingsSettings                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

void USourceEffectChorusPreset::SetSettings(struct FSourceEffectChorusBaseSettings* Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSettings");

	Params::USourceEffectChorusPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Settings != nullptr)
		*Settings = std::move(Parms.Settings);

}


// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusSettings ModulationSettings                                               (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class USoundModulatorBase*         Modulator                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Frequency                                                        (BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetFrequency(float* Frequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequency");

	Params::USourceEffectChorusPreset_SetFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Frequency != nullptr)
		*Frequency = Parms.Frequency;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class USoundModulatorBase*         Modulator                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Feedback                                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class USoundModulatorBase*         Modulator                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              DryAmount                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void USourceEffectChorusPreset::SetDry(float* DryAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDry");

	Params::USourceEffectChorusPreset_SetDry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DryAmount != nullptr)
		*DryAmount = Parms.DryAmount;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepthModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class USoundModulatorBase*         Modulator                                                        (ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Depth                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)

void USourceEffectChorusPreset::SetDepth(float* Depth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepth");

	Params::USourceEffectChorusPreset_SetDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Depth != nullptr)
		*Depth = Parms.Depth;

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
// struct FSourceEffectConvolutionReverbSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UAudioImpulseResponse*       InImpulseResponse                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USourceEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse** InImpulseResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::USourceEffectConvolutionReverbPreset_SetImpulseResponse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InImpulseResponse != nullptr)
		*InImpulseResponse = Parms.InImpulseResponse;

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
// struct FSourceEffectDynamicsProcessorSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, GlobalConfig)

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
// struct FSourceEffectEnvelopeFollowerSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, GlobalConfig)

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
// struct FSourceEffectEQSettings     InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectFilterSettings InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectFoldbackDistortionSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectMidSideSpreaderSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectMotionFilterSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectPannerSettings InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectPhaserSettings InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectRingModulationSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectSimpleDelaySettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectStereoDelaySettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSourceEffectWaveShaperSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSubmixEffectConvolutionReverbSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UAudioImpulseResponse*       InImpulseResponse                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse** InImpulseResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InImpulseResponse != nullptr)
		*InImpulseResponse = Parms.InImpulseResponse;

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
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaximumDelayLength                                               (BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetMaximumDelayLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetMaximumDelayLength");

	Params::USubmixEffectDelayStatics_SetMaximumDelayLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayStatics.SetInterpolationTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InterpolationTime                                                (ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetInterpolationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetInterpolationTime");

	Params::USubmixEffectDelayStatics_SetInterpolationTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayStatics.SetDelayLength
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DelayLength                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetDelayLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetDelayLength");

	Params::USubmixEffectDelayStatics_SetDelayLength_Params Parms{};


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
// struct FSubmixEffectDelaySettings  InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              Time                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

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
// struct FSubmixEffectDelaySettings  InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "GetMaxDelayInMilliseconds");

	Params::USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FSubmixEffectFilterSettings InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class ESubmixFilterType       InType                                                           (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InQ                                                              (Edit, ConstParm, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InQ                                                              (Edit, ConstParm, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InFrequency                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InFrequency                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class ESubmixFilterAlgorithm  InAlgorithm                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSubmixEffectFlexiverbSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSubmixEffectMultibandCompressorSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class USoundSubmix*                Submix                                                           (BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

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
// struct FSubmixEffectStereoDelaySettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSubmixEffectStereoToQuadSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              TapId                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTapDelayInfo               TapInfo                                                          (ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSubmixEffectTapDelaySettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              Time                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

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
// int32                              TapId                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// TArray<int32>                      TapIds                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              TapId                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTapDelayInfo               TapInfo                                                          (ConstParm, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetMaxDelayInMilliseconds");

	Params::USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              SustainGain                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class USoundWave*                  InSoundWave                                                      (ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bScrubMode                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              ReleaseTimeMsec                                                  (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              InPositionSec                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              LerpTimeSec                                                      (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EGranularSynthSeekType  SeekType                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InPlayheadRate                                                   (ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              BaseVolume                                                       (Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   VolumeRange                                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InGrainsPerSecond                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InGrainProbability                                               (Edit, BlueprintVisible, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              BasePitch                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   PitchRange                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              BasePan                                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   PanRange                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class EGranularSynthEnvelopeTypeEnvelopeType                                                     (ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              BaseDurationMsec                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   DurationRange                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              DecayTimeMsec                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              AttackTimeMsec                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// float                              Note                                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
// int32                              Velocity                                                         (Config, EditConst, GlobalConfig)
// float                              Duration                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)

float UGranularSynth::NoteOn(int32 Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "NoteOn");

	Params::UGranularSynth_NoteOn_Params Parms{};

	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
// bool                               bKill                                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UGranularSynth::NoteOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "NoteOff");

	Params::UGranularSynth_NoteOff_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UGranularSynth::IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "IsLoaded");

	Params::UGranularSynth_IsLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UGranularSynth::GetSampleDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "GetSampleDuration");

	Params::UGranularSynth_GetSampleDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UGranularSynth::GetCurrentPlayheadTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "GetCurrentPlayheadTime");

	Params::UGranularSynth_GetCurrentPlayheadTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              InPosition                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               InSustainPedalState                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class ESynthLFOType           InLfoType                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InLfoFrequency                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InLfoDepth                                                       (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InSustainGain                                                    (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InReleaseTimeMsec                                                (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInInvert                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDepth                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDecayTimeMsec                                                  (ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInBiasInvert                                                    (ConstParm, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDepth                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InAttackTimeMsec                                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InNewQ                                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InMidiNote                                                       (ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              FrequencyOffsetCents                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              FrequencyHz                                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void USynthComponentMonoWaveTable::SetFrequency(float* FrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequency");

	Params::USynthComponentMonoWaveTable_SetFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FrequencyHz != nullptr)
		*FrequencyHz = Parms.FrequencyHz;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InReleaseTimeMsec                                                (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDecayTimeMsec                                                  (ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInInvert                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDepth                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInBiasInvert                                                    (ConstParm, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDepth                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InAttackTimeMsec                                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// int32                              KeyframeIndex                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              NewValue                                                         (ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool USynthComponentMonoWaveTable::SetCurveValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveValue");

	Params::USynthComponentMonoWaveTable_SetCurveValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// float                              InNewTangent                                                     (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool USynthComponentMonoWaveTable::SetCurveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveTangent");

	Params::USynthComponentMonoWaveTable_SetCurveTangent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECurveInterpolationType InterpolationType                                                (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool USynthComponentMonoWaveTable::SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveInterpolationType");

	Params::USynthComponentMonoWaveTable_SetCurveInterpolationType_Params Parms{};

	Parms.InterpolationType = InterpolationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InReleaseTimeMsec                                                (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInInvert                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDepth                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDecayTimeMsec                                                  (ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInBiasInvert                                                    (ConstParm, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InDepth                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InAttackTimeMsec                                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

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
// float                              InMidiNote                                                       (ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InVelocity                                                       (ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InMidiNote                                                       (ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 USynthComponentMonoWaveTable::GetNumTableEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetNumTableEntries");

	Params::USynthComponentMonoWaveTable_GetNumTableEntries_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 USynthComponentMonoWaveTable::GetMaxTableIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetMaxTableIndex");

	Params::USynthComponentMonoWaveTable_GetMaxTableIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// TArray<float>                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetKeyFrameValuesForTable");

	Params::USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthComponentMonoWaveTable::GetCurveTangent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetCurveTangent");

	Params::USynthComponentMonoWaveTable_GetCurveTangent_Params Parms{};


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
// float                              InVolume                                                         (ConstParm, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InFrequency                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class USoundWave*                  InSoundWave                                                      (ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InScrubTimeWidthSec                                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bScrubMode                                                       (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InPitch                                                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              TimeSec                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

float USynthSamplePlayer::SetPitch(float* TimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetPitch");

	Params::USynthSamplePlayer_SetPitch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TimeSec != nullptr)
		*TimeSec = Parms.TimeSec;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.SeekToTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeSec                                                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class ESamplePlayerSeekType   SeekType                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bWrap                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool USynthSamplePlayer::SeekToTime(float* TimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SeekToTime");

	Params::USynthSamplePlayer_SeekToTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TimeSec != nullptr)
		*TimeSec = Parms.TimeSec;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool USynthSamplePlayer::IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "IsLoaded");

	Params::USynthSamplePlayer_IsLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthSamplePlayer::GetSampleDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetSampleDuration");

	Params::USynthSamplePlayer_GetSampleDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthSamplePlayer::GetCurrentPlaybackProgressTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressTime");

	Params::USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthSamplePlayer::GetCurrentPlaybackProgressPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressPercent");

	Params::USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              InLinearValue                                                    (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InDomainMin                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InDomainMax                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float* InRangeMin, float* InRangeMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLogFrequency");

	Params::USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRangeMin != nullptr)
		*InRangeMin = Parms.InRangeMin;

	if (InRangeMax != nullptr)
		*InRangeMax = Parms.InRangeMax;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InLogFrequencyValue                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InDomainMin                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InDomainMax                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float* InRangeMin, float* InRangeMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLinearFrequency");

	Params::USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRangeMin != nullptr)
		*InRangeMin = Parms.InRangeMin;

	if (InRangeMax != nullptr)
		*InRangeMax = Parms.InRangeMax;

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
// struct FVector2D                   InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FLinearColor                InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D USynth2DSlider::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "GetValue");

	Params::USynth2DSlider_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               InValue                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USynthKnob::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "GetValue");

	Params::USynthKnob_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


