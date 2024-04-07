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

	float SetNISSharpness();
	enum class EUNISMode SetNISMode();
	float SetNISCustomScreenPercentage();
	bool IsNISSupported();
	bool IsNISModeSupported();
	TArray<enum class EUNISMode> GetSupportedNISModes();
	float GetNISScreenPercentageRange(float* MaxScreenPercentage);
	float GetNISRecommendedScreenPercentage();
	enum class EUNISMode GetDefaultNISMode();
};

}


