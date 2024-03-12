#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAchievementBlueprintLibrary* GetDefaultObj();

	float GetCachedAchievementProgress(class UObject** WorldContextObject);
	class FText GetCachedAchievementDescription(class UObject** WorldContextObject, class FText Title, bool bHidden);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A8[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAchievementQueryCallbackProxy* GetDefaultObj();

	class UAchievementQueryCallbackProxy* CacheAchievements(class UObject** WorldContextObject);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject** WorldContextObject);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B1[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAchievementWriteCallbackProxy* GetDefaultObj();

	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject** WorldContextObject);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3C3[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UConnectionCallbackProxy* GetDefaultObj();

	class UConnectionCallbackProxy* ConnectToService(class UObject** WorldContextObject);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3CE[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCreateSessionCallbackProxy* GetDefaultObj();

	class UCreateSessionCallbackProxy* CreateSession(class UObject** WorldContextObject);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3DC[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDestroySessionCallbackProxy* GetDefaultObj();

	class UDestroySessionCallbackProxy* DestroySession(class UObject** WorldContextObject);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_409[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEndMatchCallbackProxy* GetDefaultObj();

	class UEndMatchCallbackProxy* EndMatch(class UObject** WorldContextObject);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_41D[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEndTurnCallbackProxy* GetDefaultObj();

	class UEndTurnCallbackProxy* EndTurn(class UObject** WorldContextObject, TScriptInterface<class ITurnBasedMatchInterface>* TurnBasedMatchInterface);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_42A[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFindSessionsCallbackProxy* GetDefaultObj();

	class FString GetServerName(const struct FBlueprintSessionResult& Result);
	int32 GetPingInMs(const struct FBlueprintSessionResult& Result);
	int32 GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	int32 GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* FindSessions(class UObject** WorldContextObject);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_434[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFindTurnBasedMatchCallbackProxy* GetDefaultObj();

	class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject** WorldContextObject, int32* MaxPlayers);
};

// 0x80 (0xA8 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_441[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases();
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned();
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase();
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_446[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseQueryCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery();
};

// 0x88 (0xB0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_44E[0x68];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseRestoreCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore();
};

// 0xD0 (0x1EB8 - 0x1DE8)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_452[0xB4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SocketErrorDisconnectDelay;                        // 0x1E9C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_453[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIpConnection* GetDefaultObj();

};

// 0xB0 (0x840 - 0x790)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x790(0x1)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x790(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1A : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_454[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       MaxPortCountToTry;                                 // 0x794(0x4)(Edit, EditFixedSize, OutParm, Config, EditConst, GlobalConfig)
	uint8                                        Pad_456[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       ServerDesiredSocketReceiveBufferBytes;             // 0x79C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint32                                       ServerDesiredSocketSendBufferBytes;                // 0x7A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint32                                       ClientDesiredSocketReceiveBufferBytes;             // 0x7A4(0x4)(Edit, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint32                                       ClientDesiredSocketSendBufferBytes;                // 0x7A8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_459[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MaxSecondsInReceive;                               // 0x7B0(0x8)(BlueprintVisible, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NbPacketsBetweenReceiveTimeTest;                   // 0x7B8(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        ResolutionConnectionTimeout;                       // 0x7BC(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config, EditConst, GlobalConfig)
	uint8                                        Pad_45A[0x80];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIpNetDriver* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_469[0x148];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UJoinSessionCallbackProxy* GetDefaultObj();

	class UJoinSessionCallbackProxy* JoinSession(class UObject** WorldContextObject, const struct FBlueprintSessionResult& SearchResult);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULeaderboardBlueprintLibrary* GetDefaultObj();

	bool WriteLeaderboardInteger(int32 StatValue);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_47C[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULeaderboardFlushCallbackProxy* GetDefaultObj();

	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush();
};

// 0x70 (0x98 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_48F[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULeaderboardQueryCallbackProxy* GetDefaultObj();

	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery();
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A0[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULogoutCallbackProxy* GetDefaultObj();

	class ULogoutCallbackProxy* Logout(class UObject** WorldContextObject);
};

// 0x30 (0x4F0 - 0x4C0)
// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public AActor
{
public:
	uint8                                        Pad_4A9[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        BeaconConnectionInitialTimeout;                    // 0x4C8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	float                                        BeaconConnectionTimeout;                           // 0x4CC(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	class UNetDriver*                            NetDriver;                                         // 0x4D0(0x8)(BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_4AC[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeacon* GetDefaultObj();

};

// 0x60 (0x550 - 0x4F0)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*               BeaconOwner;                                       // 0x4F0(0x8)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UNetConnection*                        BeaconConnection;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0x500(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_4B1[0x4F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeaconClient* GetDefaultObj();

	void ClientOnConnected();
};

// 0x110 (0x600 - 0x4F0)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0x4F0(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	bool                                         bAuthRequired;                                     // 0x4F4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       MaxAuthTokenSize;                                  // 0x4F8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B8[0x54];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x550(0x10)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B9[0xA0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeaconHost* GetDefaultObj();

};

// 0x28 (0x4E8 - 0x4C0)
// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                BeaconTypeName;                                    // 0x4C0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UClass*                                ClientBeaconActorClass;                            // 0x4D0(0x8)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x4D8(0x10)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AOnlineBeaconHostObject* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	TMap<class FName, class FName>               MappedUniqueNetIdTypes;                            // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FName>                          CompatibleUniqueNetIdTypes;                        // 0x78(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  VoiceSubsystemNameOverride;                        // 0x88(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4BF[0xF8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C5[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPIELoginSettingsInternal>     Logins;                                            // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOnlinePIESettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{
public:

	static class UClass* StaticClass();
	static class UOnlineServicesEngineInterfaceImpl* GetDefaultObj();

};

// 0x1B8 (0x1E0 - 0x28)
// Class OnlineSubsystemUtils.OnlineSessionClient
class UOnlineSessionClient : public UOnlineSession
{
public:
	uint8                                        Pad_4C6[0x1B0];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsFromInvite;                                     // 0x1D8(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHandlingDisconnect;                               // 0x1D9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C7[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineSessionClient* GetDefaultObj();

};

// 0xC8 (0x618 - 0x550)
// Class OnlineSubsystemUtils.PartyBeaconClient
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_4E3[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DestSessionId;                                     // 0x580(0x10)(Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPartyReservation                     PendingReservation;                                // 0x590(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EClientRequestType                RequestType;                                       // 0x5E8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bPendingReservationSent;                           // 0x5E9(0x1)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bCancelReservation;                                // 0x5EA(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4E6[0x2D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APartyBeaconClient* GetDefaultObj();

	void ServerUpdateReservationRequest(class FString* SessionId, struct FPartyReservation* ReservationUpdate);
	void ServerReservationRequest(class FString* SessionId, struct FPartyReservation* Reservation);
	void ServerRemoveMemberFromReservationRequest(class FString* SessionId, struct FPartyReservation* ReservationUpdate);
	struct FUniqueNetIdRepl ServerCancelReservationRequest();
	void ServerAddOrUpdateReservationRequest(class FString* SessionId, struct FPartyReservation* Reservation);
	void ClientSendReservationUpdates(int32* NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class EPartyReservationResult* ReservationResponse);
	void ClientCancelReservationResponse(enum class EPartyReservationResult* ReservationResponse);
};

// 0x78 (0x560 - 0x4E8)
// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                     State;                                             // 0x4E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_4F2[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bLogoutOnSessionTimeout;                           // 0x550(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	uint8                                        Pad_4F4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SessionTimeoutSecs;                                // 0x554(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	float                                        TravelSessionTimeoutSecs;                          // 0x558(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	uint8                                        Pad_4F5[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APartyBeaconHost* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumTeams;                                          // 0x38(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumPlayersPerTeam;                                 // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  TeamAssignmentMethod;                              // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        ReservedHostTeamNum;                               // 0x48(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        ForceTeamNum;                                      // 0x4C(0x4)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bRestrictCrossConsole;                             // 0x50(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FA[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        PlatformCrossplayRestrictions;                     // 0x58(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                               // 0x68(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableRemovalRequests;                            // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPartyReservation>             Reservations;                                      // 0x80(0x10)(ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4FD[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPartyBeaconState* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_50B[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuitMatchCallbackProxy* GetDefaultObj();

	class UQuitMatchCallbackProxy* QuitMatch(class UObject** WorldContextObject, enum class EMPMatchOutcome Outcome, int32 TurnTimeoutInSeconds);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_512[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UShowLoginUICallbackProxy* GetDefaultObj();

	class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject** WorldContextObject, class APlayerController* InPlayerController);
};

// 0xF8 (0x648 - 0x550)
// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_527[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DestSessionId;                                     // 0x580(0x10)(Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSpectatorReservation                 PendingReservation;                                // 0x590(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ESpectatorClientRequestType       RequestType;                                       // 0x618(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bPendingReservationSent;                           // 0x619(0x1)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bCancelReservation;                                // 0x61A(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_52A[0x2D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASpectatorBeaconClient* GetDefaultObj();

	void ServerReservationRequest(class FString* SessionId, struct FSpectatorReservation* Reservation);
	struct FUniqueNetIdRepl ServerCancelReservationRequest();
	void ClientSendReservationUpdates(int32* NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class ESpectatorReservationResult* ReservationResponse);
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult* ReservationResponse);
};

