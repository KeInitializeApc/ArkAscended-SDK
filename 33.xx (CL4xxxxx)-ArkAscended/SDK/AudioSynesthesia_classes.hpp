#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioSynesthesia.AudioSynesthesiaSettings
class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{
public:

	static class UClass* StaticClass();
	static class UAudioSynesthesiaSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:

	static class UClass* StaticClass();
	static class UAudioSynesthesiaNRTSettings* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class AudioSynesthesia.AudioSynesthesiaNRT
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:

	static class UClass* StaticClass();
	static class UAudioSynesthesiaNRT* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class AudioSynesthesia.ConstantQNRTSettings
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                        StartingFrequency;                                 // 0x28(0x4)(BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumBands;                                          // 0x2C(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        NumBandsPerOctave;                                 // 0x30(0x4)(Edit, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        AnalysisPeriod;                                    // 0x34(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDownmixToMono;                                    // 0x38(0x1)(Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EConstantQFFTSizeEnum             FFTSize;                                           // 0x39(0x1)(BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFFTWindowType                    WindowType;                                        // 0x3A(0x1)(ConstParm, BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x3B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        BandWidthStretch;                                  // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EConstantQNormalizationEnum       CQTNormalization;                                  // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_17E7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NoiseFloorDb;                                      // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstantQNRTSettings* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.ConstantQNRT
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                 Settings;                                          // 0x78(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstantQNRT* GetDefaultObj();

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32* InChannel, TArray<float>* OutConstantQ);
	void GetChannelConstantQAtTime(float InSeconds, int32* InChannel, TArray<float>* OutConstantQ);
};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.LoudnessSettings
class ULoudnessSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinimumFrequency;                                  // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        MaximumFrequency;                                  // 0x30(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class ELoudnessCurveTypeEnum            CurveType;                                         // 0x34(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17EF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NoiseFloorDb;                                      // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        ExpectedMaxLoudness;                               // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULoudnessSettings* GetDefaultObj();

};

// 0x48 (0xD8 - 0x90)
// Class AudioSynesthesia.LoudnessAnalyzer
class ULoudnessAnalyzer : public UAudioAnalyzer
{
public:
	class ULoudnessSettings*                     Settings;                                          // 0x90(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOverallLoudnessResults;                          // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPerChannelLoudnessResults;                       // 0xA8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnLatestOverallLoudnessResults;                    // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnLatestPerChannelLoudnessResults;                 // 0xC8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULoudnessAnalyzer* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.LoudnessNRTSettings
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinimumFrequency;                                  // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        MaximumFrequency;                                  // 0x30(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class ELoudnessNRTCurveTypeEnum         CurveType;                                         // 0x34(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17F8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NoiseFloorDb;                                      // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_17F9[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULoudnessNRTSettings* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.LoudnessNRT
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                  Settings;                                          // 0x78(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ULoudnessNRT* GetDefaultObj();

	void GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness);
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32* InChannel, float* OutLoudness);
	void GetLoudnessAtTime(float InSeconds, float* OutLoudness);
	void GetChannelLoudnessAtTime(float InSeconds, int32* InChannel, float* OutLoudness);
};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.MeterSettings
class UMeterSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EMeterPeakType                    PeakMode;                                          // 0x2C(0x1)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1801[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MeterAttackTime;                                   // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MeterReleaseTime;                                  // 0x34(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        PeakHoldTime;                                      // 0x38(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ClippingThreshold;                                 // 0x3C(0x4)(Edit, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMeterSettings* GetDefaultObj();

};

// 0xA8 (0x138 - 0x90)
// Class AudioSynesthesia.MeterAnalyzer
class UMeterAnalyzer : public UAudioAnalyzer
{
public:
	class UMeterSettings*                        Settings;                                          // 0x90(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOverallMeterResults;                             // 0x98(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1805[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPerChannelMeterResults;                          // 0xC0(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1806[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnLatestOverallMeterResults;                       // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1807[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnLatestPerChannelMeterResults;                    // 0x110(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1808[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeterAnalyzer* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.OnsetNRTSettings
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                         bDownmixToMono;                                    // 0x28(0x1)(Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1809[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        GranularityInSeconds;                              // 0x2C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Sensitivity;                                       // 0x30(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumFrequency;                                  // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        MaximumFrequency;                                  // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_180A[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnsetNRTSettings* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.OnsetNRT
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                     Settings;                                          // 0x78(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UOnsetNRT* GetDefaultObj();

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32* InChannel, const TArray<float>& OutOnsetTimestamps, const TArray<float>& OutOnsetStrengths);
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32* InChannel, const TArray<float>& OutOnsetTimestamps, const TArray<float>& OutOnsetStrengths);
};

// 0x8 (0x30 - 0x28)
// Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFFTSize                          FFTSize;                                           // 0x2C(0x1)(BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x2D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EFFTWindowType                    WindowType;                                        // 0x2E(0x1)(ConstParm, BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bDownmixToMono;                                    // 0x2F(0x1)(Edit, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USynesthesiaSpectrumAnalysisSettings* GetDefaultObj();

};

// 0x58 (0xE8 - 0x90)
// Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer
class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{
public:
	class USynesthesiaSpectrumAnalysisSettings*  Settings;                                          // 0x90(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSpectrumResults;                                 // 0x98(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1815[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnLatestSpectrumResults;                           // 0xC0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1816[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynesthesiaSpectrumAnalyzer* GetDefaultObj();

	void GetNumCenterFrequencies(int32 ReturnValue);
	void GetCenterFrequencies(float InSampleRate, const TArray<float>& OutCenterFrequencies);
};

}


