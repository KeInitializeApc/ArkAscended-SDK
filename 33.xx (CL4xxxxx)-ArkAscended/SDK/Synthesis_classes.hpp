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
	TArray<float>                                ImpulseResponse;                                   // 0x28(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        NumChannels;                                       // 0x38(0x4)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig)
	int32                                        SampleRate;                                        // 0x3C(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	float                                        NormalizationVolumeDb;                             // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTrueStereo;                                       // 0x44(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18BF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                IRData;                                            // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAudioImpulseResponse* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>  Presets;                                           // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

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

	void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank** InBank, struct FModularSynthPreset* Preset, class FString* PresetName);
};

// 0x6D0 (0xE90 - 0x7C0)
// Class Synthesis.ModularSynthComponent
class UModularSynthComponent : public USynthComponent
{
public:
	int32                                        VoiceCount;                                        // 0x7C0(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_193B[0x6CC];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UModularSynthComponent* GetDefaultObj();

	struct FModularSynthPreset SetSynthPreset();
	void SetSustainGain(float SustainGain);
	float SetStereoDelayWetlevel();
	float SetStereoDelayTime();
	float SetStereoDelayRatio();
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode);
	bool SetStereoDelayIsEnabled();
	float SetStereoDelayFeedback();
	void SetSpread(float* Spread);
	float SetReleaseTime();
	void SetPortamento(float* Portamento);
	float SetPitchBend();
	void SetPan(float* Pan);
	enum class ESynth1OscType SetOscType(int32* OscIndex);
	bool SetOscSync();
	float SetOscSemitones(int32* OscIndex);
	float SetOscPulsewidth(int32* OscIndex);
	float SetOscOctave(int32* OscIndex);
	float SetOscGainMod(int32* OscIndex);
	float SetOscGain(int32* OscIndex);
	void SetOscFrequencyMod(int32* OscIndex, float* OscFreqMod);
	void SetOscCents(int32* OscIndex, float* Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(enum class ESynthModEnvPatch* InPatchType);
	bool SetModEnvInvert();
	float SetModEnvDepth();
	void SetModEnvDecayTime(float* DecayTimeMsec);
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch* InPatchType);
	bool SetModEnvBiasInvert();
	float SetModEnvAttackTime();
	enum class ESynthLFOType SetLFOType(int32* LFOIndex);
	void SetLFOPatch(int32* LFOIndex, enum class ESynthLFOPatchType* LFOPatchType);
	void SetLFOMode(int32* LFOIndex, enum class ESynthLFOMode* LFOMode);
	void SetLFOGainMod(int32* LFOIndex, float* GainMod);
	float SetLFOGain(int32* LFOIndex);
	void SetLFOFrequencyMod(int32* LFOIndex, float* FrequencyModHz);
	float SetLFOFrequency(int32* LFOIndex);
	void SetGainDb(float* GainDb);
	void SetFilterType(enum class ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float* FilterFrequencyHz);
	void SetFilterFrequency(float* FilterFrequencyHz);
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool* EnableUnison);
	void SetEnableRetrigger(bool* RetriggerEnabled);
	void SetEnablePolyphony(bool* bEnablePolyphony);
	struct FPatchId SetEnablePatch(bool* bIsEnabled, bool ReturnValue);
	void SetEnableLegato(bool* LegatoEnabled);
	void SetDecayTime(float* DecayTimeMsec);
	float SetChorusFrequency();
	void SetChorusFeedback(float* Feedback);
	void SetChorusEnabled(bool* EnableChorus);
	float SetChorusDepth();
	float SetAttackTime();
	float NoteOn(float* Note);
	void NoteOff(float* Note, bool* bAllNotesOff, bool* bKillAllNotes);
	void CreatePatch(enum class ESynth1PatchSource* PatchSource, TArray<struct FSynth1PatchCable>* PatchCables, bool* bEnableByDefault, const struct FPatchId& ReturnValue);
};

// 0x1C8 (0x230 - 0x68)
// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1956[0xF8];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectBitCrusherSettings       Settings;                                          // 0x160(0xD0)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectBitCrusherPreset* GetDefaultObj();

	void SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings);
	TSet<class USoundModulatorBase*> SetSampleRateModulators();
	void SetSampleRateModulator(class USoundModulatorBase** Modulator);
	float SetSampleRate();
	struct FSourceEffectBitCrusherSettings SetModulationSettings();
	float SetBits();
	TSet<class USoundModulatorBase*> SetBitModulators();
	void SetBitModulator(class USoundModulatorBase** Modulator);
};

