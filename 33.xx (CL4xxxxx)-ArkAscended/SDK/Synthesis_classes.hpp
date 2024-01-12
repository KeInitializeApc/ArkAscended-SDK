#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class Synthesis.AudioImpulseResponse
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                ImpulseResponse;                                   // 0x28(0x10)(ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	int32                                        NumChannels;                                       // 0x38(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	int32                                        SampleRate;                                        // 0x3C(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        NormalizationVolumeDb;                             // 0x40(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bTrueStereo;                                       // 0x44(0x1)(ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C93[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                IRData;                                            // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAudioImpulseResponse* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>  Presets;                                           // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UModularSynthPresetBank* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Synthesis.ModularSynthLibrary
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModularSynthLibrary* GetDefaultObj();

	class FString AddModularSynthPresetToBankAsset(class UModularSynthPresetBank** InBank);
};

// 0x6D0 (0xE90 - 0x7C0)
// Class Synthesis.ModularSynthComponent
class UModularSynthComponent : public USynthComponent
{
public:
	int32                                        VoiceCount;                                        // 0x7C0(0x4)(ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D12[0x6CC];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModularSynthComponent* GetDefaultObj();

	struct FModularSynthPreset SetSynthPreset();
	float SetSustainGain();
	float SetStereoDelayWetlevel();
	void SetStereoDelayTime(float* DelayTimeMsec);
	void SetStereoDelayRatio(float* DelayRatio);
	enum class ESynthStereoDelayMode SetStereoDelayMode();
	bool SetStereoDelayIsEnabled();
	float SetStereoDelayFeedback();
	float SetSpread();
	float SetReleaseTime();
	float SetPortamento();
	float SetPitchBend();
	float SetPan();
	enum class ESynth1OscType SetOscType();
	bool SetOscSync();
	float SetOscSemitones();
	float SetOscPulsewidth();
	float SetOscOctave();
	float SetOscGainMod();
	float SetOscGain();
	float SetOscFrequencyMod();
	float SetOscCents();
	float SetModEnvSustainGain();
	float SetModEnvReleaseTime();
	void SetModEnvPatch(enum class ESynthModEnvPatch* InPatchType);
	bool SetModEnvInvert();
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float* DecayTimeMsec);
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch* InPatchType);
	bool SetModEnvBiasInvert();
	float SetModEnvAttackTime();
	void SetLFOType(int32* LFOIndex, enum class ESynthLFOType* LFOType);
	void SetLFOPatch(int32* LFOIndex, enum class ESynthLFOPatchType* LFOPatchType);
	void SetLFOMode(int32* LFOIndex, enum class ESynthLFOMode* LFOMode);
	void SetLFOGainMod(int32* LFOIndex, float* GainMod);
	void SetLFOGain(int32* LFOIndex, float Gain);
	void SetLFOFrequencyMod(int32* LFOIndex, float* FrequencyModHz);
	float SetLFOFrequency(int32* LFOIndex);
	float SetGainDb();
	enum class ESynthFilterType SetFilterType();
	float SetFilterQMod();
	float SetFilterQ();
	void SetFilterFrequencyMod(float* FilterFrequencyHz);
	void SetFilterFrequency(float* FilterFrequencyHz);
	enum class ESynthFilterAlgorithm SetFilterAlgorithm();
	void SetEnableUnison(bool* EnableUnison);
	void SetEnableRetrigger(bool* RetriggerEnabled);
	bool SetEnablePolyphony();
	bool SetEnablePatch();
	void SetEnableLegato(bool* LegatoEnabled);
	void SetDecayTime(float* DecayTimeMsec);
	void SetChorusFrequency(float* Frequency);
	float SetChorusFeedback();
	void SetChorusEnabled(bool* EnableChorus);
	void SetChorusDepth(float Depth);
	float SetAttackTime();
	float NoteOn(float* Note);
	void NoteOff(float* Note, bool* bAllNotesOff, bool* bKillAllNotes);
	struct FPatchId CreatePatch(bool* bEnableByDefault);
};

