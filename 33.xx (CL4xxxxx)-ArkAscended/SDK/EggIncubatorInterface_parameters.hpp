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
	class UPrimalItemConsumable_Egg_C*           EggItem;                                           // 0x0(0x8)(ConstParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         IsAllowed;                                         // 0x8(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
struct IEggIncubatorInterface_C_GetItemDisplaySlot_Params
{
public:
	class UPrimalItem*                           ForItem;                                           // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InSlot;                                            // 0x8(0x4)(Edit, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         SlotFound;                                         // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

}
}


