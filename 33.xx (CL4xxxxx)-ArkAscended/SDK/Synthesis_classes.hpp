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
	TArray<float>                                ImpulseResponse;                                   // 0x28(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        NumChannels;                                       // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig)
	int32                                        SampleRate;                                        // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, DuplicateTransient)
	float                                        NormalizationVolumeDb;                             // 0x40(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bTrueStereo;                                       // 0x44(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_180D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                IRData;                                            // 0x48(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAudioImpulseResponse* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>  Presets;                                           // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

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

	class UModularSynthPresetBank* AddModularSynthPresetToBankAsset(const struct FModularSynthPreset& Preset, const class FString& PresetName);
};

// 0x6D0 (0xE90 - 0x7C0)
// Class Synthesis.ModularSynthComponent
class UModularSynthComponent : public USynthComponent
{
public:
	int32                                        VoiceCount;                                        // 0x7C0(0x4)(Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_18DB[0x6CC];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModularSynthComponent* GetDefaultObj();

	void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);
	void SetSustainGain(float* SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	float SetStereoDelayTime();
	float SetStereoDelayRatio();
	void SetStereoDelayMode(enum class ESynthStereoDelayMode* StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	float SetStereoDelayFeedback();
	void SetSpread(float Spread);
	void SetReleaseTime(float* ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	float SetPitchBend();
	void SetPan(float Pan);
	enum class ESynth1OscType SetOscType();
	bool SetOscSync();
	float SetOscSemitones();
	float SetOscPulsewidth();
	float SetOscOctave();
	float SetOscGainMod();
	float SetOscGain();
	float SetOscFrequencyMod();
	float SetOscCents();
	void SetModEnvSustainGain(float* SustainGain);
	void SetModEnvReleaseTime(float Release);
	enum class ESynthModEnvPatch SetModEnvPatch();
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	float SetModEnvDecayTime();
	enum class ESynthModEnvBiasPatch SetModEnvBiasPatch();
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float* AttackTimeMsec);
	enum class ESynthLFOType SetLFOType();
	enum class ESynthLFOPatchType SetLFOPatch();
	enum class ESynthLFOMode SetLFOMode();
	float SetLFOGainMod();
	float SetLFOGain();
	float SetLFOFrequencyMod();
	int32 SetLFOFrequency(float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(enum class ESynthFilterType* FilterType);
	void SetFilterQMod(float* FilterQ);
	void SetFilterQ(float* FilterQ);
	float SetFilterFrequencyMod();
	float SetFilterFrequency();
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm* FilterAlgorithm);
	bool SetEnableUnison();
	bool SetEnableRetrigger();
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(bool ReturnValue);
	bool SetEnableLegato();
	float SetDecayTime();
	float SetChorusFrequency();
	void SetChorusFeedback(float* Feedback);
	bool SetChorusEnabled();
	void SetChorusDepth(float Depth);
	void SetAttackTime(float* AttackTimeMsec);
	int32 NoteOn(float* Note, float Duration);
	bool NoteOff(float* Note);
	bool CreatePatch(enum class ESynth1PatchSource PatchSource, const TArray<struct FSynth1PatchCable>& PatchCables, const struct FPatchId& ReturnValue);
};

// 0x1C8 (0x230 - 0x68)
// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_18FC[0xF8];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectBitCrusherSettings       Settings;                                          // 0x160(0xD0)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectBitCrusherPreset* GetDefaultObj();

	struct FSourceEffectBitCrusherBaseSettings SetSettings();
	void SetSampleRateModulators(TSet<class USoundModulatorBase*> InModulators);
	void SetSampleRateModulator(class USoundModulatorBase* Modulator);
	float SetSampleRate();
	struct FSourceEffectBitCrusherSettings SetModulationSettings();
	void SetBits(float Bits);
	void SetBitModulators(TSet<class USoundModulatorBase*> InModulators);
	void SetBitModulator(class USoundModulatorBase* Modulator);
};

