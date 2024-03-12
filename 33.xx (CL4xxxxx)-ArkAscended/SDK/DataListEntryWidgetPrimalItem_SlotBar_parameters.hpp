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

// 0x3C (0x3C - 0x0)
// Function DataListEntryWidgetPrimalItem_SlotBar.DataListEntryWidgetPrimalItem_SlotBar_C.Tick
struct UDataListEntryWidgetPrimalItem_SlotBar_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function DataListEntryWidgetPrimalItem_SlotBar.DataListEntryWidgetPrimalItem_SlotBar_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_SlotBar
struct UDataListEntryWidgetPrimalItem_SlotBar_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_SlotBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetShowExtraCanvasBar_IsVisible;          // 0x4(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_576A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetShowExtraCanvasBar_Percent;            // 0x8(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          CallFunc_GetShowExtraCanvasBar_BarColor;           // 0xC(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1C(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x54(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


