#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:

	static class UClass* StaticClass();
	static class USteamAuthComponentModuleInterface* GetDefaultObj();

};

// 0x8 (0x1EC0 - 0x1EB8)
// Class OnlineSubsystemSteam.SteamNetConnection
class USteamNetConnection : public UIpConnection
{
public:
	bool                                         bIsPassthrough;                                    // 0x1EB8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_641[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteamNetConnection* GetDefaultObj();

};

// 0x8 (0x848 - 0x840)
// Class OnlineSubsystemSteam.SteamNetDriver
class USteamNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_642[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USteamNetDriver* GetDefaultObj();

};

}


