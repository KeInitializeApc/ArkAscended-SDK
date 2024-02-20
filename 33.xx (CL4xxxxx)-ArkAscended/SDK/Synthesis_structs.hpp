#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESynth1OscType : uint8
{
	Sine                           = 0,
	Saw                            = 1,
	Triangle                       = 2,
	Square                         = 3,
	Noise                          = 4,
	Count                          = 5,
	ESynth1OscType_MAX             = 6,
};

enum class ESynthLFOType : uint8
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	Count                          = 7,
	ESynthLFOType_MAX              = 8,
};

enum class ESynthLFOMode : uint8
{
	Sync                           = 0,
	OneShot                        = 1,
	Free                           = 2,
	Count                          = 3,
	ESynthLFOMode_MAX              = 4,
};

enum class ESynthLFOPatchType : uint8
{
	PatchToNone                    = 0,
	PatchToGain                    = 1,
	PatchToOscFreq                 = 2,
	PatchToFilterFreq              = 3,
	PatchToFilterQ                 = 4,
	PatchToOscPulseWidth           = 5,
	PatchToOscPan                  = 6,
	PatchLFO1ToLFO2Frequency       = 7,
	PatchLFO1ToLFO2Gain            = 8,
	Count                          = 9,
	ESynthLFOPatchType_MAX         = 10,
};

enum class ESynthModEnvPatch : uint8
{
	PatchToNone                    = 0,
	PatchToOscFreq                 = 1,
	PatchToFilterFreq              = 2,
	PatchToFilterQ                 = 3,
	PatchToLFO1Gain                = 4,
	PatchToLFO2Gain                = 5,
	PatchToLFO1Freq                = 6,
	PatchToLFO2Freq                = 7,
	Count                          = 8,
	ESynthModEnvPatch_MAX          = 9,
};

enum class ESynthModEnvBiasPatch : uint8
{
	PatchToNone                    = 0,
	PatchToOscFreq                 = 1,
	PatchToFilterFreq              = 2,
	PatchToFilterQ                 = 3,
	PatchToLFO1Gain                = 4,
	PatchToLFO2Gain                = 5,
	PatchToLFO1Freq                = 6,
	PatchToLFO2Freq                = 7,
	Count                          = 8,
	ESynthModEnvBiasPatch_MAX      = 9,
};

enum class ESynthFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESynthFilterType_MAX           = 5,
};

enum class ESynthFilterAlgorithm : uint8
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESynthFilterAlgorithm_MAX      = 4,
};

enum class ESynthStereoDelayMode : uint8
{
	Normal                         = 0,
	Cross                          = 1,
	PingPong                       = 2,
	Count                          = 3,
	ESynthStereoDelayMode_MAX      = 4,
};

enum class ESynth1PatchSource : uint8
{
	LFO1                           = 0,
	LFO2                           = 1,
	Envelope                       = 2,
	BiasEnvelope                   = 3,
	Count                          = 4,
	ESynth1PatchSource_MAX         = 5,
};

enum class ESynth1PatchDestination : uint8
{
	Osc1Gain                       = 0,
	Osc1Frequency                  = 1,
	Osc1Pulsewidth                 = 2,
	Osc2Gain                       = 3,
	Osc2Frequency                  = 4,
	Osc2Pulsewidth                 = 5,
	FilterFrequency                = 6,
	FilterQ                        = 7,
	Gain                           = 8,
	Pan                            = 9,
	LFO1Frequency                  = 10,
	LFO1Gain                       = 11,
	LFO2Frequency                  = 12,
	LFO2Gain                       = 13,
	Count                          = 14,
	ESynth1PatchDestination_MAX    = 15,
};

enum class ESubmixEffectConvolutionReverbBlockSize : uint8
{
	BlockSize256                   = 0,
	BlockSize512                   = 1,
	BlockSize1024                  = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class ESourceEffectDynamicsProcessorType : uint8
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	UpwardsCompressor              = 4,
	Count                          = 5,
	ESourceEffectDynamicsProcessorType_MAX = 6,
};

enum class ESourceEffectDynamicsPeakMode : uint8
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4,
};

enum class EEnvelopeFollowerPeakMode : uint8
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	EEnvelopeFollowerPeakMode_MAX  = 4,
};

enum class ESourceEffectFilterCircuit : uint8
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESourceEffectFilterCircuit_MAX = 4,
};

