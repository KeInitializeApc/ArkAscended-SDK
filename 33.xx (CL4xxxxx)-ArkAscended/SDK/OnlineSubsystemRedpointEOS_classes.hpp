#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x220 (0x2A8 - 0x88)
// Class OnlineSubsystemRedpointEOS.EOSControlChannel
class UEOSControlChannel : public UControlChannel
{
public:
	uint8                                        Pad_39E[0x220];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSControlChannel* GetDefaultObj();

};

// 0x0 (0x1EB8 - 0x1EB8)
// Class OnlineSubsystemRedpointEOS.EOSIpNetConnection
class UEOSIpNetConnection : public UIpConnection
{
public:

	static class UClass* StaticClass();
	static class UEOSIpNetConnection* GetDefaultObj();

};

// 0x10 (0x1DF8 - 0x1DE8)
// Class OnlineSubsystemRedpointEOS.EOSNetConnection
class UEOSNetConnection : public UNetConnection
{
public:
	uint8                                        Pad_3A0[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSNetConnection* GetDefaultObj();

};

// 0x88 (0x8C8 - 0x840)
// Class OnlineSubsystemRedpointEOS.EOSNetDriver
class UEOSNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_3A1[0x78];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UEOSNetConnection*>             PendingConnectionClose;                            // 0x8B8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UEOSNetDriver* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemRedpointEOS.EOSSubsystem
class UEOSSubsystem : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnAddWidgetToViewport;                             // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveWidgetFromViewport;                        // 0x40(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A5[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSSubsystem* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode_Context
class UEOSUserInterface_EnterDevicePinCode_Context : public UObject
{
public:
	uint8                                        Pad_3A7[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSUserInterface_EnterDevicePinCode_Context* GetDefaultObj();

	void CancelLogin();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_EnterDevicePinCode
class IEOSUserInterface_EnterDevicePinCode : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEOSUserInterface_EnterDevicePinCode* GetDefaultObj();

	class FString SetupUserInterface();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context
class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context : public UObject
{
public:
	uint8                                        Pad_3AC[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform_Context* GetDefaultObj();

	TArray<struct FEOSUserInterface_CandidateEOSAccount> SelectedCandidates();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_LinkEOSAccountsAgainstCrossPlatform
class IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEOSUserInterface_LinkEOSAccountsAgainstCrossPlatform* GetDefaultObj();

	TArray<struct FEOSUserInterface_CandidateEOSAccount> SetupUserInterface();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount_Context
class UEOSUserInterface_SelectEOSAccount_Context : public UObject
{
public:
	uint8                                        Pad_3AF[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSUserInterface_SelectEOSAccount_Context* GetDefaultObj();

	struct FEOSUserInterface_CandidateEOSAccount SelectCandidate();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SelectEOSAccount
class IEOSUserInterface_SelectEOSAccount : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEOSUserInterface_SelectEOSAccount* GetDefaultObj();

	TArray<struct FEOSUserInterface_CandidateEOSAccount> SetupUserInterface();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount_Context
class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
{
public:
	uint8                                        Pad_3B3[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSUserInterface_SignInOrCreateAccount_Context* GetDefaultObj();

	enum class EEOSUserInterface_SignInOrCreateAccount_Choice SelectChoice();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SignInOrCreateAccount
class IEOSUserInterface_SignInOrCreateAccount : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEOSUserInterface_SignInOrCreateAccount* GetDefaultObj();

	class UEOSUserInterface_SignInOrCreateAccount_Context* SetupUserInterface();
};

// 0x10 (0x38 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount_Context
class UEOSUserInterface_SwitchToCrossPlatformAccount_Context : public UObject
{
public:
	uint8                                        Pad_3B5[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEOSUserInterface_SwitchToCrossPlatformAccount_Context* GetDefaultObj();

	enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice SelectChoice();
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemRedpointEOS.EOSUserInterface_SwitchToCrossPlatformAccount
class IEOSUserInterface_SwitchToCrossPlatformAccount : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEOSUserInterface_SwitchToCrossPlatformAccount* GetDefaultObj();

	class FString SetupUserInterface();
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemRedpointEOS.RecentPlayersWorldSubsystem
class URecentPlayersWorldSubsystem : public URecentPlayersWorldSubsystemBase
{
public:
	uint8                                        Pad_3B9[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URecentPlayersWorldSubsystem* GetDefaultObj();

};

}


