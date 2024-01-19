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
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x2C8(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x2C8(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x2C8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x2C8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1C : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_36B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bEnableBusSends : 1;                               // Mask: 0x1, PropSize: 0x10x2CC(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableBaseSubmix : 1;                             // Mask: 0x2, PropSize: 0x10x2CC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x4, PropSize: 0x10x2CC(0x1)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1D : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_36C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2D0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2D8(0x3C8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x6A0(0x8)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x6A8(0x50)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundClass*                           SoundClass;                                        // 0x6F8(0x8)(ConstParm, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x700(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x708(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x710(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x720(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x730(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x740(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x740(0x1)(ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1E : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_370[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        EnvelopeFollowerAttackTime;                        // 0x744(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x748(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_371[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x750(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_372[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class USynthSound*                           Synth;                                             // 0x780(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAudioComponent*                       AudioComponent;                                    // 0x788(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_373[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float* VolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* Submix, float* SendLevel);
	void SetOutputToBusOnly(bool* bInOutputToBusOnly);
	void SetLowPassFilterFrequency(float* InLowPassFilterFrequency);
	void SetLowPassFilterEnabled(bool* InLowPassFilterEnabled);
	void IsPlaying(bool ReturnValue);
	void FadeOut(float* FadeOutDuration, float* FadeVolumeLevel, enum class EAudioFaderCurve* FadeCurve);
	float FadeIn(float* FadeInDuration, float* FadeVolumeLevel, enum class EAudioFaderCurve* FadeCurve);
	void AdjustVolume(float* AdjustVolumeDuration, float* AdjustVolumeLevel, enum class EAudioFaderCurve* FadeCurve);
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_377[0x80];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class AudioMixer.AudioBusSubsystem
class UAudioBusSubsystem : public UAudioEngineSubsystem
{
public:
	uint8                                        Pad_379[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioBusSubsystem* GetDefaultObj();

};

// 0xF8 (0x128 - 0x30)
// Class AudioMixer.AudioDeviceNotificationSubsystem
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_37D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DefaultCaptureDeviceChanged;                       // 0x38(0x10)(Edit, ConstParm, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_380[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DefaultRenderDeviceChanged;                        // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_381[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceAdded;                                       // 0x88(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_383[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceRemoved;                                     // 0xB0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_385[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceStateChanged;                                // 0xD8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_386[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceSwitched;                                    // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_387[0x18];                                     // Fixing Size Of Struct > TateDumper <

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

	void TrimAudioCache(float* InMegabytesToFree, float ReturnValue);
	void SwapAudioOutputDevice(class UObject* WorldContextObject, class FString* NewDeviceId, FDelegateProperty_* OnCompletedDeviceSwap);
	void StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType* ExportType, class FString* Name, const class FString& Path, class USoundSubmix** SubmixToRecord, class USoundWave** ExistingSoundWaveToOverwrite, class USoundWave* ReturnValue);
	void StopAudioBus(class UObject* WorldContextObject, class UAudioBus** AudioBus);
	void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix** SubmixToStopAnalyzing);
	void StartRecordingOutput(class UObject* WorldContextObject, float* ExpectedDuration, class USoundSubmix** SubmixToRecord);
	void StartAudioBus(class UObject* WorldContextObject, class UAudioBus** AudioBus);
	enum class EAudioSpectrumType StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTPeakInterpolationMethod* InterpolationMethod, float* HopSize);
	void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, TArray<class USoundEffectSubmixPreset*>* SubmixEffectPresetChain, float FadeTimeSec);
	void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool* bBypassed);
	void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix** SubmixToPause);
	void ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, int32* SubmixChainIndex);
	void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, int32* SubmixChainIndex);
	void RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty_* OnLoadCompletion);
	class USoundCue* PrimeSoundCueForPlayback();
	void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix** SubmixToPause);
	void MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32* InAttackTimeMsec, int32* InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	void MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32* InAttackTimeMsec, int32* InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	void MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32* InAttackTimeMsec, int32* InReleaseTimeMsec, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	void IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus** AudioBus, bool ReturnValue);
	void GetPhaseForFrequencies(class UObject* WorldContextObject, const TArray<float>& Frequencies, const TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze);
	void GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 ReturnValue);
	void GetMagnitudeForFrequencies(class UObject* WorldContextObject, const TArray<float>& Frequencies, const TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void GetCurrentAudioOutputDeviceName(class UObject* WorldContextObject, FDelegateProperty_ OnObtainCurrentDeviceEvent);
	void GetAvailableAudioOutputDevices(class UObject* WorldContextObject, FDelegateProperty_* OnObtainDevicesEvent);
	struct FAudioOutputDeviceInfo Conv_AudioOutputDeviceInfoToString(const class FString& ReturnValue);
	void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix);
	void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, float FadeTimeSec);
	void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset, int32 ReturnValue);
	struct FSourceEffectChainEntry AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// 0x20 (0x4E0 - 0x4C0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>        OwningSynthComponent;                              // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_454[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

