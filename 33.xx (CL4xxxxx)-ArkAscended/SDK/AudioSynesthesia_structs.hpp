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
	float                                        Loudness;                                          // 0x0(0x4)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        NormalizedLoudness;                                // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        PerceptualEnergy;                                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        TimeSeconds;                                       // 0xC(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AudioSynesthesia.MeterResults
struct FMeterResults
{
public:
	float                                        TimeSeconds;                                       // 0x0(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        MeterValue;                                        // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        PeakValue;                                         // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        NumSamplesClipping;                                // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        ClippingValue;                                     // 0x10(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AudioSynesthesia.SynesthesiaSpectrumResults
struct FSynesthesiaSpectrumResults
{
public:
	float                                        TimeSeconds;                                       // 0x0(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_25E6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                SpectrumValues;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}


