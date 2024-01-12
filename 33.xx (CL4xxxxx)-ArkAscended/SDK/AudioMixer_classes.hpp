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
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x2C8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x2C8(0x1)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x2C8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x2C8(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_3C : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_488[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bEnableBusSends : 1;                               // Mask: 0x1, PropSize: 0x10x2CC(0x1)(ConstParm, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableBaseSubmix : 1;                             // Mask: 0x2, PropSize: 0x10x2CC(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x4, PropSize: 0x10x2CC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_3D : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_489[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2D0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2D8(0x3C8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x6A0(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x6A8(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundClass*                           SoundClass;                                        // 0x6F8(0x8)(BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x700(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x708(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x710(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x720(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x730(0x10)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x740(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x740(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_3E : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_48E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        EnvelopeFollowerAttackTime;                        // 0x744(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x748(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_48F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x750(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_490[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class USynthSound*                           Synth;                                             // 0x780(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UAudioComponent*                       AudioComponent;                                    // 0x788(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_491[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponent* GetDefaultObj();

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	float SetSubmixSend();
	bool SetOutputToBusOnly();
	float SetLowPassFilterFrequency();
	bool SetLowPassFilterEnabled();
	bool IsPlaying();
	enum class EAudioFaderCurve FadeOut();
	enum class EAudioFaderCurve FadeIn(float StartTime);
	enum class EAudioFaderCurve AdjustVolume();
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_492[0x80];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioGenerator* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class AudioMixer.AudioBusSubsystem
class UAudioBusSubsystem : public UAudioEngineSubsystem
{
public:
	uint8                                        Pad_493[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioBusSubsystem* GetDefaultObj();

};

// 0xF8 (0x128 - 0x30)
// Class AudioMixer.AudioDeviceNotificationSubsystem
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_495[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DefaultCaptureDeviceChanged;                       // 0x38(0x10)(ConstParm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_496[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DefaultRenderDeviceChanged;                        // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_497[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceAdded;                                       // 0x88(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_498[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceRemoved;                                     // 0xB0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_49A[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceStateChanged;                                // 0xD8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_49C[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            DeviceSwitched;                                    // 0x100(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_49D[0x18];                                     // Fixing Size Of Struct > TateDumper <

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

	float TrimAudioCache(float InMegabytesToFree);
	class UObject* SwapAudioOutputDevice(const class FString& NewDeviceId, FDelegateProperty_* OnCompletedDeviceSwap);
	class USoundWave* StopRecordingOutput(enum class EAudioRecordingExportType* ExportType, class FString* Name, const class FString& Path, class USoundSubmix** SubmixToRecord, class USoundWave** ExistingSoundWaveToOverwrite);
	class UObject* StopAudioBus(class UAudioBus* AudioBus);
	class UObject* StopAnalyzingOutput(class USoundSubmix** SubmixToStopAnalyzing);
	class UObject* StartRecordingOutput(float* ExpectedDuration, class USoundSubmix** SubmixToRecord);
	class UObject* StartAudioBus(class UAudioBus* AudioBus);
	class UObject* StartAnalyzingOutput(class USoundSubmix** SubmixToAnalyze, enum class EFFTSize* FFTSize, enum class EFFTPeakInterpolationMethod* InterpolationMethod, enum class EFFTWindowType* WindowType, float* HopSize, enum class EAudioSpectrumType* SpectrumType);
	class UObject* SetSubmixEffectChainOverride(class USoundSubmix** SoundSubmix, TArray<class USoundEffectSubmixPreset*>* SubmixEffectPresetChain, float* FadeTimeSec);
	class UObject* SetBypassSourceEffectChainEntry(class USoundEffectSourcePresetChain** PresetChain, int32 EntryIndex, bool* bBypassed);
	class UObject* ResumeRecordingOutput(class USoundSubmix** SubmixToPause);
	class UObject* ReplaceSubmixEffect(class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* ReplaceSoundEffectSubmix(class USoundSubmix** InSoundSubmix, int32* SubmixChainIndex, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* RemoveSubmixEffectPresetAtIndex(class USoundSubmix** SoundSubmix, int32* SubmixChainIndex);
	class UObject* RemoveSubmixEffectPreset(class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* RemoveSubmixEffectAtIndex(class USoundSubmix** SoundSubmix, int32* SubmixChainIndex);
	class UObject* RemoveSubmixEffect(class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* RemoveSourceEffectFromPresetChain(class USoundEffectSourcePresetChain** PresetChain, int32 EntryIndex);
	class UObject* RemoveMasterSubmixEffect(class USoundEffectSubmixPreset** SubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty_* OnLoadCompletion);
	class USoundCue* PrimeSoundCueForPlayback();
	class UObject* PauseRecordingOutput(class USoundSubmix** SubmixToPause);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType* InBandPresetType, int32* InNumBands);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32* InNumSemitones, enum class EMusicalNoteName* InStartingMusicalNote, int32* InStartingOctave);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32* InNumBands, float* InMinimumFrequency, float* InMaximumFrequency);
	bool IsAudioBusActive(class UAudioBus* AudioBus);
	TArray<float> GetPhaseForFrequencies(TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze);
	int32 GetNumberOfEntriesInSourceEffectChain(class USoundEffectSourcePresetChain** PresetChain);
	TArray<float> GetMagnitudeForFrequencies(TArray<float>* Frequencies, class USoundSubmix** SubmixToAnalyze);
	class UObject* GetCurrentAudioOutputDeviceName(FDelegateProperty_* OnObtainCurrentDeviceEvent);
	FDelegateProperty_ GetAvailableAudioOutputDevices();
	class FString Conv_AudioOutputDeviceInfoToString();
	class UObject* ClearSubmixEffects(class USoundSubmix** SoundSubmix);
	class UObject* ClearSubmixEffectChainOverride(class USoundSubmix** SoundSubmix, float* FadeTimeSec);
	class UObject* ClearMasterSubmixEffects();
	int32 AddSubmixEffect(class USoundSubmix** SoundSubmix, class USoundEffectSubmixPreset** SubmixEffectPreset);
	class UObject* AddSourceEffectToPresetChain(class USoundEffectSourcePresetChain** PresetChain, const struct FSourceEffectChainEntry& Entry);
	class UObject* AddMasterSubmixEffect(class USoundEffectSubmixPreset** SubmixEffectPreset);
};

// 0x20 (0x4E0 - 0x4C0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>        OwningSynthComponent;                              // 0x4C0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4F9[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthSound* GetDefaultObj();

};

// 0xE8 (0x150 - 0x68)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_4FE[0x88];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xF0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings* Settings);
	class USoundSubmix* SetExternalSubmix();
	void SetAudioBus(class UAudioBus* AudioBus);
	void ResetKey();
};

// 0x48 (0xB0 - 0x68)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_501[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectSubmixEQPreset* GetDefaultObj();

	struct FSubmixEffectSubmixEQSettings SetSettings();
};

// 0xA8 (0x110 - 0x68)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_503[0x68];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectReverbSettings           Settings;                                          // 0xD0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectReverbPreset* GetDefaultObj();

	float SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect);
	struct FSubmixEffectReverbSettings SetSettings();
};

