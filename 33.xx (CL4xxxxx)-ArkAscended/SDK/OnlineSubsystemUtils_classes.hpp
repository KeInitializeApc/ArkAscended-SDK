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

	class UObject* GetCachedAchievementProgress(class APlayerController** PlayerController, class FName AchievementID, bool bFoundID, float* Progress);
	class UObject* GetCachedAchievementDescription(class APlayerController** PlayerController, class FName AchievementID, bool bFoundID, class FText Title, class FText LockedDescription, class FText UnlockedDescription, bool bHidden);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18A[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAchievementQueryCallbackProxy* GetDefaultObj();

	class UObject* CacheAchievements(class APlayerController** PlayerController, class UAchievementQueryCallbackProxy* ReturnValue);
	class UObject* CacheAchievementDescriptions(class APlayerController** PlayerController, class UAchievementQueryCallbackProxy* ReturnValue);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18D[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAchievementWriteCallbackProxy* GetDefaultObj();

	class UObject* WriteAchievementProgress(class APlayerController** PlayerController, class FName AchievementName, float* Progress, int32* UserTag, class UAchievementWriteCallbackProxy* ReturnValue);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.ConnectionCallbackProxy
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_191[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UConnectionCallbackProxy* GetDefaultObj();

	class UObject* ConnectToService(class APlayerController** PlayerController, class UConnectionCallbackProxy* ReturnValue);
};

// 0x68 (0x98 - 0x30)
// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_198[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCreateSessionCallbackProxy* GetDefaultObj();

	class UObject* CreateSession(class APlayerController** PlayerController, int32 PublicConnections, bool bUseLAN, class UCreateSessionCallbackProxy* ReturnValue);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A1[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDestroySessionCallbackProxy* GetDefaultObj();

	class UObject* DestroySession(class APlayerController** PlayerController, class UDestroySessionCallbackProxy* ReturnValue);
};

// 0x50 (0x80 - 0x30)
// Class OnlineSubsystemUtils.EndMatchCallbackProxy
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B0[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEndMatchCallbackProxy* GetDefaultObj();

	class UObject* EndMatch(class APlayerController** PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, const class FString& MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome, class UEndMatchCallbackProxy* ReturnValue);
};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.EndTurnCallbackProxy
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B7[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UEndTurnCallbackProxy* GetDefaultObj();

	TScriptInterface<class ITurnBasedMatchInterface> EndTurn(class APlayerController** PlayerController, const class FString& MatchID, class UEndTurnCallbackProxy* ReturnValue);
};

// 0x60 (0x90 - 0x30)
// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CC[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFindSessionsCallbackProxy* GetDefaultObj();

	struct FBlueprintSessionResult GetServerName(const class FString& ReturnValue);
	struct FBlueprintSessionResult GetPingInMs(int32 ReturnValue);
	struct FBlueprintSessionResult GetMaxPlayers(int32 ReturnValue);
	struct FBlueprintSessionResult GetCurrentPlayers(int32 ReturnValue);
	class UObject* FindSessions(class APlayerController** PlayerController, int32 MaxResults, bool bUseLAN, class UFindSessionsCallbackProxy* ReturnValue);
};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D8[0x38];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFindTurnBasedMatchCallbackProxy* GetDefaultObj();

	class UObject* FindTurnBasedMatch(class APlayerController** PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32* MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches, class UFindTurnBasedMatchCallbackProxy* ReturnValue);
};

// 0x80 (0xA8 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E6[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseCallbackProxy2* GetDefaultObj();

	void CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController** PlayerController, class UInAppPurchaseCallbackProxy2* ReturnValue);
	void CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController** PlayerController, class UInAppPurchaseCallbackProxy2* ReturnValue);
	void CreateProxyObjectForInAppPurchase(class APlayerController** PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest, class UInAppPurchaseCallbackProxy2* ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EA[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseQueryCallbackProxy2* GetDefaultObj();

	void CreateProxyObjectForInAppPurchaseQuery(class APlayerController** PlayerController, const TArray<class FString>& ProductIdentifiers, class UInAppPurchaseQueryCallbackProxy2* ReturnValue);
};

// 0x88 (0xB0 - 0x28)
// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE[0x68];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UInAppPurchaseRestoreCallbackProxy2* GetDefaultObj();

	void CreateProxyObjectForInAppPurchaseRestore(const TArray<struct FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController** PlayerController, class UInAppPurchaseRestoreCallbackProxy2* ReturnValue);
};

// 0xD0 (0x1EB8 - 0x1DE8)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_1F0[0xB4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SocketErrorDisconnectDelay;                        // 0x1E9C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F1[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIpConnection* GetDefaultObj();

};

