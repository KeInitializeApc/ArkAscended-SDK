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
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A18[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusCreateSessionCallbackProxy* GetDefaultObj();

	int32 CreateSession(const class FString& OculusMatchmakingPool, class UOculusCreateSessionCallbackProxy* ReturnValue);
};

// 0x20 (0x50 - 0x30)
// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOculusEntitlementCallbackProxy* GetDefaultObj();

	void VerifyEntitlement(class UOculusEntitlementCallbackProxy* ReturnValue);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2D[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusFindSessionsCallbackProxy* GetDefaultObj();

	int32 FindModeratedSessions(class UOculusFindSessionsCallbackProxy* ReturnValue);
	int32 FindMatchmakingSessions(const class FString& OculusMatchmakingPool, class UOculusFindSessionsCallbackProxy* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A3D[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusIdentityCallbackProxy* GetDefaultObj();

	void GetOculusIdentity(int32 LocalUserNum, class UOculusIdentityCallbackProxy* ReturnValue);
};

// 0x10 (0x1EC8 - 0x1EB8)
// Class OnlineSubsystemOculus.OculusNetConnection
class UOculusNetConnection : public UIpConnection
{
public:
	uint8                                        Pad_A40[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusNetConnection* GetDefaultObj();

};

// 0xB8 (0x8F8 - 0x840)
// Class OnlineSubsystemOculus.OculusNetDriver
class UOculusNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_A42[0xB8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusNetDriver* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_A52[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOculusUpdateSessionCallbackProxy* GetDefaultObj();

	void SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool, class UOculusUpdateSessionCallbackProxy* ReturnValue);
};

}


