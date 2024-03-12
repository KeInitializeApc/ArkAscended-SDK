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

// 0x9 (0x9 - 0x0)
// Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed
struct IEggIncubatorInterface_C_IsEggItemAllowed_Params
{
public:
	class UPrimalItemConsumable_Egg_C*           EggItem;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, SubobjectReference)
	bool                                         IsAllowed;                                         // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
struct IEggIncubatorInterface_C_GetItemDisplaySlot_Params
{
public:
	class UPrimalItem*                           ForItem;                                           // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        InSlot;                                            // 0x8(0x4)(ConstParm, BlueprintVisible, Net, Transient, SubobjectReference)
	bool                                         SlotFound;                                         // 0xC(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, SubobjectReference)
};

}
}