// 0x4D8 (0x540 - 0x68)
// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1931[0x280];                                   // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectChorusSettings           Settings;                                          // 0x2E8(0x258)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectChorusPreset* GetDefaultObj();

	void SetWetModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetWetModulator(class USoundModulatorBase* Modulator);
	float SetWet();
	void SetSpreadModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetSpreadModulator(class USoundModulatorBase* Modulator);
	void SetSpread(float Spread);
	struct FSourceEffectChorusBaseSettings SetSettings();
	struct FSourceEffectChorusSettings SetModulationSettings();
	void SetFrequencyModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetFrequencyModulator(class USoundModulatorBase* Modulator);
	float SetFrequency();
	void SetFeedbackModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetFeedbackModulator(class USoundModulatorBase* Modulator);
	void SetFeedback(float* Feedback);
	void SetDryModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetDryModulator(class USoundModulatorBase* Modulator);
	float SetDry();
	void SetDepthModulators(TSet<class USoundModulatorBase*> Modulators);
	void SetDepthModulator(class USoundModulatorBase* Modulator);
	void SetDepth(float Depth);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectConvolutionReverbPreset
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FSourceEffectConvolutionReverbSettings Settings;                                          // 0x70(0x10)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0x80(0x1)(Edit, ExportObject, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableHardwareAcceleration;                       // 0x81(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1941[0x3E];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USourceEffectConvolutionReverbPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

// 0x78 (0xE0 - 0x68)
// Class Synthesis.SourceEffectDynamicsProcessorPreset
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1947[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectDynamicsProcessorSettings Settings;                                          // 0xB8(0x28)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);
};

