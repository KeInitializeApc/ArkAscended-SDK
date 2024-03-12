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
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.GetCurrentTheme
struct UUI_CustomizeBoolSlot_C_GetCurrentTheme_Params
{
public:
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x0(0x100)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.GetColor
struct UUI_CustomizeBoolSlot_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.SetColor
struct UUI_CustomizeBoolSlot_C_SetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.PreConstruct
struct UUI_CustomizeBoolSlot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_CustomizeBoolSlot_C_BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x2A (0x2A - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.ExecuteUbergraph_UI_CustomizeBoolSlot
struct UUI_CustomizeBoolSlot_C_ExecuteUbergraph_UI_CustomizeBoolSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ECheckBoxState                    Temp_byte_Variable;                                // 0x5(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ECheckBoxState                    Temp_byte_Variable_1;                              // 0x6(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	enum class ECheckBoxState                    K2Node_Select_Default;                             // 0x7(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class UUI_ThemeCustomizer_C*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4C8F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ThemeCustomizer_C*                 CallFunc_Array_Get_Item;                           // 0x20(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x28(0x1)(Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

}
}


