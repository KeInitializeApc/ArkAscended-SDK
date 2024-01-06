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
// Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
struct UOculusCreateSessionCallbackProxy_CreateSession_Params
{
public:
	int32                                        PublicConnections;                                 // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_832[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OculusMatchmakingPool;                             // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UOculusCreateSessionCallbackProxy*     ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
struct UOculusEntitlementCallbackProxy_VerifyEntitlement_Params
{
public:
	class UOculusEntitlementCallbackProxy*       ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
struct UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params
{
public:
	int32                                        MaxResults;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_84D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UOculusFindSessionsCallbackProxy*      ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
struct UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params
{
public:
	int32                                        MaxResults;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_85D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OculusMatchmakingPool;                             // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UOculusFindSessionsCallbackProxy*      ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
struct UOculusIdentityCallbackProxy_GetOculusIdentity_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_872[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UOculusIdentityCallbackProxy*          ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
struct UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params
{
public:
	bool                                         bShouldEnqueueInMatchmakingPool;                   // 0x0(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_88B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UOculusUpdateSessionCallbackProxy*     ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


