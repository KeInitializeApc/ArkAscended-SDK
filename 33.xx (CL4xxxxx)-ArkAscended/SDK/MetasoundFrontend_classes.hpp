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
	uint8                                        Pad_2504[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMetasoundParameterPack* GetDefaultObj();

	class FName SetTrigger(bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	class FString SetString(bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	int32 SetInt(bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	float SetFloat(bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	bool SetBool(bool OnlyIfExists, enum class ESetParamResult ReturnValue);
	void MakeMetasoundParameterPack(class UMetasoundParameterPack* ReturnValue);
	class FName HasTrigger(bool ReturnValue);
	class FName HasString(bool ReturnValue);
	class FName HasInt(bool ReturnValue);
	class FName HasFloat(bool ReturnValue);
	class FName HasBool(bool ReturnValue);
	class FName GetTrigger(enum class ESetParamResult* Result, bool ReturnValue);
	class FName GetString(enum class ESetParamResult* Result, const class FString& ReturnValue);
	class FName GetInt(enum class ESetParamResult* Result, int32 ReturnValue);
	class FName GetFloat(enum class ESetParamResult* Result, float ReturnValue);
	class FName GetBool(enum class ESetParamResult* Result, bool ReturnValue);
};

}