// 0x20 (0xD8 - 0xB8)
// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEnvelopeFollowerUpdate;                          // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1949[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvelopeFollowerListener* GetDefaultObj();

};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1951[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectEnvelopeFollowerSettings Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectEnvelopeFollowerPreset* GetDefaultObj();

	class UEnvelopeFollowerListener* UnregisterEnvelopeFollowerListener();
	void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);
	class UEnvelopeFollowerListener* RegisterEnvelopeFollowerListener();
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectEQPreset
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1955[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectEQSettings               Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectEQPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectEQSettings& InSettings);
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_195B[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectFilterSettings           Settings;                                          // 0xB0(0x20)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectFilterPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectFilterSettings& InSettings);
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1964[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectFoldbackDistortionSettings Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectFoldbackDistortionPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1968[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectMidSideSpreaderSettings  Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectMidSideSpreaderPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);
};

// 0x118 (0x180 - 0x68)
// Class Synthesis.SourceEffectMotionFilterPreset
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_196D[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectMotionFilterSettings     Settings;                                          // 0x108(0x78)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectMotionFilterPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectMotionFilterSettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1971[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectPannerSettings           Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectPannerPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectPannerSettings& InSettings);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1974[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectPhaserSettings           Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectPhaserPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_197A[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectRingModulationSettings   Settings;                                          // 0xB0(0x20)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectRingModulationPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_197E[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectSimpleDelaySettings      Settings;                                          // 0xA8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectSimpleDelayPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1986[0x4C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectStereoDelayPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_198A[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectWaveShaperSettings       Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectWaveShaperPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectConvolutionReverbPreset
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FSubmixEffectConvolutionReverbSettings Settings;                                          // 0x70(0x30)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0xA0(0x1)(Edit, ExportObject, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableHardwareAcceleration;                       // 0xA1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1996[0x5E];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectConvolutionReverbPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SubmixEffectDelayStatics
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USubmixEffectDelayStatics* GetDefaultObj();

	float SetMaximumDelayLength(const struct FSubmixEffectDelaySettings& DelaySettings, const struct FSubmixEffectDelaySettings& ReturnValue);
	float SetInterpolationTime(const struct FSubmixEffectDelaySettings& DelaySettings, const struct FSubmixEffectDelaySettings& ReturnValue);
	float SetDelayLength(const struct FSubmixEffectDelaySettings& DelaySettings, const struct FSubmixEffectDelaySettings& ReturnValue);
};

// 0x50 (0xB8 - 0x68)
// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19B8[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectDelaySettings            Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	struct FSubmixEffectDelaySettings            DynamicSettings;                                   // 0xA8(0xC)(BlueprintVisible, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_19B9[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectDelayPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);
	float SetInterpolationTime();
	float SetDelay();
	void SetDefaultSettings(const struct FSubmixEffectDelaySettings& InSettings);
	void GetMaxDelayInMilliseconds(float ReturnValue);
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19C4[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectFilterSettings           Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectFilterPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);
	void SetFilterType(enum class ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SubmixEffectFlexiverbPreset
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19CA[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectFlexiverbSettings        Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectFlexiverbPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectMultibandCompressorPreset
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19D4[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectMultibandCompressorSettings Settings;                                          // 0xC8(0x38)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectMultibandCompressorPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetAudioBus(class UAudioBus** AudioBus);
	void ResetKey();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectStereoDelayPreset
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19D8[0x4C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectStereoDelayPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SubmixEffectStereoToQuadPreset
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19DE[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectStereoToQuadSettings     Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectStereoToQuadPreset* GetDefaultObj();

	void SetSettings(const struct FSubmixEffectStereoToQuadSettings& InSettings);
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19EE[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectTapDelaySettings         Settings;                                          // 0xA8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_19EF[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectTapDelayPreset* GetDefaultObj();

	int32 SetTap(const struct FTapDelayInfo& TapInfo);
	void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);
	float SetInterpolationTime();
	int32 RemoveTap();
	void GetTapIds(const TArray<int32>& TapIds);
	int32 GetTap(const struct FTapDelayInfo& TapInfo);
	void GetMaxDelayInMilliseconds(float ReturnValue);
	int32 AddTap();
};

// 0x3E0 (0xBA0 - 0x7C0)
// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                            GranulatedSoundWave;                               // 0x7C0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A23[0x3D8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGranularSynth* GetDefaultObj();

	void SetSustainGain(float* SustainGain);
	void SetSoundWave(class USoundWave** InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float* ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
	float SetDecayTime();
	void SetAttackTime(float* AttackTimeMsec);
	int32 NoteOn(float* Note, float Duration);
	void NoteOff(float* Note, bool bKill);
	void IsLoaded(bool ReturnValue);
	void GetSampleDuration(float ReturnValue);
	void GetCurrentPlayheadTime(float ReturnValue);
};

// 0x148 (0x170 - 0x28)
// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                PresetName;                                        // 0x28(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bLockKeyframesToGridBool : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_FC : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1A24[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LockKeyframesToGrid;                               // 0x3C(0x4)(ExportObject, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        WaveTableResolution;                               // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A25[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRuntimeFloatCurve>            WaveTable;                                         // 0x48(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        bNormalizeWaveTables : 1;                          // Mask: 0x1, PropSize: 0x10x58(0x1)(ConstParm, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A27[0x117];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMonoWaveTableSynthPreset* GetDefaultObj();

};

// 0x750 (0xF10 - 0x7C0)
// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTableAltered;                                    // 0x7C0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNumTablesChanged;                                // 0x7D0(0x10)(ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	class UMonoWaveTableSynthPreset*             CurrentPreset;                                     // 0x7E0(0x8)(EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A58[0x728];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponentMonoWaveTable* GetDefaultObj();

	float SetWaveTablePosition();
	void SetSustainPedalState(bool* InSustainPedalState);
	void SetPosLfoType(enum class ESynthLFOType* InLfoType);
	void SetPosLfoFrequency(float* InLfoFrequency);
	void SetPosLfoDepth(float* InLfoDepth);
	void SetPositionEnvelopeSustainGain(float* InSustainGain);
	void SetPositionEnvelopeReleaseTime(float* InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool* bInInvert);
	void SetPositionEnvelopeDepth(float* InDepth);
	void SetPositionEnvelopeDecayTime(float* InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool* bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float* InDepth);
	void SetPositionEnvelopeAttackTime(float* InAttackTimeMsec);
	void SetLowPassFilterResonance(float* InNewQ);
	void SetFrequencyWithMidiNote(float* InMidiNote);
	void SetFrequencyPitchBend(float* FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float* InSustainGain);
	void SetFilterEnvelopeReleaseTime(float* InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float* InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool* bInInvert);
	void SetFilterEnvelopeDepth(float* InDepth);
	void SetFilterEnvelopeBiasInvert(bool* bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float* InDepth);
	void SetFilterEnvelopeAttackTime(float* InAttackTimeMsec);
	float SetCurveValue(int32* KeyframeIndex, bool ReturnValue);
	int32 SetCurveTangent(float* InNewTangent, bool ReturnValue);
	int32 SetCurveInterpolationType(enum class ECurveInterpolationType* InterpolationType, bool ReturnValue);
	void SetAmpEnvelopeSustainGain(float* InSustainGain);
	void SetAmpEnvelopeReleaseTime(float* InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool* bInInvert);
	void SetAmpEnvelopeDepth(float* InDepth);
	void SetAmpEnvelopeDecayTime(float* InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool* bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float* InDepth);
	void SetAmpEnvelopeAttackTime(float* InAttackTimeMsec);
	int32 RefreshWaveTable();
	void RefreshAllWaveTables();
	void NoteOn(float* InMidiNote, float* InVelocity);
	void NoteOff(float* InMidiNote);
	void GetNumTableEntries(int32 ReturnValue);
	void GetMaxTableIndex(int32 ReturnValue);
	float GetKeyFrameValuesForTable(const TArray<float>& ReturnValue);
	int32 GetCurveTangent(float ReturnValue);
};

// 0xF0 (0x8B0 - 0x7C0)
// Class Synthesis.SynthComponentToneGenerator
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                        Frequency;                                         // 0x7C0(0x4)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Volume;                                            // 0x7C4(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FRuntimeFloatCurve                    DistanceAttenuationCurve;                          // 0x7C8(0x88)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             DistanceRange;                                     // 0x850(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AttenuationDbAtMaxRange;                           // 0x860(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A62[0x4C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponentToneGenerator* GetDefaultObj();

	void SetVolume(float* InVolume);
	void SetFrequency(float InFrequency);
};

// 0x130 (0x8F0 - 0x7C0)
// Class Synthesis.SynthSamplePlayer
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                            SoundWave;                                         // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnSampleLoaded;                                    // 0x7C8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSamplePlaybackProgress;                          // 0x7D8(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A6A[0x108];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthSamplePlayer* GetDefaultObj();

	void SetSoundWave(class USoundWave** InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float* TimeSec);
	void SeekToTime(float* TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap);
	void IsLoaded(bool ReturnValue);
	void GetSampleDuration(float ReturnValue);
	void GetCurrentPlaybackProgressTime(float ReturnValue);
	void GetCurrentPlaybackProgressPercent(float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USynthesisUtilitiesBlueprintFunctionLibrary* GetDefaultObj();

	void GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float* InRangeMin, float* InRangeMax, float ReturnValue);
	void GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float* InRangeMin, float* InRangeMax, float ReturnValue);
};

