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
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.UpdateColorPickerEnabled
struct UUI_ThemeCustomizer_C_UpdateColorPickerEnabled_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x10A (0x10A - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.RestoreToDefaults
struct UUI_ThemeCustomizer_C_RestoreToDefaults_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4B6B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x100)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x108(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x109(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.SaveToHistory
struct UUI_ThemeCustomizer_C_SaveToHistory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4B6C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x114 (0x114 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ForwardHistoryAStep
struct UUI_ThemeCustomizer_C_ForwardHistoryAStep_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4B6D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x108(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10C(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B6E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x110(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x115 (0x115 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.RevertBackAStepInHistory
struct UUI_ThemeCustomizer_C_RevertBackAStepInHistory_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B6F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4B70[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x10(0x100)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x114(0x1)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x228 (0x228 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnKeyDown
struct UUI_ThemeCustomizer_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FInputEvent                           CallFunc_GetInputEventFromKeyEvent_ReturnValue;    // 0x130(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x150(0x18)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_InputEvent_IsLeftControlDown_ReturnValue; // 0x168(0x1)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x169(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x16A(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1; // 0x16B(0x1)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16C(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x16D(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_4B71[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x170(0xB8)(Edit, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ResetHistory
struct UUI_ThemeCustomizer_C_ResetHistory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4B72[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.AddToHistory
struct UUI_ThemeCustomizer_C_AddToHistory_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4B73[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xD(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_4B74[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue_1;               // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x2 (0x2 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.CheckIfHistoryDirty
struct UUI_ThemeCustomizer_C_CheckIfHistoryDirty_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.UpdateSliderActivated
struct UUI_ThemeCustomizer_C_UpdateSliderActivated_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.GetThemeSaveDirectory
struct UUI_ThemeCustomizer_C_GetThemeSaveDirectory_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                CallFunc_GetProjectDirectory_ReturnValue;          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.Tick
struct UUI_ThemeCustomizer_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnColorChangedByColorPicker
struct UUI_ThemeCustomizer_C_OnColorChangedByColorPicker_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x98 (0x98 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ExecuteUbergraph_UI_ThemeCustomizer
struct UUI_ThemeCustomizer_C_ExecuteUbergraph_UI_ThemeCustomizer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4B75[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          CallFunc_GetColor_Color;                           // 0x18(0x10)(Edit, ExportObject, Net, OutParm, Transient, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x49(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4B76[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4C(0x38)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x84(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


