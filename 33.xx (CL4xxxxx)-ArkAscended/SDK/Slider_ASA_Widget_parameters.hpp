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
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE8 (0xE8 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupSetPercent
struct USlider_ASA_Widget_C_SetupSetPercent_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	bool                                         PreventRecallParent;                               // 0x4(0x1)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x18(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x90(0x8)(Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x98(0x8)(Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0xA0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0xA8(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0xB8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast;      // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1;    // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0xE0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xE4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupValue
struct USlider_ASA_Widget_C_SetupValue_Params
{
public:
	double                                       Float;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config)
	bool                                         PreventRecallParent;                               // 0x8(0x1)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.BPExecutedCommandForPrimalUI
struct USlider_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x78)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.Tick
struct USlider_ASA_Widget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x104 (0x104 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.ExecuteUbergraph_Slider_ASA_Widget
struct USlider_ASA_Widget_C_ExecuteUbergraph_Slider_ASA_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x40(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2D2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  K2Node_Event_CommandName;                          // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x50(0x78)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xC8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2D6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xD0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xD8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD9(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_2DA[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetValue_ReturnValue_1;                   // 0xDC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       K2Node_CustomEvent_Float;                          // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_CustomEvent_PreventRecallParent;            // 0xE8(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2DC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xF0(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;   // 0xF8(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x100(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


