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
// float                              VolumeMultiplier                                                 (Edit, ConstParm, Net, OutParm, ZeroConstructor, Config, DuplicateTransient)

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
// class USoundSubmixBase*            Submix                                                           (BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SendLevel                                                        (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInOutputToBusOnly                                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USynthComponent::SetOutputToBusOnly(bool* bInOutputToBusOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetOutputToBusOnly");

	Params::USynthComponent_SetOutputToBusOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInOutputToBusOnly != nullptr)
		*bInOutputToBusOnly = Parms.bInOutputToBusOnly;

}


// Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InLowPassFilterFrequency                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USynthComponent::SetLowPassFilterFrequency(float* InLowPassFilterFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponent", "SetLowPassFilterFrequency");

	Params::USynthComponent_SetLowPassFilterFrequency_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InLowPassFilterFrequency != nullptr)
		*InLowPassFilterFrequency = Parms.InLowPassFilterFrequency;

}


// Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InLowPassFilterEnabled                                           (Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              FadeOutDuration                                                  (ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FadeVolumeLevel                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              FadeInDuration                                                   (Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              FadeVolumeLevel                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartTime                                                        (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              AdjustVolumeDuration                                             (BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              AdjustVolumeLevel                                                (ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EAudioFaderCurve        FadeCurve                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InMegabytesToFree                                                (ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::TrimAudioCache(float* InMegabytesToFree, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "TrimAudioCache");

	Params::UAudioMixerBlueprintLibrary_TrimAudioCache_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMegabytesToFree != nullptr)
		*InMegabytesToFree = Parms.InMegabytesToFree;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      NewDeviceId                                                      (Edit, ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnCompletedDeviceSwap                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(class UObject* WorldContextObject, class FString* NewDeviceId, FDelegateProperty_* OnCompletedDeviceSwap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SwapAudioOutputDevice");

	Params::UAudioMixerBlueprintLibrary_SwapAudioOutputDevice_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewDeviceId != nullptr)
		*NewDeviceId = std::move(Parms.NewDeviceId);

	if (OnCompletedDeviceSwap != nullptr)
		*OnCompletedDeviceSwap = Parms.OnCompletedDeviceSwap;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAudioRecordingExportTypeExportType                                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// class FString                      Path                                                             (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToRecord                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundWave*                  ExistingSoundWaveToOverwrite                                     (ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundWave*                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType* ExportType, class FString* Name, const class FString& Path, class USoundSubmix** SubmixToRecord, class USoundWave** ExistingSoundWaveToOverwrite, class USoundWave* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_StopRecordingOutput_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Path = Path;
	Parms.ReturnValue = ReturnValue;

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

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

void UAudioMixerBlueprintLibrary::StopAudioBus(class UObject* WorldContextObject, class UAudioBus** AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopAudioBus");

	Params::UAudioMixerBlueprintLibrary_StopAudioBus_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AudioBus != nullptr)
		*AudioBus = Parms.AudioBus;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToStopAnalyzing                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix** SubmixToStopAnalyzing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StopAnalyzingOutput");

	Params::UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixToStopAnalyzing != nullptr)
		*SubmixToStopAnalyzing = Parms.SubmixToStopAnalyzing;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ExpectedDuration                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundSubmix*                SubmixToRecord                                                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::StartRecordingOutput(class UObject* WorldContextObject, float* ExpectedDuration, class USoundSubmix** SubmixToRecord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_StartRecordingOutput_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExpectedDuration != nullptr)
		*ExpectedDuration = Parms.ExpectedDuration;

	if (SubmixToRecord != nullptr)
		*SubmixToRecord = Parms.SubmixToRecord;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

void UAudioMixerBlueprintLibrary::StartAudioBus(class UObject* WorldContextObject, class UAudioBus** AudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartAudioBus");

	Params::UAudioMixerBlueprintLibrary_StartAudioBus_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AudioBus != nullptr)
		*AudioBus = Parms.AudioBus;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EFFTSize                FFTSize                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EFFTPeakInterpolationMethodInterpolationMethod                                              (ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EFFTWindowType          WindowType                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              HopSize                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EAudioSpectrumType      SpectrumType                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class EAudioSpectrumType UAudioMixerBlueprintLibrary::StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTPeakInterpolationMethod* InterpolationMethod, float* HopSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "StartAnalyzingOutput");

	Params::UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixToAnalyze = SubmixToAnalyze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InterpolationMethod != nullptr)
		*InterpolationMethod = Parms.InterpolationMethod;

	if (HopSize != nullptr)
		*HopSize = Parms.HopSize;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
