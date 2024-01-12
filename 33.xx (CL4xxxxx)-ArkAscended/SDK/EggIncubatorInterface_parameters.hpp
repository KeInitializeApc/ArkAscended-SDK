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
	class UPrimalItemConsumable_Egg_C*           EggItem;                                           // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         IsAllowed;                                         // 0x8(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
struct IEggIncubatorInterface_C_GetItemDisplaySlot_Params
{
public:
	class UPrimalItem*                           ForItem;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InSlot;                                            // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         SlotFound;                                         // 0xC(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