// 0x4D8 (0x540 - 0x68)
// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_197D[0x280];                                   // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectChorusSettings           Settings;                                          // 0x2E8(0x258)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectChorusPreset* GetDefaultObj();

	void SetWetModulators(TSet<class USoundModulatorBase*>* Modulators);
	void SetWetModulator(class USoundModulatorBase** Modulator);
	float SetWet();
	void SetSpreadModulators(TSet<class USoundModulatorBase*>* Modulators);
	void SetSpreadModulator(class USoundModulatorBase** Modulator);
	void SetSpread(float* Spread);
	void SetSettings(const struct FSourceEffectChorusBaseSettings& Settings);
	struct FSourceEffectChorusSettings SetModulationSettings();
	void SetFrequencyModulators(TSet<class USoundModulatorBase*>* Modulators);
	void SetFrequencyModulator(class USoundModulatorBase** Modulator);
	float SetFrequency();
	void SetFeedbackModulators(TSet<class USoundModulatorBase*>* Modulators);
	void SetFeedbackModulator(class USoundModulatorBase** Modulator);
	void SetFeedback(float* Feedback);
	void SetDryModulators(TSet<class USoundModulatorBase*>* Modulators);
	void SetDryModulator(class USoundModulatorBase** Modulator);
	float SetDry();
	void SetDepthModulators(TSet<class USoundModulatorBase*>* Modulators);
	void SetDepthModulator(class USoundModulatorBase** Modulator);
	float SetDepth();
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectConvolutionReverbPreset
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FSourceEffectConvolutionReverbSettings Settings;                                          // 0x70(0x10)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0x80(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableHardwareAcceleration;                       // 0x81(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1985[0x3E];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_198D[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectDynamicsProcessorSettings Settings;                                          // 0xB8(0x28)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectDynamicsProcessorPreset* GetDefaultObj();

	struct FSourceEffectDynamicsProcessorSettings SetSettings();
};

