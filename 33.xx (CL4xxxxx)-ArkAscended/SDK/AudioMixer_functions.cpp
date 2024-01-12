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
// float                              VolumeMultiplier                                                 (Edit, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetVolumeMultiplier");

	Params::USynthComponent_SetVolumeMultiplier_Params Parms{};

	Parms.VolumeMultiplier = VolumeMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmixBase*            Submix                                                           (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SendLevel                                                        (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float USynthComponent::SetSubmixSend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetSubmixSend");

	Params::USynthComponent_SetSubmixSend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.SetOutputToBusOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInOutputToBusOnly                                               (Edit, ConstParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool USynthComponent::SetOutputToBusOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetOutputToBusOnly");

	Params::USynthComponent_SetOutputToBusOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InLowPassFilterFrequency                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float USynthComponent::SetLowPassFilterFrequency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetLowPassFilterFrequency");

	Params::USynthComponent_SetLowPassFilterFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InLowPassFilterEnabled                                           (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool USynthComponent::SetLowPassFilterEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetLowPassFilterEnabled");

	Params::USynthComponent_SetLowPassFilterEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              FadeOutDuration                                                  (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FadeVolumeLevel                                                  (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EAudioFaderCurve USynthComponent::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "FadeOut");

	Params::USynthComponent_FadeOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.FadeIn
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              FadeInDuration                                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FadeVolumeLevel                                                  (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartTime                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EAudioFaderCurve USynthComponent::FadeIn(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "FadeIn");

	Params::USynthComponent_FadeIn_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.AdjustVolume
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              AdjustVolumeDuration                                             (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              AdjustVolumeLevel                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EAudioFaderCurve USynthComponent::AdjustVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "AdjustVolume");

	Params::USynthComponent_AdjustVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              InMegabytesToFree                                                (Edit, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "TrimAudioCache");

	Params::UAudioMixerBlueprintLibrary_TrimAudioCache_Params Parms{};

	Parms.InMegabytesToFree = InMegabytesToFree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      NewDeviceId                                                      (ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCompletedDeviceSwap                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(const class FString& NewDeviceId, FDelegateProperty_* OnCompletedDeviceSwap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SwapAudioOutputDevice");

	Params::UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params Parms{};

	Parms.NewDeviceId = NewDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnCompletedDeviceSwap != nullptr)
		*OnCompletedDeviceSwap = Parms.OnCompletedDeviceSwap;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAudioRecordingExportTypeExportType                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Path                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// class USoundSubmix*                SubmixToRecord                                                   (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundWave*                  ExistingSoundWaveToOverwrite                                     (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundWave*                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(enum class EAudioRecordingExportType* ExportType, class FString* Name, const class FString& Path, class USoundSubmix** SubmixToRecord, class USoundWave** ExistingSoundWaveToOverwrite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_StopRecordingOutput_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExportType != nullptr)
		*ExportType = Parms.ExportType;

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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

class UObject* UAudioMixerBlueprintLibrary::StopAudioBus(class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopAudioBus");

	Params::UAudioMixerBlueprintLibrary_StopAudioBus_Params Parms{};

	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToStopAnalyzing                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::StopAnalyzingOutput(class USoundSubmix** SubmixToStopAnalyzing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopAnalyzingOutput");

	Params::UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixToStopAnalyzing != nullptr)
		*SubmixToStopAnalyzing = Parms.SubmixToStopAnalyzing;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ExpectedDuration                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundSubmix*                SubmixToRecord                                                   (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::StartRecordingOutput(float* ExpectedDuration, class USoundSubmix** SubmixToRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_StartRecordingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpectedDuration != nullptr)
		*ExpectedDuration = Parms.ExpectedDuration;

	if (SubmixToRecord != nullptr)
		*SubmixToRecord = Parms.SubmixToRecord;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

class UObject* UAudioMixerBlueprintLibrary::StartAudioBus(class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartAudioBus");

	Params::UAudioMixerBlueprintLibrary_StartAudioBus_Params Parms{};

	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EFFTSize                FFTSize                                                          (Edit, Net, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EFFTPeakInterpolationMethodInterpolationMethod                                              (Edit, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EFFTWindowType          WindowType                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              HopSize                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EAudioSpectrumType      SpectrumType                                                     (BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::StartAnalyzingOutput(class USoundSubmix** SubmixToAnalyze, enum class EFFTSize* FFTSize, enum class EFFTPeakInterpolationMethod* InterpolationMethod, enum class EFFTWindowType* WindowType, float* HopSize, enum class EAudioSpectrumType* SpectrumType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartAnalyzingOutput");

	Params::UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixToAnalyze != nullptr)
		*SubmixToAnalyze = Parms.SubmixToAnalyze;

	if (FFTSize != nullptr)
		*FFTSize = Parms.FFTSize;

	if (InterpolationMethod != nullptr)
		*InterpolationMethod = Parms.InterpolationMethod;

	if (WindowType != nullptr)
		*WindowType = Parms.WindowType;

	if (HopSize != nullptr)
		*HopSize = Parms.HopSize;

	if (SpectrumType != nullptr)
		*SpectrumType = Parms.SpectrumType;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
// TArray<class USoundEffectSubmixPreset*>SubmixEffectPresetChain                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              FadeTimeSec                                                      (ConstParm, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(class USoundSubmix** SoundSubmix, TArray<class USoundEffectSubmixPreset*>* SubmixEffectPresetChain, float* FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SetSubmixEffectChainOverride");

	Params::UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixEffectPresetChain != nullptr)
		*SubmixEffectPresetChain = std::move(Parms.SubmixEffectPresetChain);

	if (FadeTimeSec != nullptr)
		*FadeTimeSec = Parms.FadeTimeSec;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              EntryIndex                                                       (Edit, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bBypassed                                                        (Edit, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(class USoundEffectSourcePresetChain** PresetChain, int32 EntryIndex, bool* bBypassed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SetBypassSourceEffectChainEntry");

	Params::UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PresetChain != nullptr)
		*PresetChain = Parms.PresetChain;

	if (bBypassed != nullptr)
		*bBypassed = Parms.bBypassed;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToPause                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::ResumeRecordingOutput(class USoundSubmix** SubmixToPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ResumeRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixToPause != nullptr)
		*SubmixToPause = Parms.SubmixToPause;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                InSoundSubmix                                                    (Edit, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              SubmixChainIndex                                                 (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::ReplaceSubmixEffect(class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSoundSubmix != nullptr)
		*InSoundSubmix = Parms.InSoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                InSoundSubmix                                                    (Edit, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              SubmixChainIndex                                                 (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSoundEffectSubmix");

	Params::UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSoundSubmix != nullptr)
		*InSoundSubmix = Parms.InSoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
// int32                              SubmixChainIndex                                                 (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(class USoundSubmix** SoundSubmix, int32* SubmixChainIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPresetAtIndex");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPreset");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
// int32                              SubmixChainIndex                                                 (ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(class USoundSubmix** SoundSubmix, int32* SubmixChainIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectAtIndex");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSubmixEffect(class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              EntryIndex                                                       (Edit, EditFixedSize, Parm, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(class USoundEffectSourcePresetChain** PresetChain, int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSourceEffectFromPresetChain");

	Params::UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PresetChain != nullptr)
		*PresetChain = Parms.PresetChain;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveMasterSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  SoundWave                                                        (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, GlobalConfig)
// FDelegateProperty_                 OnLoadCompletion                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty_* OnLoadCompletion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "PrimeSoundForPlayback");

	Params::UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params Parms{};

	Parms.SoundWave = SoundWave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnLoadCompletion != nullptr)
		*OnLoadCompletion = Parms.OnLoadCompletion;

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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToPause                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::PauseRecordingOutput(class USoundSubmix** SubmixToPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "PauseRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixToPause != nullptr)
		*SubmixToPause = Parms.SubmixToPause;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAudioSpectrumBandPresetTypeInBandPresetType                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InNumBands                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              InNumSemitones                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EMusicalNoteName        InStartingMusicalNote                                            (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InStartingOctave                                                 (Edit, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              InNumBands                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InMinimumFrequency                                               (Edit, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InMaximumFrequency                                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UAudioMixerBlueprintLibrary::IsAudioBusActive(class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "IsAudioBusActive");

	Params::UAudioMixerBlueprintLibrary_IsAudioBusActive_Params Parms{};

	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<float>                      Frequencies                                                      (EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      Phases                                                           (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<float> UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetPhaseForFrequencies");

	Params::UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Frequencies != nullptr)
		*Frequencies = std::move(Parms.Frequencies);

	if (SubmixToAnalyze != nullptr)
		*SubmixToAnalyze = Parms.SubmixToAnalyze;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class USoundEffectSourcePresetChain** PresetChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetNumberOfEntriesInSourceEffectChain");

	Params::UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PresetChain != nullptr)
		*PresetChain = Parms.PresetChain;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<float>                      Frequencies                                                      (EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      Magnitudes                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<float> UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetMagnitudeForFrequencies");

	Params::UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Frequencies != nullptr)
		*Frequencies = std::move(Parms.Frequencies);

	if (SubmixToAnalyze != nullptr)
		*SubmixToAnalyze = Parms.SubmixToAnalyze;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainCurrentDeviceEvent                                       (Edit, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName(FDelegateProperty_* OnObtainCurrentDeviceEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetCurrentAudioOutputDeviceName");

	Params::UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnObtainCurrentDeviceEvent != nullptr)
		*OnObtainCurrentDeviceEvent = Parms.OnObtainCurrentDeviceEvent;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainDevicesEvent                                             (ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)

FDelegateProperty_ UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetAvailableAudioOutputDevices");

	Params::UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAudioOutputDeviceInfo      Info                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)

class UObject* UAudioMixerBlueprintLibrary::ClearSubmixEffects(class USoundSubmix** SoundSubmix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffects");

	Params::UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
// float                              FadeTimeSec                                                      (ConstParm, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(class USoundSubmix** SoundSubmix, float* FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffectChainOverride");

	Params::UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (FadeTimeSec != nullptr)
		*FadeTimeSec = Parms.FadeTimeSec;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearMasterSubmixEffects");

	Params::UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::AddSubmixEffect(class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_AddSubmixEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSourceEffectChainEntry     Entry                                                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class USoundEffectSourcePresetChain** PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddSourceEffectToPresetChain");

	Params::UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PresetChain != nullptr)
		*PresetChain = Parms.PresetChain;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddMasterSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

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
// struct FSubmixEffectDynamicsProcessorSettingsSettings                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class USoundSubmix*                Submix                                                           (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class USoundSubmix* USubmixEffectDynamicsProcessorPreset::SetExternalSubmix()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetExternalSubmix");

	Params::USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)

void USubmixEffectDynamicsProcessorPreset::SetAudioBus(class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetAudioBus");

	Params::USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params Parms{};

	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSubmixEffectSubmixEQSettingsInSettings                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FSubmixEffectSubmixEQSettings USubmixEffectSubmixEQPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectSubmixEQPreset", "SetSettings");

	Params::USubmixEffectSubmixEQPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class UReverbEffect*               InReverbEffect                                                   (ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              WetLevel                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              DryLevel                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

float USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectReverbPreset", "SetSettingsWithReverbEffect");

	Params::USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params Parms{};

	Parms.InReverbEffect = InReverbEffect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FSubmixEffectReverbSettings USubmixEffectReverbPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectReverbPreset", "SetSettings");

	Params::USubmixEffectReverbPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationInQuantizationBoundary                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::UnsubscribeFromTimeDivision(enum class EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "UnsubscribeFromTimeDivision");

	Params::UQuartzClockHandle_UnsubscribeFromTimeDivision_Params Parms{};

	Parms.InQuantizationBoundary = InQuantizationBoundary;
	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "UnsubscribeFromAllTimeDivisions");

	Params::UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params Parms{};

	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationInQuantizationBoundary                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnQuantizationEvent                                              (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::SubscribeToQuantizationEvent(enum class EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SubscribeToQuantizationEvent");

	Params::UQuartzClockHandle_SubscribeToQuantizationEvent_Params Parms{};

	Parms.InQuantizationBoundary = InQuantizationBoundary;
	Parms.OnQuantizationEvent = OnQuantizationEvent;
	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnQuantizationEvent                                              (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::SubscribeToAllQuantizationEvents(FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SubscribeToAllQuantizationEvents");

	Params::UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params Parms{};

	Parms.OnQuantizationEvent = OnQuantizationEvent;
	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.StopClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CancelPendingEvents                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::StopClock(bool CancelPendingEvents, class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StopClock");

	Params::UQuartzClockHandle_StopClock_Params Parms{};

	Parms.CancelPendingEvents = CancelPendingEvents;
	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.StartOtherClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        OtherClockName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FQuartzQuantizationBoundary InQuantizationBoundary                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::StartOtherClock(class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_ InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StartOtherClock");

	Params::UQuartzClockHandle_StartOtherClock_Params Parms{};

	Parms.OtherClockName = OtherClockName;
	Parms.InQuantizationBoundary = InQuantizationBoundary;
	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.StartClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::StartClock(class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StartClock");

	Params::UQuartzClockHandle_StartClock_Params Parms{};

	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              TicksPerSecond                                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

float UQuartzClockHandle::SetTicksPerSecond(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetTicksPerSecond");

	Params::UQuartzClockHandle_SetTicksPerSecond_Params Parms{};

	Parms.QuantizationBoundary = QuantizationBoundary;
	Parms.Delegate = Delegate;
	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ThirtySecondsNotesPerMinute                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::SetThirtySecondNotesPerMinute(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float ThirtySecondsNotesPerMinute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetThirtySecondNotesPerMinute");

	Params::UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params Parms{};

	Parms.QuantizationBoundary = QuantizationBoundary;
	Parms.Delegate = Delegate;
	Parms.ClockHandle = ClockHandle;
	Parms.ThirtySecondsNotesPerMinute = ThirtySecondsNotesPerMinute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              SecondsPerTick                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::SetSecondsPerTick(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float SecondsPerTick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetSecondsPerTick");

	Params::UQuartzClockHandle_SetSecondsPerTick_Params Parms{};

	Parms.QuantizationBoundary = QuantizationBoundary;
	Parms.Delegate = Delegate;
	Parms.ClockHandle = ClockHandle;
	Parms.SecondsPerTick = SecondsPerTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              MillisecondsPerTick                                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::SetMillisecondsPerTick(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float MillisecondsPerTick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetMillisecondsPerTick");

	Params::UQuartzClockHandle_SetMillisecondsPerTick_Params Parms{};

	Parms.QuantizationBoundary = QuantizationBoundary;
	Parms.Delegate = Delegate;
	Parms.ClockHandle = ClockHandle;
	Parms.MillisecondsPerTick = MillisecondsPerTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              BeatsPerMinute                                                   (Edit, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::SetBeatsPerMinute(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float BeatsPerMinute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetBeatsPerMinute");

	Params::UQuartzClockHandle_SetBeatsPerMinute_Params Parms{};

	Parms.QuantizationBoundary = QuantizationBoundary;
	Parms.Delegate = Delegate;
	Parms.ClockHandle = ClockHandle;
	Parms.BeatsPerMinute = BeatsPerMinute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.ResumeClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::ResumeClock(class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "ResumeClock");

	Params::UQuartzClockHandle_ResumeClock_Params Parms{};

	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary InQuantizationBoundary                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::ResetTransportQuantized(const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_ InDelegate, class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "ResetTransportQuantized");

	Params::UQuartzClockHandle_ResetTransportQuantized_Params Parms{};

	Parms.InQuantizationBoundary = InQuantizationBoundary;
	Parms.InDelegate = InDelegate;
	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.ResetTransport
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::ResetTransport(FDelegateProperty_ InDelegate)
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

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.PauseClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzClockHandle::PauseClock(class UQuartzClockHandle* ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "PauseClock");

	Params::UQuartzClockHandle_PauseClock_Params Parms{};

	Parms.ClockHandle = ClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.IsClockRunning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UQuartzClockHandle::IsClockRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "IsClockRunning");

	Params::UQuartzClockHandle_IsClockRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzClockHandle::GetTicksPerSecond()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetTicksPerSecond");

	Params::UQuartzClockHandle_GetTicksPerSecond_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzClockHandle::GetThirtySecondNotesPerMinute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetThirtySecondNotesPerMinute");

	Params::UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzClockHandle::GetSecondsPerTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetSecondsPerTick");

	Params::UQuartzClockHandle_GetSecondsPerTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzClockHandle::GetMillisecondsPerTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetMillisecondsPerTick");

	Params::UQuartzClockHandle_GetMillisecondsPerTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzClockHandle::GetEstimatedRunTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetEstimatedRunTime");

	Params::UQuartzClockHandle_GetEstimatedRunTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Multiplier                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(float* Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetDurationOfQuantizationTypeInSeconds");

	Params::UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzTransportTimeStamp   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FQuartzTransportTimeStamp UQuartzClockHandle::GetCurrentTimestamp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetCurrentTimestamp");

	Params::UQuartzClockHandle_GetCurrentTimestamp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzClockHandle::GetBeatsPerMinute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetBeatsPerMinute");

	Params::UQuartzClockHandle_GetBeatsPerMinute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UQuartzSubsystem::IsClockRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "IsClockRunning");

	Params::UQuartzSubsystem_IsClockRunning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetRoundTripMinLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMinLatency");

	Params::UQuartzSubsystem_GetRoundTripMinLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetRoundTripMaxLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMaxLatency");

	Params::UQuartzSubsystem_GetRoundTripMaxLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetRoundTripAverageLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripAverageLatency");

	Params::UQuartzSubsystem_GetRoundTripAverageLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetHandleForClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetHandleForClock");

	Params::UQuartzSubsystem_GetHandleForClock_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMinLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMaxLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadAverageLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        InClockName                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetEstimatedClockRunTime(class FName InClockName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetEstimatedClockRunTime");

	Params::UQuartzSubsystem_GetEstimatedClockRunTime_Params Parms{};

	Parms.InClockName = InClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Multiplier                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(float* Multiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetDurationOfQuantizationTypeInSeconds");

	Params::UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        InClockName                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FQuartzTransportTimeStamp   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FQuartzTransportTimeStamp UQuartzSubsystem::GetCurrentClockTimestamp(class FName InClockName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetCurrentClockTimestamp");

	Params::UQuartzSubsystem_GetCurrentClockTimestamp_Params Parms{};

	Parms.InClockName = InClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UQuartzSubsystem::DoesClockExist()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DoesClockExist");

	Params::UQuartzSubsystem_DoesClockExist_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.DeleteClockByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UQuartzSubsystem::DeleteClockByName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DeleteClockByName");

	Params::UQuartzSubsystem_DeleteClockByName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          InClockHandle                                                    (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UQuartzSubsystem::DeleteClockByHandle(class UQuartzClockHandle* InClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DeleteClockByHandle");

	Params::UQuartzSubsystem_DeleteClockByHandle_Params Parms{};

	Parms.InClockHandle = InClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.CreateNewClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzClockSettings        InSettings                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOverrideSettingsIfClockExists                                   (Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseAudioEngineClockManager                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "CreateNewClock");

	Params::UQuartzSubsystem_CreateNewClock_Params Parms{};

	Parms.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;
	Parms.bUseAudioEngineClockManager = bUseAudioEngineClockManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


