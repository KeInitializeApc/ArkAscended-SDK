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

// 0x8 (0x8 - 0x0)
// Function UI_HelpPage.UI_HelpPage_C.GetSizeboxForExtraHandheldScaling
struct UUI_HelpPage_C_GetSizeboxForExtraHandheldScaling_Params
{
public:
	class USizeBox*                              ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_HelpPage.UI_HelpPage_C.GetWidgetToScaleForHandheld
struct UUI_HelpPage_C_GetWidgetToScaleForHandheld_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_HelpPage.UI_HelpPage_C.BPHandleDockedModeChange
struct UUI_HelpPage_C_BPHandleDockedModeChange_Params
{
public:
	bool                                         bIsDocked;                                         // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_HelpPage.UI_HelpPage_C.ExecuteUbergraph_UI_HelpPage
struct UUI_HelpPage_C_ExecuteUbergraph_UI_HelpPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         K2Node_Event_bIsDocked;                            // 0x15(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3124[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x18(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;      // 0x20(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FMargin                               K2Node_Select_Default;                             // 0x28(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

}
}


