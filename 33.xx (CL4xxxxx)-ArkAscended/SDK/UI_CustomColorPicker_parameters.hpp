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
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetColorPickerEnabled
struct UUI_CustomColorPicker_C_SetColorPickerEnabled_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.LimitTextSize
struct UUI_CustomColorPicker_C_LimitTextSize_Params
{
public:
	class FString                                SourceString;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Size;                                              // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_4D5F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Array;                                             // 0x18(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	TArray<class FString>                        LocalArray;                                        // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x38(0x10)(Edit, ExportObject, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x48(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x84 (0x84 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.UpdateAllSliders
struct UUI_CustomColorPicker_C_UpdateAllSliders_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        CallFunc_RGBToHSV_H;                               // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_RGBToHSV_S;                               // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_RGBToHSV_V;                               // 0x18(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_RGBToHSV_A;                               // 0x1C(0x4)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x20(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4D63[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FString                                CallFunc_SRGBtoHEX_ReturnValue;                    // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x60(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x70(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x78(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x80(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x5C (0x5C - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.GetFinalColor
struct UUI_CustomColorPicker_C_GetFinalColor_Params
{
public:
	struct FLinearColor                          FinalColor;                                        // 0x0(0x10)(Edit, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_GetValue_ReturnValue_1;                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_GetValue_ReturnValue_2;                   // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_4D66[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_GetValue_ReturnValue_3;                   // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector2D_X;                          // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x38(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FLinearColor                          CallFunc_HSVToRGB_ReturnValue;                     // 0x48(0x10)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_HSVToRGB_H_ImplicitCast;                  // 0x58(0x4)(Edit, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x54 (0x54 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateOpacity
struct UUI_CustomColorPicker_C_OnUpdateOpacity_Params
{
public:
	struct FVector2D                             CallFunc_GetValue_ReturnValue;                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FLinearColor                          CallFunc_HSVToRGB_ReturnValue;                     // 0x30(0x10)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x40(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	float                                        CallFunc_HSVToRGB_H_ImplicitCast;                  // 0x48(0x4)(Edit, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x4C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast_1;          // 0x50(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x48 (0x48 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdateValue
struct UUI_CustomColorPicker_C_OnUpdateValue_Params
{
public:
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4D6A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_GetValue_ReturnValue_1;                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x18(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x28(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x30(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x40(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x54 (0x54 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnUpdate2DSynth
struct UUI_CustomColorPicker_C_OnUpdate2DSynth_Params
{
public:
	struct FVector2D                             CallFunc_GetValue_ReturnValue;                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FLinearColor                          CallFunc_HSVToRGB_ReturnValue;                     // 0x30(0x10)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x40(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	float                                        CallFunc_HSVToRGB_H_ImplicitCast;                  // 0x48(0x4)(Edit, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast;            // 0x4C(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetValue_InValue_ImplicitCast_1;          // 0x50(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x28 (0x28 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetValueBarValue
struct UUI_CustomColorPicker_C_SetValueBarValue_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
};

// 0x28 (0x28 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.SetSaturationBarColor
struct UUI_CustomColorPicker_C_SetSaturationBarColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x19 (0x19 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature
struct UUI_CustomColorPicker_C_BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.ExecuteUbergraph_UI_CustomColorPicker
struct UUI_CustomColorPicker_C_ExecuteUbergraph_UI_CustomColorPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4D73[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_ComponentBoundEvent_Value_4;                // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	float                                        K2Node_ComponentBoundEvent_Value_3;                // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	float                                        K2Node_ComponentBoundEvent_Value_2;                // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	float                                        K2Node_ComponentBoundEvent_Value_1;                // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        K2Node_ComponentBoundEvent_Value;                  // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          CallFunc_GetFinalColor_FinalColor;                 // 0x1C(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x2C(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_4D75[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_SRGBtoHEX_ReturnValue;                    // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x78(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4D76[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x80(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_LimitTextSize_Array;                      // 0x90(0x10)(ConstParm, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                CallFunc_HEXtoSRGB_Color;                          // 0xA0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4D77[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xA8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0xC0(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomColorPicker.UI_CustomColorPicker_C.OnColorChanged__DelegateSignature
struct UUI_CustomColorPicker_C_OnColorChanged__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

}
}