// 0x20 (0xD8 - 0xB8)
// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEnvelopeFollowerUpdate;                          // 0xB8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1990[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEnvelopeFollowerListener* GetDefaultObj();

};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1992[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectEnvelopeFollowerSettings Settings;                                          // 0x9C(0xC)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

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
	uint8                                        Pad_1996[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectEQSettings               Settings;                                          // 0xA0(0x10)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectEQPreset* GetDefaultObj();

	struct FSourceEffectEQSettings SetSettings();
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_199A[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectFilterSettings           Settings;                                          // 0xB0(0x20)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectFilterPreset* GetDefaultObj();

	struct FSourceEffectFilterSettings SetSettings();
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_199B[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectFoldbackDistortionSettings Settings;                                          // 0x9C(0xC)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectFoldbackDistortionPreset* GetDefaultObj();

	struct FSourceEffectFoldbackDistortionSettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_199E[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectMidSideSpreaderSettings  Settings;                                          // 0x98(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectMidSideSpreaderPreset* GetDefaultObj();

	struct FSourceEffectMidSideSpreaderSettings SetSettings();
};

// 0x118 (0x180 - 0x68)
// Class Synthesis.SourceEffectMotionFilterPreset
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_19A1[0xA0];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectMotionFilterSettings     Settings;                                          // 0x108(0x78)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectMotionFilterPreset* GetDefaultObj();

	struct FSourceEffectMotionFilterSettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_19A3[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectPannerSettings           Settings;                                          // 0x98(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectPannerPreset* GetDefaultObj();

	struct FSourceEffectPannerSettings SetSettings();
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_19A9[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectPhaserSettings           Settings;                                          // 0xA0(0x10)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectPhaserPreset* GetDefaultObj();

	struct FSourceEffectPhaserSettings SetSettings();
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_19AC[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectRingModulationSettings   Settings;                                          // 0xB0(0x20)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectRingModulationPreset* GetDefaultObj();

	struct FSourceEffectRingModulationSettings SetSettings();
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_19AF[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectSimpleDelaySettings      Settings;                                          // 0xA8(0x18)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectSimpleDelayPreset* GetDefaultObj();

	struct FSourceEffectSimpleDelaySettings SetSettings();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_19B5[0x4C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectStereoDelayPreset* GetDefaultObj();

	struct FSourceEffectStereoDelaySettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_19B9[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSourceEffectWaveShaperSettings       Settings;                                          // 0x98(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USourceEffectWaveShaperPreset* GetDefaultObj();

	struct FSourceEffectWaveShaperSettings SetSettings();
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectConvolutionReverbPreset
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FSubmixEffectConvolutionReverbSettings Settings;                                          // 0x70(0x30)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0xA0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableHardwareAcceleration;                       // 0xA1(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_19BE[0x5E];                                    // Fixing Size Of Struct > TateDumper <

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

	float SetMaximumDelayLength(const struct FSubmixEffectDelaySettings& ReturnValue);
	float SetInterpolationTime(const struct FSubmixEffectDelaySettings& ReturnValue);
	float SetDelayLength(const struct FSubmixEffectDelaySettings& ReturnValue);
};

// 0x50 (0xB8 - 0x68)
// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19C8[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectDelaySettings            Settings;                                          // 0x9C(0xC)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	struct FSubmixEffectDelaySettings            DynamicSettings;                                   // 0xA8(0xC)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_19C9[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectDelayPreset* GetDefaultObj();

	struct FSubmixEffectDelaySettings SetSettings();
	float SetInterpolationTime();
	float SetDelay();
	struct FSubmixEffectDelaySettings SetDefaultSettings();
	void GetMaxDelayInMilliseconds(float ReturnValue);
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19CE[0x34];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectFilterSettings           Settings;                                          // 0x9C(0xC)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

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
	uint8                                        Pad_19D1[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectFlexiverbSettings        Settings;                                          // 0xA0(0x10)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectFlexiverbPreset* GetDefaultObj();

	struct FSubmixEffectFlexiverbSettings SetSettings();
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectMultibandCompressorPreset
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19D7[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectMultibandCompressorSettings Settings;                                          // 0xC8(0x38)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectMultibandCompressorPreset* GetDefaultObj();

	struct FSubmixEffectMultibandCompressorSettings SetSettings();
	void SetExternalSubmix(class USoundSubmix* Submix);
	class UAudioBus* SetAudioBus();
	void ResetKey();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectStereoDelayPreset
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19DB[0x4C];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectStereoDelayPreset* GetDefaultObj();

	struct FSubmixEffectStereoDelaySettings SetSettings();
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SubmixEffectStereoToQuadPreset
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19E0[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectStereoToQuadSettings     Settings;                                          // 0x98(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class USubmixEffectStereoToQuadPreset* GetDefaultObj();

	struct FSubmixEffectStereoToQuadSettings SetSettings();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_19F5[0x40];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSubmixEffectTapDelaySettings         Settings;                                          // 0xA8(0x18)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_19F6[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USubmixEffectTapDelayPreset* GetDefaultObj();

	struct FTapDelayInfo SetTap();
	struct FSubmixEffectTapDelaySettings SetSettings();
	float SetInterpolationTime();
	int32 RemoveTap();
	TArray<int32> GetTapIds();
	struct FTapDelayInfo GetTap();
	void GetMaxDelayInMilliseconds(float ReturnValue);
	int32 AddTap();
};

// 0x3E0 (0xBA0 - 0x7C0)
// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                            GranulatedSoundWave;                               // 0x7C0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A1E[0x3D8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGranularSynth* GetDefaultObj();

	void SetSustainGain(float SustainGain);
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
	void IsLoaded(bool ReturnValue);
	void GetSampleDuration(float ReturnValue);
	void GetCurrentPlayheadTime(float ReturnValue);
};

// 0x148 (0x170 - 0x28)
// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                PresetName;                                        // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLockKeyframesToGridBool : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_DB : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1A26[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LockKeyframesToGrid;                               // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        WaveTableResolution;                               // 0x40(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A28[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRuntimeFloatCurve>            WaveTable;                                         // 0x48(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        bNormalizeWaveTables : 1;                          // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A2A[0x117];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMonoWaveTableSynthPreset* GetDefaultObj();

};

// 0x750 (0xF10 - 0x7C0)
// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTableAltered;                                    // 0x7C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnNumTablesChanged;                                // 0x7D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UMonoWaveTableSynthPreset*             CurrentPreset;                                     // 0x7E0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A98[0x728];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthComponentMonoWaveTable* GetDefaultObj();

	void SetWaveTablePosition(float* InPosition);
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
	int32 SetCurveValue(int32 TableIndex, float* NewValue, bool ReturnValue);
	float SetCurveTangent(int32 TableIndex, bool ReturnValue);
	void SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType, int32 TableIndex, bool ReturnValue);
	float SetAmpEnvelopeSustainGain();
	float SetAmpEnvelopeReleaseTime();
	bool SetAmpEnvelopeInvert();
	float SetAmpEnvelopeDepth();
	float SetAmpEnvelopeDecayTime();
	bool SetAmpEnvelopeBiasInvert();
	float SetAmpEnvelopeBiasDepth();
	float SetAmpEnvelopeAttackTime();
	void RefreshWaveTable(int32* Index);
	void RefreshAllWaveTables();
	float NoteOn();
	float NoteOff();
	void GetNumTableEntries(int32 ReturnValue);
	void GetMaxTableIndex(int32 ReturnValue);
	void GetKeyFrameValuesForTable(float TableIndex, const TArray<float>& ReturnValue);
	void GetCurveTangent(int32 TableIndex, float ReturnValue);
};

// 0xF0 (0x8B0 - 0x7C0)
// Class Synthesis.SynthComponentToneGenerator
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                        Frequency;                                         // 0x7C0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Volume;                                            // 0x7C4(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config)
	struct FRuntimeFloatCurve                    DistanceAttenuationCurve;                          // 0x7C8(0x88)(Edit, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             DistanceRange;                                     // 0x850(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AttenuationDbAtMaxRange;                           // 0x860(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AAD[0x4C];                                    // Fixing Size Of Struct > TateDumper <

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
	class USoundWave*                            SoundWave;                                         // 0x7C0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnSampleLoaded;                                    // 0x7C8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSamplePlaybackProgress;                          // 0x7D8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AD0[0x108];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthSamplePlayer* GetDefaultObj();

	class USoundWave* SetSoundWave();
	float SetScrubTimeWidth();
	bool SetScrubMode();
	float SetPitch();
	enum class ESamplePlayerSeekType SeekToTime(bool* bWrap);
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

	float GetLogFrequency(float ReturnValue);
	float GetLinearFrequency(float ReturnValue);
};

// 0x4F0 (0x6E0 - 0x1F0)
// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget
{
public:
	float                                        ValueX;                                            // 0x1F0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ValueY;                                            // 0x1F4(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueXDelegate;                                    // 0x1F8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueYDelegate;                                    // 0x208(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B07[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSynth2DSliderStyle                   WidgetStyle;                                       // 0x220(0x430)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderHandleColor;                                 // 0x650(0x10)(ConstParm, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         IndentHandle;                                      // 0x660(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x661(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1B08[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StepSize;                                          // 0x664(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x668(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B09[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x670(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x680(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x690(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x6A0(0x10)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChangedX;                                   // 0x6B0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChangedY;                                   // 0x6C0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B0D[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	float                                        Value;                                             // 0x1F0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	float                                        StepSize;                                          // 0x1F4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        MouseSpeed;                                        // 0x1F8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MouseFineTuneSpeed;                                // 0x1FC(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        ShowTooltipInfo : 1;                               // Mask: 0x1, PropSize: 0x10x200(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_E0 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B1F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  ParameterName;                                     // 0x208(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class FText                                  ParameterUnits;                                    // 0x220(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueDelegate;                                     // 0x238(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B21[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSynthKnobStyle                       WidgetStyle;                                       // 0x250(0x360)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         Locked;                                            // 0x5B0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         IsFocusable;                                       // 0x5B1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B24[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x5B8(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x5C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x5D8(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x5E8(0x10)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x5F8(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B2A[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynthKnob* GetDefaultObj();

	float SetValue();
	float SetStepSize();
	bool SetLocked();
	void GetValue(float ReturnValue);
};

}


