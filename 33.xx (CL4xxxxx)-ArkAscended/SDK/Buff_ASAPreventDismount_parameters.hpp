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

// 0xB (0xB - 0x0)
// Function Buff_ASAPreventDismount.Buff_ASAPreventDismount_C.BPBypassPreventDinoDismount
struct ABuff_ASAPreventDismount_C_BPBypassPreventDinoDismount_Params
{
public:
	bool                                         FromRider;                                         // 0x0(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCancelForceLand;                                  // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         SpawnDinoDefaultController;                        // 0x2(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BD1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        OverrideUnboardDirection;                          // 0x4(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bForceEvenIfBuffPreventsClear;                     // 0x8(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFromUse;                                          // 0x9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xA(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


