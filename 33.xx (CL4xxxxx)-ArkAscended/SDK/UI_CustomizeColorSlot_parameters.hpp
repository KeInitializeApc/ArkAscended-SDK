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

// 0x101 (0x101 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.GetCurrentTheme
struct UUI_CustomizeColorSlot_C_GetCurrentTheme_Params
{
public:
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x0(0x100)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.GetColor
struct UUI_CustomizeColorSlot_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x11 (0x11 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.SetColor
struct UUI_CustomizeColorSlot_C_SetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.PreConstruct
struct UUI_CustomizeColorSlot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x5C (0x5C - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.ExecuteUbergraph_UI_CustomizeColorSlot
struct UUI_CustomizeColorSlot_C_ExecuteUbergraph_UI_CustomizeColorSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_36E8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_ThemeCustomizer_C*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x20(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_36EA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CallFunc_GetColor_Color;                           // 0x3C(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          CallFunc_GetColor_Color_1;                         // 0x4C(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
};

}
}


