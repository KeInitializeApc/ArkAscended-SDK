#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConstantQNormalizationEnum : uint8
{
	EqualEuclideanNorm             = 0,
	EqualEnergy                    = 1,
	EqualAmplitude                 = 2,
	EConstantQNormalizationEnum_MAX = 3,
};

enum class EConstantQFFTSizeEnum : uint8
{
	Min                            = 0,
	XXSmall                        = 1,
	XSmall                         = 2,
	Small                          = 3,
	Medium                         = 4,
	Large                          = 5,
	XLarge                         = 6,
	XXLarge                        = 7,
	Max                            = 8,
};

enum class ELoudnessCurveTypeEnum : uint8
{
	A                              = 0,
	B                              = 1,
	C                              = 2,
	D                              = 3,
	None                           = 4,
	ELoudnessCurveTypeEnum_MAX     = 5,
};

enum class ELoudnessNRTCurveTypeEnum : uint8
{
	A                              = 0,
	B                              = 1,
	C                              = 2,
	D                              = 3,
	None                           = 4,
	ELoudnessNRTCurveTypeEnum_MAX  = 5,
};

enum class EMeterPeakType : uint8
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	EMeterPeakType_MAX             = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioSynesthesia.LoudnessResults
struct FLoudnessResults
{
public:
	float                                        Loudness;                                          // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        NormalizedLoudness;                                // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        PerceptualEnergy;                                  // 0x8(0x4)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        TimeSeconds;                                       // 0xC(0x4)(Edit, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AudioSynesthesia.MeterResults
struct FMeterResults
{
public:
	float                                        TimeSeconds;                                       // 0x0(0x4)(Edit, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        MeterValue;                                        // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        PeakValue;                                         // 0x8(0x4)(Edit, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        NumSamplesClipping;                                // 0xC(0x4)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        ClippingValue;                                     // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AudioSynesthesia.SynesthesiaSpectrumResults
struct FSynesthesiaSpectrumResults
{
public:
	float                                        TimeSeconds;                                       // 0x0(0x4)(Edit, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_1819[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                SpectrumValues;                                    // 0x8(0x10)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

}


