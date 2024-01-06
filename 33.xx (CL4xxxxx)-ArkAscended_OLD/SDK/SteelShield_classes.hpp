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
	uint8                                        Pad_62D[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldTokenProvider* GetDefaultObj();

};

// 0xA0 (0x100 - 0x60)
// Class SteelShield.ClientTokenProvider
class UClientTokenProvider : public USteelShieldTokenProvider
{
public:
	uint8                                        Pad_634[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class USteelShieldTokenRequest*>      ActiveRequests;                                    // 0xF0(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UClientTokenProvider* GetDefaultObj();

};

// 0x10 (0x110 - 0x100)
// Class SteelShield.DefaultTokenProvider
class UDefaultTokenProvider : public UClientTokenProvider
{
public:
	uint8                                        Pad_639[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class USteelShieldJWT*                       JWT;                                               // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDefaultTokenProvider* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class SteelShield.EOSTokenProvider
class UEOSTokenProvider : public UClientTokenProvider
{
public:
	uint8                                        Pad_640[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSTokenProvider* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class SteelShield.SteelShieldJWT
class USteelShieldJWT : public UObject
{
public:
	uint8                                        Pad_641[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldJWT* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class SteelShield.SteelShieldRuntimeSettings
class USteelShieldRuntimeSettings : public UObject
{
public:
	int32                                        ApiVersion;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	uint8                                        Pad_642[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Developer;                                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient)
	class FString                                Game;                                              // 0x40(0x10)(Net, OutParm, ZeroConstructor)
	class FString                                Platform;                                          // 0x50(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class FString                                PlatformKey;                                       // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class FString                                BackendURL;                                        // 0x70(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class FString                                AuthProvider;                                      // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class FString                                GameClientVersion;                                 // 0x90(0x10)(Edit, ConstParm, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class FString                                Certificate;                                       // 0xA0(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EJWTCertificateType               CertificateType;                                   // 0xB0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_645[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldRuntimeSettings* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class SteelShield.SteelShieldSubsystem
class USteelShieldSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_65D[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnInitializedBP;                                   // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class USteelShieldTokenProvider*             TokenProvider;                                     // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_65F[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldSubsystem* GetDefaultObj();

	void Stop();
	int32 Start(bool* ReturnValue);
	class UClass* SetTokenProvider(class USteelShieldTokenProvider** ReturnValue);
	bool OnInitializedBP__DelegateSignature();
	void IsRolloverInProgress(bool* ReturnValue);
	void IsEnabled(bool* ReturnValue);
	void GetTokenProvider(class USteelShieldTokenProvider** ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class SteelShield.SteelShieldTokenRequest
class USteelShieldTokenRequest : public UObject
{
public:
	uint8                                        Pad_663[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteelShieldTokenRequest* GetDefaultObj();

};

}


