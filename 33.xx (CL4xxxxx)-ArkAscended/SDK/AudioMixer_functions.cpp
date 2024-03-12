#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioMixer.SynthComponent
// (SceneComponent)

class UClass* USynthComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthComponent");

	return Clss;
}


// SynthComponent AudioMixer.Default__SynthComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthComponent* USynthComponent::GetDefaultObj()
{
	static class USynthComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthComponent*>(USynthComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMixer.SynthComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponent::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "Start");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.SetVolumeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              VolumeMultiplier                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, DuplicateTransient)

void USynthComponent::SetVolumeMultiplier(float* VolumeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetVolumeMultiplier");

	Params::USynthComponent_SetVolumeMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (VolumeMultiplier != nullptr)
		*VolumeMultiplier = Parms.VolumeMultiplier;

}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmixBase*            Submix                                                           (BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              SendLevel                                                        (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float* SendLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetSubmixSend");

	Params::USynthComponent_SetSubmixSend_Params Parms{};

	Parms.Submix = Submix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SendLevel != nullptr)
		*SendLevel = Parms.SendLevel;

}


// Function AudioMixer.SynthComponent.SetOutputToBusOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInOutputToBusOnly                                               (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::SetOutputToBusOnly(bool bInOutputToBusOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetOutputToBusOnly");

	Params::USynthComponent_SetOutputToBusOnly_Params Parms{};

	Parms.bInOutputToBusOnly = bInOutputToBusOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InLowPassFilterFrequency                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetLowPassFilterFrequency");

	Params::USynthComponent_SetLowPassFilterFrequency_Params Parms{};

	Parms.InLowPassFilterFrequency = InLowPassFilterFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InLowPassFilterEnabled                                           (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetLowPassFilterEnabled");

	Params::USynthComponent_SetLowPassFilterEnabled_Params Parms{};

	Parms.InLowPassFilterEnabled = InLowPassFilterEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool USynthComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "IsPlaying");

	Params::USynthComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.FadeOut
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              FadeOutDuration                                                  (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              FadeVolumeLevel                                                  (BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "FadeOut");

	Params::USynthComponent_FadeOut_Params Parms{};

	Parms.FadeOutDuration = FadeOutDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.FadeIn
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              FadeInDuration                                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              FadeVolumeLevel                                                  (BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              StartTime                                                        (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class EAudioFaderCurve FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "FadeIn");

	Params::USynthComponent_FadeIn_Params Parms{};

	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;
	Parms.StartTime = StartTime;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.AdjustVolume
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              AdjustVolumeDuration                                             (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              AdjustVolumeLevel                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class EAudioFaderCurve FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "AdjustVolume");

	Params::USynthComponent_AdjustVolume_Params Parms{};

	Parms.AdjustVolumeDuration = AdjustVolumeDuration;
	Parms.AdjustVolumeLevel = AdjustVolumeLevel;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioMixer.AudioGenerator
// (None)

class UClass* UAudioGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioGenerator");

	return Clss;
}


// AudioGenerator AudioMixer.Default__AudioGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioGenerator* UAudioGenerator::GetDefaultObj()
{
	static class UAudioGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioGenerator*>(UAudioGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.AudioBusSubsystem
// (None)

class UClass* UAudioBusSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioBusSubsystem");

	return Clss;
}


// AudioBusSubsystem AudioMixer.Default__AudioBusSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioBusSubsystem* UAudioBusSubsystem::GetDefaultObj()
{
	static class UAudioBusSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioBusSubsystem*>(UAudioBusSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.AudioDeviceNotificationSubsystem
// (None)

class UClass* UAudioDeviceNotificationSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioDeviceNotificationSubsystem");

	return Clss;
}


// AudioDeviceNotificationSubsystem AudioMixer.Default__AudioDeviceNotificationSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioDeviceNotificationSubsystem* UAudioDeviceNotificationSubsystem::GetDefaultObj()
{
	static class UAudioDeviceNotificationSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioDeviceNotificationSubsystem*>(UAudioDeviceNotificationSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.AudioMixerBlueprintLibrary
// (None)

class UClass* UAudioMixerBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioMixerBlueprintLibrary");

	return Clss;
}


// AudioMixerBlueprintLibrary AudioMixer.Default__AudioMixerBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioMixerBlueprintLibrary* UAudioMixerBlueprintLibrary::GetDefaultObj()
{
	static class UAudioMixerBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioMixerBlueprintLibrary*>(UAudioMixerBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InMegabytesToFree                                                (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UAudioMixerBlueprintLibrary::TrimAudioCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "TrimAudioCache");

	Params::UAudioMixerBlueprintLibrary_TrimAudioCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      NewDeviceId                                                      (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCompletedDeviceSwap                                            (Edit, ConstParm, BlueprintVisible, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SwapAudioOutputDevice");

	Params::UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EAudioRecordingExportTypeExportType                                                       (Edit, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Path                                                             (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
// class USoundSubmix*                SubmixToRecord                                                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundWave*                  ExistingSoundWaveToOverwrite                                     (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundWave*                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(class UObject** WorldContextObject, class FString* Name, class USoundSubmix** SubmixToRecord, class USoundWave** ExistingSoundWaveToOverwrite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_StopRecordingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (SubmixToRecord != nullptr)
		*SubmixToRecord = Parms.SubmixToRecord;

	if (ExistingSoundWaveToOverwrite != nullptr)
		*ExistingSoundWaveToOverwrite = Parms.ExistingSoundWaveToOverwrite;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

void UAudioMixerBlueprintLibrary::StopAudioBus(class UObject** WorldContextObject, class UAudioBus** AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopAudioBus");

	Params::UAudioMixerBlueprintLibrary_StopAudioBus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (AudioBus != nullptr)
		*AudioBus = Parms.AudioBus;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToStopAnalyzing                                            (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToStopAnalyzing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopAnalyzingOutput");

	Params::UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixToStopAnalyzing != nullptr)
		*SubmixToStopAnalyzing = Parms.SubmixToStopAnalyzing;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ExpectedDuration                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundSubmix*                SubmixToRecord                                                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::StartRecordingOutput(class UObject** WorldContextObject, float* ExpectedDuration, class USoundSubmix** SubmixToRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_StartRecordingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (ExpectedDuration != nullptr)
		*ExpectedDuration = Parms.ExpectedDuration;

	if (SubmixToRecord != nullptr)
		*SubmixToRecord = Parms.SubmixToRecord;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

void UAudioMixerBlueprintLibrary::StartAudioBus(class UObject** WorldContextObject, class UAudioBus** AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartAudioBus");

	Params::UAudioMixerBlueprintLibrary_StartAudioBus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (AudioBus != nullptr)
		*AudioBus = Parms.AudioBus;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EFFTSize                FFTSize                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EFFTPeakInterpolationMethodInterpolationMethod                                              (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EFFTWindowType          WindowType                                                       (ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              HopSize                                                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EAudioSpectrumType      SpectrumType                                                     (Edit, Net, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod* InterpolationMethod, enum class EFFTWindowType WindowType, float* HopSize, enum class EAudioSpectrumType SpectrumType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartAnalyzingOutput");

	Params::UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params Parms{};

	Parms.FFTSize = FFTSize;
	Parms.WindowType = WindowType;
	Parms.SpectrumType = SpectrumType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixToAnalyze != nullptr)
		*SubmixToAnalyze = Parms.SubmixToAnalyze;

	if (InterpolationMethod != nullptr)
		*InterpolationMethod = Parms.InterpolationMethod;

	if (HopSize != nullptr)
		*HopSize = Parms.HopSize;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig)
// TArray<class USoundEffectSubmixPreset*>SubmixEffectPresetChain                                          (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              FadeTimeSec                                                      (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(class UObject** WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*>* SubmixEffectPresetChain, float* FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SetSubmixEffectChainOverride");

	Params::UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixEffectPresetChain != nullptr)
		*SubmixEffectPresetChain = std::move(Parms.SubmixEffectPresetChain);

	if (FadeTimeSec != nullptr)
		*FadeTimeSec = Parms.FadeTimeSec;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              EntryIndex                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bBypassed                                                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, bool* bBypassed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SetBypassSourceEffectChainEntry");

	Params::UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (PresetChain != nullptr)
		*PresetChain = Parms.PresetChain;

	if (bBypassed != nullptr)
		*bBypassed = Parms.bBypassed;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToPause                                                    (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ResumeRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixToPause != nullptr)
		*SubmixToPause = Parms.SubmixToPause;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                InSoundSubmix                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              SubmixChainIndex                                                 (Edit, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::ReplaceSubmixEffect(class UObject** WorldContextObject, class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (InSoundSubmix != nullptr)
		*InSoundSubmix = Parms.InSoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                InSoundSubmix                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              SubmixChainIndex                                                 (Edit, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(class UObject** WorldContextObject, class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSoundEffectSubmix");

	Params::UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (InSoundSubmix != nullptr)
		*InSoundSubmix = Parms.InSoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig)
// int32                              SubmixChainIndex                                                 (Edit, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(class UObject** WorldContextObject, class USoundSubmix* SoundSubmix, int32* SubmixChainIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPresetAtIndex");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(class UObject** WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPreset");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig)
// int32                              SubmixChainIndex                                                 (Edit, Net, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(class UObject** WorldContextObject, class USoundSubmix* SoundSubmix, int32* SubmixChainIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectAtIndex");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffect(class UObject** WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              EntryIndex                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSourceEffectFromPresetChain");

	Params::UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (PresetChain != nullptr)
		*PresetChain = Parms.PresetChain;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(class UObject** WorldContextObject, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveMasterSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  SoundWave                                                        (BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
// FDelegateProperty_                 OnLoadCompletion                                                 (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

class USoundWave* UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(FDelegateProperty_* OnLoadCompletion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "PrimeSoundForPlayback");

	Params::UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnLoadCompletion != nullptr)
		*OnLoadCompletion = Parms.OnLoadCompletion;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundCue*                   SoundCue                                                         (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm)

class USoundCue* UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "PrimeSoundCueForPlayback");

	Params::UAudioMixerBlueprintLibrary_PrimeSoundCueForPlayback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToPause                                                    (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::PauseRecordingOutput(class UObject** WorldContextObject, class USoundSubmix** SubmixToPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "PauseRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixToPause != nullptr)
		*SubmixToPause = Parms.SubmixToPause;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAudioSpectrumBandPresetTypeInBandPresetType                                                 (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InNumBands                                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType* InBandPresetType, int32* InNumBands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakePresetSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InBandPresetType != nullptr)
		*InBandPresetType = Parms.InBandPresetType;

	if (InNumBands != nullptr)
		*InNumBands = Parms.InNumBands;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              InNumSemitones                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EMusicalNoteName        InStartingMusicalNote                                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InStartingOctave                                                 (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32* InNumSemitones, enum class EMusicalNoteName* InStartingMusicalNote, int32* InStartingOctave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakeMusicalSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNumSemitones != nullptr)
		*InNumSemitones = Parms.InNumSemitones;

	if (InStartingMusicalNote != nullptr)
		*InStartingMusicalNote = Parms.InStartingMusicalNote;

	if (InStartingOctave != nullptr)
		*InStartingOctave = Parms.InStartingOctave;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              InNumBands                                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InMinimumFrequency                                               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InMaximumFrequency                                               (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32* InNumBands, float* InMinimumFrequency, float* InMaximumFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakeFullSpectrumSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InNumBands != nullptr)
		*InNumBands = Parms.InNumBands;

	if (InMinimumFrequency != nullptr)
		*InMinimumFrequency = Parms.InMinimumFrequency;

	if (InMaximumFrequency != nullptr)
		*InMaximumFrequency = Parms.InMaximumFrequency;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UAudioMixerBlueprintLibrary::IsAudioBusActive(class UObject** WorldContextObject, class UAudioBus** AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "IsAudioBusActive");

	Params::UAudioMixerBlueprintLibrary_IsAudioBusActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (AudioBus != nullptr)
		*AudioBus = Parms.AudioBus;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<float>                      Frequencies                                                      (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      Phases                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

TArray<float> UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(class UObject** WorldContextObject, TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetPhaseForFrequencies");

	Params::UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (Frequencies != nullptr)
		*Frequencies = std::move(Parms.Frequencies);

	if (SubmixToAnalyze != nullptr)
		*SubmixToAnalyze = Parms.SubmixToAnalyze;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetNumberOfEntriesInSourceEffectChain");

	Params::UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (PresetChain != nullptr)
		*PresetChain = Parms.PresetChain;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<float>                      Frequencies                                                      (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      Magnitudes                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (EditFixedSize, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

TArray<float> UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(class UObject** WorldContextObject, TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetMagnitudeForFrequencies");

	Params::UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (Frequencies != nullptr)
		*Frequencies = std::move(Parms.Frequencies);

	if (SubmixToAnalyze != nullptr)
		*SubmixToAnalyze = Parms.SubmixToAnalyze;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainCurrentDeviceEvent                                       (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName(class UObject** WorldContextObject, FDelegateProperty_* OnObtainCurrentDeviceEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetCurrentAudioOutputDeviceName");

	Params::UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (OnObtainCurrentDeviceEvent != nullptr)
		*OnObtainCurrentDeviceEvent = Parms.OnObtainCurrentDeviceEvent;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainDevicesEvent                                             (Edit, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

FDelegateProperty_ UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetAvailableAudioOutputDevices");

	Params::UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAudioOutputDeviceInfo      Info                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UAudioMixerBlueprintLibrary::Conv_AudioOutputDeviceInfoToString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "Conv_AudioOutputDeviceInfoToString");

	Params::UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig)

void UAudioMixerBlueprintLibrary::ClearSubmixEffects(class UObject** WorldContextObject, class USoundSubmix* SoundSubmix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffects");

	Params::UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig)
// float                              FadeTimeSec                                                      (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(class UObject** WorldContextObject, class USoundSubmix* SoundSubmix, float* FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffectChainOverride");

	Params::UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (FadeTimeSec != nullptr)
		*FadeTimeSec = Parms.FadeTimeSec;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearMasterSubmixEffects");

	Params::UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::AddSubmixEffect(class UObject** WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_AddSubmixEffect_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, Net, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSourceEffectChainEntry     Entry                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)

struct FSourceEffectChainEntry UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddSourceEffectToPresetChain");

	Params::UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (PresetChain != nullptr)
		*PresetChain = Parms.PresetChain;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(class UObject** WorldContextObject, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddMasterSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

}


// Class AudioMixer.SynthSound
// (None)

class UClass* USynthSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SynthSound");

	return Clss;
}


// SynthSound AudioMixer.Default__SynthSound
// (Public, ClassDefaultObject, ArchetypeObject)

class USynthSound* USynthSound::GetDefaultObj()
{
	static class USynthSound* Default = nullptr;

	if (!Default)
		Default = static_cast<USynthSound*>(USynthSound::StaticClass()->DefaultObject);

	return Default;
}


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// (None)

class UClass* USubmixEffectDynamicsProcessorPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectDynamicsProcessorPreset");

	return Clss;
}


// SubmixEffectDynamicsProcessorPreset AudioMixer.Default__SubmixEffectDynamicsProcessorPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectDynamicsProcessorPreset* USubmixEffectDynamicsProcessorPreset::GetDefaultObj()
{
	static class USubmixEffectDynamicsProcessorPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectDynamicsProcessorPreset*>(USubmixEffectDynamicsProcessorPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettingsSettings                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

void USubmixEffectDynamicsProcessorPreset::SetSettings(struct FSubmixEffectDynamicsProcessorSettings* Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetSettings");

	Params::USubmixEffectDynamicsProcessorPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Settings != nullptr)
		*Settings = std::move(Parms.Settings);

}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*                Submix                                                           (BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetExternalSubmix");

	Params::USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params Parms{};

	Parms.Submix = Submix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

void USubmixEffectDynamicsProcessorPreset::SetAudioBus(class UAudioBus** AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetAudioBus");

	Params::USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AudioBus != nullptr)
		*AudioBus = Parms.AudioBus;

}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USubmixEffectDynamicsProcessorPreset::ResetKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "ResetKey");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AudioMixer.SubmixEffectSubmixEQPreset
// (None)

class UClass* USubmixEffectSubmixEQPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectSubmixEQPreset");

	return Clss;
}


// SubmixEffectSubmixEQPreset AudioMixer.Default__SubmixEffectSubmixEQPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectSubmixEQPreset* USubmixEffectSubmixEQPreset::GetDefaultObj()
{
	static class USubmixEffectSubmixEQPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectSubmixEQPreset*>(USubmixEffectSubmixEQPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettingsInSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectSubmixEQPreset", "SetSettings");

	Params::USubmixEffectSubmixEQPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioMixer.SubmixEffectReverbPreset
// (None)

class UClass* USubmixEffectReverbPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubmixEffectReverbPreset");

	return Clss;
}


// SubmixEffectReverbPreset AudioMixer.Default__SubmixEffectReverbPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USubmixEffectReverbPreset* USubmixEffectReverbPreset::GetDefaultObj()
{
	static class USubmixEffectReverbPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USubmixEffectReverbPreset*>(USubmixEffectReverbPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UReverbEffect*               InReverbEffect                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              WetLevel                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              DryLevel                                                         (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UReverbEffect* USubmixEffectReverbPreset::SetSettingsWithReverbEffect(float* WetLevel, float* DryLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectReverbPreset", "SetSettingsWithReverbEffect");

	Params::USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WetLevel != nullptr)
		*WetLevel = Parms.WetLevel;

	if (DryLevel != nullptr)
		*DryLevel = Parms.DryLevel;

	return Parms.ReturnValue;

}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectReverbPreset", "SetSettings");

	Params::USubmixEffectReverbPreset_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AudioMixer.QuartzClockHandle
// (None)

class UClass* UQuartzClockHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuartzClockHandle");

	return Clss;
}


// QuartzClockHandle AudioMixer.Default__QuartzClockHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuartzClockHandle* UQuartzClockHandle::GetDefaultObj()
{
	static class UQuartzClockHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuartzClockHandle*>(UQuartzClockHandle::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationInQuantizationBoundary                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::UnsubscribeFromTimeDivision(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "UnsubscribeFromTimeDivision");

	Params::UQuartzClockHandle_UnsubscribeFromTimeDivision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "UnsubscribeFromAllTimeDivisions");

	Params::UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationInQuantizationBoundary                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnQuantizationEvent                                              (ConstParm, BlueprintReadOnly, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::SubscribeToQuantizationEvent(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SubscribeToQuantizationEvent");

	Params::UQuartzClockHandle_SubscribeToQuantizationEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnQuantizationEvent                                              (ConstParm, BlueprintReadOnly, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::SubscribeToAllQuantizationEvents(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SubscribeToAllQuantizationEvents");

	Params::UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.StopClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CancelPendingEvents                                              (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::StopClock(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StopClock");

	Params::UQuartzClockHandle_StopClock_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.StartOtherClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        OtherClockName                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FQuartzQuantizationBoundary InQuantizationBoundary                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FQuartzQuantizationBoundary UQuartzClockHandle::StartOtherClock(class UObject** WorldContextObject, FDelegateProperty_ InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StartOtherClock");

	Params::UQuartzClockHandle_StartOtherClock_Params Parms{};

	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.StartClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::StartClock(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StartClock");

	Params::UQuartzClockHandle_StartClock_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              TicksPerSecond                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UQuartzClockHandle::SetTicksPerSecond(class UObject** WorldContextObject, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetTicksPerSecond");

	Params::UQuartzClockHandle_SetTicksPerSecond_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ThirtySecondsNotesPerMinute                                      (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UQuartzClockHandle::SetThirtySecondNotesPerMinute(class UObject** WorldContextObject, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetThirtySecondNotesPerMinute");

	Params::UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              SecondsPerTick                                                   (ExportObject, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UQuartzClockHandle::SetSecondsPerTick(class UObject** WorldContextObject, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetSecondsPerTick");

	Params::UQuartzClockHandle_SetSecondsPerTick_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              MillisecondsPerTick                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UQuartzClockHandle::SetMillisecondsPerTick(class UObject** WorldContextObject, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetMillisecondsPerTick");

	Params::UQuartzClockHandle_SetMillisecondsPerTick_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              BeatsPerMinute                                                   (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UQuartzClockHandle::SetBeatsPerMinute(class UObject** WorldContextObject, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetBeatsPerMinute");

	Params::UQuartzClockHandle_SetBeatsPerMinute_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.ResumeClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::ResumeClock(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "ResumeClock");

	Params::UQuartzClockHandle_ResumeClock_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary InQuantizationBoundary                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::ResetTransportQuantized(class UObject** WorldContextObject, FDelegateProperty_ InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "ResetTransportQuantized");

	Params::UQuartzClockHandle_ResetTransportQuantized_Params Parms{};

	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.ResetTransport
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::ResetTransport(class UObject** WorldContextObject, FDelegateProperty_ InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "ResetTransport");

	Params::UQuartzClockHandle_ResetTransport_Params Parms{};

	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

}


// Function AudioMixer.QuartzClockHandle.PauseClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzClockHandle::PauseClock(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "PauseClock");

	Params::UQuartzClockHandle_PauseClock_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.IsClockRunning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UQuartzClockHandle::IsClockRunning(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "IsClockRunning");

	Params::UQuartzClockHandle_IsClockRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzClockHandle::GetTicksPerSecond(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetTicksPerSecond");

	Params::UQuartzClockHandle_GetTicksPerSecond_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetThirtySecondNotesPerMinute");

	Params::UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzClockHandle::GetSecondsPerTick(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetSecondsPerTick");

	Params::UQuartzClockHandle_GetSecondsPerTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzClockHandle::GetMillisecondsPerTick(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetMillisecondsPerTick");

	Params::UQuartzClockHandle_GetMillisecondsPerTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzClockHandle::GetEstimatedRunTime(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetEstimatedRunTime");

	Params::UQuartzClockHandle_GetEstimatedRunTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              Multiplier                                                       (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetDurationOfQuantizationTypeInSeconds");

	Params::UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzTransportTimeStamp   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FQuartzTransportTimeStamp UQuartzClockHandle::GetCurrentTimestamp(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetCurrentTimestamp");

	Params::UQuartzClockHandle_GetCurrentTimestamp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzClockHandle::GetBeatsPerMinute(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetBeatsPerMinute");

	Params::UQuartzClockHandle_GetBeatsPerMinute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Class AudioMixer.QuartzSubsystem
// (None)

class UClass* UQuartzSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuartzSubsystem");

	return Clss;
}


// QuartzSubsystem AudioMixer.Default__QuartzSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UQuartzSubsystem* UQuartzSubsystem::GetDefaultObj()
{
	static class UQuartzSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuartzSubsystem*>(UQuartzSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioMixer.QuartzSubsystem.IsQuartzEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UQuartzSubsystem::IsQuartzEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "IsQuartzEnabled");

	Params::UQuartzSubsystem_IsQuartzEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.IsClockRunning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UQuartzSubsystem::IsClockRunning(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "IsClockRunning");

	Params::UQuartzSubsystem_IsClockRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetRoundTripMinLatency(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMinLatency");

	Params::UQuartzSubsystem_GetRoundTripMinLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetRoundTripMaxLatency(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMaxLatency");

	Params::UQuartzSubsystem_GetRoundTripMaxLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetRoundTripAverageLatency(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripAverageLatency");

	Params::UQuartzSubsystem_GetRoundTripAverageLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetHandleForClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetHandleForClock");

	Params::UQuartzSubsystem_GetHandleForClock_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMinLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMaxLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadAverageLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        InClockName                                                      (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetEstimatedClockRunTime(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetEstimatedClockRunTime");

	Params::UQuartzSubsystem_GetEstimatedClockRunTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              Multiplier                                                       (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetDurationOfQuantizationTypeInSeconds");

	Params::UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        InClockName                                                      (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// struct FQuartzTransportTimeStamp   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FQuartzTransportTimeStamp UQuartzSubsystem::GetCurrentClockTimestamp(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetCurrentClockTimestamp");

	Params::UQuartzSubsystem_GetCurrentClockTimestamp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadMinLatency");

	Params::UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadMaxLatency");

	Params::UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadAverageLatency");

	Params::UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.DoesClockExist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UQuartzSubsystem::DoesClockExist(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DoesClockExist");

	Params::UQuartzSubsystem_DoesClockExist_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.DeleteClockByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class FName UQuartzSubsystem::DeleteClockByName(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DeleteClockByName");

	Params::UQuartzSubsystem_DeleteClockByName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          InClockHandle                                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UQuartzClockHandle* UQuartzSubsystem::DeleteClockByHandle(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DeleteClockByHandle");

	Params::UQuartzSubsystem_DeleteClockByHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.CreateNewClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FQuartzClockSettings        InSettings                                                       (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOverrideSettingsIfClockExists                                   (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseAudioEngineClockManager                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(class UObject** WorldContextObject, const struct FQuartzClockSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "CreateNewClock");

	Params::UQuartzSubsystem_CreateNewClock_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}

}


