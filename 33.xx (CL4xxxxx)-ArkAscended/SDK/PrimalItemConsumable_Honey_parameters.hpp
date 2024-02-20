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

// 0x19 (0x19 - 0x0)
// Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.BPNotifyDropped
struct UPrimalItemConsumable_Honey_C_BPNotifyDropped_Params
{
public:
	class APrimalCharacter*                      FromCharacter;                                     // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWasThrown;                                        // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3422[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


