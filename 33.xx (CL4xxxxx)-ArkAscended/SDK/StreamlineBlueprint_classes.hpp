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

	enum class EUStreamlineFeature QueryStreamlineFeatureSupport(enum class EUStreamlineFeatureSupport ReturnValue);
	enum class EUStreamlineFeature IsStreamlineFeatureSupported(bool ReturnValue);
	enum class EUStreamlineFeature GetStreamlineFeatureInformation(const struct FStreamlineFeatureRequirements& ReturnValue);
	bool BreakStreamlineFeatureRequirements(enum class EUStreamlineFeatureRequirementsFlags* Requirements);
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryDLSSG
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryDLSSG* GetDefaultObj();

	enum class EUStreamlineDLSSGMode SetDLSSGMode();
	void QueryDLSSGSupport(enum class EUStreamlineFeatureSupport ReturnValue);
	void IsDLSSGSupported(bool ReturnValue);
	enum class EUStreamlineDLSSGMode IsDLSSGModeSupported(bool ReturnValue);
	void GetSupportedDLSSGModes(const TArray<enum class EUStreamlineDLSSGMode>& ReturnValue);
	void GetDLSSGMode(enum class EUStreamlineDLSSGMode ReturnValue);
	int32 GetDLSSGFrameTiming();
	void GetDefaultDLSSGMode(enum class EUStreamlineDLSSGMode ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class StreamlineBlueprint.StreamlineLibraryReflex
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStreamlineLibraryReflex* GetDefaultObj();

	void SetReflexMode(enum class EUStreamlineReflexMode Mode);
	void QueryReflexSupport(enum class EUStreamlineFeatureSupport ReturnValue);
	void IsReflexSupported(bool ReturnValue);
	void GetRenderLatencyInMs(float ReturnValue);
	void GetReflexMode(enum class EUStreamlineReflexMode ReturnValue);
	void GetGameToRenderLatencyInMs(float ReturnValue);
	void GetGameLatencyInMs(float ReturnValue);
	void GetDefaultReflexMode(enum class EUStreamlineReflexMode ReturnValue);
};

}


