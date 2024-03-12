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
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x0(0x100)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
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
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.PreConstruct
struct UUI_CustomizeColorSlot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x5C (0x5C - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.ExecuteUbergraph_UI_CustomizeColorSlot
struct UUI_CustomizeColorSlot_C_ExecuteUbergraph_UI_CustomizeColorSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4E2D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_ThemeCustomizer_C*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x20(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 CallFunc_Array_Get_Item;                           // 0x30(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4E2E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CallFunc_GetColor_Color;                           // 0x3C(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          CallFunc_GetColor_Color_1;                         // 0x4C(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
};

}
}


