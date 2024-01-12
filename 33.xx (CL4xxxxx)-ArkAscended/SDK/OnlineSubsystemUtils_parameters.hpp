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
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FName                                  AchievementID;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bFoundID;                                          // 0x18(0x1)(ConstParm, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_219[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Progress;                                          // 0x1C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FName                                  AchievementID;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bFoundID;                                          // 0x18(0x1)(ConstParm, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_21F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  Title;                                             // 0x20(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FText                                  LockedDescription;                                 // 0x38(0x18)(ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  UnlockedDescription;                               // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHidden;                                           // 0x68(0x1)(ConstParm, ExportObject, OutParm, Config)
	uint8                                        Pad_221[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UAchievementQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UAchievementQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FName                                  AchievementName;                                   // 0x10(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        Progress;                                          // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	int32                                        UserTag;                                           // 0x1C(0x4)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UAchievementWriteCallbackProxy*        ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UConnectionCallbackProxy_ConnectToService_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UConnectionCallbackProxy*              ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct UCreateSessionCallbackProxy_CreateSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	int32                                        PublicConnections;                                 // 0x10(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseLAN;                                           // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_23B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UCreateSessionCallbackProxy*           ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct UDestroySessionCallbackProxy_DestroySession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UDestroySessionCallbackProxy*          ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct UEndMatchCallbackProxy_EndMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	TScriptInterface<class ITurnBasedMatchInterface> MatchActor;                                        // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                MatchID;                                           // 0x20(0x10)(ConstParm, ExportObject, Parm, Transient, GlobalConfig, SubobjectReference)
	enum class EMPMatchOutcome                   LocalPlayerOutcome;                                // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMPMatchOutcome                   OtherPlayersOutcome;                               // 0x31(0x1)(BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_24C[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UEndMatchCallbackProxy*                ReturnValue;                                       // 0x38(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct UEndTurnCallbackProxy_EndTurn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FString                                MatchID;                                           // 0x10(0x10)(ConstParm, ExportObject, Parm, Transient, GlobalConfig, SubobjectReference)
	TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface;                           // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, EditConst)
	class UEndTurnCallbackProxy*                 ReturnValue;                                       // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct UFindSessionsCallbackProxy_GetServerName_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	class FString                                ReturnValue;                                       // 0x120(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct UFindSessionsCallbackProxy_GetPingInMs_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x120(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_25D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x120(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_260[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x120(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_261[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct UFindSessionsCallbackProxy_FindSessions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	int32                                        MaxResults;                                        // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseLAN;                                           // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_262[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UFindSessionsCallbackProxy*            ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	TScriptInterface<class ITurnBasedMatchInterface> MatchActor;                                        // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MinPlayers;                                        // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxPlayers;                                        // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        PlayerGroup;                                       // 0x28(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ShowExistingMatches;                               // 0x2C(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_266[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UFindTurnBasedMatchCallbackProxy*      ReturnValue;                                       // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	struct FInAppPurchaseProductRequest2         ProductRequest;                                    // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
struct UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	TArray<class FString>                        ProductIdentifiers;                                // 0x8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UInAppPurchaseQueryCallbackProxy2*     ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
struct UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params
{
public:
	TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags;                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UInAppPurchaseRestoreCallbackProxy2*   ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x138 (0x138 - 0x0)
// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct UJoinSessionCallbackProxy_JoinSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	struct FBlueprintSessionResult               SearchResult;                                      // 0x10(0x120)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UJoinSessionCallbackProxy*             ReturnValue;                                       // 0x130(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FName                                  StatName;                                          // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        StatValue;                                         // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_27D[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FName                                  SessionName;                                       // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, Transient, GlobalConfig, SubobjectReference)
	class ULeaderboardFlushCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FName                                  StatName;                                          // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULeaderboardQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct ULogoutCallbackProxy_Logout_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class ULogoutCallbackProxy*                  ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct APartyBeaconClient_ServerUpdateReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPartyReservation                     ReservationUpdate;                                 // 0x10(0x58)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct APartyBeaconClient_ServerReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPartyReservation                     Reservation;                                       // 0x10(0x58)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
struct APartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPartyReservation                     ReservationUpdate;                                 // 0x10(0x58)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct APartyBeaconClient_ServerCancelReservationRequest_Params
{
public:
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x0(0x30)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
struct APartyBeaconClient_ServerAddOrUpdateReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPartyReservation                     Reservation;                                       // 0x10(0x58)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
struct APartyBeaconClient_ClientSendReservationUpdates_Params
{
public:
	int32                                        NumRemainingReservations;                          // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct APartyBeaconClient_ClientReservationResponse_Params
{
public:
	enum class EPartyReservationResult           ReservationResponse;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
struct APartyBeaconClient_ClientCancelReservationResponse_Params
{
public:
	enum class EPartyReservationResult           ReservationResponse;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct UQuitMatchCallbackProxy_QuitMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FString                                MatchID;                                           // 0x10(0x10)(ConstParm, ExportObject, Parm, Transient, GlobalConfig, SubobjectReference)
	enum class EMPMatchOutcome                   Outcome;                                           // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        TurnTimeoutInSeconds;                              // 0x24(0x4)(BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UQuitMatchCallbackProxy*               ReturnValue;                                       // 0x28(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     InPlayerController;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UShowLoginUICallbackProxy*             ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
struct ASpectatorBeaconClient_ServerReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSpectatorReservation                 Reservation;                                       // 0x10(0x88)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
struct ASpectatorBeaconClient_ServerCancelReservationRequest_Params
{
public:
	struct FUniqueNetIdRepl                      Spectator;                                         // 0x0(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
struct ASpectatorBeaconClient_ClientSendReservationUpdates_Params
{
public:
	int32                                        NumRemainingReservations;                          // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
struct ASpectatorBeaconClient_ClientReservationResponse_Params
{
public:
	enum class ESpectatorReservationResult       ReservationResponse;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
struct ASpectatorBeaconClient_ClientCancelReservationResponse_Params
{
public:
	enum class ESpectatorReservationResult       ReservationResponse;                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class UObject*                               Object;                                            // 0x10(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FString                                MatchID;                                           // 0x10(0x10)(ConstParm, ExportObject, Parm, Transient, GlobalConfig, SubobjectReference)
	int32                                        PlayerIndex;                                       // 0x20(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_325[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                PlayerDisplayName;                                 // 0x28(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FString                                MatchID;                                           // 0x10(0x10)(ConstParm, ExportObject, Parm, Transient, GlobalConfig, SubobjectReference)
	int32                                        PlayerIndex;                                       // 0x20(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_327[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class APlayerController*                     PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
	class FString                                MatchID;                                           // 0x10(0x10)(ConstParm, ExportObject, Parm, Transient, GlobalConfig, SubobjectReference)
	bool                                         bIsMyTurn;                                         // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_328[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
struct UVoipListenerSynthComponent_IsIdling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


