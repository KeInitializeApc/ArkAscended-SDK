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

// 0x11 (0x11 - 0x0)
// Function UI_CustomizeSlot_BUTTON_SideMenu.UI_CustomizeSlot_BUTTON_SideMenu_C.SetColor
struct UUI_CustomizeSlot_BUTTON_SideMenu_C_SetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function UI_CustomizeSlot_BUTTON_SideMenu.UI_CustomizeSlot_BUTTON_SideMenu_C.GetColor
struct UUI_CustomizeSlot_BUTTON_SideMenu_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FCFCoreThemeRowData                   CallFunc_GetCurrentTheme_CurrentTheme;             // 0x10(0x100)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