// TArray<class USoundEffectSubmixPreset*>SubmixEffectPresetChain                                          (BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              FadeTimeSec                                                      (Edit, ConstParm, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, TArray<class USoundEffectSubmixPreset*>* SubmixEffectPresetChain, float FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SetSubmixEffectChainOverride");

	Params::UAudioMixerBlueprintLibrary_SetSubmixEffectChainOverride_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FadeTimeSec = FadeTimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixEffectPresetChain != nullptr)
		*SubmixEffectPresetChain = std::move(Parms.SubmixEffectPresetChain);

}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              EntryIndex                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bBypassed                                                        (ConstParm, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool* bBypassed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "SetBypassSourceEffectChainEntry");

	Params::UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetChain = PresetChain;
	Parms.EntryIndex = EntryIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bBypassed != nullptr)
		*bBypassed = Parms.bBypassed;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToPause                                                    (ExportObject, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix** SubmixToPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ResumeRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixToPause != nullptr)
		*SubmixToPause = Parms.SubmixToPause;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                InSoundSubmix                                                    (ConstParm, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              SubmixChainIndex                                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_ReplaceSubmixEffect_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSoundSubmix != nullptr)
		*InSoundSubmix = Parms.InSoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                InSoundSubmix                                                    (ConstParm, Net, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              SubmixChainIndex                                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSoundEffectSubmix");

	Params::UAudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSoundSubmix != nullptr)
		*InSoundSubmix = Parms.InSoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
// int32                              SubmixChainIndex                                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, int32* SubmixChainIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPresetAtIndex");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPreset");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectPreset_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
// int32                              SubmixChainIndex                                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, int32* SubmixChainIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectAtIndex");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

	if (SubmixChainIndex != nullptr)
		*SubmixChainIndex = Parms.SubmixChainIndex;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_RemoveSubmixEffect_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              EntryIndex                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveSourceEffectFromPresetChain");

	Params::UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetChain = PresetChain;
	Parms.EntryIndex = EntryIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "RemoveMasterSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  SoundWave                                                        (BlueprintVisible, ZeroConstructor, InstancedReference, DuplicateTransient)
