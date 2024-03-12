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

// 0xF0 (0xF0 - 0x0)
// Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.BPDroppedItemImpacted
struct ADroppedItemGenericLowQuality_C_BPDroppedItemImpacted_Params
{
public:
	struct FHitResult                            ImpactHitInfo;                                     // 0x0(0xF0)(BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xF8 (0xF8 - 0x0)
// Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.ExecuteUbergraph_DroppedItemGenericLowQuality
struct ADroppedItemGenericLowQuality_C_ExecuteUbergraph_DroppedItemGenericLowQuality_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4D41[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHitResult                            K2Node_Event_impactHitInfo;                        // 0x8(0xF0)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


