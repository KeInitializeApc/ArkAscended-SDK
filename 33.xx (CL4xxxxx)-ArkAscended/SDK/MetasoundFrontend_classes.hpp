#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class MetasoundFrontend.MetasoundParameterPack
class UMetasoundParameterPack : public UObject
{
public:
	uint8                                        Pad_188B[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetasoundParameterPack* GetDefaultObj();

	bool SetTrigger(class FName ParameterName, enum class ESetParamResult ReturnValue);
	bool SetString(class FName ParameterName, enum class ESetParamResult ReturnValue);
	bool SetInt(class FName ParameterName, enum class ESetParamResult ReturnValue);
	bool SetFloat(class FName ParameterName, enum class ESetParamResult ReturnValue);
	bool SetBool(class FName ParameterName, enum class ESetParamResult ReturnValue);
	void MakeMetasoundParameterPack(class UMetasoundParameterPack* ReturnValue);
	void HasTrigger(class FName ParameterName, bool ReturnValue);
	void HasString(class FName ParameterName, bool ReturnValue);
	void HasInt(class FName ParameterName, bool ReturnValue);
	void HasFloat(class FName ParameterName, bool ReturnValue);
	void HasBool(class FName ParameterName, bool ReturnValue);
	enum class ESetParamResult GetTrigger(class FName ParameterName, bool ReturnValue);
	enum class ESetParamResult GetString(class FName ParameterName, const class FString& ReturnValue);
	enum class ESetParamResult GetInt(class FName ParameterName, int32 ReturnValue);
	enum class ESetParamResult GetFloat(class FName ParameterName, float ReturnValue);
	enum class ESetParamResult GetBool(class FName ParameterName, bool ReturnValue);
};

}


