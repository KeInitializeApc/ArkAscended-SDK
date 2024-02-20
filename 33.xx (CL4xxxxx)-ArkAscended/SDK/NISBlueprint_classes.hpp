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
	void IsNISSupported(bool ReturnValue);
	enum class EUNISMode IsNISModeSupported(bool ReturnValue);
	void GetSupportedNISModes(const TArray<enum class EUNISMode>& ReturnValue);
	float GetNISScreenPercentageRange();
	enum class EUNISMode GetNISRecommendedScreenPercentage(float ReturnValue);
	void GetDefaultNISMode(enum class EUNISMode ReturnValue);
};

}