// 0x4F0 (0x6E0 - 0x1F0)
// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget
{
public:
	float                                        ValueX;                                            // 0x1F0(0x4)(ConstParm, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        ValueY;                                            // 0x1F4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueXDelegate;                                    // 0x1F8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueYDelegate;                                    // 0x208(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A96[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSynth2DSliderStyle                   WidgetStyle;                                       // 0x220(0x430)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderHandleColor;                                 // 0x650(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IndentHandle;                                      // 0x660(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x661(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_1A9B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StepSize;                                          // 0x664(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x668(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A9E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x670(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x680(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x690(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x6A0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChangedX;                                   // 0x6B0(0x10)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChangedY;                                   // 0x6C0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA1[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynth2DSlider* GetDefaultObj();

	struct FVector2D SetValue();
	float SetStepSize();
	struct FLinearColor SetSliderHandleColor();
	bool SetLocked();
	bool SetIndentHandle();
	void GetValue(const struct FVector2D& ReturnValue);
};

// 0x430 (0x620 - 0x1F0)
// Class Synthesis.SynthKnob
class USynthKnob : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	float                                        StepSize;                                          // 0x1F4(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        MouseSpeed;                                        // 0x1F8(0x4)(Edit, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MouseFineTuneSpeed;                                // 0x1FC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ShowTooltipInfo : 1;                               // Mask: 0x1, PropSize: 0x10x200(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_FE : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1AAC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  ParameterName;                                     // 0x208(0x18)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	class FText                                  ParameterUnits;                                    // 0x220(0x18)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueDelegate;                                     // 0x238(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AAE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSynthKnobStyle                       WidgetStyle;                                       // 0x250(0x360)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Locked;                                            // 0x5B0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IsFocusable;                                       // 0x5B1(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AB1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x5B8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x5C8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x5D8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x5E8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x5F8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AB3[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthKnob* GetDefaultObj();

	float SetValue();
	float SetStepSize();
	bool SetLocked();
	void GetValue(float ReturnValue);
};

}


