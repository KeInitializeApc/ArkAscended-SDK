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
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10A (0x10A - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.RestoreToDefaults
struct UUI_ThemeCustomizer_C_RestoreToDefaults_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_344D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x100)(ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x108(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x109(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.SaveToHistory
struct UUI_ThemeCustomizer_C_SaveToHistory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_345B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x114 (0x114 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ForwardHistoryAStep
struct UUI_ThemeCustomizer_C_ForwardHistoryAStep_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3466[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x108(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_346C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x110(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x115 (0x115 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.RevertBackAStepInHistory
struct UUI_ThemeCustomizer_C_RevertBackAStepInHistory_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3473[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3474[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x10(0x100)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x114(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x228 (0x228 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnKeyDown
struct UUI_ThemeCustomizer_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FInputEvent                           CallFunc_GetInputEventFromKeyEvent_ReturnValue;    // 0x130(0x20)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x150(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_InputEvent_IsLeftControlDown_ReturnValue; // 0x168(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x169(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x16A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1; // 0x16B(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16C(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x16D(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_347B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x170(0xB8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ResetHistory
struct UUI_ThemeCustomizer_C_ResetHistory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3482[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.AddToHistory
struct UUI_ThemeCustomizer_C_AddToHistory_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3485[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xD(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3486[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue_1;               // 0x14(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x2 (0x2 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.CheckIfHistoryDirty
struct UUI_ThemeCustomizer_C_CheckIfHistoryDirty_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.UpdateSliderActivated
struct UUI_ThemeCustomizer_C_UpdateSliderActivated_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.GetThemeSaveDirectory
struct UUI_ThemeCustomizer_C_GetThemeSaveDirectory_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_GetProjectDirectory_ReturnValue;          // 0x10(0x10)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.Tick
struct UUI_ThemeCustomizer_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
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
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_348D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          CallFunc_GetColor_Color;                           // 0x18(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x49(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_348E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4C(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x84(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

}
}


