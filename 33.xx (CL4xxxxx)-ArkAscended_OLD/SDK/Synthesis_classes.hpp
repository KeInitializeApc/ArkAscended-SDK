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
	TArray<float>                                ImpulseResponse;                                   // 0x28(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	int32                                        NumChannels;                                       // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig)
	int32                                        SampleRate;                                        // 0x3C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        NormalizationVolumeDb;                             // 0x40(0x4)(ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bTrueStereo;                                       // 0x44(0x1)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_11F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                IRData;                                            // 0x48(0x10)(Edit, ConstParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAudioImpulseResponse* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>  Presets;                                           // 0x28(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

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
	int32                                        VoiceCount;                                        // 0x7C0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12EE[0x6CC];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModularSynthComponent* GetDefaultObj();

	struct FModularSynthPreset SetSynthPreset();
	void SetSustainGain(float* SustainGain);
	float SetStereoDelayWetlevel();
	float SetStereoDelayTime();
	float SetStereoDelayRatio();
	void SetStereoDelayMode(enum class ESynthStereoDelayMode* StereoDelayMode);
	bool SetStereoDelayIsEnabled();
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
	float SetModEnvReleaseTime();
	enum class ESynthModEnvPatch SetModEnvPatch();
	void SetModEnvInvert(bool* bInvert);
	void SetModEnvDepth(float Depth);
	float SetModEnvDecayTime();
	enum class ESynthModEnvBiasPatch SetModEnvBiasPatch();
	void SetModEnvBiasInvert(bool* bInvert);
	void SetModEnvAttackTime(float* AttackTimeMsec);
	enum class ESynthLFOType SetLFOType();
	enum class ESynthLFOPatchType SetLFOPatch();
	enum class ESynthLFOMode SetLFOMode();
	float SetLFOGainMod();
	float SetLFOGain();
	float SetLFOFrequencyMod();
	int32 SetLFOFrequency(float FrequencyHz);
	void SetGainDb(float* GainDb);
	void SetFilterType(enum class ESynthFilterType* FilterType);
	void SetFilterQMod(float* FilterQ);
	void SetFilterQ(float* FilterQ);
	float SetFilterFrequencyMod();
	float SetFilterFrequency();
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm* FilterAlgorithm);
	bool SetEnableUnison();
	bool SetEnableRetrigger();
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(bool* ReturnValue);
	bool SetEnableLegato();
	float SetDecayTime();
	float SetChorusFrequency();
	void SetChorusFeedback(float Feedback);
	bool SetChorusEnabled();
	void SetChorusDepth(float Depth);
	void SetAttackTime(float* AttackTimeMsec);
	float NoteOn(float* Note, int32* Velocity);
	bool NoteOff(float* Note);
	bool CreatePatch(enum class ESynth1PatchSource PatchSource, const TArray<struct FSynth1PatchCable>& PatchCables, struct FPatchId* ReturnValue);
};

// 0x1C8 (0x230 - 0x68)
// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1319[0xF8];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectBitCrusherSettings       Settings;                                          // 0x160(0xD0)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectBitCrusherPreset* GetDefaultObj();

	struct FSourceEffectBitCrusherBaseSettings SetSettings();
	TSet<class USoundModulatorBase*> SetSampleRateModulators();
	void SetSampleRateModulator(class USoundModulatorBase* Modulator);
	float SetSampleRate();
	struct FSourceEffectBitCrusherSettings SetModulationSettings();
	float SetBits();
	TSet<class USoundModulatorBase*> SetBitModulators();
	void SetBitModulator(class USoundModulatorBase* Modulator);
};

// 0x4D8 (0x540 - 0x68)
// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1387[0x280];                                   // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectChorusSettings           Settings;                                          // 0x2E8(0x258)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
	void SetFeedback(float Feedback);
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
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	struct FSourceEffectConvolutionReverbSettings Settings;                                          // 0x70(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0x80(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableHardwareAcceleration;                       // 0x81(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13A1[0x3E];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_13A6[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectDynamicsProcessorSettings Settings;                                          // 0xB8(0x28)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectDynamicsProcessorPreset* GetDefaultObj();

	struct FSourceEffectDynamicsProcessorSettings SetSettings();
};

