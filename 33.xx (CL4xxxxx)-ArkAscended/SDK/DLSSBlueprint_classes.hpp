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
	enum class EUDLSSMode SetDLSSMode();
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
	float GetDLSSScreenPercentageRange();
	int32 GetDLSSRRMinimumDriverVersion();
	float GetDLSSModeInformation(struct FVector2D* ScreenResolution);
	enum class EUDLSSMode GetDLSSMode();
	int32 GetDLSSMinimumDriverVersion();
	enum class EUDLSSMode GetDefaultDLSSMode();
	void EnableDLSSRR(bool* bEnabled);
	void EnableDLSS(bool* bEnabled);
	void EnableDLAA(bool* bEnabled);
};

}


