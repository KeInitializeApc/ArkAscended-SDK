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
	class UPrimalItemConsumable_Egg_C*           EggItem;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         IsAllowed;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
struct IEggIncubatorInterface_C_GetItemDisplaySlot_Params
{
public:
	class UPrimalItem*                           ForItem;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        InSlot;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         SlotFound;                                         // 0xC(0x1)(ConstParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


