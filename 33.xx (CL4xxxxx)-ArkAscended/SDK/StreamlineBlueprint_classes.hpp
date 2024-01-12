#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibrary
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibrary* GetDefaultObj();

	enum class EUStreamlineFeatureSupport QueryStreamlineFeatureSupport();
	bool IsStreamlineFeatureSupported();
	struct FStreamlineFeatureRequirements GetStreamlineFeatureInformation();
	bool BreakStreamlineFeatureRequirements();
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryDLSSG
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryDLSSG* GetDefaultObj();

	enum class EUStreamlineDLSSGMode SetDLSSGMode();
	enum class EUStreamlineFeatureSupport QueryDLSSGSupport();
	bool IsDLSSGSupported();
	bool IsDLSSGModeSupported();
	TArray<enum class EUStreamlineDLSSGMode> GetSupportedDLSSGModes();
	enum class EUStreamlineDLSSGMode GetDLSSGMode();
	int32 GetDLSSGFrameTiming();
	enum class EUStreamlineDLSSGMode GetDefaultDLSSGMode();
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryReflex
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryReflex* GetDefaultObj();

	void SetReflexMode(enum class EUStreamlineReflexMode* Mode);
	enum class EUStreamlineFeatureSupport QueryReflexSupport();
	bool IsReflexSupported();
	float GetRenderLatencyInMs();
	enum class EUStreamlineReflexMode GetReflexMode();
	float GetGameToRenderLatencyInMs();
	float GetGameLatencyInMs();
	enum class EUStreamlineReflexMode GetDefaultReflexMode();
};

}