// 0x1C8 (0x230 - 0x68)
// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1D26[0xF8];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectBitCrusherSettings       Settings;                                          // 0x160(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectBitCrusherPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings* Settings);
	TSet<class USoundModulatorBase*> SetSampleRateModulators();
	class USoundModulatorBase* SetSampleRateModulator();
	void SetSampleRate(float SampleRate);
	void SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings);
	float SetBits();
	TSet<class USoundModulatorBase*> SetBitModulators();
	class USoundModulatorBase* SetBitModulator();
};

// 0x4D8 (0x540 - 0x68)
// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1D95[0x280];                                   // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectChorusSettings           Settings;                                          // 0x2E8(0x258)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectChorusPreset* GetDefaultObj();

	TSet<class USoundModulatorBase*> SetWetModulators();
	class USoundModulatorBase* SetWetModulator();
	void SetWet(float* WetAmount);
	TSet<class USoundModulatorBase*> SetSpreadModulators();
	class USoundModulatorBase* SetSpreadModulator();
	float SetSpread();
	void SetSettings(struct FSourceEffectChorusBaseSettings* Settings);
	void SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings);
	TSet<class USoundModulatorBase*> SetFrequencyModulators();
	class USoundModulatorBase* SetFrequencyModulator();
	void SetFrequency(float* Frequency);
	TSet<class USoundModulatorBase*> SetFeedbackModulators();
	class USoundModulatorBase* SetFeedbackModulator();
	float SetFeedback();
	TSet<class USoundModulatorBase*> SetDryModulators();
	class USoundModulatorBase* SetDryModulator();
	void SetDry(float* DryAmount);
	TSet<class USoundModulatorBase*> SetDepthModulators();
	class USoundModulatorBase* SetDepthModulator();
	void SetDepth(float Depth);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectConvolutionReverbPreset
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FSourceEffectConvolutionReverbSettings Settings;                                          // 0x70(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0x80(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableHardwareAcceleration;                       // 0x81(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D9E[0x3E];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USourceEffectConvolutionReverbPreset* GetDefaultObj();

	struct FSourceEffectConvolutionReverbSettings SetSettings();
	class UAudioImpulseResponse* SetImpulseResponse();
};

// 0x78 (0xE0 - 0x68)
// Class Synthesis.SourceEffectDynamicsProcessorPreset
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1DA1[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectDynamicsProcessorSettings Settings;                                          // 0xB8(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectDynamicsProcessorPreset* GetDefaultObj();

	struct FSourceEffectDynamicsProcessorSettings SetSettings();
};

