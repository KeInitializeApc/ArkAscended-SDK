#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class DLSSBlueprint.DLSSLibrary
class UDLSSLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDLSSLibrary* GetDefaultObj();

	float SetDLSSSharpness();
	enum class EUDLSSMode SetDLSSMode(class UObject** WorldContextObject);
	enum class EUDLSSSupport QueryDLSSSupport();
	enum class EUDLSSSupport QueryDLSSRRSupport();
	bool IsDLSSSupported();
	bool IsDLSSRRSupported();
	bool IsDLSSRREnabled();
	bool IsDLSSModeSupported();
	bool IsDLSSEnabled();
	bool IsDLAAEnabled();
	TArray<enum class EUDLSSMode> GetSupportedDLSSModes();
	float GetDLSSSharpness();
	float GetDLSSScreenPercentageRange(float* MaxScreenPercentage);
	void GetDLSSRRMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor);
	float GetDLSSModeInformation(const struct FVector2D& ScreenResolution, float* MaxScreenPercentage, float* OptimalSharpness);
	enum class EUDLSSMode GetDLSSMode();
	void GetDLSSMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor);
	enum class EUDLSSMode GetDefaultDLSSMode();
	void EnableDLSSRR(bool bEnabled);
	void EnableDLSS(bool bEnabled);
	void EnableDLAA(bool bEnabled);
};

}


