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
	uint8                                        Pad_F82[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldTokenProvider* GetDefaultObj();

};

// 0xA0 (0x100 - 0x60)
// Class SteelShield.ClientTokenProvider
class UClientTokenProvider : public USteelShieldTokenProvider
{
public:
	uint8                                        Pad_F87[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class USteelShieldTokenRequest*>      ActiveRequests;                                    // 0xF0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UClientTokenProvider* GetDefaultObj();

};

// 0x10 (0x110 - 0x100)
// Class SteelShield.DefaultTokenProvider
class UDefaultTokenProvider : public UClientTokenProvider
{
public:
	uint8                                        Pad_F8B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class USteelShieldJWT*                       JWT;                                               // 0x108(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDefaultTokenProvider* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class SteelShield.EOSTokenProvider
class UEOSTokenProvider : public UClientTokenProvider
{
public:
	uint8                                        Pad_F8F[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSTokenProvider* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class SteelShield.SteelShieldJWT
class USteelShieldJWT : public UObject
{
public:
	uint8                                        Pad_F93[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldJWT* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class SteelShield.SteelShieldRuntimeSettings
class USteelShieldRuntimeSettings : public UObject
{
public:
	int32                                        ApiVersion;                                        // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_F96[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Developer;                                         // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient)
	class FString                                Game;                                              // 0x40(0x10)(Net, OutParm, ZeroConstructor)
	class FString                                Platform;                                          // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                PlatformKey;                                       // 0x60(0x10)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                BackendURL;                                        // 0x70(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                AuthProvider;                                      // 0x80(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                GameClientVersion;                                 // 0x90(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                Certificate;                                       // 0xA0(0x10)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EJWTCertificateType               CertificateType;                                   // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_F9A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldRuntimeSettings* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class SteelShield.SteelShieldSubsystem
class USteelShieldSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_FC9[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnInitializedBP;                                   // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USteelShieldTokenProvider*             TokenProvider;                                     // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_FCC[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldSubsystem* GetDefaultObj();

	void Stop();
	int32 Start(bool ReturnValue);
	class UClass* SetTokenProvider(class USteelShieldTokenProvider* ReturnValue);
	void OnInitializedBP__DelegateSignature(bool bSuccessful);
	void IsRolloverInProgress(bool ReturnValue);
	void IsEnabled(bool ReturnValue);
	void GetTokenProvider(class USteelShieldTokenProvider* ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class SteelShield.SteelShieldTokenRequest
class USteelShieldTokenRequest : public UObject
{
public:
	uint8                                        Pad_FD4[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldTokenRequest* GetDefaultObj();

};

}


