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
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.GetOverrideHighligteableWidgetBP
struct USlider_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xD8 (0xD8 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupSetPercent
struct USlider_ASA_Widget_C_SetupSetPercent_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	bool                                         PreventRecallParent;                               // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37A6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x8(0x10)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x18(0x68)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x80(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x88(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x90(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x98(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_37A8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0xA8(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0xB0(0x8)(Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0xB8(0x8)(Edit, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast;      // 0xC0(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1;    // 0xC8(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0xD0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xD4(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupValue
struct USlider_ASA_Widget_C_SetupValue_Params
{
public:
	double                                       Float;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, Config)
	bool                                         PreventRecallParent;                               // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.BPExecutedCommandForPrimalUI
struct USlider_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x68)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.Tick
struct USlider_ASA_Widget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0xF4 (0xF4 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.ExecuteUbergraph_Slider_ASA_Widget
struct USlider_ASA_Widget_C_ExecuteUbergraph_Slider_ASA_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x40(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_37BA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  K2Node_Event_CommandName;                          // 0x48(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x50(0x68)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_37BC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xC8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xC9(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_37BD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetValue_ReturnValue_1;                   // 0xCC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       K2Node_CustomEvent_Float;                          // 0xD0(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_CustomEvent_PreventRecallParent;            // 0xD8(0x1)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37BE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xE0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;   // 0xE8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0xF0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


