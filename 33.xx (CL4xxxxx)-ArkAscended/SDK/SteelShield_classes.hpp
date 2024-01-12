#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class SteelShield.SteelShieldTokenProvider
class USteelShieldTokenProvider : public UObject
{
public:
	uint8                                        Pad_7CF[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldTokenProvider* GetDefaultObj();

};

// 0xA0 (0x100 - 0x60)
// Class SteelShield.ClientTokenProvider
class UClientTokenProvider : public USteelShieldTokenProvider
{
public:
	uint8                                        Pad_7D0[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class USteelShieldTokenRequest*>      ActiveRequests;                                    // 0xF0(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UClientTokenProvider* GetDefaultObj();

};

// 0x10 (0x110 - 0x100)
// Class SteelShield.DefaultTokenProvider
class UDefaultTokenProvider : public UClientTokenProvider
{
public:
	uint8                                        Pad_7D2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class USteelShieldJWT*                       JWT;                                               // 0x108(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDefaultTokenProvider* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class SteelShield.EOSTokenProvider
class UEOSTokenProvider : public UClientTokenProvider
{
public:
	uint8                                        Pad_7D3[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSTokenProvider* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class SteelShield.SteelShieldJWT
class USteelShieldJWT : public UObject
{
public:
	uint8                                        Pad_7D4[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldJWT* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class SteelShield.SteelShieldRuntimeSettings
class USteelShieldRuntimeSettings : public UObject
{
public:
	int32                                        ApiVersion;                                        // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference)
	uint8                                        Pad_7D5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Developer;                                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient)
	class FString                                Game;                                              // 0x40(0x10)(Net, OutParm, ZeroConstructor)
	class FString                                Platform;                                          // 0x50(0x10)(ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	class FString                                PlatformKey;                                       // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	class FString                                BackendURL;                                        // 0x70(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient)
	class FString                                AuthProvider;                                      // 0x80(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	class FString                                GameClientVersion;                                 // 0x90(0x10)(Edit, Net, ZeroConstructor, Transient, DuplicateTransient)
	class FString                                Certificate;                                       // 0xA0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EJWTCertificateType               CertificateType;                                   // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D6[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldRuntimeSettings* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class SteelShield.SteelShieldSubsystem
class USteelShieldSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_7E5[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnInitializedBP;                                   // 0x50(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class USteelShieldTokenProvider*             TokenProvider;                                     // 0x60(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7E7[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldSubsystem* GetDefaultObj();

	void Stop();
	bool Start(int32 TokenNum);
	class USteelShieldTokenProvider* SetTokenProvider(class UClass* TokenProviderClass);
	void OnInitializedBP__DelegateSignature(bool bSuccessful);
	bool IsRolloverInProgress();
	bool IsEnabled();
	class USteelShieldTokenProvider* GetTokenProvider();
};

// 0x18 (0x40 - 0x28)
// Class SteelShield.SteelShieldTokenRequest
class USteelShieldTokenRequest : public UObject
{
public:
	uint8                                        Pad_7EC[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldTokenRequest* GetDefaultObj();

};

}