// 0x1C0 (0x1E8 - 0x28)
// Class AudioMixer.QuartzClockHandle
class UQuartzClockHandle : public UObject
{
public:
	uint8                                        Pad_547[0x1C0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuartzClockHandle* GetDefaultObj();

	class UObject* UnsubscribeFromTimeDivision(enum class EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle* ClockHandle);
	class UObject* UnsubscribeFromAllTimeDivisions(class UQuartzClockHandle* ClockHandle);
	class UObject* SubscribeToQuantizationEvent(enum class EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle* ClockHandle);
	class UObject* SubscribeToAllQuantizationEvents(FDelegateProperty_ OnQuantizationEvent, class UQuartzClockHandle* ClockHandle);
	class UObject* StopClock(bool CancelPendingEvents, class UQuartzClockHandle* ClockHandle);
	class UObject* StartOtherClock(class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_ InDelegate);
	class UObject* StartClock(class UQuartzClockHandle* ClockHandle);
	float SetTicksPerSecond(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle);
	class UObject* SetThirtySecondNotesPerMinute(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float ThirtySecondsNotesPerMinute);
	class UObject* SetSecondsPerTick(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float SecondsPerTick);
	class UObject* SetMillisecondsPerTick(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float MillisecondsPerTick);
	class UObject* SetBeatsPerMinute(const struct FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty_ Delegate, class UQuartzClockHandle* ClockHandle, float BeatsPerMinute);
	class UObject* ResumeClock(class UQuartzClockHandle* ClockHandle);
	class UObject* ResetTransportQuantized(const struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_ InDelegate, class UQuartzClockHandle* ClockHandle);
	class UObject* ResetTransport(FDelegateProperty_ InDelegate);
	class UObject* PauseClock(class UQuartzClockHandle* ClockHandle);
	bool IsClockRunning();
	float GetTicksPerSecond();
	float GetThirtySecondNotesPerMinute();
	float GetSecondsPerTick();
	float GetMillisecondsPerTick();
	float GetEstimatedRunTime();
	float GetDurationOfQuantizationTypeInSeconds(float* Multiplier);
	struct FQuartzTransportTimeStamp GetCurrentTimestamp();
	float GetBeatsPerMinute();
};

// 0x20 (0x60 - 0x40)
// Class AudioMixer.QuartzSubsystem
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_568[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuartzSubsystem* GetDefaultObj();

	bool IsQuartzEnabled();
	bool IsClockRunning();
	float GetRoundTripMinLatency();
	float GetRoundTripMaxLatency();
	float GetRoundTripAverageLatency();
	class UQuartzClockHandle* GetHandleForClock();
	float GetGameThreadToAudioRenderThreadMinLatency();
	float GetGameThreadToAudioRenderThreadMaxLatency();
	float GetGameThreadToAudioRenderThreadAverageLatency();
	float GetEstimatedClockRunTime(class FName InClockName);
	float GetDurationOfQuantizationTypeInSeconds(float* Multiplier);
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(class FName InClockName);
	float GetAudioRenderThreadToGameThreadMinLatency();
	float GetAudioRenderThreadToGameThreadMaxLatency();
	float GetAudioRenderThreadToGameThreadAverageLatency();
	bool DoesClockExist();
	class FName DeleteClockByName();
	class UObject* DeleteClockByHandle(class UQuartzClockHandle* InClockHandle);
	class UQuartzClockHandle* CreateNewClock(bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
};

}