// 0x20 (0xD8 - 0xB8)
// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEnvelopeFollowerUpdate;                          // 0xB8(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13AC[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvelopeFollowerListener* GetDefaultObj();

};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13B8[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectEnvelopeFollowerSettings Settings;                                          // 0x9C(0xC)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
	uint8                                        Pad_13C3[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectEQSettings               Settings;                                          // 0xA0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectEQPreset* GetDefaultObj();

	struct FSourceEffectEQSettings SetSettings();
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13CA[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectFilterSettings           Settings;                                          // 0xB0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectFilterPreset* GetDefaultObj();

	struct FSourceEffectFilterSettings SetSettings();
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13CD[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectFoldbackDistortionSettings Settings;                                          // 0x9C(0xC)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectFoldbackDistortionPreset* GetDefaultObj();

	struct FSourceEffectFoldbackDistortionSettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13D1[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectMidSideSpreaderSettings  Settings;                                          // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectMidSideSpreaderPreset* GetDefaultObj();

	struct FSourceEffectMidSideSpreaderSettings SetSettings();
};

// 0x118 (0x180 - 0x68)
// Class Synthesis.SourceEffectMotionFilterPreset
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13D6[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectMotionFilterSettings     Settings;                                          // 0x108(0x78)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectMotionFilterPreset* GetDefaultObj();

	struct FSourceEffectMotionFilterSettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13DB[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectPannerSettings           Settings;                                          // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectPannerPreset* GetDefaultObj();

	struct FSourceEffectPannerSettings SetSettings();
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13DC[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectPhaserSettings           Settings;                                          // 0xA0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectPhaserPreset* GetDefaultObj();

	struct FSourceEffectPhaserSettings SetSettings();
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13E0[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectRingModulationSettings   Settings;                                          // 0xB0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectRingModulationPreset* GetDefaultObj();

	struct FSourceEffectRingModulationSettings SetSettings();
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13E7[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectSimpleDelaySettings      Settings;                                          // 0xA8(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectSimpleDelayPreset* GetDefaultObj();

	struct FSourceEffectSimpleDelaySettings SetSettings();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13F5[0x4C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectStereoDelayPreset* GetDefaultObj();

	struct FSourceEffectStereoDelaySettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_13FA[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectWaveShaperSettings       Settings;                                          // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectWaveShaperPreset* GetDefaultObj();

	struct FSourceEffectWaveShaperSettings SetSettings();
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectConvolutionReverbPreset
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	struct FSubmixEffectConvolutionReverbSettings Settings;                                          // 0x70(0x30)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0xA0(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableHardwareAcceleration;                       // 0xA1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1400[0x5E];                                    // Fixing Size Of Struct > TateDumper <

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

	float SetMaximumDelayLength(struct FSubmixEffectDelaySettings* ReturnValue);
	float SetInterpolationTime(struct FSubmixEffectDelaySettings* ReturnValue);
	float SetDelayLength(struct FSubmixEffectDelaySettings* ReturnValue);
};

// 0x50 (0xB8 - 0x68)
// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_142B[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectDelaySettings            Settings;                                          // 0x9C(0xC)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FSubmixEffectDelaySettings            DynamicSettings;                                   // 0xA8(0xC)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_142D[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectDelayPreset* GetDefaultObj();

	struct FSubmixEffectDelaySettings SetSettings();
	float SetInterpolationTime();
	float SetDelay();
	struct FSubmixEffectDelaySettings SetDefaultSettings();
	void GetMaxDelayInMilliseconds(float* ReturnValue);
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1446[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectFilterSettings           Settings;                                          // 0x9C(0xC)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
	uint8                                        Pad_144B[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectFlexiverbSettings        Settings;                                          // 0xA0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectFlexiverbPreset* GetDefaultObj();

	struct FSubmixEffectFlexiverbSettings SetSettings();
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectMultibandCompressorPreset
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_145C[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectMultibandCompressorSettings Settings;                                          // 0xC8(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
	uint8                                        Pad_1462[0x4C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectStereoDelayPreset* GetDefaultObj();

	struct FSubmixEffectStereoDelaySettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SubmixEffectStereoToQuadPreset
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1468[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectStereoToQuadSettings     Settings;                                          // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectStereoToQuadPreset* GetDefaultObj();

	struct FSubmixEffectStereoToQuadSettings SetSettings();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1481[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectTapDelaySettings         Settings;                                          // 0xA8(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1482[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectTapDelayPreset* GetDefaultObj();

	struct FTapDelayInfo SetTap();
	struct FSubmixEffectTapDelaySettings SetSettings();
	float SetInterpolationTime();
	int32 RemoveTap();
	TArray<int32> GetTapIds();
	struct FTapDelayInfo GetTap();
	void GetMaxDelayInMilliseconds(float* ReturnValue);
	int32 AddTap();
};

// 0x3E0 (0xBA0 - 0x7C0)
// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                            GranulatedSoundWave;                               // 0x7C0(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D4[0x3D8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGranularSynth* GetDefaultObj();

	void SetSustainGain(float* SustainGain);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float* ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	float SetGrainProbability();
	struct FVector2D SetGrainPitch();
	struct FVector2D SetGrainPan();
	enum class EGranularSynthEnvelopeType SetGrainEnvelopeType();
	struct FVector2D SetGrainDuration();
	float SetDecayTime();
	void SetAttackTime(float* AttackTimeMsec);
	float NoteOn(float* Note, int32* Velocity);
	bool NoteOff(float* Note);
	void IsLoaded(bool* ReturnValue);
	void GetSampleDuration(float* ReturnValue);
	void GetCurrentPlayheadTime(float* ReturnValue);
};

// 0x148 (0x170 - 0x28)
// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                PresetName;                                        // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        bLockKeyframesToGridBool : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_C6 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_14DE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LockKeyframesToGrid;                               // 0x3C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        WaveTableResolution;                               // 0x40(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14E0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRuntimeFloatCurve>            WaveTable;                                         // 0x48(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        bNormalizeWaveTables : 1;                          // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14E1[0x117];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMonoWaveTableSynthPreset* GetDefaultObj();

};

// 0x750 (0xF10 - 0x7C0)
// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTableAltered;                                    // 0x7C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNumTablesChanged;                                // 0x7D0(0x10)(Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMonoWaveTableSynthPreset*             CurrentPreset;                                     // 0x7E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1578[0x728];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponentMonoWaveTable* GetDefaultObj();

	float SetWaveTablePosition();
	void SetSustainPedalState(bool InSustainPedalState);
	void SetPosLfoType(enum class ESynthLFOType InLfoType);
	void SetPosLfoFrequency(float InLfoFrequency);
	void SetPosLfoDepth(float InLfoDepth);
	void SetPositionEnvelopeSustainGain(float InSustainGain);
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool bInInvert);
	void SetPositionEnvelopeDepth(float InDepth);
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InDepth);
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
	void SetLowPassFilterResonance(float InNewQ);
	void SetFrequencyWithMidiNote(float InMidiNote);
	void SetFrequencyPitchBend(float FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float InSustainGain);
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool bInInvert);
	void SetFilterEnvelopeDepth(float InDepth);
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InDepth);
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
	float SetCurveValue(int32 KeyframeIndex, bool* ReturnValue);
	int32 SetCurveTangent(float InNewTangent, bool* ReturnValue);
	int32 SetCurveInterpolationType(enum class ECurveInterpolationType* InterpolationType, bool* ReturnValue);
	void SetAmpEnvelopeSustainGain(float InSustainGain);
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool bInInvert);
	void SetAmpEnvelopeDepth(float InDepth);
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InDepth);
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
	int32 RefreshWaveTable();
	void RefreshAllWaveTables();
	void NoteOn(float InMidiNote, float InVelocity);
	void NoteOff(float InMidiNote);
	void GetNumTableEntries(int32* ReturnValue);
	void GetMaxTableIndex(int32* ReturnValue);
	float GetKeyFrameValuesForTable(TArray<float>* ReturnValue);
	int32 GetCurveTangent(float* ReturnValue);
};

// 0xF0 (0x8B0 - 0x7C0)
// Class Synthesis.SynthComponentToneGenerator
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                        Frequency;                                         // 0x7C0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Volume;                                            // 0x7C4(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FRuntimeFloatCurve                    DistanceAttenuationCurve;                          // 0x7C8(0x88)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             DistanceRange;                                     // 0x850(0x10)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AttenuationDbAtMaxRange;                           // 0x860(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1590[0x4C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponentToneGenerator* GetDefaultObj();

	void SetVolume(float* InVolume);
	float SetFrequency();
};

// 0x130 (0x8F0 - 0x7C0)
// Class Synthesis.SynthSamplePlayer
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                            SoundWave;                                         // 0x7C0(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnSampleLoaded;                                    // 0x7C8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSamplePlaybackProgress;                          // 0x7D8(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15A7[0x108];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthSamplePlayer* GetDefaultObj();

	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubTimeWidth(float* InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float* InPitch, float TimeSec);
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap);
	void IsLoaded(bool* ReturnValue);
	void GetSampleDuration(float* ReturnValue);
	void GetCurrentPlaybackProgressTime(float* ReturnValue);
	void GetCurrentPlaybackProgressPercent(float* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USynthesisUtilitiesBlueprintFunctionLibrary* GetDefaultObj();

	void GetLogFrequency(float* InLinearValue, float* InDomainMin, float* InDomainMax, float InRangeMin, float InRangeMax, float* ReturnValue);
	void GetLinearFrequency(float* InLogFrequencyValue, float* InDomainMin, float* InDomainMax, float InRangeMin, float InRangeMax, float* ReturnValue);
};

// 0x4F0 (0x6E0 - 0x1F0)
// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget
{
public:
	float                                        ValueX;                                            // 0x1F0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        ValueY;                                            // 0x1F4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueXDelegate;                                    // 0x1F8(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueYDelegate;                                    // 0x208(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15CF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSynth2DSliderStyle                   WidgetStyle;                                       // 0x220(0x430)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderHandleColor;                                 // 0x650(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IndentHandle;                                      // 0x660(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x661(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_15D4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StepSize;                                          // 0x664(0x4)(Edit, ConstParm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x668(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15D7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x670(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x680(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x690(0x10)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x6A0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChangedX;                                   // 0x6B0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChangedY;                                   // 0x6C0(0x10)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15D9[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynth2DSlider* GetDefaultObj();

	struct FVector2D SetValue();
	float SetStepSize();
	struct FLinearColor SetSliderHandleColor();
	bool SetLocked();
	bool SetIndentHandle();
	void GetValue(struct FVector2D* ReturnValue);
};

// 0x430 (0x620 - 0x1F0)
// Class Synthesis.SynthKnob
class USynthKnob : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	float                                        StepSize;                                          // 0x1F4(0x4)(Edit, ConstParm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MouseSpeed;                                        // 0x1F8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MouseFineTuneSpeed;                                // 0x1FC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        ShowTooltipInfo : 1;                               // Mask: 0x1, PropSize: 0x10x200(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_C9 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_15E2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  ParameterName;                                     // 0x208(0x18)(Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FText                                  ParameterUnits;                                    // 0x220(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueDelegate;                                     // 0x238(0x10)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15E4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSynthKnobStyle                       WidgetStyle;                                       // 0x250(0x360)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Locked;                                            // 0x5B0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         IsFocusable;                                       // 0x5B1(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15E6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x5B8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x5C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x5D8(0x10)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x5E8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x5F8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_15E9[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthKnob* GetDefaultObj();

	float SetValue();
	float SetStepSize();
	bool SetLocked();
	void GetValue(float* ReturnValue);
};

}