// 0x78 (0x560 - 0x4E8)
// Class OnlineSubsystemUtils.SpectatorBeaconHost
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                 State;                                             // 0x4E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_52B[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bLogoutOnSessionTimeout;                           // 0x550(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	uint8                                        Pad_52C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SessionTimeoutSecs;                                // 0x554(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	float                                        TravelSessionTimeoutSecs;                          // 0x558(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	uint8                                        Pad_52D[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASpectatorBeaconHost* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bRestrictCrossConsole;                             // 0x38(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_531[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSpectatorReservation>         Reservations;                                      // 0x40(0x10)(ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_532[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpectatorBeaconState* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class OnlineSubsystemUtils.TestBeaconClient
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static class UClass* StaticClass();
	static class ATestBeaconClient* GetDefaultObj();

	void ServerPong();
	void ClientPing();
};

// 0x0 (0x4E8 - 0x4E8)
// Class OnlineSubsystemUtils.TestBeaconHost
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static class UClass* StaticClass();
	static class ATestBeaconHost* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTurnBasedBlueprintLibrary* GetDefaultObj();

	class APlayerController* RegisterTurnBasedMatchInterfaceObject(class UObject** WorldContextObject, class UObject** Object);
	class FString GetPlayerDisplayName(class UObject** WorldContextObject, int32 PlayerIndex, const class FString& PlayerDisplayName);
	class FString GetMyPlayerIndex(class UObject** WorldContextObject, int32 PlayerIndex);
	class FString GetIsMyTurn(class UObject** WorldContextObject, bool bIsMyTurn);
};

// 0x60 (0x820 - 0x7C0)
// Class OnlineSubsystemUtils.VoipListenerSynthComponent
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	uint8                                        Pad_54B[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVoipListenerSynthComponent* GetDefaultObj();

	bool IsIdling();
};

// 0x158 (0x180 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	uint8                                        Pad_54C[0x158];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

}