// 0xE8 (0x150 - 0x68)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_469[0x88];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xF0(0x60)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	struct FSubmixEffectDynamicsProcessorSettings SetSettings();
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetAudioBus(class UAudioBus** AudioBus);
	void ResetKey();
};

// 0x48 (0xB0 - 0x68)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_46C[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};

// 0xA8 (0x110 - 0x68)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_46F[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectReverbSettings           Settings;                                          // 0xD0(0x40)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect** InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};

// 0x1C0 (0x1E8 - 0x28)
// Class AudioMixer.QuartzClockHandle
class UQuartzClockHandle : public UObject
{
public:
	uint8                                        Pad_4C3[0x1C0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuartzClockHandle* GetDefaultObj();

	void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, enum class EQuartzCommandQuantization* InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void SubscribeToQuantizationEvent(class UObject* WorldContextObject, enum class EQuartzCommandQuantization* InQuantizationBoundary, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void StopClock(class UObject* WorldContextObject, bool* CancelPendingEvents, class UQuartzClockHandle** ClockHandle);
	FDelegateProperty_ StartOtherClock(class UObject* WorldContextObject, class FName* OtherClockName, struct FQuartzQuantizationBoundary* InQuantizationBoundary);
	void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	FDelegateProperty_ SetTicksPerSecond(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float TicksPerSecond);
	FDelegateProperty_ SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float* ThirtySecondsNotesPerMinute);
	FDelegateProperty_ SetSecondsPerTick(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float* SecondsPerTick);
	FDelegateProperty_ SetMillisecondsPerTick(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float* MillisecondsPerTick);
	FDelegateProperty_ SetBeatsPerMinute(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* QuantizationBoundary, class UQuartzClockHandle** ClockHandle, float* BeatsPerMinute);
	void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	FDelegateProperty_ ResetTransportQuantized(class UObject* WorldContextObject, struct FQuartzQuantizationBoundary* InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);
	FDelegateProperty_ ResetTransport(class UObject* WorldContextObject);
	void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void IsClockRunning(class UObject* WorldContextObject, bool ReturnValue);
	void GetTicksPerSecond(class UObject* WorldContextObject, float ReturnValue);
	void GetThirtySecondNotesPerMinute(class UObject* WorldContextObject, float ReturnValue);
	void GetSecondsPerTick(class UObject* WorldContextObject, float ReturnValue);
	void GetMillisecondsPerTick(class UObject* WorldContextObject, float ReturnValue);
	void GetEstimatedRunTime(class UObject* WorldContextObject, float ReturnValue);
	float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, enum class EQuartzCommandQuantization QuantizationType, float ReturnValue);
	void GetCurrentTimestamp(class UObject* WorldContextObject, const struct FQuartzTransportTimeStamp& ReturnValue);
	void GetBeatsPerMinute(class UObject* WorldContextObject, float ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class AudioMixer.QuartzSubsystem
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_516[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuartzSubsystem* GetDefaultObj();

	void IsQuartzEnabled(bool ReturnValue);
	void IsClockRunning(class UObject* WorldContextObject, class FName ClockName, bool ReturnValue);
	void GetRoundTripMinLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetRoundTripMaxLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetRoundTripAverageLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetHandleForClock(class UObject* WorldContextObject, class FName ClockName, class UQuartzClockHandle* ReturnValue);
	void GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject, float ReturnValue);
	void GetEstimatedClockRunTime(class UObject* WorldContextObject, class FName InClockName, float ReturnValue);
	float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, class FName ClockName, enum class EQuartzCommandQuantization QuantizationType, float ReturnValue);
	void GetCurrentClockTimestamp(class UObject* WorldContextObject, class FName InClockName, const struct FQuartzTransportTimeStamp& ReturnValue);
	void GetAudioRenderThreadToGameThreadMinLatency(float ReturnValue);
	void GetAudioRenderThreadToGameThreadMaxLatency(float ReturnValue);
	void GetAudioRenderThreadToGameThreadAverageLatency(float ReturnValue);
	void DoesClockExist(class UObject* WorldContextObject, class FName ClockName, bool ReturnValue);
	void DeleteClockByName(class UObject* WorldContextObject, class FName ClockName);
	void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle* InClockHandle);
	void CreateNewClock(class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager, class UQuartzClockHandle* ReturnValue);
};

}


