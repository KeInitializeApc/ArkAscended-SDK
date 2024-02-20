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
	int32                                        PublicConnections;                                 // 0x0(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A39[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OculusMatchmakingPool;                             // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UOculusCreateSessionCallbackProxy*     ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
struct UOculusEntitlementCallbackProxy_VerifyEntitlement_Params
{
public:
	class UOculusEntitlementCallbackProxy*       ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
struct UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params
{
public:
	int32                                        MaxResults;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A74[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UOculusFindSessionsCallbackProxy*      ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
struct UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params
{
public:
	int32                                        MaxResults;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A7A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OculusMatchmakingPool;                             // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UOculusFindSessionsCallbackProxy*      ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
struct UOculusIdentityCallbackProxy_GetOculusIdentity_Params
{
public:
	int32                                        LocalUserNum;                                      // 0x0(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A7F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UOculusIdentityCallbackProxy*          ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
struct UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params
{
public:
	bool                                         bShouldEnqueueInMatchmakingPool;                   // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A8F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UOculusUpdateSessionCallbackProxy*     ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


