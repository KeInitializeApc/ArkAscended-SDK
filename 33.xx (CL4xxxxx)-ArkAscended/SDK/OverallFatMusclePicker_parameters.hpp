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
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.GetOverrideHighligteableWidgetBP
struct UOverallFatMusclePicker_C_GetOverrideHighligteableWidgetBP_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xBC (0xBC - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorSlider2D
struct UOverallFatMusclePicker_C_UpdateColorSlider2D_Params
{
public:
	struct FVector2D                             CallFunc_GetValue_ReturnValue;                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x10(0x8)(Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x20(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x28(0x8)(Edit, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x30(0x78)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0xA8(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39A4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_MakeStruct_FloatParam1_ImplicitCast;        // 0xB4(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_FloatParam2_ImplicitCast;        // 0xB8(0x4)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateSaturationBar
struct UOverallFatMusclePicker_C_UpdateSaturationBar_Params
{
public:
	struct FLinearColor                          Value;                                             // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UOverallFatMusclePicker_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UOverallFatMusclePicker_C_BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.UpdateColorPickerValue
struct UOverallFatMusclePicker_C_UpdateColorPickerValue_Params
{
public:
	struct FVector2D                             Value;                                             // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x40 (0x40 - 0x0)
// Function OverallFatMusclePicker.OverallFatMusclePicker_C.ExecuteUbergraph_OverallFatMusclePicker
struct UOverallFatMusclePicker_C_ExecuteUbergraph_OverallFatMusclePicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        K2Node_ComponentBoundEvent_Value_1;                // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_39B1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FVector2D                             K2Node_CustomEvent_Value;                          // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x30(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

}
}


