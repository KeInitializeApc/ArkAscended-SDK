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
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xE8 (0xE8 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupSetPercent
struct USlider_ASA_Widget_C_SetupSetPercent_Params
{
public:
	float                                        InputPin;                                          // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	bool                                         PreventRecallParent;                               // 0x4(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_488D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x18(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_488F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0xC0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast;      // 0xD0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1;    // 0xD8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0xE0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xE4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupValue
struct USlider_ASA_Widget_C_SetupValue_Params
{
public:
	double                                       Float;                                             // 0x0(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config)
	bool                                         PreventRecallParent;                               // 0x8(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.BPExecutedCommandForPrimalUI
struct USlider_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.Tick
struct USlider_ASA_Widget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x104 (0x104 - 0x0)
// Function Slider_ASA_Widget.Slider_ASA_Widget_C.ExecuteUbergraph_Slider_ASA_Widget
struct USlider_ASA_Widget_C_ExecuteUbergraph_Slider_ASA_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x40(0x1)(DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4897[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  K2Node_Event_CommandName;                          // 0x48(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x50(0x78)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xC8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_489A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xD0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xD8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_489B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_GetValue_ReturnValue_1;                   // 0xDC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       K2Node_CustomEvent_Float;                          // 0xE0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_CustomEvent_PreventRecallParent;            // 0xE8(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_489C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0xF0(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;   // 0xF8(0x8)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x100(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

}
}