// 0xB0 (0x840 - 0x790)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x790(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x790(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_13 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1F2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       MaxPortCountToTry;                                 // 0x794(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_1F3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       ServerDesiredSocketReceiveBufferBytes;             // 0x79C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint32                                       ServerDesiredSocketSendBufferBytes;                // 0x7A0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint32                                       ClientDesiredSocketReceiveBufferBytes;             // 0x7A4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint32                                       ClientDesiredSocketSendBufferBytes;                // 0x7A8(0x4)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       MaxSecondsInReceive;                               // 0x7B0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NbPacketsBetweenReceiveTimeTest;                   // 0x7B8(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        ResolutionConnectionTimeout;                       // 0x7BC(0x4)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_1F5[0x80];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UIpNetDriver* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FB[0x148];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UJoinSessionCallbackProxy* GetDefaultObj();

	class UObject* JoinSession(class APlayerController** PlayerController, const struct FBlueprintSessionResult& SearchResult, class UJoinSessionCallbackProxy* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULeaderboardBlueprintLibrary* GetDefaultObj();

	class FName WriteLeaderboardInteger(class APlayerController** PlayerController, int32 StatValue, bool ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_205[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULeaderboardFlushCallbackProxy* GetDefaultObj();

	void CreateProxyObjectForFlush(class APlayerController** PlayerController, class FName SessionName, class ULeaderboardFlushCallbackProxy* ReturnValue);
};

// 0x70 (0x98 - 0x28)
// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x38(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_208[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULeaderboardQueryCallbackProxy* GetDefaultObj();

	class FName CreateProxyObjectForIntQuery(class APlayerController** PlayerController, class ULeaderboardQueryCallbackProxy* ReturnValue);
};

// 0x38 (0x68 - 0x30)
// Class OnlineSubsystemUtils.LogoutCallbackProxy
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_211[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULogoutCallbackProxy* GetDefaultObj();

	class UObject* Logout(class APlayerController** PlayerController, class ULogoutCallbackProxy* ReturnValue);
};

// 0x30 (0x4F8 - 0x4C8)
// Class OnlineSubsystemUtils.OnlineBeacon
class AOnlineBeacon : public AActor
{
public:
	uint8                                        Pad_212[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        BeaconConnectionInitialTimeout;                    // 0x4D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        BeaconConnectionTimeout;                           // 0x4D4(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UNetDriver*                            NetDriver;                                         // 0x4D8(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_213[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeacon* GetDefaultObj();

};

// 0x60 (0x558 - 0x4F8)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*               BeaconOwner;                                       // 0x4F8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UNetConnection*                        BeaconConnection;                                  // 0x500(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0x508(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_217[0x4F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeaconClient* GetDefaultObj();

	void ClientOnConnected();
};

// 0x110 (0x608 - 0x4F8)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0x4F8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         bAuthRequired;                                     // 0x4FC(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       MaxAuthTokenSize;                                  // 0x500(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21B[0x54];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x558(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_21C[0xA0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AOnlineBeaconHost* GetDefaultObj();

};

// 0x28 (0x4F0 - 0x4C8)
// Class OnlineSubsystemUtils.OnlineBeaconHostObject
class AOnlineBeaconHostObject : public AActor
{
public:
	class FString                                BeaconTypeName;                                    // 0x4C8(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UClass*                                ClientBeaconActorClass;                            // 0x4D8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class AOnlineBeaconClient*>           ClientActors;                                      // 0x4E0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AOnlineBeaconHostObject* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	TMap<class FName, class FName>               MappedUniqueNetIdTypes;                            // 0x28(0x50)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class FName>                          CompatibleUniqueNetIdTypes;                        // 0x78(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  VoiceSubsystemNameOverride;                        // 0x88(0x8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_222[0xF8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_223[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPIELoginSettingsInternal>     Logins;                                            // 0x40(0x10)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_224[0x1B0];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsFromInvite;                                     // 0x1D8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHandlingDisconnect;                               // 0x1D9(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_225[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineSessionClient* GetDefaultObj();

};

// 0xC8 (0x620 - 0x558)
// Class OnlineSubsystemUtils.PartyBeaconClient
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_23B[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DestSessionId;                                     // 0x588(0x10)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPartyReservation                     PendingReservation;                                // 0x598(0x58)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EClientRequestType                RequestType;                                       // 0x5F0(0x1)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bPendingReservationSent;                           // 0x5F1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bCancelReservation;                                // 0x5F2(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_23D[0x2D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APartyBeaconClient* GetDefaultObj();

	class FString ServerUpdateReservationRequest(const struct FPartyReservation& ReservationUpdate);
	class FString ServerReservationRequest(const struct FPartyReservation& Reservation);
	class FString ServerRemoveMemberFromReservationRequest(const struct FPartyReservation& ReservationUpdate);
	struct FUniqueNetIdRepl ServerCancelReservationRequest();
	class FString ServerAddOrUpdateReservationRequest(const struct FPartyReservation& Reservation);
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse);
};

