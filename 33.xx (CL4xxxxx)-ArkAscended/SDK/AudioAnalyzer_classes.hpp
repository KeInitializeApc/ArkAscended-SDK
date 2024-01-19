#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerAssetBase
class UAudioAnalyzerAssetBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioAnalyzerAssetBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerSettings
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{
public:

	static class UClass* StaticClass();
	static class UAudioAnalyzerSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerNRTSettings
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{
public:

	static class UClass* StaticClass();
	static class UAudioAnalyzerNRTSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerNRT
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{
public:
	class USoundWave*                            Sound;                                             // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	float                                        DurationInSeconds;                                 // 0x30(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_257D[0x44];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioAnalyzerNRT* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class AudioAnalyzer.AudioAnalyzer
class UAudioAnalyzer : public UObject
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x28(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_257E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioAnalyzerSubsystem*               AudioAnalyzerSubsystem;                            // 0x38(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_257F[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioAnalyzer* GetDefaultObj();

	void StopAnalyzing(class UObject* WorldContextObject);
	class UAudioBus* StartAnalyzing(class UObject* WorldContextObject);
};

// 0x20 (0x50 - 0x30)
// Class AudioAnalyzer.AudioAnalyzerSubsystem
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{
public:
	TArray<class UAudioAnalyzer*>                AudioAnalyzers;                                    // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2580[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioAnalyzerSubsystem* GetDefaultObj();

};

}


