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
	float                                        StartingFrequency;                                 // 0x28(0x4)(BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumBands;                                          // 0x2C(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        NumBandsPerOctave;                                 // 0x30(0x4)(Edit, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalysisPeriod;                                    // 0x34(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDownmixToMono;                                    // 0x38(0x1)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EConstantQFFTSizeEnum             FFTSize;                                           // 0x39(0x1)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EFFTWindowType                    WindowType;                                        // 0x3A(0x1)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x3B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        BandWidthStretch;                                  // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EConstantQNormalizationEnum       CQTNormalization;                                  // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F61[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NoiseFloorDb;                                      // 0x44(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstantQNRTSettings* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.ConstantQNRT
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                 Settings;                                          // 0x78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UConstantQNRT* GetDefaultObj();

	TArray<float> GetNormalizedChannelConstantQAtTime();
	TArray<float> GetChannelConstantQAtTime();
};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.LoudnessSettings
class ULoudnessSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MinimumFrequency;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaximumFrequency;                                  // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ELoudnessCurveTypeEnum            CurveType;                                         // 0x34(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F7E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NoiseFloorDb;                                      // 0x38(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ExpectedMaxLoudness;                               // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULoudnessSettings* GetDefaultObj();

};

// 0x48 (0xD8 - 0x90)
// Class AudioSynesthesia.LoudnessAnalyzer
class ULoudnessAnalyzer : public UAudioAnalyzer
{
public:
	class ULoudnessSettings*                     Settings;                                          // 0x90(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOverallLoudnessResults;                          // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPerChannelLoudnessResults;                       // 0xA8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnLatestOverallLoudnessResults;                    // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnLatestPerChannelLoudnessResults;                 // 0xC8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULoudnessAnalyzer* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.LoudnessNRTSettings
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MinimumFrequency;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaximumFrequency;                                  // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ELoudnessNRTCurveTypeEnum         CurveType;                                         // 0x34(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F83[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NoiseFloorDb;                                      // 0x38(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F85[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULoudnessNRTSettings* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.LoudnessNRT
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                  Settings;                                          // 0x78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ULoudnessNRT* GetDefaultObj();

	float GetNormalizedLoudnessAtTime();
	float GetNormalizedChannelLoudnessAtTime();
	float GetLoudnessAtTime();
	float GetChannelLoudnessAtTime();
};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.MeterSettings
class UMeterSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EMeterPeakType                    PeakMode;                                          // 0x2C(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F8F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MeterAttackTime;                                   // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        MeterReleaseTime;                                  // 0x34(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        PeakHoldTime;                                      // 0x38(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        ClippingThreshold;                                 // 0x3C(0x4)(Edit, Net, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMeterSettings* GetDefaultObj();

};

// 0xA8 (0x138 - 0x90)
// Class AudioSynesthesia.MeterAnalyzer
class UMeterAnalyzer : public UAudioAnalyzer
{
public:
	class UMeterSettings*                        Settings;                                          // 0x90(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOverallMeterResults;                             // 0x98(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F94[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnPerChannelMeterResults;                          // 0xC0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F95[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnLatestOverallMeterResults;                       // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F98[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnLatestPerChannelMeterResults;                    // 0x110(0x10)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F99[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeterAnalyzer* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.OnsetNRTSettings
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                         bDownmixToMono;                                    // 0x28(0x1)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FA1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        GranularityInSeconds;                              // 0x2C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        Sensitivity;                                       // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinimumFrequency;                                  // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaximumFrequency;                                  // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FA3[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnsetNRTSettings* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.OnsetNRT
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                     Settings;                                          // 0x78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UOnsetNRT* GetDefaultObj();

	TArray<float> GetNormalizedChannelOnsetsBetweenTimes();
	TArray<float> GetChannelOnsetsBetweenTimes();
};

// 0x8 (0x30 - 0x28)
// Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EFFTSize                          FFTSize;                                           // 0x2C(0x1)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x2D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EFFTWindowType                    WindowType;                                        // 0x2E(0x1)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDownmixToMono;                                    // 0x2F(0x1)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USynesthesiaSpectrumAnalysisSettings* GetDefaultObj();

};

// 0x58 (0xE8 - 0x90)
// Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer
class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{
public:
	class USynesthesiaSpectrumAnalysisSettings*  Settings;                                          // 0x90(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSpectrumResults;                                 // 0x98(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FBD[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnLatestSpectrumResults;                           // 0xC0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FBF[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USynesthesiaSpectrumAnalyzer* GetDefaultObj();

	void GetNumCenterFrequencies(int32* ReturnValue);
	TArray<float> GetCenterFrequencies();
};

}


