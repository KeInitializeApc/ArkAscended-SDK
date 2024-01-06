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
	float                                        Depth;                                             // 0x0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	enum class ESynth1PatchDestination           Destination;                                       // 0x4(0x1)(ExportObject, Net, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_15F7[0x3];                                     // Fixing Size Of Struct > TateDumper <
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
	enum class ESynth1PatchSource                PatchSource;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_15F9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSynth1PatchCable>             PatchCables;                                       // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, InstancedReference, SubobjectReference)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct Synthesis.ModularSynthPreset
struct FModularSynthPreset : public FTableRowBase
{
public:
	uint8                                        bEnablePolyphony : 1;                              // Mask: 0x1, PropSize: 0x10x8(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CA : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_15FA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ESynth1OscType                    Osc1Type;                                          // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_15FC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Osc1Gain;                                          // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Osc1Octave;                                        // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Osc1Semitones;                                     // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Osc1Cents;                                         // 0x1C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Osc1PulseWidth;                                    // 0x20(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESynth1OscType                    Osc2Type;                                          // 0x24(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_15FD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Osc2Gain;                                          // 0x28(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Osc2Octave;                                        // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Osc2Semitones;                                     // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Osc2Cents;                                         // 0x34(0x4)(ExportObject, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Osc2PulseWidth;                                    // 0x38(0x4)(EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Portamento;                                        // 0x3C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        bEnableUnison : 1;                                 // Mask: 0x1, PropSize: 0x10x40(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        bEnableOscillatorSync : 1;                         // Mask: 0x2, PropSize: 0x10x40(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CB : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_15FF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Spread;                                            // 0x44(0x4)(ConstParm, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Pan;                                               // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        LFO1Frequency;                                     // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        LFO1Gain;                                          // 0x50(0x4)(ConstParm, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESynthLFOType                     LFO1Type;                                          // 0x54(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESynthLFOMode                     LFO1Mode;                                          // 0x55(0x1)(ExportObject, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESynthLFOPatchType                LFO1PatchType;                                     // 0x56(0x1)(ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1601[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LFO2Frequency;                                     // 0x58(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	float                                        LFO2Gain;                                          // 0x5C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	enum class ESynthLFOType                     LFO2Type;                                          // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	enum class ESynthLFOMode                     LFO2Mode;                                          // 0x61(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	enum class ESynthLFOPatchType                LFO2PatchType;                                     // 0x62(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1602[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        GainDb;                                            // 0x64(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	float                                        AttackTime;                                        // 0x68(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	float                                        DecayTime;                                         // 0x6C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	float                                        SustainGain;                                       // 0x70(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	float                                        ReleaseTime;                                       // 0x74(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	enum class ESynthModEnvPatch                 ModEnvPatchType;                                   // 0x78(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	enum class ESynthModEnvBiasPatch             ModEnvBiasPatchType;                               // 0x79(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1604[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bInvertModulationEnvelope : 1;                     // Mask: 0x1, PropSize: 0x10x7C(0x1)(Edit, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        bInvertModulationEnvelopeBias : 1;                 // Mask: 0x2, PropSize: 0x10x7C(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CC : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1605[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ModulationEnvelopeDepth;                           // 0x80(0x4)(BlueprintVisible, Parm, OutParm, InstancedReference, SubobjectReference)
	float                                        ModulationEnvelopeAttackTime;                      // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	float                                        ModulationEnvelopeDecayTime;                       // 0x88(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	float                                        ModulationEnvelopeSustainGain;                     // 0x8C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	float                                        ModulationEnvelopeReleaseTime;                     // 0x90(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	uint8                                        bLegato : 1;                                       // Mask: 0x1, PropSize: 0x10x94(0x1)(Edit, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	uint8                                        bRetrigger : 1;                                    // Mask: 0x2, PropSize: 0x10x94(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CD : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1607[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FilterFrequency;                                   // 0x98(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	float                                        FilterQ;                                           // 0x9C(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
	enum class ESynthFilterType                  FilterType;                                        // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, InstancedReference, SubobjectReference)
	enum class ESynthFilterAlgorithm             FilterAlgorithm;                                   // 0xA1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1608[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bStereoDelayEnabled : 1;                           // Mask: 0x1, PropSize: 0x10xA4(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CE : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1609[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ESynthStereoDelayMode             StereoDelayMode;                                   // 0xA8(0x1)(ConstParm, ExportObject, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_160A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StereoDelayTime;                                   // 0xAC(0x4)(Edit, OutParm, InstancedReference, SubobjectReference)
	float                                        StereoDelayFeedback;                               // 0xB0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	float                                        StereoDelayWetlevel;                               // 0xB4(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	float                                        StereoDelayRatio;                                  // 0xB8(0x4)(ConstParm, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	uint8                                        bChorusEnabled : 1;                                // Mask: 0x1, PropSize: 0x10xBC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CF : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_160D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ChorusDepth;                                       // 0xC0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	float                                        ChorusFeedback;                                    // 0xC4(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	float                                        ChorusFrequency;                                   // 0xC8(0x4)(ConstParm, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_160E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEpicSynth1Patch>              Patches;                                           // 0xD0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Synthesis.ModularSynthPresetBankEntry
struct FModularSynthPresetBankEntry
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FModularSynthPreset                   Preset;                                            // 0x10(0xE0)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
struct FSourceEffectBitCrusherBaseSettings
{
public:
	float                                        SampleRate;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	float                                        BitDepth;                                          // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
struct FSourceEffectBitCrusherSettings
{
public:
	float                                        CrushedSampleRate;                                 // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_160F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoundModulationDestinationSettings   SampleRateModulation;                              // 0x8(0x60)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        CrushedBits;                                       // 0x68(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1610[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoundModulationDestinationSettings   BitModulation;                                     // 0x70(0x60)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SourceEffectChorusBaseSettings
struct FSourceEffectChorusBaseSettings
{
public:
	float                                        Depth;                                             // 0x0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        Frequency;                                         // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        WetLevel;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        DryLevel;                                          // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Spread;                                            // 0x14(0x4)(ConstParm, Net, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x258 (0x258 - 0x0)
// ScriptStruct Synthesis.SourceEffectChorusSettings
struct FSourceEffectChorusSettings
{
public:
	float                                        Depth;                                             // 0x0(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        Frequency;                                         // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        WetLevel;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        DryLevel;                                          // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Spread;                                            // 0x14(0x4)(ConstParm, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FSoundModulationDestinationSettings   DepthModulation;                                   // 0x18(0x60)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FSoundModulationDestinationSettings   FrequencyModulation;                               // 0x78(0x60)(Edit, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FSoundModulationDestinationSettings   FeedbackModulation;                                // 0xD8(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FSoundModulationDestinationSettings   WetModulation;                                     // 0x138(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FSoundModulationDestinationSettings   DryModulation;                                     // 0x198(0x60)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FSoundModulationDestinationSettings   SpreadModulation;                                  // 0x1F8(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectConvolutionReverbSettings
struct FSourceEffectConvolutionReverbSettings
{
public:
	float                                        NormalizationVolumeDb;                             // 0x0(0x4)(ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        WetVolumeDb;                                       // 0x4(0x4)(Edit, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        DryVolumeDb;                                       // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bBypass;                                           // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1615[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
struct FSourceEffectDynamicsProcessorSettings
{
public:
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType;                             // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESourceEffectDynamicsPeakMode     PeakMode;                                          // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1616[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LookAheadMsec;                                     // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        AttackTimeMsec;                                    // 0x8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        ReleaseTimeMsec;                                   // 0xC(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        ThresholdDb;                                       // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Ratio;                                             // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        KneeBandwidthDb;                                   // 0x18(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        InputGainDb;                                       // 0x1C(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x20(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        bStereoLinked : 1;                                 // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        bAnalogMode : 1;                                   // Mask: 0x2, PropSize: 0x10x24(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1617[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
struct FSourceEffectEnvelopeFollowerSettings
{
public:
	float                                        AttackTime;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	float                                        ReleaseTime;                                       // 0x4(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	enum class EEnvelopeFollowerPeakMode         PeakMode;                                          // 0x8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bIsAnalogMode;                                     // 0x9(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_161A[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectEQBand
struct FSourceEffectEQBand
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Bandwidth;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        GainDb;                                            // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_161B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectEQSettings
struct FSourceEffectEQSettings
{
public:
	TArray<struct FSourceEffectEQBand>           EQBands;                                           // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
struct FSourceEffectFilterAudioBusModulationSettings
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	int32                                        EnvelopeFollowerAttackTimeMsec;                    // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        EnvelopeFollowerReleaseTimeMsec;                   // 0xC(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        EnvelopeGainMultiplier;                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESourceEffectFilterParam          FilterParam;                                       // 0x14(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_161E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinFrequencyModulation;                            // 0x18(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        MaxFrequencyModulation;                            // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        MinResonanceModulation;                            // 0x20(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        MaxResonanceModulation;                            // 0x24(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.SourceEffectFilterSettings
struct FSourceEffectFilterSettings
{
public:
	enum class ESourceEffectFilterCircuit        FilterCircuit;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, InstancedReference, SubobjectReference)
	enum class ESourceEffectFilterType           FilterType;                                        // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1621[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CutoffFrequency;                                   // 0x4(0x4)(BlueprintVisible, ExportObject, ReturnParm, InstancedReference, SubobjectReference)
	float                                        FilterQ;                                           // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1623[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                // 0x10(0x10)(ConstParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
struct FSourceEffectFoldbackDistortionSettings
{
public:
	float                                        InputGainDb;                                       // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        ThresholdDb;                                       // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x8(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
struct FSourceEffectMidSideSpreaderSettings
{
public:
	float                                        SpreadAmount;                                      // 0x0(0x4)(ConstParm, ExportObject, Net, ReturnParm, InstancedReference, SubobjectReference)
	enum class EStereoChannelMode                InputMode;                                         // 0x4(0x1)(BlueprintVisible, Net, ReturnParm, InstancedReference, SubobjectReference)
	enum class EStereoChannelMode                OutputMode;                                        // 0x5(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEqualPower;                                       // 0x6(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1626[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SourceEffectIndividualFilterSettings
struct FSourceEffectIndividualFilterSettings
{
public:
	enum class ESourceEffectMotionFilterCircuit  FilterCircuit;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, InstancedReference, SubobjectReference)
	enum class ESourceEffectMotionFilterType     FilterType;                                        // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_162A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CutoffFrequency;                                   // 0x4(0x4)(BlueprintVisible, ExportObject, ReturnParm, InstancedReference, SubobjectReference)
	float                                        FilterQ;                                           // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Synthesis.SourceEffectMotionFilterModulationSettings
struct FSourceEffectMotionFilterModulationSettings
{
public:
	enum class ESourceEffectMotionFilterModSource ModulationSource;                                  // 0x0(0x1)(Edit, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_162B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ModulationInputRange;                              // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector2D                             ModulationOutputMinimumRange;                      // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector2D                             ModulationOutputMaximumRange;                      // 0x28(0x10)(ExportObject, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
	float                                        UpdateEaseMS;                                      // 0x38(0x4)(Edit, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_162E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Synthesis.SourceEffectMotionFilterSettings
struct FSourceEffectMotionFilterSettings
{
public:
	enum class ESourceEffectMotionFilterTopology MotionFilterTopology;                              // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1630[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MotionFilterMix;                                   // 0x4(0x4)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, InstancedReference, SubobjectReference)
	struct FSourceEffectIndividualFilterSettings FilterASettings;                                   // 0x8(0xC)(Edit, ExportObject, Parm, ReturnParm, InstancedReference, SubobjectReference)
	struct FSourceEffectIndividualFilterSettings FilterBSettings;                                   // 0x14(0xC)(Parm, ReturnParm, InstancedReference, SubobjectReference)
	TMap<enum class ESourceEffectMotionFilterModDestination, struct FSourceEffectMotionFilterModulationSettings> ModulationMappings;                                // 0x20(0x50)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	float                                        DryVolumeDb;                                       // 0x70(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1633[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectPannerSettings
struct FSourceEffectPannerSettings
{
public:
	float                                        Spread;                                            // 0x0(0x4)(ConstParm, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Pan;                                               // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SourceEffectPhaserSettings
struct FSourceEffectPhaserSettings
{
public:
	float                                        WetLevel;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Frequency;                                         // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class EPhaserLFOType                    LFOType;                                           // 0xC(0x1)(BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         UseQuadraturePhase;                                // 0xD(0x1)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_163B[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.SourceEffectRingModulationSettings
struct FSourceEffectRingModulationSettings
{
public:
	enum class ERingModulatorTypeSourceEffect    ModulatorType;                                     // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_163C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Frequency;                                         // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Depth;                                             // 0x8(0x4)(BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        DryLevel;                                          // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        WetLevel;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_163E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioBus*                             AudioBusModulator;                                 // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
struct FSourceEffectSimpleDelaySettings
{
public:
	float                                        SpeedOfSound;                                      // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        DelayAmount;                                       // 0x4(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        DryAmount;                                         // 0x8(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        WetAmount;                                         // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        Feedback;                                          // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        bDelayBasedOnDistance : 1;                         // Mask: 0x1, PropSize: 0x10x14(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        bUseDistanceOverride : 1;                          // Mask: 0x2, PropSize: 0x10x14(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1641[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
struct FSourceEffectStereoDelaySettings
{
public:
	enum class EStereoDelaySourceEffect          DelayMode;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1644[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DelayTimeMsec;                                     // 0x4(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        DelayRatio;                                        // 0xC(0x4)(OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        WetLevel;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        DryLevel;                                          // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bFilterEnabled;                                    // 0x18(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	enum class EStereoDelayFiltertype            FilterType;                                        // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_164A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FilterFrequency;                                   // 0x1C(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	float                                        FilterQ;                                           // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
struct FSourceEffectWaveShaperSettings
{
public:
	float                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x4(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
struct FSubmixEffectConvolutionReverbSettings
{
public:
	float                                        NormalizationVolumeDb;                             // 0x0(0x4)(ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        WetVolumeDb;                                       // 0x4(0x4)(Edit, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        DryVolumeDb;                                       // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bBypass;                                           // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bMixInputChannelFormatToImpulseResponseFormat;     // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bMixReverbOutputToOutputChannelFormat;             // 0xE(0x1)(Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_164F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SurroundRearChannelBleedDb;                        // 0x10(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bInvertRearChannelBleedPhase;                      // 0x14(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bSurroundRearChannelFlip;                          // 0x15(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1651[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SurroundRearChannelBleedAmount;                    // 0x18(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1652[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x20(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	bool                                         AllowHardwareAcceleration;                         // 0x28(0x1)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1653[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SubmixEffectDelaySettings
struct FSubmixEffectDelaySettings
{
public:
	float                                        MaximumDelayLength;                                // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        InterpolationTime;                                 // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        DelayLength;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Synthesis.SubmixEffectFilterSettings
struct FSubmixEffectFilterSettings
{
public:
	enum class ESubmixFilterType                 FilterType;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, InstancedReference, SubobjectReference)
	enum class ESubmixFilterAlgorithm            FilterAlgorithm;                                   // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1658[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FilterFrequency;                                   // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	float                                        FilterQ;                                           // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
struct FSubmixEffectFlexiverbSettings
{
public:
	float                                        PreDelay;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        DecayTime;                                         // 0x4(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	float                                        RoomDampening;                                     // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Complexity;                                        // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Synthesis.DynamicsBandSettings
struct FDynamicsBandSettings
{
public:
	float                                        CrossoverTopFrequency;                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        AttackTimeMsec;                                    // 0x4(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        ReleaseTimeMsec;                                   // 0x8(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        ThresholdDb;                                       // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Ratio;                                             // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	float                                        KneeBandwidthDb;                                   // 0x14(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        InputGainDb;                                       // 0x18(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        OutputGainDb;                                      // 0x1C(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
struct FSubmixEffectMultibandCompressorSettings
{
public:
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType;                             // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESubmixEffectDynamicsPeakMode     PeakMode;                                          // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1662[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LookAheadMsec;                                     // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bAnalogMode;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bFourPole;                                         // 0x9(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bBypass;                                           // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class ESubmixEffectDynamicsKeySource    KeySource;                                         // 0xB(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1663[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioBus*                             ExternalAudioBus;                                  // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class USoundSubmix*                          ExternalSubmix;                                    // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        KeyGainDb;                                         // 0x20(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bKeyAudition;                                      // 0x24(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1669[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDynamicsBandSettings>         Bands;                                             // 0x28(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
struct FSubmixEffectStereoDelaySettings
{
public:
	enum class EStereoDelaySourceEffect          DelayMode;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_166A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DelayTimeMsec;                                     // 0x4(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        Feedback;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        DelayRatio;                                        // 0xC(0x4)(OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        WetLevel;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        DryLevel;                                          // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bFilterEnabled;                                    // 0x18(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	enum class EStereoDelayFiltertype            FilterType;                                        // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_166B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FilterFrequency;                                   // 0x1C(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	float                                        FilterQ;                                           // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Synthesis.SubmixEffectStereoToQuadSettings
struct FSubmixEffectStereoToQuadSettings
{
public:
	bool                                         bFlipChannels;                                     // 0x0(0x1)(ConstParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1670[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RearChannelGain;                                   // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.TapDelayInfo
struct FTapDelayInfo
{
public:
	enum class ETapLineMode                      TapLineMode;                                       // 0x0(0x1)(Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1671[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DelayLength;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        Gain;                                              // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        OutputChannel;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        PanInDegrees;                                      // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        TapId;                                             // 0x14(0x4)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
struct FSubmixEffectTapDelaySettings
{
public:
	float                                        MaximumDelayLength;                                // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        InterpolationTime;                                 // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FTapDelayInfo>                 Taps;                                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x428 (0x430 - 0x8)
// ScriptStruct Synthesis.Synth2DSliderStyle
struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_1677[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           NormalThumbImage;                                  // 0x10(0xD0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           DisabledThumbImage;                                // 0xE0(0xD0)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           NormalBarImage;                                    // 0x1B0(0xD0)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x280(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           BackgroundImage;                                   // 0x350(0xD0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        BarThickness;                                      // 0x420(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1679[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x358 (0x360 - 0x8)
// ScriptStruct Synthesis.SynthKnobStyle
struct FSynthKnobStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_167C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           LargeKnob;                                         // 0x10(0xD0)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSlateBrush                           LargeKnobOverlay;                                  // 0xE0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSlateBrush                           MediumKnob;                                        // 0x1B0(0xD0)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSlateBrush                           MediumKnobOverlay;                                 // 0x280(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        MinValueAngle;                                     // 0x350(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	float                                        MaxValueAngle;                                     // 0x354(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	enum class ESynthKnobSize                    KnobSize;                                          // 0x358(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1682[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x10 - 0x8)
// ScriptStruct Synthesis.SynthSlateStyle
struct FSynthSlateStyle : public FSlateWidgetStyle
{
public:
	enum class ESynthSlateSizeType               SizeType;                                          // 0x8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESynthSlateColorStyle             ColorStyle;                                        // 0x9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1688[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}


