#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class NISBlueprint.NISLibrary
class UNISLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNISLibrary* GetDefaultObj();

	void SetNISSharpness(float* Sharpness);
	void SetNISMode(enum class EUNISMode NISMode);
	void SetNISCustomScreenPercentage(float CustomScreenPercentage);
	void IsNISSupported(bool* ReturnValue);
	void IsNISModeSupported(enum class EUNISMode NISMode, bool* ReturnValue);
	void GetSupportedNISModes(TArray<enum class EUNISMode>* ReturnValue);
	void GetNISScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
	void GetNISRecommendedScreenPercentage(enum class EUNISMode NISMode, float* ReturnValue);
	void GetDefaultNISMode(enum class EUNISMode* ReturnValue);
};

}