// 0x20 (0xD8 - 0xB8)
// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEnvelopeFollowerUpdate;                          // 0xB8(0x10)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DA5[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvelopeFollowerListener* GetDefaultObj();

};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1DB0[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectEnvelopeFollowerSettings Settings;                                          // 0x9C(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectEnvelopeFollowerPreset* GetDefaultObj();

	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener** EnvelopeFollowerListener);
	struct FSourceEffectEnvelopeFollowerSettings SetSettings();
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener** EnvelopeFollowerListener);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectEQPreset
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1DB2[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectEQSettings               Settings;                                          // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectEQPreset* GetDefaultObj();

	struct FSourceEffectEQSettings SetSettings();
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1DB6[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectFilterSettings           Settings;                                          // 0xB0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectFilterPreset* GetDefaultObj();

	struct FSourceEffectFilterSettings SetSettings();
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1DBA[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectFoldbackDistortionSettings Settings;                                          // 0x9C(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectFoldbackDistortionPreset* GetDefaultObj();

	struct FSourceEffectFoldbackDistortionSettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1DC1[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectMidSideSpreaderSettings  Settings;                                          // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectMidSideSpreaderPreset* GetDefaultObj();

	struct FSourceEffectMidSideSpreaderSettings SetSettings();
};

// 0x118 (0x180 - 0x68)
// Class Synthesis.SourceEffectMotionFilterPreset
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1DC8[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectMotionFilterSettings     Settings;                                          // 0x108(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectMotionFilterPreset* GetDefaultObj();

	struct FSourceEffectMotionFilterSettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1E43[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectPannerSettings           Settings;                                          // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectPannerPreset* GetDefaultObj();

	struct FSourceEffectPannerSettings SetSettings();
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1E48[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectPhaserSettings           Settings;                                          // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectPhaserPreset* GetDefaultObj();

	struct FSourceEffectPhaserSettings SetSettings();
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1E4A[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectRingModulationSettings   Settings;                                          // 0xB0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectRingModulationPreset* GetDefaultObj();

	struct FSourceEffectRingModulationSettings SetSettings();
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1E52[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectSimpleDelaySettings      Settings;                                          // 0xA8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectSimpleDelayPreset* GetDefaultObj();

	struct FSourceEffectSimpleDelaySettings SetSettings();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1E5D[0x4C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectStereoDelayPreset* GetDefaultObj();

	struct FSourceEffectStereoDelaySettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1E60[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectWaveShaperSettings       Settings;                                          // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectWaveShaperPreset* GetDefaultObj();

	struct FSourceEffectWaveShaperSettings SetSettings();
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectConvolutionReverbPreset
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FSubmixEffectConvolutionReverbSettings Settings;                                          // 0x70(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0xA0(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableHardwareAcceleration;                       // 0xA1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E69[0x5E];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectConvolutionReverbPreset* GetDefaultObj();

	struct FSubmixEffectConvolutionReverbSettings SetSettings();
	class UAudioImpulseResponse* SetImpulseResponse();
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SubmixEffectDelayStatics
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USubmixEffectDelayStatics* GetDefaultObj();

	struct FSubmixEffectDelaySettings SetMaximumDelayLength(float MaximumDelayLength);
	struct FSubmixEffectDelaySettings SetInterpolationTime(float* InterpolationTime);
	struct FSubmixEffectDelaySettings SetDelayLength(float* DelayLength);
};

// 0x50 (0xB8 - 0x68)
// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1E88[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectDelaySettings            Settings;                                          // 0x9C(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FSubmixEffectDelaySettings            DynamicSettings;                                   // 0xA8(0xC)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E89[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectDelayPreset* GetDefaultObj();

	struct FSubmixEffectDelaySettings SetSettings();
	void SetInterpolationTime(float Time);
	float SetDelay();
	struct FSubmixEffectDelaySettings SetDefaultSettings();
	float GetMaxDelayInMilliseconds();
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1EB9[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectFilterSettings           Settings;                                          // 0x9C(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectFilterPreset* GetDefaultObj();

	struct FSubmixEffectFilterSettings SetSettings();
	enum class ESubmixFilterType SetFilterType();
	float SetFilterQMod();
	float SetFilterQ();
	float SetFilterCutoffFrequencyMod();
	float SetFilterCutoffFrequency();
	enum class ESubmixFilterAlgorithm SetFilterAlgorithm();
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SubmixEffectFlexiverbPreset
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1EBC[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectFlexiverbSettings        Settings;                                          // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectFlexiverbPreset* GetDefaultObj();

	struct FSubmixEffectFlexiverbSettings SetSettings();
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectMultibandCompressorPreset
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1EC3[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectMultibandCompressorSettings Settings;                                          // 0xC8(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectMultibandCompressorPreset* GetDefaultObj();

	struct FSubmixEffectMultibandCompressorSettings SetSettings();
	class USoundSubmix* SetExternalSubmix();
	void SetAudioBus(class UAudioBus* AudioBus);
	void ResetKey();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectStereoDelayPreset
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1ED8[0x4C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectStereoDelayPreset* GetDefaultObj();

	struct FSubmixEffectStereoDelaySettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SubmixEffectStereoToQuadPreset
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1EDE[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectStereoToQuadSettings     Settings;                                          // 0x98(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectStereoToQuadPreset* GetDefaultObj();

	struct FSubmixEffectStereoToQuadSettings SetSettings();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1EF8[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectTapDelaySettings         Settings;                                          // 0xA8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1EF9[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectTapDelayPreset* GetDefaultObj();

	struct FTapDelayInfo SetTap(int32 TapId);
	struct FSubmixEffectTapDelaySettings SetSettings();
	void SetInterpolationTime(float Time);
	void RemoveTap(int32 TapId);
	TArray<int32> GetTapIds();
	struct FTapDelayInfo GetTap(int32 TapId);
	float GetMaxDelayInMilliseconds();
	void AddTap(int32 TapId);
};

// 0x3E0 (0xBA0 - 0x7C0)
// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                            GranulatedSoundWave;                               // 0x7C0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F2D[0x3D8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGranularSynth* GetDefaultObj();

	float SetSustainGain();
	class USoundWave* SetSoundWave();
	bool SetScrubMode();
	float SetReleaseTimeMsec();
	enum class EGranularSynthSeekType SetPlayheadTime();
	float SetPlaybackSpeed();
	struct FVector2D SetGrainVolume();
	float SetGrainsPerSecond();
	float SetGrainProbability();
	struct FVector2D SetGrainPitch();
	struct FVector2D SetGrainPan();
	enum class EGranularSynthEnvelopeType SetGrainEnvelopeType();
	struct FVector2D SetGrainDuration();
	void SetDecayTime(float* DecayTimeMsec);
	float SetAttackTime();
	float NoteOn(float* Note);
	bool NoteOff(float* Note);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};

// 0x148 (0x170 - 0x28)
// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                PresetName;                                        // 0x28(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bLockKeyframesToGridBool : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_142 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1F33[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LockKeyframesToGrid;                               // 0x3C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        WaveTableResolution;                               // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F34[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRuntimeFloatCurve>            WaveTable;                                         // 0x48(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        bNormalizeWaveTables : 1;                          // Mask: 0x1, PropSize: 0x10x58(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F36[0x117];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMonoWaveTableSynthPreset* GetDefaultObj();

};

// 0x750 (0xF10 - 0x7C0)
// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTableAltered;                                    // 0x7C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNumTablesChanged;                                // 0x7D0(0x10)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UMonoWaveTableSynthPreset*             CurrentPreset;                                     // 0x7E0(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F8E[0x728];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponentMonoWaveTable* GetDefaultObj();

	float SetWaveTablePosition();
	bool SetSustainPedalState();
	enum class ESynthLFOType SetPosLfoType();
	float SetPosLfoFrequency();
	float SetPosLfoDepth();
	float SetPositionEnvelopeSustainGain();
	float SetPositionEnvelopeReleaseTime();
	bool SetPositionEnvelopeInvert();
	float SetPositionEnvelopeDepth();
	float SetPositionEnvelopeDecayTime();
	bool SetPositionEnvelopeBiasInvert();
	float SetPositionEnvelopeBiasDepth();
	float SetPositionEnvelopeAttackTime();
	float SetLowPassFilterResonance();
	float SetFrequencyWithMidiNote();
	float SetFrequencyPitchBend();
	float SetFrequency();
	float SetFilterEnvelopeSustainGain();
	float SetFilterEnvelopeReleaseTime();
	float SetFilterEnvelopenDecayTime();
	bool SetFilterEnvelopeInvert();
	float SetFilterEnvelopeDepth();
	bool SetFilterEnvelopeBiasInvert();
	float SetFilterEnvelopeBiasDepth();
	float SetFilterEnvelopeAttackTime();
	bool SetCurveValue(int32 TableIndex, float NewValue);
	bool SetCurveTangent(int32 TableIndex);
	bool SetCurveInterpolationType(int32 TableIndex);
	float SetAmpEnvelopeSustainGain();
	float SetAmpEnvelopeReleaseTime();
	bool SetAmpEnvelopeInvert();
	float SetAmpEnvelopeDepth();
	float SetAmpEnvelopeDecayTime();
	bool SetAmpEnvelopeBiasInvert();
	float SetAmpEnvelopeBiasDepth();
	float SetAmpEnvelopeAttackTime();
	int32 RefreshWaveTable();
	void RefreshAllWaveTables();
	float NoteOn();
	float NoteOff();
	int32 GetNumTableEntries();
	int32 GetMaxTableIndex();
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);
	float GetCurveTangent(int32 TableIndex);
};

// 0xF0 (0x8B0 - 0x7C0)
// Class Synthesis.SynthComponentToneGenerator
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                        Frequency;                                         // 0x7C0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Volume;                                            // 0x7C4(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FRuntimeFloatCurve                    DistanceAttenuationCurve;                          // 0x7C8(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             DistanceRange;                                     // 0x850(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AttenuationDbAtMaxRange;                           // 0x860(0x4)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F9B[0x4C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponentToneGenerator* GetDefaultObj();

	float SetVolume();
	float SetFrequency();
};

// 0x130 (0x8F0 - 0x7C0)
// Class Synthesis.SynthSamplePlayer
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                            SoundWave;                                         // 0x7C0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnSampleLoaded;                                    // 0x7C8(0x10)(Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSamplePlaybackProgress;                          // 0x7D8(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FAD[0x108];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthSamplePlayer* GetDefaultObj();

	class USoundWave* SetSoundWave();
	float SetScrubTimeWidth();
	bool SetScrubMode();
	float SetPitch();
	bool SeekToTime();
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USynthesisUtilitiesBlueprintFunctionLibrary* GetDefaultObj();

	float GetLogFrequency();
	float GetLinearFrequency();
};

// 0x4F0 (0x6E0 - 0x1F0)
// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget
{
public:
	float                                        ValueX;                                            // 0x1F0(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        ValueY;                                            // 0x1F4(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueXDelegate;                                    // 0x1F8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueYDelegate;                                    // 0x208(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FCD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSynth2DSliderStyle                   WidgetStyle;                                       // 0x220(0x430)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderHandleColor;                                 // 0x650(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IndentHandle;                                      // 0x660(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x661(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1FCE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StepSize;                                          // 0x664(0x4)(ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x668(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FD0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x670(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x680(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x690(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x6A0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChangedX;                                   // 0x6B0(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChangedY;                                   // 0x6C0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FD2[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynth2DSlider* GetDefaultObj();

	struct FVector2D SetValue();
	float SetStepSize();
	struct FLinearColor SetSliderHandleColor();
	bool SetLocked();
	bool SetIndentHandle();
	struct FVector2D GetValue();
};

// 0x430 (0x620 - 0x1F0)
// Class Synthesis.SynthKnob
class USynthKnob : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	float                                        StepSize;                                          // 0x1F4(0x4)(ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MouseSpeed;                                        // 0x1F8(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MouseFineTuneSpeed;                                // 0x1FC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ShowTooltipInfo : 1;                               // Mask: 0x1, PropSize: 0x10x200(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_143 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1FDE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  ParameterName;                                     // 0x208(0x18)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	class FText                                  ParameterUnits;                                    // 0x220(0x18)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueDelegate;                                     // 0x238(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FE0[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSynthKnobStyle                       WidgetStyle;                                       // 0x250(0x360)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Locked;                                            // 0x5B0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IsFocusable;                                       // 0x5B1(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FE2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x5B8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x5C8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x5D8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x5E8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x5F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FE4[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthKnob* GetDefaultObj();

	float SetValue();
	float SetStepSize();
	bool SetLocked();
	float GetValue();
};

}


