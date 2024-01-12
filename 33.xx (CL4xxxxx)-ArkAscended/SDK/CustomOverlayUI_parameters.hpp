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

// 0x3C (0x3C - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.Tick
struct UCustomOverlayUI_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.AddChildToCanvas
struct UCustomOverlayUI_C_AddChildToCanvas_Params
{
public:
	class UUserWidget*                           Child;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FVector2D                             Size;                                              // 0x8(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        ZOrder;                                            // 0x18(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.SetArrowAlpha
struct UCustomOverlayUI_C_SetArrowAlpha_Params
{
public:
	float                                        TheLeftRightAlpha;                                 // 0x0(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        TheUpDownAlpha;                                    // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.SetPointerScale
struct UCustomOverlayUI_C_SetPointerScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.ShowReticule
struct UCustomOverlayUI_C_ShowReticule_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.SetPointerColorAdd
struct UCustomOverlayUI_C_SetPointerColorAdd_Params
{
public:
	float                                        Add;                                               // 0x0(0x4)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate)
};

// 0xC (0xC - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.SetInnerRingScales
struct UCustomOverlayUI_C_SetInnerRingScales_Params
{
public:
	float                                        Scale0;                                            // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Scale1;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Scale2;                                            // 0x8(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x188 (0x188 - 0x0)
// Function CustomOverlayUI.CustomOverlayUI_C.ExecuteUbergraph_CustomOverlayUI
struct UCustomOverlayUI_C_ExecuteUbergraph_CustomOverlayUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_36B9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget;          // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_36BA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x14(0x38)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x4C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UUserWidget*                           K2Node_Event_Child;                                // 0x50(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             K2Node_Event_Size;                                 // 0x58(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        K2Node_Event_zOrder;                               // 0x68(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_36BB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x78(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x80(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x88(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_36BC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0xA8(0x20)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_1;        // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_36BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_2;        // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xE0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_36BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_theLeftRightAlpha;                    // 0xE4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_Event_theUpDownAlpha;                       // 0xE8(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_36BF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_3;        // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xF8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_36C0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_scale;                                // 0xFC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_show;                                 // 0x100(0x1)(ExportObject, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_36C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_4;        // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x110(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_36C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_5;        // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x120(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_36C3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_Event_add;                                  // 0x124(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_Event_scale0;                               // 0x128(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_Event_scale1;                               // 0x12C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_Event_scale2;                               // 0x130(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_36C4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCustomMouseWidget_C*                  K2Node_DynamicCast_AsCustom_Mouse_Widget_6;        // 0x138(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x140(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_36C5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        K2Node_MakeStruct_Right_ImplicitCast;              // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        K2Node_MakeStruct_Bottom_ImplicitCast;             // 0x148(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_36C6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SetArrowAlpha_LeftRightAlpha_ImplicitCast; // 0x150(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetArrowAlpha_UpDownAlpha_ImplicitCast;   // 0x158(0x8)(Edit, ConstParm, ExportObject, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetPointerScale_NewParam_ImplicitCast;    // 0x160(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetPointerColorAdd_Add_ImplicitCast;      // 0x168(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetInnerRingScales_Scale0_ImplicitCast;   // 0x170(0x8)(BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetInnerRingScales_Scale1_ImplicitCast;   // 0x178(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_SetInnerRingScales_Scale2_ImplicitCast;   // 0x180(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