// FDelegateProperty_                 OnLoadCompletion                                                 (BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToPause                                                    (ExportObject, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix** SubmixToPause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "PauseRecordingOutput");

	Params::UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubmixToPause != nullptr)
		*SubmixToPause = Parms.SubmixToPause;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAudioSpectrumBandPresetTypeInBandPresetType                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InNumBands                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32* InAttackTimeMsec, int32* InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakePresetSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings_Params Parms{};

	Parms.InBandPresetType = InBandPresetType;
	Parms.InNumBands = InNumBands;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAttackTimeMsec != nullptr)
		*InAttackTimeMsec = Parms.InAttackTimeMsec;

	if (InReleaseTimeMsec != nullptr)
		*InReleaseTimeMsec = Parms.InReleaseTimeMsec;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              InNumSemitones                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EMusicalNoteName        InStartingMusicalNote                                            (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InStartingOctave                                                 (ConstParm, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32* InAttackTimeMsec, int32* InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakeMusicalSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings_Params Parms{};

	Parms.InNumSemitones = InNumSemitones;
	Parms.InStartingMusicalNote = InStartingMusicalNote;
	Parms.InStartingOctave = InStartingOctave;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAttackTimeMsec != nullptr)
		*InAttackTimeMsec = Parms.InAttackTimeMsec;

	if (InReleaseTimeMsec != nullptr)
		*InReleaseTimeMsec = Parms.InReleaseTimeMsec;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              InNumBands                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InMinimumFrequency                                               (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InMaximumFrequency                                               (ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InAttackTimeMsec                                                 (BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              InReleaseTimeMsec                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FSoundSubmixSpectralAnalysisBandSettings>ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32* InAttackTimeMsec, int32* InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "MakeFullSpectrumSpectralAnalysisBandSettings");

	Params::UAudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings_Params Parms{};

	Parms.InNumBands = InNumBands;
	Parms.InMinimumFrequency = InMinimumFrequency;
	Parms.InMaximumFrequency = InMaximumFrequency;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAttackTimeMsec != nullptr)
		*InAttackTimeMsec = Parms.InAttackTimeMsec;

	if (InReleaseTimeMsec != nullptr)
		*InReleaseTimeMsec = Parms.InReleaseTimeMsec;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus** AudioBus, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "IsAudioBusActive");

	Params::UAudioMixerBlueprintLibrary_IsAudioBusActive_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AudioBus != nullptr)
		*AudioBus = Parms.AudioBus;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<float>                      Frequencies                                                      (Edit, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      Phases                                                           (ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(class UObject* WorldContextObject, const TArray<float>& Frequencies, const TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetPhaseForFrequencies");

	Params::UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Frequencies = Frequencies;
	Parms.Phases = Phases;
	Parms.SubmixToAnalyze = SubmixToAnalyze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetNumberOfEntriesInSourceEffectChain");

	Params::UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetChain = PresetChain;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<float>                      Frequencies                                                      (Edit, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<float>                      Magnitudes                                                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SubmixToAnalyze                                                  (ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(class UObject* WorldContextObject, const TArray<float>& Frequencies, const TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetMagnitudeForFrequencies");

	Params::UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Frequencies = Frequencies;
	Parms.Magnitudes = Magnitudes;
	Parms.SubmixToAnalyze = SubmixToAnalyze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainCurrentDeviceEvent                                       (ConstParm, ExportObject, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, FDelegateProperty_ OnObtainCurrentDeviceEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetCurrentAudioOutputDeviceName");

	Params::UAudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OnObtainCurrentDeviceEvent = OnObtainCurrentDeviceEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainDevicesEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices(class UObject* WorldContextObject, FDelegateProperty_* OnObtainDevicesEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "GetAvailableAudioOutputDevices");

	Params::UAudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnObtainDevicesEvent != nullptr)
		*OnObtainDevicesEvent = Parms.OnObtainDevicesEvent;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAudioOutputDeviceInfo      Info                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// class FString                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)

void UAudioMixerBlueprintLibrary::ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffects");

	Params::UAudioMixerBlueprintLibrary_ClearSubmixEffects_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
// float                              FadeTimeSec                                                      (Edit, ConstParm, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, float FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffectChainOverride");

	Params::UAudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FadeTimeSec = FadeTimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "ClearMasterSubmixEffects");

	Params::UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundSubmix*                SoundSubmix                                                      (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioMixerBlueprintLibrary::AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_AddSubmixEffect_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundSubmix != nullptr)
		*SoundSubmix = Parms.SoundSubmix;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSourcePresetChain*PresetChain                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSourceEffectChainEntry     Entry                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

struct FSourceEffectChainEntry UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddSourceEffectToPresetChain");

	Params::UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetChain = PresetChain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class USoundEffectSubmixPreset*    SubmixEffectPreset                                               (ConstParm, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMixerBlueprintLibrary", "AddMasterSubmixEffect");

	Params::UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSubmixEffectDynamicsProcessorSettingsSettings                                                         (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

struct FSubmixEffectDynamicsProcessorSettings USubmixEffectDynamicsProcessorPreset::SetSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetSettings");

	Params::USubmixEffectDynamicsProcessorPreset_SetSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*                Submix                                                           (BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UAudioBus*                   AudioBus                                                         (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

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
// struct FSubmixEffectSubmixEQSettingsInSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UReverbEffect*               InReverbEffect                                                   (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              WetLevel                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              DryLevel                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect** InReverbEffect, float WetLevel, float DryLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectReverbPreset", "SetSettingsWithReverbEffect");

	Params::USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params Parms{};

	Parms.WetLevel = WetLevel;
	Parms.DryLevel = DryLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InReverbEffect != nullptr)
		*InReverbEffect = Parms.InReverbEffect;

}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationInQuantizationBoundary                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::UnsubscribeFromTimeDivision(class UObject* WorldContextObject, enum class EQuartzCommandQuantization* InQuantizationBoundary, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "UnsubscribeFromTimeDivision");

	Params::UQuartzClockHandle_UnsubscribeFromTimeDivision_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InQuantizationBoundary != nullptr)
		*InQuantizationBoundary = Parms.InQuantizationBoundary;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

}


// Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "UnsubscribeFromAllTimeDivisions");

	Params::UQuartzClockHandle_UnsubscribeFromAllTimeDivisions_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

}


// Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationInQuantizationBoundary                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 OnQuantizationEvent                                              (ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::SubscribeToQuantizationEvent(class UObject* WorldContextObject, enum class EQuartzCommandQuantization* InQuantizationBoundary, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SubscribeToQuantizationEvent");

	Params::UQuartzClockHandle_SubscribeToQuantizationEvent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OnQuantizationEvent = OnQuantizationEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InQuantizationBoundary != nullptr)
		*InQuantizationBoundary = Parms.InQuantizationBoundary;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

}


// Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnQuantizationEvent                                              (ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SubscribeToAllQuantizationEvents");

	Params::UQuartzClockHandle_SubscribeToAllQuantizationEvents_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OnQuantizationEvent = OnQuantizationEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

}


// Function AudioMixer.QuartzClockHandle.StopClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CancelPendingEvents                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::StopClock(class UObject* WorldContextObject, bool* CancelPendingEvents, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StopClock");

	Params::UQuartzClockHandle_StopClock_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CancelPendingEvents != nullptr)
		*CancelPendingEvents = Parms.CancelPendingEvents;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

}