enum class ESourceEffectFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESourceEffectFilterType_MAX    = 5,
};

enum class ESourceEffectFilterParam : uint8
{
	FilterFrequency                = 0,
	FilterResonance                = 1,
	Count                          = 2,
	ESourceEffectFilterParam_MAX   = 3,
};

enum class EStereoChannelMode : uint8
{
	MidSide                        = 0,
	LeftRight                      = 1,
	Count                          = 2,
	EStereoChannelMode_MAX         = 3,
};

enum class ESourceEffectMotionFilterModSource : uint8
{
	DistanceFromListener           = 0,
	SpeedRelativeToListener        = 1,
	SpeedOfSourceEmitter           = 2,
	SpeedOfListener                = 3,
	SpeedOfAngleDelta              = 4,
	Count                          = 5,
	ESourceEffectMotionFilterModSource_MAX = 6,
};

enum class ESourceEffectMotionFilterModDestination : uint8
{
	FilterACutoffFrequency         = 0,
	FilterAResonance               = 1,
	FilterAOutputVolumeDB          = 2,
	FilterBCutoffFrequency         = 3,
	FilterBResonance               = 4,
	FilterBOutputVolumeDB          = 5,
	FilterMix                      = 6,
	Count                          = 7,
	ESourceEffectMotionFilterModDestination_MAX = 8,
};

enum class ESourceEffectMotionFilterTopology : uint8
{
	SerialMode                     = 0,
	ParallelMode                   = 1,
	Count                          = 2,
	ESourceEffectMotionFilterTopology_MAX = 3,
};

enum class ESourceEffectMotionFilterCircuit : uint8
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESourceEffectMotionFilterCircuit_MAX = 4,
};

enum class ESourceEffectMotionFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESourceEffectMotionFilterType_MAX = 5,
};

enum class EPhaserLFOType : uint8
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	Count                          = 7,
	EPhaserLFOType_MAX             = 8,
};

enum class ERingModulatorTypeSourceEffect : uint8
{
	Sine                           = 0,
	Saw                            = 1,
	Triangle                       = 2,
	Square                         = 3,
	Count                          = 4,
	ERingModulatorTypeSourceEffect_MAX = 5,
};

enum class EStereoDelaySourceEffect : uint8
{
	Normal                         = 0,
	Cross                          = 1,
	PingPong                       = 2,
	Count                          = 3,
	EStereoDelaySourceEffect_MAX   = 4,
};

enum class EStereoDelayFiltertype : uint8
{
	Lowpass                        = 0,
	Highpass                       = 1,
	Bandpass                       = 2,
	Notch                          = 3,
	Count                          = 4,
	EStereoDelayFiltertype_MAX     = 5,
};

enum class ESubmixFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESubmixFilterType_MAX          = 5,
};

enum class ESubmixFilterAlgorithm : uint8
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESubmixFilterAlgorithm_MAX     = 4,
};

enum class ETapLineMode : uint8
{
	SendToChannel                  = 0,
	Panning                        = 1,
	Disabled                       = 2,
	ETapLineMode_MAX               = 3,
};

enum class EGranularSynthEnvelopeType : uint8
{
	Rectangular                    = 0,
	Triangle                       = 1,
	DownwardTriangle               = 2,
	UpwardTriangle                 = 3,
	ExponentialDecay               = 4,
	ExponentialIncrease            = 5,
	Gaussian                       = 6,
	Hanning                        = 7,
	Lanczos                        = 8,
	Cosine                         = 9,
	CosineSquared                  = 10,
	Welch                          = 11,
	Blackman                       = 12,
	BlackmanHarris                 = 13,
	Count                          = 14,
	EGranularSynthEnvelopeType_MAX = 15,
};

enum class EGranularSynthSeekType : uint8
{
	FromBeginning                  = 0,
	FromCurrentPosition            = 1,
	Count                          = 2,
	EGranularSynthSeekType_MAX     = 3,
};

enum class ECurveInterpolationType : uint8
{
	AUTOINTERP                     = 0,
	LINEAR                         = 1,
	CONSTANT                       = 2,
	CurveInterpolationType_MAX     = 3,
};

enum class ESamplePlayerSeekType : uint8
{
	FromBeginning                  = 0,
	FromCurrentPosition            = 1,
	FromEnd                        = 2,
	Count                          = 3,
	ESamplePlayerSeekType_MAX      = 4,
};

