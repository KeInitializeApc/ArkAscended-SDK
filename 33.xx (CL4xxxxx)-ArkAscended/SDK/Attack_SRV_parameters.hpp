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

// 0x8 (0x8 - 0x0)
// Function Attack_SRV.Attack_SRV_C.ReceiveActivation
struct UAttack_SRV_C_ReceiveActivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Attack_SRV.Attack_SRV_C.ReceiveDeactivation
struct UAttack_SRV_C_ReceiveDeactivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Attack_SRV.Attack_SRV_C.ExecuteUbergraph_Attack_SRV
struct UAttack_SRV_C_ExecuteUbergraph_Attack_SRV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_794[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x10(0x8)(Edit, ConstParm, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

}
}