// Function AudioMixer.QuartzClockHandle.StartOtherClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        OtherClockName                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FQuartzQuantizationBoundary InQuantizationBoundary                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UQuartzClockHandle::StartOtherClock(class UObject* WorldContextObject, class FName* OtherClockName, struct FQuartzQuantizationBoundary* InQuantizationBoundary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StartOtherClock");

	Params::UQuartzClockHandle_StartOtherClock_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OtherClockName != nullptr)
		*OtherClockName = Parms.OtherClockName;

	if (InQuantizationBoundary != nullptr)
		*InQuantizationBoundary = std::move(Parms.InQuantizationBoundary);

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.StartClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::StartClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "StartClock");

	Params::UQuartzClockHandle_StartClock_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

}


// Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              TicksPerSecond                                                   (ExportObject, Parm, Config, InstancedReference, SubobjectReference)

FDelegateProperty_ UQuartzClockHandle::SetTicksPerSecond(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float TicksPerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetTicksPerSecond");

	Params::UQuartzClockHandle_SetTicksPerSecond_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TicksPerSecond = TicksPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QuantizationBoundary != nullptr)
		*QuantizationBoundary = std::move(Parms.QuantizationBoundary);

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ThirtySecondsNotesPerMinute                                      (ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UQuartzClockHandle::SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float* ThirtySecondsNotesPerMinute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetThirtySecondNotesPerMinute");

	Params::UQuartzClockHandle_SetThirtySecondNotesPerMinute_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QuantizationBoundary != nullptr)
		*QuantizationBoundary = std::move(Parms.QuantizationBoundary);

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

	if (ThirtySecondsNotesPerMinute != nullptr)
		*ThirtySecondsNotesPerMinute = Parms.ThirtySecondsNotesPerMinute;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              SecondsPerTick                                                   (Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UQuartzClockHandle::SetSecondsPerTick(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float* SecondsPerTick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetSecondsPerTick");

	Params::UQuartzClockHandle_SetSecondsPerTick_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QuantizationBoundary != nullptr)
		*QuantizationBoundary = std::move(Parms.QuantizationBoundary);

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

	if (SecondsPerTick != nullptr)
		*SecondsPerTick = Parms.SecondsPerTick;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              MillisecondsPerTick                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UQuartzClockHandle::SetMillisecondsPerTick(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float* MillisecondsPerTick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetMillisecondsPerTick");

	Params::UQuartzClockHandle_SetMillisecondsPerTick_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QuantizationBoundary != nullptr)
		*QuantizationBoundary = std::move(Parms.QuantizationBoundary);

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

	if (MillisecondsPerTick != nullptr)
		*MillisecondsPerTick = Parms.MillisecondsPerTick;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary QuantizationBoundary                                             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              BeatsPerMinute                                                   (ConstParm, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UQuartzClockHandle::SetBeatsPerMinute(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float* BeatsPerMinute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "SetBeatsPerMinute");

	Params::UQuartzClockHandle_SetBeatsPerMinute_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (QuantizationBoundary != nullptr)
		*QuantizationBoundary = std::move(Parms.QuantizationBoundary);

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

	if (BeatsPerMinute != nullptr)
		*BeatsPerMinute = Parms.BeatsPerMinute;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.ResumeClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "ResumeClock");

	Params::UQuartzClockHandle_ResumeClock_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

}


// Function AudioMixer.QuartzClockHandle.ResetTransportQuantized
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzQuantizationBoundary InQuantizationBoundary                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UQuartzClockHandle::ResetTransportQuantized(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* InQuantizationBoundary, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "ResetTransportQuantized");

	Params::UQuartzClockHandle_ResetTransportQuantized_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InQuantizationBoundary != nullptr)
		*InQuantizationBoundary = std::move(Parms.InQuantizationBoundary);

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.ResetTransport
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 InDelegate                                                       (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UQuartzClockHandle::ResetTransport(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "ResetTransport");

	Params::UQuartzClockHandle_ResetTransport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AudioMixer.QuartzClockHandle.PauseClock
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ClockHandle                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzClockHandle::PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "PauseClock");

	Params::UQuartzClockHandle_PauseClock_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;

}