enum class ESynthKnobSize : uint8
{
	Medium                         = 0,
	Large                          = 1,
	Count                          = 2,
	ESynthKnobSize_MAX             = 3,
};

enum class ESynthSlateSizeType : uint8
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	Count                          = 3,
	ESynthSlateSizeType_MAX        = 4,
};

enum class ESynthSlateColorStyle : uint8
{
	Light                          = 0,
	Dark                           = 1,
	Count                          = 2,
	ESynthSlateColorStyle_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.Synth1PatchCable
struct FSynth1PatchCable
{
public:
	float                                        Depth;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	enum class ESynth1PatchDestination           Destination;                                       // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B46[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Synthesis.PatchId
struct FPatchId
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.EpicSynth1Patch
struct FEpicSynth1Patch
{
public:
	enum class ESynth1PatchSource                PatchSource;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B4F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSynth1PatchCable>             PatchCables;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct Synthesis.ModularSynthPreset
struct FModularSynthPreset : public FTableRowBase
{
public:
	uint8                                        bEnablePolyphony : 1;                              // Mask: 0x1, PropSize: 0x10x8(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E2 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B5A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ESynth1OscType                    Osc1Type;                                          // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B5E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Osc1Gain;                                          // 0x10(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Osc1Octave;                                        // 0x14(0x4)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Osc1Semitones;                                     // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Osc1Cents;                                         // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Osc1PulseWidth;                                    // 0x20(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynth1OscType                    Osc2Type;                                          // 0x24(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B69[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Osc2Gain;                                          // 0x28(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Osc2Octave;                                        // 0x2C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Osc2Semitones;                                     // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Osc2Cents;                                         // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Osc2PulseWidth;                                    // 0x38(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Portamento;                                        // 0x3C(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableUnison : 1;                                 // Mask: 0x1, PropSize: 0x10x40(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnableOscillatorSync : 1;                         // Mask: 0x2, PropSize: 0x10x40(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E4 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B75[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Spread;                                            // 0x44(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Pan;                                               // 0x48(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LFO1Frequency;                                     // 0x4C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LFO1Gain;                                          // 0x50(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthLFOType                     LFO1Type;                                          // 0x54(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthLFOMode                     LFO1Mode;                                          // 0x55(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthLFOPatchType                LFO1PatchType;                                     // 0x56(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B7B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LFO2Frequency;                                     // 0x58(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LFO2Gain;                                          // 0x5C(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthLFOType                     LFO2Type;                                          // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthLFOMode                     LFO2Mode;                                          // 0x61(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthLFOPatchType                LFO2PatchType;                                     // 0x62(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B83[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        GainDb;                                            // 0x64(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackTime;                                        // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DecayTime;                                         // 0x6C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SustainGain;                                       // 0x70(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReleaseTime;                                       // 0x74(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthModEnvPatch                 ModEnvPatchType;                                   // 0x78(0x1)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthModEnvBiasPatch             ModEnvBiasPatchType;                               // 0x79(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B86[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bInvertModulationEnvelope : 1;                     // Mask: 0x1, PropSize: 0x10x7C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bInvertModulationEnvelopeBias : 1;                 // Mask: 0x2, PropSize: 0x10x7C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E5 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B8A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ModulationEnvelopeDepth;                           // 0x80(0x4)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ModulationEnvelopeAttackTime;                      // 0x84(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ModulationEnvelopeDecayTime;                       // 0x88(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ModulationEnvelopeSustainGain;                     // 0x8C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ModulationEnvelopeReleaseTime;                     // 0x90(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLegato : 1;                                       // Mask: 0x1, PropSize: 0x10x94(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRetrigger : 1;                                    // Mask: 0x2, PropSize: 0x10x94(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E6 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B8E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FilterFrequency;                                   // 0x98(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FilterQ;                                           // 0x9C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthFilterType                  FilterType;                                        // 0xA0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthFilterAlgorithm             FilterAlgorithm;                                   // 0xA1(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B90[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bStereoDelayEnabled : 1;                           // Mask: 0x1, PropSize: 0x10xA4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E7 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B92[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ESynthStereoDelayMode             StereoDelayMode;                                   // 0xA8(0x1)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B93[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StereoDelayTime;                                   // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        StereoDelayFeedback;                               // 0xB0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        StereoDelayWetlevel;                               // 0xB4(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        StereoDelayRatio;                                  // 0xB8(0x4)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bChorusEnabled : 1;                                // Mask: 0x1, PropSize: 0x10xBC(0x1)(ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_E8 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B99[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ChorusDepth;                                       // 0xC0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ChorusFeedback;                                    // 0xC4(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ChorusFrequency;                                   // 0xC8(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B9A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEpicSynth1Patch>              Patches;                                           // 0xD0(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Synthesis.ModularSynthPresetBankEntry
struct FModularSynthPresetBankEntry
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FModularSynthPreset                   Preset;                                            // 0x10(0xE0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
struct FSourceEffectBitCrusherBaseSettings
{
public:
	float                                        SampleRate;                                        // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
	float                                        BitDepth;                                          // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
struct FSourceEffectBitCrusherSettings
{
public:
	float                                        CrushedSampleRate;                                 // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BA6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoundModulationDestinationSettings   SampleRateModulation;                              // 0x8(0x60)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CrushedBits;                                       // 0x68(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BA8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoundModulationDestinationSettings   BitModulation;                                     // 0x70(0x60)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SourceEffectChorusBaseSettings
struct FSourceEffectChorusBaseSettings
{
public:
	float                                        Depth;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetLevel;                                          // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryLevel;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Spread;                                            // 0x14(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x258 (0x258 - 0x0)
// ScriptStruct Synthesis.SourceEffectChorusSettings
struct FSourceEffectChorusSettings
{
public:
	float                                        Depth;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetLevel;                                          // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryLevel;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Spread;                                            // 0x14(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoundModulationDestinationSettings   DepthModulation;                                   // 0x18(0x60)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoundModulationDestinationSettings   FrequencyModulation;                               // 0x78(0x60)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoundModulationDestinationSettings   FeedbackModulation;                                // 0xD8(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoundModulationDestinationSettings   WetModulation;                                     // 0x138(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoundModulationDestinationSettings   DryModulation;                                     // 0x198(0x60)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoundModulationDestinationSettings   SpreadModulation;                                  // 0x1F8(0x60)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectConvolutionReverbSettings
struct FSourceEffectConvolutionReverbSettings
{
public:
	float                                        NormalizationVolumeDb;                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetVolumeDb;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryVolumeDb;                                       // 0x8(0x4)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBypass;                                           // 0xC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BB3[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
struct FSourceEffectDynamicsProcessorSettings
{
public:
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType;                             // 0x0(0x1)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESourceEffectDynamicsPeakMode     PeakMode;                                          // 0x1(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BB7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LookAheadMsec;                                     // 0x4(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackTimeMsec;                                    // 0x8(0x4)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReleaseTimeMsec;                                   // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ThresholdDb;                                       // 0x10(0x4)(Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Ratio;                                             // 0x14(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        KneeBandwidthDb;                                   // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InputGainDb;                                       // 0x1C(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x20(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bStereoLinked : 1;                                 // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAnalogMode : 1;                                   // Mask: 0x2, PropSize: 0x10x24(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BBE[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
struct FSourceEffectEnvelopeFollowerSettings
{
public:
	float                                        AttackTime;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReleaseTime;                                       // 0x4(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EEnvelopeFollowerPeakMode         PeakMode;                                          // 0x8(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsAnalogMode;                                     // 0x9(0x1)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BC0[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectEQBand
struct FSourceEffectEQBand
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Bandwidth;                                         // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        GainDb;                                            // 0x8(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_1BC4[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectEQSettings
struct FSourceEffectEQSettings
{
public:
	TArray<struct FSourceEffectEQBand>           EQBands;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
struct FSourceEffectFilterAudioBusModulationSettings
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        EnvelopeFollowerAttackTimeMsec;                    // 0x8(0x4)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EnvelopeFollowerReleaseTimeMsec;                   // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EnvelopeGainMultiplier;                            // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESourceEffectFilterParam          FilterParam;                                       // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BCE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinFrequencyModulation;                            // 0x18(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxFrequencyModulation;                            // 0x1C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinResonanceModulation;                            // 0x20(0x4)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxResonanceModulation;                            // 0x24(0x4)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.SourceEffectFilterSettings
struct FSourceEffectFilterSettings
{
public:
	enum class ESourceEffectFilterCircuit        FilterCircuit;                                     // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESourceEffectFilterType           FilterType;                                        // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BD3[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CutoffFrequency;                                   // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FilterQ;                                           // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BD5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                // 0x10(0x10)(ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
struct FSourceEffectFoldbackDistortionSettings
{
public:
	float                                        InputGainDb;                                       // 0x0(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ThresholdDb;                                       // 0x4(0x4)(Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x8(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
struct FSourceEffectMidSideSpreaderSettings
{
public:
	float                                        SpreadAmount;                                      // 0x0(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EStereoChannelMode                InputMode;                                         // 0x4(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EStereoChannelMode                OutputMode;                                        // 0x5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEqualPower;                                       // 0x6(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BDD[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectIndividualFilterSettings
struct FSourceEffectIndividualFilterSettings
{
public:
	enum class ESourceEffectMotionFilterCircuit  FilterCircuit;                                     // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESourceEffectMotionFilterType     FilterType;                                        // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BE0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CutoffFrequency;                                   // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FilterQ;                                           // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Synthesis.SourceEffectMotionFilterModulationSettings
struct FSourceEffectMotionFilterModulationSettings
{
public:
	enum class ESourceEffectMotionFilterModSource ModulationSource;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BE5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ModulationInputRange;                              // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ModulationOutputMinimumRange;                      // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ModulationOutputMaximumRange;                      // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UpdateEaseMS;                                      // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BE7[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Synthesis.SourceEffectMotionFilterSettings
struct FSourceEffectMotionFilterSettings
{
public:
	enum class ESourceEffectMotionFilterTopology MotionFilterTopology;                              // 0x0(0x1)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BEB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MotionFilterMix;                                   // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSourceEffectIndividualFilterSettings FilterASettings;                                   // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSourceEffectIndividualFilterSettings FilterBSettings;                                   // 0x14(0xC)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<enum class ESourceEffectMotionFilterModDestination, struct FSourceEffectMotionFilterModulationSettings> ModulationMappings;                                // 0x20(0x50)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryVolumeDb;                                       // 0x70(0x4)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BF0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectPannerSettings
struct FSourceEffectPannerSettings
{
public:
	float                                        Spread;                                            // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Pan;                                               // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectPhaserSettings
struct FSourceEffectPhaserSettings
{
public:
	float                                        WetLevel;                                          // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPhaserLFOType                    LFOType;                                           // 0xC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseQuadraturePhase;                                // 0xD(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BFA[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.SourceEffectRingModulationSettings
struct FSourceEffectRingModulationSettings
{
public:
	enum class ERingModulatorTypeSourceEffect    ModulatorType;                                     // 0x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BFF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Depth;                                             // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        DryLevel;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetLevel;                                          // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C03[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioBus*                             AudioBusModulator;                                 // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
struct FSourceEffectSimpleDelaySettings
{
public:
	float                                        SpeedOfSound;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DelayAmount;                                       // 0x4(0x4)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryAmount;                                         // 0x8(0x4)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetAmount;                                         // 0xC(0x4)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDelayBasedOnDistance : 1;                         // Mask: 0x1, PropSize: 0x10x14(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseDistanceOverride : 1;                          // Mask: 0x2, PropSize: 0x10x14(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C09[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
struct FSourceEffectStereoDelaySettings
{
public:
	enum class EStereoDelaySourceEffect          DelayMode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C0B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DelayTimeMsec;                                     // 0x4(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DelayRatio;                                        // 0xC(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetLevel;                                          // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryLevel;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFilterEnabled;                                    // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EStereoDelayFiltertype            FilterType;                                        // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C10[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FilterFrequency;                                   // 0x1C(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FilterQ;                                           // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
struct FSourceEffectWaveShaperSettings
{
public:
	float                                        Amount;                                            // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x4(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
struct FSubmixEffectConvolutionReverbSettings
{
public:
	float                                        NormalizationVolumeDb;                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetVolumeDb;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryVolumeDb;                                       // 0x8(0x4)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBypass;                                           // 0xC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMixInputChannelFormatToImpulseResponseFormat;     // 0xD(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMixReverbOutputToOutputChannelFormat;             // 0xE(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C19[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SurroundRearChannelBleedDb;                        // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInvertRearChannelBleedPhase;                      // 0x14(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSurroundRearChannelFlip;                          // 0x15(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C1A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SurroundRearChannelBleedAmount;                    // 0x18(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C1C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x20(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         AllowHardwareAcceleration;                         // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C1E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SubmixEffectDelaySettings
struct FSubmixEffectDelaySettings
{
public:
	float                                        MaximumDelayLength;                                // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InterpolationTime;                                 // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DelayLength;                                       // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SubmixEffectFilterSettings
struct FSubmixEffectFilterSettings
{
public:
	enum class ESubmixFilterType                 FilterType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESubmixFilterAlgorithm            FilterAlgorithm;                                   // 0x1(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C21[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FilterFrequency;                                   // 0x4(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FilterQ;                                           // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
struct FSubmixEffectFlexiverbSettings
{
public:
	float                                        PreDelay;                                          // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DecayTime;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RoomDampening;                                     // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Complexity;                                        // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.DynamicsBandSettings
struct FDynamicsBandSettings
{
public:
	float                                        CrossoverTopFrequency;                             // 0x0(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackTimeMsec;                                    // 0x4(0x4)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ReleaseTimeMsec;                                   // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ThresholdDb;                                       // 0xC(0x4)(Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Ratio;                                             // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        KneeBandwidthDb;                                   // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InputGainDb;                                       // 0x18(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x1C(0x4)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
struct FSubmixEffectMultibandCompressorSettings
{
public:
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType;                             // 0x0(0x1)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESubmixEffectDynamicsPeakMode     PeakMode;                                          // 0x1(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode;                                          // 0x2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C2F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LookAheadMsec;                                     // 0x4(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAnalogMode;                                       // 0x8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFourPole;                                         // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBypass;                                           // 0xA(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESubmixEffectDynamicsKeySource    KeySource;                                         // 0xB(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C32[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioBus*                             ExternalAudioBus;                                  // 0x10(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USoundSubmix*                          ExternalSubmix;                                    // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        KeyGainDb;                                         // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bKeyAudition;                                      // 0x24(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C36[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDynamicsBandSettings>         Bands;                                             // 0x28(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
struct FSubmixEffectStereoDelaySettings
{
public:
	enum class EStereoDelaySourceEffect          DelayMode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C38[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DelayTimeMsec;                                     // 0x4(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DelayRatio;                                        // 0xC(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WetLevel;                                          // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DryLevel;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFilterEnabled;                                    // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EStereoDelayFiltertype            FilterType;                                        // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C3F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FilterFrequency;                                   // 0x1C(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FilterQ;                                           // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SubmixEffectStereoToQuadSettings
struct FSubmixEffectStereoToQuadSettings
{
public:
	bool                                         bFlipChannels;                                     // 0x0(0x1)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C43[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RearChannelGain;                                   // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.TapDelayInfo
struct FTapDelayInfo
{
public:
	enum class ETapLineMode                      TapLineMode;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C46[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DelayLength;                                       // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Gain;                                              // 0x8(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OutputChannel;                                     // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PanInDegrees;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TapId;                                             // 0x14(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
struct FSubmixEffectTapDelaySettings
{
public:
	float                                        MaximumDelayLength;                                // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InterpolationTime;                                 // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTapDelayInfo>                 Taps;                                              // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x428 (0x430 - 0x8)
// ScriptStruct Synthesis.Synth2DSliderStyle
struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_1C4F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           NormalThumbImage;                                  // 0x10(0xD0)(Edit, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           DisabledThumbImage;                                // 0xE0(0xD0)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           NormalBarImage;                                    // 0x1B0(0xD0)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x280(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImage;                                   // 0x350(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        BarThickness;                                      // 0x420(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C57[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x358 (0x360 - 0x8)
// ScriptStruct Synthesis.SynthKnobStyle
struct FSynthKnobStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_1C59[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           LargeKnob;                                         // 0x10(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           LargeKnobOverlay;                                  // 0xE0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MediumKnob;                                        // 0x1B0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MediumKnobOverlay;                                 // 0x280(0xD0)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinValueAngle;                                     // 0x350(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxValueAngle;                                     // 0x354(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthKnobSize                    KnobSize;                                          // 0x358(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C60[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Synthesis.SynthSlateStyle
struct FSynthSlateStyle : public FSlateWidgetStyle
{
public:
	enum class ESynthSlateSizeType               SizeType;                                          // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESynthSlateColorStyle             ColorStyle;                                        // 0x9(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C65[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}


