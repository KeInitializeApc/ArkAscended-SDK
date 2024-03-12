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

// 0x1 (0x1 - 0x0)
// Function ClampSliderPercentWIdget.ClampSliderPercentWIdget_C.SetEnabled
struct UClampSliderPercentWIdget_C_SetEnabled_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Edit, ConstParm, ExportObject, Parm, Transient, Config, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function ClampSliderPercentWIdget.ClampSliderPercentWIdget_C.ExecuteUbergraph_ClampSliderPercentWIdget
struct UClampSliderPercentWIdget_C_ExecuteUbergraph_ClampSliderPercentWIdget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_CustomEvent_Enable;                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_238B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x8(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