// Function AudioMixer.QuartzClockHandle.IsClockRunning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzClockHandle::IsClockRunning(class UObject* WorldContextObject, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "IsClockRunning");

	Params::UQuartzClockHandle_IsClockRunning_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzClockHandle::GetTicksPerSecond(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetTicksPerSecond");

	Params::UQuartzClockHandle_GetTicksPerSecond_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzClockHandle::GetThirtySecondNotesPerMinute(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetThirtySecondNotesPerMinute");

	Params::UQuartzClockHandle_GetThirtySecondNotesPerMinute_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzClockHandle::GetSecondsPerTick(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetSecondsPerTick");

	Params::UQuartzClockHandle_GetSecondsPerTick_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzClockHandle::GetMillisecondsPerTick(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetMillisecondsPerTick");

	Params::UQuartzClockHandle_GetMillisecondsPerTick_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzClockHandle::GetEstimatedRunTime(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetEstimatedRunTime");

	Params::UQuartzClockHandle_GetEstimatedRunTime_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Multiplier                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, enum class EQuartzCommandQuantization QuantizationType, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetDurationOfQuantizationTypeInSeconds");

	Params::UQuartzClockHandle_GetDurationOfQuantizationTypeInSeconds_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.QuantizationType = QuantizationType;
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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzTransportTimeStamp   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzClockHandle::GetCurrentTimestamp(class UObject* WorldContextObject, const struct FQuartzTransportTimeStamp& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetCurrentTimestamp");

	Params::UQuartzClockHandle_GetCurrentTimestamp_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzClockHandle::GetBeatsPerMinute(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzClockHandle", "GetBeatsPerMinute");

	Params::UQuartzClockHandle_GetBeatsPerMinute_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::IsClockRunning(class UObject* WorldContextObject, class FName ClockName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "IsClockRunning");

	Params::UQuartzSubsystem_IsClockRunning_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetRoundTripMinLatency(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMinLatency");

	Params::UQuartzSubsystem_GetRoundTripMinLatency_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetRoundTripMaxLatency(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMaxLatency");

	Params::UQuartzSubsystem_GetRoundTripMaxLatency_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetRoundTripAverageLatency(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripAverageLatency");

	Params::UQuartzSubsystem_GetRoundTripAverageLatency_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetHandleForClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetHandleForClock(class UObject* WorldContextObject, class FName ClockName, class UQuartzClockHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetHandleForClock");

	Params::UQuartzSubsystem_GetHandleForClock_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMinLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMaxLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadAverageLatency");

	Params::UQuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        InClockName                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetEstimatedClockRunTime(class UObject* WorldContextObject, class FName InClockName, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetEstimatedClockRunTime");

	Params::UQuartzSubsystem_GetEstimatedClockRunTime_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InClockName = InClockName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EQuartzCommandQuantizationQuantizationType                                                 (ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              Multiplier                                                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, class FName ClockName, enum class EQuartzCommandQuantization QuantizationType, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetDurationOfQuantizationTypeInSeconds");

	Params::UQuartzSubsystem_GetDurationOfQuantizationTypeInSeconds_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;
	Parms.QuantizationType = QuantizationType;
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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        InClockName                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FQuartzTransportTimeStamp   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::GetCurrentClockTimestamp(class UObject* WorldContextObject, class FName InClockName, const struct FQuartzTransportTimeStamp& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "GetCurrentClockTimestamp");

	Params::UQuartzSubsystem_GetCurrentClockTimestamp_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InClockName = InClockName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::DoesClockExist(class UObject* WorldContextObject, class FName ClockName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DoesClockExist");

	Params::UQuartzSubsystem_DoesClockExist_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.DeleteClockByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::DeleteClockByName(class UObject* WorldContextObject, class FName ClockName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DeleteClockByName");

	Params::UQuartzSubsystem_DeleteClockByName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.DeleteClockByHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UQuartzClockHandle*          InClockHandle                                                    (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UQuartzSubsystem::DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle* InClockHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "DeleteClockByHandle");

	Params::UQuartzSubsystem_DeleteClockByHandle_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InClockHandle = InClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AudioMixer.QuartzSubsystem.CreateNewClock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ClockName                                                        (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FQuartzClockSettings        InSettings                                                       (Edit, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bOverrideSettingsIfClockExists                                   (BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseAudioEngineClockManager                                      (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UQuartzClockHandle*          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UQuartzSubsystem::CreateNewClock(class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager, class UQuartzClockHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuartzSubsystem", "CreateNewClock");

	Params::UQuartzSubsystem_CreateNewClock_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;
	Parms.InSettings = InSettings;
	Parms.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;
	Parms.bUseAudioEngineClockManager = bUseAudioEngineClockManager;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


