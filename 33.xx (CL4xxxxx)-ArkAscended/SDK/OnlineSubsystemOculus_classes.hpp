#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D01[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusCreateSessionCallbackProxy* GetDefaultObj();

	class UOculusCreateSessionCallbackProxy* CreateSession(int32 PublicConnections);
};

// 0x20 (0x50 - 0x30)
// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOculusEntitlementCallbackProxy* GetDefaultObj();

	class UOculusEntitlementCallbackProxy* VerifyEntitlement();
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D20[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusFindSessionsCallbackProxy* GetDefaultObj();

	class UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32 MaxResults);
	class UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32 MaxResults);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D29[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusIdentityCallbackProxy* GetDefaultObj();

	class UOculusIdentityCallbackProxy* GetOculusIdentity();
};

// 0x10 (0x1EC8 - 0x1EB8)
// Class OnlineSubsystemOculus.OculusNetConnection
class UOculusNetConnection : public UIpConnection
{
public:
	uint8                                        Pad_D2B[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusNetConnection* GetDefaultObj();

};

// 0xB8 (0x8F8 - 0x840)
// Class OnlineSubsystemOculus.OculusNetDriver
class UOculusNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_D2C[0xB8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusNetDriver* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D34[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusUpdateSessionCallbackProxy* GetDefaultObj();

	class UOculusUpdateSessionCallbackProxy* SetSessionEnqueue();
};

}


