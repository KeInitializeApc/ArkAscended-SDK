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
// float                              VolumeMultiplier                                                 (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

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
// class USoundSubmixBase*            Submix                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              SendLevel                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix)
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

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.SetOutputToBusOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInOutputToBusOnly                                               (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// float                              InLowPassFilterFrequency                                         (ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// bool                               InLowPassFilterEnabled                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::SetLowPassFilterEnabled(bool* InLowPassFilterEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetLowPassFilterEnabled");

	Params::USynthComponent_SetLowPassFilterEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLowPassFilterEnabled != nullptr)
		*InLowPassFilterEnabled = Parms.InLowPassFilterEnabled;

}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USynthComponent::IsPlaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "IsPlaying");

	Params::USynthComponent_IsPlaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SynthComponent.FadeOut
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              FadeOutDuration                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              FadeVolumeLevel                                                  (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::FadeOut(float* FadeOutDuration, float* FadeVolumeLevel, enum class EAudioFaderCurve* FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "FadeOut");

	Params::USynthComponent_FadeOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FadeOutDuration != nullptr)
		*FadeOutDuration = Parms.FadeOutDuration;

	if (FadeVolumeLevel != nullptr)
		*FadeVolumeLevel = Parms.FadeVolumeLevel;

	if (FadeCurve != nullptr)
		*FadeCurve = Parms.FadeCurve;

}


// Function AudioMixer.SynthComponent.FadeIn
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              FadeInDuration                                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              FadeVolumeLevel                                                  (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              StartTime                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

float USynthComponent::FadeIn(float* FadeInDuration, float* FadeVolumeLevel, enum class EAudioFaderCurve* FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "FadeIn");

	Params::USynthComponent_FadeIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FadeInDuration != nullptr)
		*FadeInDuration = Parms.FadeInDuration;

	if (FadeVolumeLevel != nullptr)
		*FadeVolumeLevel = Parms.FadeVolumeLevel;

	if (FadeCurve != nullptr)
		*FadeCurve = Parms.FadeCurve;

	return Parms.ReturnValue;

}


// Function AudioMixer.SynthComponent.AdjustVolume
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                              AdjustVolumeDuration                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              AdjustVolumeLevel                                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