// 0x78 (0x568 - 0x4F0)
// Class OnlineSubsystemUtils.PartyBeaconHost
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                     State;                                             // 0x4F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_241[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bLogoutOnSessionTimeout;                           // 0x558(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_247[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SessionTimeoutSecs;                                // 0x55C(0x4)(Edit, BlueprintVisible, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        TravelSessionTimeoutSecs;                          // 0x560(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_248[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class APartyBeaconHost* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class OnlineSubsystemUtils.PartyBeaconState
class UPartyBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Config, EditConst, SubobjectReference)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxReservations;                                   // 0x34(0x4)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumTeams;                                          // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumPlayersPerTeam;                                 // 0x3C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  TeamAssignmentMethod;                              // 0x40(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        ReservedHostTeamNum;                               // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        ForceTeamNum;                                      // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bRestrictCrossConsole;                             // 0x50(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_249[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        PlatformCrossplayRestrictions;                     // 0x58(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                               // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableRemovalRequests;                            // 0x78(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_24C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPartyReservation>             Reservations;                                      // 0x80(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_24D[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UPartyBeaconState* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25B[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UQuitMatchCallbackProxy* GetDefaultObj();

	class UObject* QuitMatch(class APlayerController** PlayerController, const class FString& MatchID, enum class EMPMatchOutcome* Outcome, int32* TurnTimeoutInSeconds, class UQuitMatchCallbackProxy* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(Edit, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_262[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UShowLoginUICallbackProxy* GetDefaultObj();

	class UObject* ShowExternalLoginUI(class APlayerController** InPlayerController, class UShowLoginUICallbackProxy* ReturnValue);
};

// 0xF8 (0x650 - 0x558)
// Class OnlineSubsystemUtils.SpectatorBeaconClient
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_272[0x30];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DestSessionId;                                     // 0x588(0x10)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSpectatorReservation                 PendingReservation;                                // 0x598(0x88)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ESpectatorClientRequestType       RequestType;                                       // 0x620(0x1)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bPendingReservationSent;                           // 0x621(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bCancelReservation;                                // 0x622(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_274[0x2D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASpectatorBeaconClient* GetDefaultObj();

	class FString ServerReservationRequest(const struct FSpectatorReservation& Reservation);
	struct FUniqueNetIdRepl ServerCancelReservationRequest();
	void ClientSendReservationUpdates(int32 NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse);
};

// 0x78 (0x568 - 0x4F0)
// Class OnlineSubsystemUtils.SpectatorBeaconHost
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                 State;                                             // 0x4F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_276[0x60];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bLogoutOnSessionTimeout;                           // 0x558(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_277[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SessionTimeoutSecs;                                // 0x55C(0x4)(Edit, BlueprintVisible, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        TravelSessionTimeoutSecs;                          // 0x560(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_278[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASpectatorBeaconHost* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class OnlineSubsystemUtils.SpectatorBeaconState
class USpectatorBeaconState : public UObject
{
public:
	class FName                                  SessionName;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Config, EditConst, SubobjectReference)
	int32                                        NumConsumedReservations;                           // 0x30(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxReservations;                                   // 0x34(0x4)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bRestrictCrossConsole;                             // 0x38(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_27C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSpectatorReservation>         Reservations;                                      // 0x40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_27D[0x10];                                     // Fixing Size Of Struct > TateDumper <

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
	class UObject* GetPlayerDisplayName(class APlayerController** PlayerController, const class FString& MatchID, int32* PlayerIndex, class FString* PlayerDisplayName);
	class UObject* GetMyPlayerIndex(class APlayerController** PlayerController, const class FString& MatchID, int32* PlayerIndex);
	class UObject* GetIsMyTurn(class APlayerController** PlayerController, const class FString& MatchID, bool* bIsMyTurn);
};

// 0x60 (0x820 - 0x7C0)
// Class OnlineSubsystemUtils.VoipListenerSynthComponent
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	uint8                                        Pad_29F[0x60];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVoipListenerSynthComponent* GetDefaultObj();

	void IsIdling(bool ReturnValue);
};

// 0x158 (0x180 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	uint8                                        Pad_2A0[0x158];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

}


