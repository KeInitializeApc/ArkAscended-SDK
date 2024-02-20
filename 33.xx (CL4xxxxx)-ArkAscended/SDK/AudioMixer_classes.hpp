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
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x2C8(0x1)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x2C8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x2C8(0x1)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x2C8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1E : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_362[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bEnableBusSends : 1;                               // Mask: 0x1, PropSize: 0x10x2CC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bEnableBaseSubmix : 1;                             // Mask: 0x2, PropSize: 0x10x2CC(0x1)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x4, PropSize: 0x10x2CC(0x1)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_1F : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_363[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2D0(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2D8(0x3C8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x6A0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x6A8(0x50)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class USoundClass*                           SoundClass;                                        // 0x6F8(0x8)(Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x700(0x8)(Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x708(0x8)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x710(0x10)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x720(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x730(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x740(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x740(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_20 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_368[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        EnvelopeFollowerAttackTime;                        // 0x744(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x748(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_36A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x750(0x10)(Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_36B[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class USynthSound*                           Synth;                                             // 0x780(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UAudioComponent*                       AudioComponent;                                    // 0x788(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_36D[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float* VolumeMultiplier);
	float SetSubmixSend(class USoundSubmixBase* Submix);
	bool SetOutputToBusOnly();
	float SetLowPassFilterFrequency();
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
	uint8                                        Pad_378[0x80];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class AudioMixer.AudioBusSubsystem
class UAudioBusSubsystem : public UAudioEngineSubsystem
{
public:
	uint8                                        Pad_37D[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioBusSubsystem* GetDefaultObj();

};

// 0xF8 (0x128 - 0x30)
// Class AudioMixer.AudioDeviceNotificationSubsystem
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_380[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DefaultCaptureDeviceChanged;                       // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_382[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DefaultRenderDeviceChanged;                        // 0x60(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_383[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceAdded;                                       // 0x88(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_384[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceRemoved;                                     // 0xB0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_386[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceStateChanged;                                // 0xD8(0x10)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_387[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceSwitched;                                    // 0x100(0x10)(BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_388[0x18];                                     // Fixing Size Of Struct > TateDumper <

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

	void TrimAudioCache(float InMegabytesToFree, float ReturnValue);
	class UObject* SwapAudioOutputDevice(const class FString& NewDeviceId, FDelegateProperty_ OnCompletedDeviceSwap);
	class UObject* StopRecordingOutput(enum class EAudioRecordingExportType ExportType, class FString* Name, class FString* Path, class USoundSubmix** SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite, class USoundWave* ReturnValue);
	class UAudioBus* StopAudioBus();
	class UObject* StopAnalyzingOutput(class USoundSubmix* SubmixToStopAnalyzing);
	class UObject* StartRecordingOutput(float ExpectedDuration, class USoundSubmix** SubmixToRecord);
	class UAudioBus* StartAudioBus();
	class UObject* StartAnalyzingOutput(class USoundSubmix** SubmixToAnalyze, enum class EFFTSize* FFTSize, enum class EFFTPeakInterpolationMethod* InterpolationMethod, enum class EFFTWindowType* WindowType, float* HopSize, enum class EAudioSpectrumType SpectrumType);
	class UObject* SetSubmixEffectChainOverride(class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*>* SubmixEffectPresetChain, float* FadeTimeSec);
	class UObject* SetBypassSourceEffectChainEntry(class USoundEffectSourcePresetChain** PresetChain, int32 EntryIndex, bool* bBypassed);
	class UObject* ResumeRecordingOutput(class USoundSubmix** SubmixToPause);
	class UObject* ReplaceSubmixEffect(class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* ReplaceSoundEffectSubmix(class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* RemoveSubmixEffectPresetAtIndex(class USoundSubmix* SoundSubmix, int32* SubmixChainIndex);
	class UObject* RemoveSubmixEffectPreset(class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* RemoveSubmixEffectAtIndex(class USoundSubmix* SoundSubmix, int32* SubmixChainIndex);
	class UObject* RemoveSubmixEffect(class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* RemoveSourceEffectFromPresetChain(class USoundEffectSourcePresetChain** PresetChain, int32 EntryIndex);
	class UObject* RemoveMasterSubmixEffect(class USoundEffectSubmixPreset** SubmixEffectPreset);
	class USoundWave* PrimeSoundForPlayback(FDelegateProperty_* OnLoadCompletion);
	class USoundCue* PrimeSoundCueForPlayback();
	class UObject* PauseRecordingOutput(class USoundSubmix** SubmixToPause);
	int32 MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType* InBandPresetType, int32* InNumBands, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	int32 MakeMusicalSpectralAnalysisBandSettings(int32* InNumSemitones, enum class EMusicalNoteName* InStartingMusicalNote, int32* InStartingOctave, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	int32 MakeFullSpectrumSpectralAnalysisBandSettings(int32* InNumBands, float* InMinimumFrequency, float* InMaximumFrequency, const TArray<struct FSoundSubmixSpectralAnalysisBandSettings>& ReturnValue);
	class UAudioBus* IsAudioBusActive(bool ReturnValue);
	TArray<float> GetPhaseForFrequencies(TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze);
	class UObject* GetNumberOfEntriesInSourceEffectChain(class USoundEffectSourcePresetChain** PresetChain, int32 ReturnValue);
	TArray<float> GetMagnitudeForFrequencies(TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze);
	class UObject* GetCurrentAudioOutputDeviceName(FDelegateProperty_* OnObtainCurrentDeviceEvent);
	FDelegateProperty_ GetAvailableAudioOutputDevices();
	struct FAudioOutputDeviceInfo Conv_AudioOutputDeviceInfoToString(const class FString& ReturnValue);
	class UObject* ClearSubmixEffects(class USoundSubmix* SoundSubmix);
	class UObject* ClearSubmixEffectChainOverride(class USoundSubmix* SoundSubmix, float* FadeTimeSec);
	class UObject* ClearMasterSubmixEffects();
	class UObject* AddSubmixEffect(class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset, int32 ReturnValue);
	struct FSourceEffectChainEntry AddSourceEffectToPresetChain(class USoundEffectSourcePresetChain** PresetChain);
	class UObject* AddMasterSubmixEffect(class USoundEffectSubmixPreset** SubmixEffectPreset);
};

// 0x20 (0x4E0 - 0x4C0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>        OwningSynthComponent;                              // 0x4C0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_432[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

// 0xE8 (0x150 - 0x68)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_43D[0x88];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xF0(0x60)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);
	void SetExternalSubmix(class USoundSubmix* Submix);
	class UAudioBus* SetAudioBus();
	void ResetKey();
};

// 0x48 (0xB0 - 0x68)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_440[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0xA0(0x10)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	struct FSubmixEffectSubmixEQSettings SetSettings();
};

// 0xA8 (0x110 - 0x68)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_442[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectReverbSettings           Settings;                                          // 0xD0(0x40)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float* WetLevel, float* DryLevel);
	struct FSubmixEffectReverbSettings SetSettings();
};

// 0x1C0 (0x1E8 - 0x28)
// Class AudioMixer.QuartzClockHandle
class UQuartzClockHandle : public UObject
{
public:
	uint8                                        Pad_49D[0x1C0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuartzClockHandle* GetDefaultObj();

	class UObject* UnsubscribeFromTimeDivision(enum class EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle* ClockHandle);
	class UObject* UnsubscribeFromAllTimeDivisions(class UQuartzClockHandle* ClockHandle);
	class UObject* SubscribeToQuantizationEvent(enum class EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle* ClockHandle);
	class UObject* SubscribeToAllQuantizationEvents(FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle* ClockHandle);
	class UObject* StopClock(bool CancelPendingEvents, class UQuartzClockHandle* ClockHandle);
	class UObject* StartOtherClock(class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_ InDelegate);
	class UObject* StartClock(class UQuartzClockHandle* ClockHandle);
	class UObject* SetTicksPerSecond(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float* TicksPerSecond);
	class UObject* SetThirtySecondNotesPerMinute(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float ThirtySecondsNotesPerMinute);
	class UObject* SetSecondsPerTick(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float SecondsPerTick);
	class UObject* SetMillisecondsPerTick(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float MillisecondsPerTick);
	class UObject* SetBeatsPerMinute(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float BeatsPerMinute);
	class UObject* ResumeClock(class UQuartzClockHandle* ClockHandle);
	class UObject* ResetTransportQuantized(const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_ InDelegate, class UQuartzClockHandle* ClockHandle);
	class UObject* ResetTransport(FDelegateProperty_ InDelegate);
	class UObject* PauseClock(class UQuartzClockHandle* ClockHandle);
	class UObject* IsClockRunning(bool ReturnValue);
	class UObject* GetTicksPerSecond(float ReturnValue);
	class UObject* GetThirtySecondNotesPerMinute(float ReturnValue);
	class UObject* GetSecondsPerTick(float ReturnValue);
	class UObject* GetMillisecondsPerTick(float ReturnValue);
	class UObject* GetEstimatedRunTime(float ReturnValue);
	float GetDurationOfQuantizationTypeInSeconds(float ReturnValue);
	class UObject* GetCurrentTimestamp(const struct FQuartzTransportTimeStamp& ReturnValue);
	class UObject* GetBeatsPerMinute(float ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class AudioMixer.QuartzSubsystem
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_4D1[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuartzSubsystem* GetDefaultObj();

	void IsQuartzEnabled(bool ReturnValue);
	class FName IsClockRunning(bool ReturnValue);
	class UObject* GetRoundTripMinLatency(float ReturnValue);
	class UObject* GetRoundTripMaxLatency(float ReturnValue);
	class UObject* GetRoundTripAverageLatency(float ReturnValue);
	class FName GetHandleForClock(class UQuartzClockHandle* ReturnValue);
	class UObject* GetGameThreadToAudioRenderThreadMinLatency(float ReturnValue);
	class UObject* GetGameThreadToAudioRenderThreadMaxLatency(float ReturnValue);
	class UObject* GetGameThreadToAudioRenderThreadAverageLatency(float ReturnValue);
	class UObject* GetEstimatedClockRunTime(class FName InClockName, float ReturnValue);
	float GetDurationOfQuantizationTypeInSeconds(float ReturnValue);
	class UObject* GetCurrentClockTimestamp(class FName InClockName, const struct FQuartzTransportTimeStamp& ReturnValue);
	void GetAudioRenderThreadToGameThreadMinLatency(float ReturnValue);
	void GetAudioRenderThreadToGameThreadMaxLatency(float ReturnValue);
	void GetAudioRenderThreadToGameThreadAverageLatency(float ReturnValue);
	class FName DoesClockExist(bool ReturnValue);
	class FName DeleteClockByName();
	class UObject* DeleteClockByHandle(class UQuartzClockHandle* InClockHandle);
	struct FQuartzClockSettings CreateNewClock(bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager, class UQuartzClockHandle* ReturnValue);
};

}


