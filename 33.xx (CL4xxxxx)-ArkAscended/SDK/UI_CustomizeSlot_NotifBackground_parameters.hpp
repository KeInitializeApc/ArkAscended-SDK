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
// Function UI_CustomizeSlot_NotifBackground.UI_CustomizeSlot_NotifBackground_C.SetColor
struct UUI_CustomizeSlot_NotifBackground_C_SetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// Function UI_CustomizeSlot_NotifBackground.UI_CustomizeSlot_NotifBackground_C.GetColor
struct UUI_CustomizeSlot_NotifBackground_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FCFCoreThemeRowData                   CallFunc_GetCurrentTheme_CurrentTheme;             // 0x10(0x100)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
};

}
}


