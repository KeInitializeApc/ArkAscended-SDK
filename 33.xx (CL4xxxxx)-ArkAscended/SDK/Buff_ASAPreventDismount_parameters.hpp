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
	bool                                         FromRider;                                         // 0x0(0x1)(Edit, BlueprintReadOnly, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCancelForceLand;                                  // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         SpawnDinoDefaultController;                        // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_36A6[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        OverrideUnboardDirection;                          // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bForceEvenIfBuffPreventsClear;                     // 0x8(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFromUse;                                          // 0x9(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


