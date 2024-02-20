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
	void QueryDLSSSupport(enum class EUDLSSSupport ReturnValue);
	void QueryDLSSRRSupport(enum class EUDLSSSupport ReturnValue);
	void IsDLSSSupported(bool ReturnValue);
	void IsDLSSRRSupported(bool ReturnValue);
	void IsDLSSRREnabled(bool ReturnValue);
	enum class EUDLSSMode IsDLSSModeSupported(bool ReturnValue);
	void IsDLSSEnabled(bool ReturnValue);
	void IsDLAAEnabled(bool ReturnValue);
	void GetSupportedDLSSModes(const TArray<enum class EUDLSSMode>& ReturnValue);
	void GetDLSSSharpness(float ReturnValue);
	float GetDLSSScreenPercentageRange();
	int32 GetDLSSRRMinimumDriverVersion();
	float GetDLSSModeInformation();
	void GetDLSSMode(enum class EUDLSSMode ReturnValue);
	int32 GetDLSSMinimumDriverVersion();
	void GetDefaultDLSSMode(enum class EUDLSSMode ReturnValue);
	bool EnableDLSSRR();
	bool EnableDLSS();
	bool EnableDLAA();
};

}


