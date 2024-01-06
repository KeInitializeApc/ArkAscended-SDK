#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F8 (0x7C0 - 0x2C8)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x2C8(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x2C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x2C8(0x1)(ConstParm, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x2C8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_2B : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_352[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bEnableBusSends : 1;                               // Mask: 0x1, PropSize: 0x10x2CC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableBaseSubmix : 1;                             // Mask: 0x2, PropSize: 0x10x2CC(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x4, PropSize: 0x10x2CC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_2C : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_353[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2D8(0x3C8)(Edit, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x6A0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x6A8(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundClass*                           SoundClass;                                        // 0x6F8(0x8)(BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x700(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x708(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x710(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x720(0x10)(EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x730(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x740(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x740(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_2D : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_356[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        EnvelopeFollowerAttackTime;                        // 0x744(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x748(0x4)(BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_358[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x750(0x10)(Edit, BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_35A[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class USynthSound*                           Synth;                                             // 0x780(0x8)(Edit, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAudioComponent*                       AudioComponent;                                    // 0x788(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_35B[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	class USoundSubmixBase* SetSubmixSend(float SendLevel);
	void SetOutputToBusOnly(bool* bInOutputToBusOnly);
	void SetLowPassFilterFrequency(float* InLowPassFilterFrequency);
	void SetLowPassFilterEnabled(bool* InLowPassFilterEnabled);
	void IsPlaying(bool* ReturnValue);
	void FadeOut(float* FadeOutDuration, float* FadeVolumeLevel, enum class EAudioFaderCurve* FadeCurve);
	float FadeIn(float* FadeInDuration, float* FadeVolumeLevel, enum class EAudioFaderCurve* FadeCurve);
	void AdjustVolume(float* AdjustVolumeDuration, float* AdjustVolumeLevel, enum class EAudioFaderCurve* FadeCurve);
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_364[0x80];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class AudioMixer.AudioBusSubsystem
class UAudioBusSubsystem : public UAudioEngineSubsystem
{
public:
	uint8                                        Pad_367[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioBusSubsystem* GetDefaultObj();

};

// 0xF8 (0x128 - 0x30)
// Class AudioMixer.AudioDeviceNotificationSubsystem
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_36A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DefaultCaptureDeviceChanged;                       // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_36B[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DefaultRenderDeviceChanged;                        // 0x60(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_36D[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceAdded;                                       // 0x88(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_370[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceRemoved;                                     // 0xB0(0x10)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_372[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceStateChanged;                                // 0xD8(0x10)(ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_373[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceSwitched;                                    // 0x100(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_374[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioDeviceNotificationSubsystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioMixer.AudioMixerBlueprintLibrary
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioMixerBlueprintLibrary* GetDefaultObj();

	float TrimAudioCache(float* ReturnValue);
	FDelegateProperty_ SwapAudioOutputDevice();
	class USoundWave* StopRecordingOutput(class FString* Name, const class FString& Path, class USoundWave** ReturnValue);
	class UObject* StopAudioBus(class UAudioBus* AudioBus);
	class USoundSubmix* StopAnalyzingOutput();
	class USoundSubmix* StartRecordingOutput();
	class UObject* StartAudioBus(class UAudioBus* AudioBus);
	enum class EAudioSpectrumType StartAnalyzingOutput();
	float SetSubmixEffectChainOverride(class USoundSubmix** SoundSubmix);
	bool SetBypassSourceEffectChainEntry();
	class USoundSubmix* ResumeRecordingOutput();
	class USoundEffectSubmixPreset* ReplaceSubmixEffect();
	class USoundEffectSubmixPreset* ReplaceSoundEffectSubmix();
	int32 RemoveSubmixEffectPresetAtIndex(class USoundSubmix** SoundSubmix);
	class USoundEffectSubmixPreset* RemoveSubmixEffectPreset(class USoundSubmix** SoundSubmix);
	int32 RemoveSubmixEffectAtIndex(class USoundSubmix** SoundSubmix);
	class USoundEffectSubmixPreset* RemoveSubmixEffect(class USoundSubmix** SoundSubmix);
	int32 RemoveSourceEffectFromPresetChain();
	class USoundEffectSubmixPreset* RemoveMasterSubmixEffect();
	FDelegateProperty_ PrimeSoundForPlayback(class USoundWave* SoundWave);
	class USoundCue* PrimeSoundCueForPlayback();
	class USoundSubmix* PauseRecordingOutput();
	int32 MakePresetSpectralAnalysisBandSettings(int32 InAttackTimeMsec, int32* InReleaseTimeMsec, TArray<struct FSoundSubmixSpectralAnalysisBandSettings>* ReturnValue);
	int32 MakeMusicalSpectralAnalysisBandSettings(int32 InAttackTimeMsec, int32* InReleaseTimeMsec, TArray<struct FSoundSubmixSpectralAnalysisBandSettings>* ReturnValue);
	float MakeFullSpectrumSpectralAnalysisBandSettings(int32 InAttackTimeMsec, int32* InReleaseTimeMsec, TArray<struct FSoundSubmixSpectralAnalysisBandSettings>* ReturnValue);
	class UObject* IsAudioBusActive(class UAudioBus* AudioBus, bool* ReturnValue);
	class USoundSubmix* GetPhaseForFrequencies();
	class USoundEffectSourcePresetChain* GetNumberOfEntriesInSourceEffectChain(int32* ReturnValue);
	class USoundSubmix* GetMagnitudeForFrequencies();
	FDelegateProperty_ GetCurrentAudioOutputDeviceName();
	class UObject* GetAvailableAudioOutputDevices(FDelegateProperty_* OnObtainDevicesEvent);
	struct FAudioOutputDeviceInfo Conv_AudioOutputDeviceInfoToString(class FString* ReturnValue);
	class UObject* ClearSubmixEffects(class USoundSubmix** SoundSubmix);
	float ClearSubmixEffectChainOverride(class USoundSubmix** SoundSubmix);
	class UObject* ClearMasterSubmixEffects();
	class USoundEffectSubmixPreset* AddSubmixEffect(class USoundSubmix** SoundSubmix, int32* ReturnValue);
	struct FSourceEffectChainEntry AddSourceEffectToPresetChain();
	class USoundEffectSubmixPreset* AddMasterSubmixEffect();
};

