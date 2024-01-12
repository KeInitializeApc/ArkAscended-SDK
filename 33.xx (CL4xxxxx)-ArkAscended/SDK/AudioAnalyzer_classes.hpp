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
	class USoundWave*                            Sound;                                             // 0x28(0x8)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        DurationInSeconds;                                 // 0x30(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2652[0x44];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioAnalyzerNRT* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class AudioAnalyzer.AudioAnalyzer
class UAudioAnalyzer : public UObject
{
public:
	class UAudioBus*                             AudioBus;                                          // 0x28(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_2665[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioAnalyzerSubsystem*               AudioAnalyzerSubsystem;                            // 0x38(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig)
	uint8                                        Pad_2666[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioAnalyzer* GetDefaultObj();

	class UObject* StopAnalyzing();
	class UObject* StartAnalyzing(class UAudioBus** AudioBusToAnalyze);
};

// 0x20 (0x50 - 0x30)
// Class AudioAnalyzer.AudioAnalyzerSubsystem
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{
public:
	TArray<class UAudioAnalyzer*>                AudioAnalyzers;                                    // 0x30(0x10)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2667[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioAnalyzerSubsystem* GetDefaultObj();

};

}


