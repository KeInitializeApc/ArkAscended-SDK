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

	class FName GetCachedAchievementProgress(class APlayerController** PlayerController, bool bFoundID, float* Progress);
	class FName GetCachedAchievementDescription(class APlayerController** PlayerController, bool bFoundID, class FText* Title, class FText LockedDescription, class FText* UnlockedDescription, bool* bHidden);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_22E[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAchievementQueryCallbackProxy* GetDefaultObj();

	class UAchievementQueryCallbackProxy* CacheAchievements(class APlayerController** PlayerController);
	class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class APlayerController** PlayerController);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_236[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAchievementWriteCallbackProxy* GetDefaultObj();

	class UAchievementWriteCallbackProxy* WriteAchievementProgress(class APlayerController** PlayerController, class FName* AchievementName, float* Progress);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_239[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UConnectionCallbackProxy* GetDefaultObj();

	class UConnectionCallbackProxy* ConnectToService(class APlayerController** PlayerController);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_23C[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCreateSessionCallbackProxy* GetDefaultObj();

	class UCreateSessionCallbackProxy* CreateSession(class APlayerController** PlayerController, int32 PublicConnections, bool bUseLAN);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_243[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDestroySessionCallbackProxy* GetDefaultObj();

	class UDestroySessionCallbackProxy* DestroySession(class APlayerController** PlayerController);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_24E[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEndMatchCallbackProxy* GetDefaultObj();

	class UEndMatchCallbackProxy* EndMatch(class APlayerController** PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_257[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEndTurnCallbackProxy* GetDefaultObj();

	class UEndTurnCallbackProxy* EndTurn(class APlayerController** PlayerController, const class FString& MatchID, TScriptInterface<class ITurnBasedMatchInterface>* TurnBasedMatchInterface);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_263[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFindSessionsCallbackProxy* GetDefaultObj();

	class FString GetServerName(struct FBlueprintSessionResult* Result);
	int32 GetPingInMs(struct FBlueprintSessionResult* Result);
	int32 GetMaxPlayers(struct FBlueprintSessionResult* Result);
	int32 GetCurrentPlayers(struct FBlueprintSessionResult* Result);
	class UFindSessionsCallbackProxy* FindSessions(class APlayerController** PlayerController, int32 MaxResults, bool bUseLAN);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_267[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFindTurnBasedMatchCallbackProxy* GetDefaultObj();

	class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class APlayerController** PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 PlayerGroup, bool ShowExistingMatches);
};

// 0x80 (0xA8 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_26A[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController** PlayerController);
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController** PlayerController);
	class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController** PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_26C[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseQueryCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController** PlayerController, const TArray<class FString>& ProductIdentifiers);
};

// 0x88 (0xB0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_270[0x68];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseRestoreCallbackProxy2* GetDefaultObj();

	class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController** PlayerController);
};

// 0xD0 (0x1EB8 - 0x1DE8)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_271[0xB4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SocketErrorDisconnectDelay;                        // 0x1E9C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_272[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIpConnection* GetDefaultObj();

};

// 0xB0 (0x840 - 0x790)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x790(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x790(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_22 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_274[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       MaxPortCountToTry;                                 // 0x794(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_276[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       ServerDesiredSocketReceiveBufferBytes;             // 0x79C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       ServerDesiredSocketSendBufferBytes;                // 0x7A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       ClientDesiredSocketReceiveBufferBytes;             // 0x7A4(0x4)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint32                                       ClientDesiredSocketSendBufferBytes;                // 0x7A8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_277[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MaxSecondsInReceive;                               // 0x7B0(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NbPacketsBetweenReceiveTimeTest;                   // 0x7B8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ResolutionConnectionTimeout;                       // 0x7BC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_278[0x80];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIpNetDriver* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_27C[0x148];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UJoinSessionCallbackProxy* GetDefaultObj();

	class UJoinSessionCallbackProxy* JoinSession(class APlayerController** PlayerController);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULeaderboardBlueprintLibrary* GetDefaultObj();

	bool WriteLeaderboardInteger(class APlayerController** PlayerController, class FName StatName);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_281[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULeaderboardFlushCallbackProxy* GetDefaultObj();

	class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController** PlayerController, class FName SessionName);
};

// 0x70 (0x98 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_288[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULeaderboardQueryCallbackProxy* GetDefaultObj();

	class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController** PlayerController, class FName StatName);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_28E[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULogoutCallbackProxy* GetDefaultObj();

	class ULogoutCallbackProxy* Logout(class APlayerController** PlayerController);
};

// 0x30 (0x4F8 - 0x4C8)
// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public AActor
{
public:
	uint8                                        Pad_294[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        BeaconConnectionInitialTimeout;                    // 0x4D0(0x4)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        BeaconConnectionTimeout;                           // 0x4D4(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	class UNetDriver*                            NetDriver;                                         // 0x4D8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_296[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeacon* GetDefaultObj();

};

// 0x60 (0x558 - 0x4F8)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*               BeaconOwner;                                       // 0x4F8(0x8)(Edit, BlueprintVisible, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNetConnection*                        BeaconConnection;                                  // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0x508(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_29A[0x4F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeaconClient* GetDefaultObj();

	void ClientOnConnected();
};

// 0x110 (0x608 - 0x4F8)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0x4F8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	bool                                         bAuthRequired;                                     // 0x4FC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       MaxAuthTokenSize;                                  // 0x500(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A1[0x54];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x558(0x10)(BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A3[0xA0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeaconHost* GetDefaultObj();

};

