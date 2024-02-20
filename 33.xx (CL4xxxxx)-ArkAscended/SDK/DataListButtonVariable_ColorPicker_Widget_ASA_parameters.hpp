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

// 0x19 (0x19 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExtraSetupToggledButton
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExtraSetupToggledButton_Params
{
public:
	bool                                         Toggle;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A60[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UColorPicker_ASA_Widget_C*             K2Node_DynamicCast_AsColor_Picker_ASA_Widget;      // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SetupTextValue
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_SetupTextValue_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class FText                                  ReturnText;                                        // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.PreConstruct
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x78)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.UpdateColorPicker
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_UpdateColorPicker_Params
{
public:
	struct FVector2D                             ColorPickerSliderValue;                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A78[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  K2Node_Event_CommandName;                          // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A7A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x20(0x78)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x98(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xA8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xB8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_3A7D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             K2Node_Event_ColorPickerSliderValue;               // 0xC0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0xD0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UColorPicker_ASA_Widget_C*             K2Node_DynamicCast_AsColor_Picker_ASA_Widget;      // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A7F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0xE4(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A82[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUI_PCOptionsMenu*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0xF8(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_PCOptionsMenu*                     CallFunc_Array_Get_Item;                           // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x114(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x115(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x116(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x117(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_MakeVector2D_X_ImplicitCast;              // 0x118(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x120(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SelectedOption__DelegateSignature
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_SelectedOption__DelegateSignature_Params
{
public:
	bool                                         Toggle;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ChangedColor__DelegateSignature
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ChangedColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

}
}