void USynthComponent::AdjustVolume(float* AdjustVolumeDuration, float* AdjustVolumeLevel, enum class EAudioFaderCurve* FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "AdjustVolume");

	Params::USynthComponent_AdjustVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AdjustVolumeDuration != nullptr)
		*AdjustVolumeDuration = Parms.AdjustVolumeDuration;

	if (AdjustVolumeLevel != nullptr)
		*AdjustVolumeLevel = Parms.AdjustVolumeLevel;

	if (FadeCurve != nullptr)
		*FadeCurve = Parms.FadeCurve;

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
// float                              InMegabytesToFree                                                (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "TrimAudioCache");

	Params::UAudioMixerBlueprintLibrary_TrimAudioCache_Params Parms{};

	Parms.InMegabytesToFree = InMegabytesToFree;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      NewDeviceId                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCompletedDeviceSwap                                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(const class FString& NewDeviceId, FDelegateProperty_ OnCompletedDeviceSwap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SwapAudioOutputDevice");

	Params::UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params Parms{};

	Parms.NewDeviceId = NewDeviceId;
	Parms.OnCompletedDeviceSwap = OnCompletedDeviceSwap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EAudioRecordingExportTypeExportType                                                       (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Path                                                             (ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
// class USoundSubmix*                SubmixToRecord                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class USoundWave*                  ExistingSoundWaveToOverwrite                                     (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class USoundWave*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::StopRecordingOutput(enum class EAudioRecordingExportType ExportType, class FString* Name, class FString* Path, class USoundSubmix** SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite, class USoundWave* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_StopRecordingOutput_Params Parms{};

	Parms.ExportType = ExportType;
	Parms.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (Path != nullptr)
		*Path = std::move(Parms.Path);

	if (SubmixToRecord != nullptr)
		*SubmixToRecord = Parms.SubmixToRecord;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

class UAudioBus* UAudioMixerBlueprintLibrary::StopAudioBus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopAudioBus");

	Params::UAudioMixerBlueprintLibrary_StopAudioBus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToStopAnalyzing                                            (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::StopAnalyzingOutput(class USoundSubmix* SubmixToStopAnalyzing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopAnalyzingOutput");

	Params::UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params Parms{};

	Parms.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ExpectedDuration                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class USoundSubmix*                SubmixToRecord                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::StartRecordingOutput(float ExpectedDuration, class USoundSubmix** SubmixToRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_StartRecordingOutput_Params Parms{};

	Parms.ExpectedDuration = ExpectedDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixToRecord != nullptr)
		*SubmixToRecord = Parms.SubmixToRecord;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

class UAudioBus* UAudioMixerBlueprintLibrary::StartAudioBus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartAudioBus");

	Params::UAudioMixerBlueprintLibrary_StartAudioBus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EFFTSize                FFTSize                                                          (BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// enum class EFFTPeakInterpolationMethodInterpolationMethod                                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EFFTWindowType          WindowType                                                       (ConstParm, BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// float                              HopSize                                                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EAudioSpectrumType      SpectrumType                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::StartAnalyzingOutput(class USoundSubmix** SubmixToAnalyze, enum class EFFTSize* FFTSize, enum class EFFTPeakInterpolationMethod* InterpolationMethod, enum class EFFTWindowType* WindowType, float* HopSize, enum class EAudioSpectrumType SpectrumType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartAnalyzingOutput");

	Params::UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params Parms{};

	Parms.SpectrumType = SpectrumType;

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

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// TArray<class USoundEffectSubmixPreset*>SubmixEffectPresetChain                                          (Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              FadeTimeSec                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*>* SubmixEffectPresetChain, float* FadeTimeSec)
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

	if (SubmixEffectPresetChain != nullptr)
		*SubmixEffectPresetChain = std::move(Parms.SubmixEffectPresetChain);

	if (FadeTimeSec != nullptr)
		*FadeTimeSec = Parms.FadeTimeSec;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              EntryIndex                                                       (ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bBypassed                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToPause                                                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                InSoundSubmix                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              SubmixChainIndex                                                 (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                InSoundSubmix                                                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              SubmixChainIndex                                                 (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// int32                              SubmixChainIndex                                                 (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(class USoundSubmix* SoundSubmix, int32* SubmixChainIndex)
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

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset)
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

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// int32                              SubmixChainIndex                                                 (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(class USoundSubmix* SoundSubmix, int32* SubmixChainIndex)
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

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::RemoveSubmixEffect(class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset)
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

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              EntryIndex                                                       (ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class USoundWave*                  SoundWave                                                        (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
// FDelegateProperty_                 OnLoadCompletion                                                 (EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToPause                                                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class EAudioSpectrumBandPresetTypeInBandPresetType                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              InNumBands                                                       (BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType* InBandPresetType, int32* InNumBands, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakePresetSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// int32                              InNumSemitones                                                   (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EMusicalNoteName        InStartingMusicalNote                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              InStartingOctave                                                 (ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32* InNumSemitones, enum class EMusicalNoteName* InStartingMusicalNote, int32* InStartingOctave, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakeMusicalSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// int32                              InNumBands                                                       (BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              InMinimumFrequency                                               (ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              InMaximumFrequency                                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32* InNumBands, float* InMinimumFrequency, float* InMaximumFrequency, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakeFullSpectrumSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAudioBus* UAudioMixerBlueprintLibrary::IsAudioBusActive(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "IsAudioBusActive");

	Params::UAudioMixerBlueprintLibrary_IsAudioBusActive_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<float>                      Frequencies                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<float>                      Phases                                                           (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class USoundEffectSourcePresetChain** PresetChain, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetNumberOfEntriesInSourceEffectChain");

	Params::UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<float>                      Frequencies                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<float>                      Magnitudes                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainCurrentDeviceEvent                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainDevicesEvent                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAudioOutputDeviceInfo UAudioMixerBlueprintLibrary::Conv_AudioOutputDeviceInfoToString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "Conv_AudioOutputDeviceInfoToString");

	Params::UAudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)

class UObject* UAudioMixerBlueprintLibrary::ClearSubmixEffects(class USoundSubmix* SoundSubmix)
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

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// float                              FadeTimeSec                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(class USoundSubmix* SoundSubmix, float* FadeTimeSec)
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

	if (FadeTimeSec != nullptr)
		*FadeTimeSec = Parms.FadeTimeSec;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UAudioMixerBlueprintLibrary::AddSubmixEffect(class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_AddSubmixEffect_Params Parms{};

	Parms.SoundSubmix = SoundSubmix;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixEffectPreset != nullptr)
		*SubmixEffectPreset = Parms.SubmixEffectPreset;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FSourceEffectChainEntry     Entry                                                            (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FSourceEffectChainEntry UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class USoundEffectSourcePresetChain** PresetChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddSourceEffectToPresetChain");

	Params::UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params Parms{};


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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FSubmixEffectDynamicsProcessorSettingsSettings                                                         (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetSettings");

	Params::USubmixEffectDynamicsProcessorPreset_SetSettings_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*                Submix                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class UAudioBus*                   AudioBus                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

class UAudioBus* USubmixEffectDynamicsProcessorPreset::SetAudioBus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetAudioBus");

	Params::USubmixEffectDynamicsProcessorPreset_SetAudioBus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FSubmixEffectSubmixEQSettingsInSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class UReverbEffect*               InReverbEffect                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              WetLevel                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              DryLevel                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float* WetLevel, float* DryLevel)
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

	if (WetLevel != nullptr)
		*WetLevel = Parms.WetLevel;

	if (DryLevel != nullptr)
		*DryLevel = Parms.DryLevel;

}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationInQuantizationBoundary                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationInQuantizationBoundary                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnQuantizationEvent                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 OnQuantizationEvent                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CancelPendingEvents                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        OtherClockName                                                   (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FQuartzQuantizationBoundary InQuantizationBoundary                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              TicksPerSecond                                                   (ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UObject* UQuartzClockHandle::SetTicksPerSecond(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float* TicksPerSecond)
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

	if (TicksPerSecond != nullptr)
		*TicksPerSecond = Parms.TicksPerSecond;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ThirtySecondsNotesPerMinute                                      (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              SecondsPerTick                                                   (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              MillisecondsPerTick                                              (Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              BeatsPerMinute                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary InQuantizationBoundary                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzClockHandle::IsClockRunning(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "IsClockRunning");

	Params::UQuartzClockHandle_IsClockRunning_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzClockHandle::GetTicksPerSecond(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetTicksPerSecond");

	Params::UQuartzClockHandle_GetTicksPerSecond_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzClockHandle::GetThirtySecondNotesPerMinute(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetThirtySecondNotesPerMinute");

	Params::UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzClockHandle::GetSecondsPerTick(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetSecondsPerTick");

	Params::UQuartzClockHandle_GetSecondsPerTick_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzClockHandle::GetMillisecondsPerTick(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetMillisecondsPerTick");

	Params::UQuartzClockHandle_GetMillisecondsPerTick_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzClockHandle::GetEstimatedRunTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetEstimatedRunTime");

	Params::UQuartzClockHandle_GetEstimatedRunTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// float                              Multiplier                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetDurationOfQuantizationTypeInSeconds");

	Params::UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FQuartzTransportTimeStamp   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzClockHandle::GetCurrentTimestamp(const struct FQuartzTransportTimeStamp& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetCurrentTimestamp");

	Params::UQuartzClockHandle_GetCurrentTimestamp_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzClockHandle::GetBeatsPerMinute(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetBeatsPerMinute");

	Params::UQuartzClockHandle_GetBeatsPerMinute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UQuartzSubsystem::IsQuartzEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "IsQuartzEnabled");

	Params::UQuartzSubsystem_IsQuartzEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.IsClockRunning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UQuartzSubsystem::IsClockRunning(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "IsClockRunning");

	Params::UQuartzSubsystem_IsClockRunning_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzSubsystem::GetRoundTripMinLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMinLatency");

	Params::UQuartzSubsystem_GetRoundTripMinLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzSubsystem::GetRoundTripMaxLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMaxLatency");

	Params::UQuartzSubsystem_GetRoundTripMaxLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzSubsystem::GetRoundTripAverageLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripAverageLatency");

	Params::UQuartzSubsystem_GetRoundTripAverageLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetHandleForClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UQuartzSubsystem::GetHandleForClock(class UQuartzClockHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetHandleForClock");

	Params::UQuartzSubsystem_GetHandleForClock_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMinLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMaxLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadAverageLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        InClockName                                                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzSubsystem::GetEstimatedClockRunTime(class FName InClockName, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetEstimatedClockRunTime");

	Params::UQuartzSubsystem_GetEstimatedClockRunTime_Params Parms{};

	Parms.InClockName = InClockName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// float                              Multiplier                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetDurationOfQuantizationTypeInSeconds");

	Params::UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        InClockName                                                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FQuartzTransportTimeStamp   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UQuartzSubsystem::GetCurrentClockTimestamp(class FName InClockName, const struct FQuartzTransportTimeStamp& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetCurrentClockTimestamp");

	Params::UQuartzSubsystem_GetCurrentClockTimestamp_Params Parms{};

	Parms.InClockName = InClockName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadMinLatency");

	Params::UQuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadMaxLatency");

	Params::UQuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadAverageLatency");

	Params::UQuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.DoesClockExist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UQuartzSubsystem::DoesClockExist(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DoesClockExist");

	Params::UQuartzSubsystem_DoesClockExist_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzSubsystem.DeleteClockByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UQuartzClockHandle*          InClockHandle                                                    (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// struct FQuartzClockSettings        InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bOverrideSettingsIfClockExists                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bUseAudioEngineClockManager                                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FQuartzClockSettings UQuartzSubsystem::CreateNewClock(bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager, class UQuartzClockHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "CreateNewClock");

	Params::UQuartzSubsystem_CreateNewClock_Params Parms{};

	Parms.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;
	Parms.bUseAudioEngineClockManager = bUseAudioEngineClockManager;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


