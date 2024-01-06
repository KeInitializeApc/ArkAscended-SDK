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

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
struct ITurnBasedMatchInterface_OnMatchReceivedTurn_Params
{
public:
	class FString                                Match;                                             // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDidBecomeActive;                                  // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1[0x7];                                        // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
struct ITurnBasedMatchInterface_OnMatchEnded_Params
{
public:
	class FString                                Match;                                             // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