// 0x20 (0x4E0 - 0x4C0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>        OwningSynthComponent;                              // 0x4C0(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_429[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

// 0xE8 (0x150 - 0x68)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_431[0x88];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xF0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	struct FSubmixEffectDynamicsProcessorSettings SetSettings();
	class USoundSubmix* SetExternalSubmix();
	void SetAudioBus(class UAudioBus* AudioBus);
	void ResetKey();
};

// 0x48 (0xB0 - 0x68)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_435[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0xA0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	struct FSubmixEffectSubmixEQSettings SetSettings();
};

// 0xA8 (0x110 - 0x68)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_440[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectReverbSettings           Settings;                                          // 0xD0(0x40)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	class UReverbEffect* SetSettingsWithReverbEffect(float* WetLevel, float* DryLevel);
	struct FSubmixEffectReverbSettings SetSettings();
};

// 0x1C0 (0x1E8 - 0x28)
// Class AudioMixer.QuartzClockHandle
class UQuartzClockHandle : public UObject
{
public:
	uint8                                        Pad_491[0x1C0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuartzClockHandle* GetDefaultObj();

	class UQuartzClockHandle* UnsubscribeFromTimeDivision();
	class UQuartzClockHandle* UnsubscribeFromAllTimeDivisions();
	class UQuartzClockHandle* SubscribeToQuantizationEvent();
	class UQuartzClockHandle* SubscribeToAllQuantizationEvents();
	class UQuartzClockHandle* StopClock();
	FDelegateProperty_ StartOtherClock();
	class UQuartzClockHandle* StartClock();
	class UQuartzClockHandle* SetTicksPerSecond(float TicksPerSecond);
	float SetThirtySecondNotesPerMinute();
	float SetSecondsPerTick();
	float SetMillisecondsPerTick();
	float SetBeatsPerMinute();
	class UQuartzClockHandle* ResumeClock();
	class UQuartzClockHandle* ResetTransportQuantized();
	FDelegateProperty_ ResetTransport();
	class UQuartzClockHandle* PauseClock();
	class UObject* IsClockRunning(bool* ReturnValue);
	class UObject* GetTicksPerSecond(float* ReturnValue);
	class UObject* GetThirtySecondNotesPerMinute(float* ReturnValue);
	class UObject* GetSecondsPerTick(float* ReturnValue);
	class UObject* GetMillisecondsPerTick(float* ReturnValue);
	class UObject* GetEstimatedRunTime(float* ReturnValue);
	float GetDurationOfQuantizationTypeInSeconds(enum class EQuartzCommandQuantization* QuantizationType, float* ReturnValue);
	class UObject* GetCurrentTimestamp(struct FQuartzTransportTimeStamp* ReturnValue);
	class UObject* GetBeatsPerMinute(float* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class AudioMixer.QuartzSubsystem
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_4DD[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuartzSubsystem* GetDefaultObj();

	void IsQuartzEnabled(bool* ReturnValue);
	class UObject* IsClockRunning(class FName* ClockName, bool* ReturnValue);
	class UObject* GetRoundTripMinLatency(float* ReturnValue);
	class UObject* GetRoundTripMaxLatency(float* ReturnValue);
	class UObject* GetRoundTripAverageLatency(float* ReturnValue);
	class UObject* GetHandleForClock(class FName* ClockName, class UQuartzClockHandle** ReturnValue);
	class UObject* GetGameThreadToAudioRenderThreadMinLatency(float* ReturnValue);
	class UObject* GetGameThreadToAudioRenderThreadMaxLatency(float* ReturnValue);
	class UObject* GetGameThreadToAudioRenderThreadAverageLatency(float* ReturnValue);
	class FName GetEstimatedClockRunTime(float* ReturnValue);
	float GetDurationOfQuantizationTypeInSeconds(class FName* ClockName, enum class EQuartzCommandQuantization* QuantizationType, float* ReturnValue);
	class FName GetCurrentClockTimestamp(struct FQuartzTransportTimeStamp* ReturnValue);
	void GetAudioRenderThreadToGameThreadMinLatency(float* ReturnValue);
	void GetAudioRenderThreadToGameThreadMaxLatency(float* ReturnValue);
	void GetAudioRenderThreadToGameThreadAverageLatency(float* ReturnValue);
	class UObject* DoesClockExist(class FName* ClockName, bool* ReturnValue);
	class UObject* DeleteClockByName(class FName* ClockName);
	class UQuartzClockHandle* DeleteClockByHandle();
	bool CreateNewClock(class FName* ClockName, class UQuartzClockHandle** ReturnValue);
};

}


