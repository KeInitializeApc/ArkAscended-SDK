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

// 0x18 (0x18 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.SetButtonText
struct UASAUIWidget_Button_C_SetButtonText_Params
{
public:
	class FText                                  TheText;                                           // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xCA (0xCA - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.Fix PS Icons
struct UASAUIWidget_Button_C_Fix_PS_Icons_Params
{
public:
	TMap<class FString, class FString>           XSX_ui_names;                                      // 0x0(0x50)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x50(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_38CA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x58(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
	TMap<class FString, class FString>           K2Node_MakeVariable_MakeVariableOutput;            // 0x70(0x50)(Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0xC0(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0xE8 (0xE8 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.UpdateInputIcon
struct UASAUIWidget_Button_C_UpdateInputIcon_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x1(0x1)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x2(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_38CD[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FDeprecateSlateVector2D               K2Node_MakeStruct_ImageSize_ImplicitCast;          // 0xE0(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8E (0x8E - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.UpdateBracketAndTextColors
struct UASAUIWidget_Button_C_UpdateBracketAndTextColors_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_38CE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x18(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x28(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x3C(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x50(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, NonTransactional)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x64(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x78(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x8C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsPressed_ReturnValue;                    // 0x8D(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.PreConstruct
struct UASAUIWidget_Button_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.SetActive
struct UASAUIWidget_Button_C_SetActive_Params
{
public:
	bool                                         NewActive;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.OnWidgetGamepadActiveChangedBP
struct UASAUIWidget_Button_C_OnWidgetGamepadActiveChangedBP_Params
{
public:
	bool                                         bIsGamepadActive;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function ASAUIWidget_Button.ASAUIWidget_Button_C.ExecuteUbergraph_ASAUIWidget_Button
struct UASAUIWidget_Button_C_ExecuteUbergraph_ASAUIWidget_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x4(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x5(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_CustomEvent_newActive;                      // 0x6(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_Event_bIsGamepadActive;                     // 0x7(0x1)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class ABasePlayerController*                 K2Node_DynamicCast_AsBase_Player_Controller;       // 0x10(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x19(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38D8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x1C(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x2C(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x3C(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_38D9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          K2Node_Select_Default;                             // 0x40(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x50(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38DB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x68(0x8)(Edit, ExportObject, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x70(0x8)(Edit, ExportObject, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x78(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


