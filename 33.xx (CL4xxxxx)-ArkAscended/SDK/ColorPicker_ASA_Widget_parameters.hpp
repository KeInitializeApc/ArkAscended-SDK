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
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.GetOverrideHighligteableWidgetBP
struct UColorPicker_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x16C (0x16C - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorSlider2D
struct UColorPicker_ASA_Widget_C_UpdateColorSlider2D_Params
{
public:
	double                                       CallFunc_GetUnpausedTimeSeconds_ReturnValue;       // 0x0(0x8)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_GetUnpausedTimeSeconds_ReturnValue_1;     // 0x8(0x8)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x18(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39B7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_GetValue_ReturnValue;                     // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x38(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x50(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0xC8(0x8)(Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0xD0(0x8)(Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0xD8(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39BA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0xE8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0xF0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_GetValue_ReturnValue_1;                   // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x110(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x118(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x128(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x12C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, SubobjectReference, Interp)
	struct FColor                                CallFunc_ReadRenderTargetPixel_ReturnValue;        // 0x130(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x134(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_LinearColorLinearColor_ReturnValue; // 0x144(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	uint8                                        Pad_39BC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x148(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x158(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_MakeArray__0__ImplicitCast;                 // 0x15C(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_MakeArray__1__ImplicitCast;                 // 0x160(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x164(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x168(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
};

// 0x10 (0x10 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateSaturationBar
struct UColorPicker_ASA_Widget_C_UpdateSaturationBar_Params
{
public:
	struct FLinearColor                          Value;                                             // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x220 (0x220 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.OnMouseMove_0
struct UColorPicker_ASA_Widget_C_OnMouseMove_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.Tick
struct UColorPicker_ASA_Widget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UColorPicker_ASA_Widget_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.UpdateColorPickerValue
struct UColorPicker_ASA_Widget_C_UpdateColorPickerValue_Params
{
public:
	struct FVector2D                             Value;                                             // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x59 (0x59 - 0x0)
// Function ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C.ExecuteUbergraph_ColorPicker_ASA_Widget
struct UColorPicker_ASA_Widget_C_ExecuteUbergraph_ColorPicker_ASA_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_Value_1;                // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             K2Node_CustomEvent_Value;                          // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