// 0x28 (0x4F0 - 0x4C8)
// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                BeaconTypeName;                                    // 0x4C8(0x10)(BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                ClientBeaconActorClass;                            // 0x4D8(0x8)(BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x4E0(0x10)(BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AOnlineBeaconHostObject* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	TMap<class FName, class FName>               MappedUniqueNetIdTypes;                            // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FName>                          CompatibleUniqueNetIdTypes;                        // 0x78(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  VoiceSubsystemNameOverride;                        // 0x88(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A8[0xF8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPIELoginSettingsInternal>     Logins;                                            // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2AD[0x1B0];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsFromInvite;                                     // 0x1D8(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHandlingDisconnect;                               // 0x1D9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AE[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineSessionClient* GetDefaultObj();

};

// 0xC8 (0x620 - 0x558)
// Class OnlineSubsystemUtils.PartyBeaconClient
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_2CF[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DestSessionId;                                     // 0x588(0x10)(OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPartyReservation                     PendingReservation;                                // 0x598(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EClientRequestType                RequestType;                                       // 0x5F0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPendingReservationSent;                           // 0x5F1(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCancelReservation;                                // 0x5F2(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D0[0x2D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APartyBeaconClient* GetDefaultObj();

	struct FPartyReservation ServerUpdateReservationRequest(class FString* SessionId);
	struct FPartyReservation ServerReservationRequest(class FString* SessionId);
	struct FPartyReservation ServerRemoveMemberFromReservationRequest(class FString* SessionId);
	struct FUniqueNetIdRepl ServerCancelReservationRequest();
	struct FPartyReservation ServerAddOrUpdateReservationRequest(class FString* SessionId);
	int32 ClientSendReservationUpdates();
	void ClientSendReservationFull();
	enum class EPartyReservationResult ClientReservationResponse();
	enum class EPartyReservationResult ClientCancelReservationResponse();
};

// 0x78 (0x568 - 0x4F0)
// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                     State;                                             // 0x4F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_2D2[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bLogoutOnSessionTimeout;                           // 0x558(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_2D3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SessionTimeoutSecs;                                // 0x55C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        TravelSessionTimeoutSecs;                          // 0x560(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_2D5[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APartyBeaconHost* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, Transient, GlobalConfig, SubobjectReference)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumTeams;                                          // 0x38(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumPlayersPerTeam;                                 // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  TeamAssignmentMethod;                              // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReservedHostTeamNum;                               // 0x48(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ForceTeamNum;                                      // 0x4C(0x4)(ConstParm, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRestrictCrossConsole;                             // 0x50(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        PlatformCrossplayRestrictions;                     // 0x58(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                               // 0x68(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableRemovalRequests;                            // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DF[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPartyReservation>             Reservations;                                      // 0x80(0x10)(ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E0[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPartyBeaconState* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E8[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuitMatchCallbackProxy* GetDefaultObj();

	class UQuitMatchCallbackProxy* QuitMatch(class APlayerController** PlayerController, const class FString& MatchID);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2ED[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UShowLoginUICallbackProxy* GetDefaultObj();

	class UShowLoginUICallbackProxy* ShowExternalLoginUI();
};

// 0xF8 (0x650 - 0x558)
// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_303[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DestSessionId;                                     // 0x588(0x10)(OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSpectatorReservation                 PendingReservation;                                // 0x598(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class ESpectatorClientRequestType       RequestType;                                       // 0x620(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPendingReservationSent;                           // 0x621(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCancelReservation;                                // 0x622(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_306[0x2D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASpectatorBeaconClient* GetDefaultObj();

	struct FSpectatorReservation ServerReservationRequest(class FString* SessionId);
	struct FUniqueNetIdRepl ServerCancelReservationRequest();
	int32 ClientSendReservationUpdates();
	void ClientSendReservationFull();
	enum class ESpectatorReservationResult ClientReservationResponse();
	enum class ESpectatorReservationResult ClientCancelReservationResponse();
};

// 0x78 (0x568 - 0x4F0)
// Class OnlineSubsystemUtils.SpectatorBeaconHost
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                 State;                                             // 0x4F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_30B[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bLogoutOnSessionTimeout;                           // 0x558(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_30C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SessionTimeoutSecs;                                // 0x55C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	float                                        TravelSessionTimeoutSecs;                          // 0x560(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_30F[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASpectatorBeaconHost* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, Transient, GlobalConfig, SubobjectReference)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxReservations;                                   // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRestrictCrossConsole;                             // 0x38(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_315[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSpectatorReservation>         Reservations;                                      // 0x40(0x10)(ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_316[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USpectatorBeaconState* GetDefaultObj();

};

// 0x0 (0x558 - 0x558)
// Class OnlineSubsystemUtils.TestBeaconClient
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static class UClass* StaticClass();
	static class ATestBeaconClient* GetDefaultObj();

	void ServerPong();
	void ClientPing();
};

// 0x0 (0x4F0 - 0x4F0)
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

	class UObject* RegisterTurnBasedMatchInterfaceObject(class APlayerController** PlayerController, class UObject** Object);
	class FString GetPlayerDisplayName(class APlayerController** PlayerController, const class FString& MatchID);
	int32 GetMyPlayerIndex(class APlayerController** PlayerController, const class FString& MatchID);
	bool GetIsMyTurn(class APlayerController** PlayerController, const class FString& MatchID);
};

// 0x60 (0x820 - 0x7C0)
// Class OnlineSubsystemUtils.VoipListenerSynthComponent
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	uint8                                        Pad_329[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVoipListenerSynthComponent* GetDefaultObj();

	bool IsIdling();
};

// 0x158 (0x180 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	uint8                                        Pad_32A[0x158];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

}


