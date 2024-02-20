#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  AchievementID;                                     // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFoundID;                                          // 0x18(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_179[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Progress;                                          // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  AchievementID;                                     // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFoundID;                                          // 0x18(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_186[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  Title;                                             // 0x20(0x18)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FText                                  LockedDescription;                                 // 0x38(0x18)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  UnlockedDescription;                               // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHidden;                                           // 0x68(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, Config)
	uint8                                        Pad_187[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UAchievementQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UAchievementQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  AchievementName;                                   // 0x10(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Progress;                                          // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	int32                                        UserTag;                                           // 0x1C(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class UAchievementWriteCallbackProxy*        ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UConnectionCallbackProxy_ConnectToService_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UConnectionCallbackProxy*              ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct UCreateSessionCallbackProxy_CreateSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        PublicConnections;                                 // 0x10(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseLAN;                                           // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_197[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UCreateSessionCallbackProxy*           ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct UDestroySessionCallbackProxy_DestroySession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UDestroySessionCallbackProxy*          ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct UEndMatchCallbackProxy_EndMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TScriptInterface<class ITurnBasedMatchInterface> MatchActor;                                        // 0x10(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                MatchID;                                           // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
	enum class EMPMatchOutcome                   LocalPlayerOutcome;                                // 0x30(0x1)(Edit, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EMPMatchOutcome                   OtherPlayersOutcome;                               // 0x31(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AF[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UEndMatchCallbackProxy*                ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct UEndTurnCallbackProxy_EndTurn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                MatchID;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
	TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface;                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	class UEndTurnCallbackProxy*                 ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct UFindSessionsCallbackProxy_GetServerName_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	class FString                                ReturnValue;                                       // 0x120(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct UFindSessionsCallbackProxy_GetPingInMs_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x120(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1BD[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x120(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C2[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x120(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1C6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct UFindSessionsCallbackProxy_FindSessions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        MaxResults;                                        // 0x10(0x4)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseLAN;                                           // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CB[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UFindSessionsCallbackProxy*            ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TScriptInterface<class ITurnBasedMatchInterface> MatchActor;                                        // 0x10(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MinPlayers;                                        // 0x20(0x4)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MaxPlayers;                                        // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        PlayerGroup;                                       // 0x28(0x4)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ShowExistingMatches;                               // 0x2C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UFindTurnBasedMatchCallbackProxy*      ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FInAppPurchaseProductRequest2         ProductRequest;                                    // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
struct UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<class FString>                        ProductIdentifiers;                                // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UInAppPurchaseQueryCallbackProxy2*     ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
struct UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params
{
public:
	TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags;                            // 0x0(0x10)(Edit, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UInAppPurchaseRestoreCallbackProxy2*   ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x138 (0x138 - 0x0)
// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct UJoinSessionCallbackProxy_JoinSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FBlueprintSessionResult               SearchResult;                                      // 0x10(0x120)(Edit, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UJoinSessionCallbackProxy*             ReturnValue;                                       // 0x130(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  StatName;                                          // 0x8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StatValue;                                         // 0x10(0x4)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_201[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  SessionName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Config, EditConst, SubobjectReference)
	class ULeaderboardFlushCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  StatName;                                          // 0x8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class ULeaderboardQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct ULogoutCallbackProxy_Logout_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class ULogoutCallbackProxy*                  ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct APartyBeaconClient_ServerUpdateReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPartyReservation                     ReservationUpdate;                                 // 0x10(0x58)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct APartyBeaconClient_ServerReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPartyReservation                     Reservation;                                       // 0x10(0x58)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
struct APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPartyReservation                     ReservationUpdate;                                 // 0x10(0x58)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct APartyBeaconClient_ServerCancelReservationRequest_Params
{
public:
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x0(0x30)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
struct APartyBeaconClient_ServerAddOrUpdateReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPartyReservation                     Reservation;                                       // 0x10(0x58)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
struct APartyBeaconClient_ClientSendReservationUpdates_Params
{
public:
	int32                                        NumRemainingReservations;                          // 0x0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct APartyBeaconClient_ClientReservationResponse_Params
{
public:
	enum class EPartyReservationResult           ReservationResponse;                               // 0x0(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
struct APartyBeaconClient_ClientCancelReservationResponse_Params
{
public:
	enum class EPartyReservationResult           ReservationResponse;                               // 0x0(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct UQuitMatchCallbackProxy_QuitMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                MatchID;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
	enum class EMPMatchOutcome                   Outcome;                                           // 0x20(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_259[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        TurnTimeoutInSeconds;                              // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UQuitMatchCallbackProxy*               ReturnValue;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     InPlayerController;                                // 0x8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UShowLoginUICallbackProxy*             ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
struct ASpectatorBeaconClient_ServerReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSpectatorReservation                 Reservation;                                       // 0x10(0x88)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
struct ASpectatorBeaconClient_ServerCancelReservationRequest_Params
{
public:
	struct FUniqueNetIdRepl                      Spectator;                                         // 0x0(0x30)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
struct ASpectatorBeaconClient_ClientSendReservationUpdates_Params
{
public:
	int32                                        NumRemainingReservations;                          // 0x0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
struct ASpectatorBeaconClient_ClientReservationResponse_Params
{
public:
	enum class ESpectatorReservationResult       ReservationResponse;                               // 0x0(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
struct ASpectatorBeaconClient_ClientCancelReservationResponse_Params
{
public:
	enum class ESpectatorReservationResult       ReservationResponse;                               // 0x0(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UObject*                               Object;                                            // 0x10(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                MatchID;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
	int32                                        PlayerIndex;                                       // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_289[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                PlayerDisplayName;                                 // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                MatchID;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
	int32                                        PlayerIndex;                                       // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_294[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                MatchID;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, Config, EditConst, SubobjectReference)
	bool                                         bIsMyTurn;                                         // 0x20(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_29C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
struct UVoipListenerSynthComponent_IsIdling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


