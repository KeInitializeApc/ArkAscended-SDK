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

// 0x44 (0x44 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OpenSetupNewWaypoint
struct UMainMinimapUI_ASA_C_OpenSetupNewWaypoint_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x8(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_52FD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetLocationWIthCoords_Location;           // 0x18(0x18)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMapMarkerSettingsWidget_ASA_C*        CallFunc_CreateSettingsWidget_AsMap_Marker_Settings_Widget_ASA; // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_HasLimitedWaypoints_Num;                  // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasLimitedWaypoints_Max;                  // 0x3C(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_52FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_HasLimitedWaypoints_First_Unclaimed_Default_Number; // 0x40(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x208 (0x208 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnGamepadButtonDownEvent
struct UMainMinimapUI_ASA_C_OnGamepadButtonDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FControllerEvent                      ControllerEvent;                                   // 0x38(0x40)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_ControllerEvent_GetEffectingButton_ReturnValue; // 0x130(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x149(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_52FF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x150(0xB8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2C8 (0x2C8 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseMove_0
struct UMainMinimapUI_ASA_C_OnMouseMove_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector2D                             CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x168(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x178(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector2D                             CallFunc_AbsoluteToLocal_ReturnValue;              // 0x180(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue;                 // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x1A0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x1A8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x1B0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x1B8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x1C0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x1C8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x1D0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x1D8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x1E0(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x1F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x1F8(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x208(0xB8)(ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x2C0(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x2C4(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x1C (0x1C - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ChangeButtonVisually
struct UMainMinimapUI_ASA_C_ChangeButtonVisually_Params
{
public:
	class UCustomButtonWidget*                   CustomButton;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         Selected;                                          // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5300[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0xC(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Update Legend Buttons
struct UMainMinimapUI_ASA_C_Update_Legend_Buttons_Params
{
public:
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_2; // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_3; // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_4; // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
};

// 0x2E0 (0x2E0 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On_BorderMinimap_MouseMove
struct UMainMinimapUI_ASA_C_On_BorderMinimap_MouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	double                                       XPercent;                                          // 0x168(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	double                                       YPercent;                                          // 0x170(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0x178(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue;                 // 0x188(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             CallFunc_AbsoluteToLocal_ReturnValue;              // 0x198(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0x1A8(0x10)(Edit, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x1B8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x1C0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x1C8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x1D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x1D8(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x1F0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x1F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x200(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x210(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x228(0xB8)(ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x240 (0x240 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On Border Minimap Mouse Double Click
struct UMainMinimapUI_ASA_C_On_Border_Minimap_Mouse_Double_Click_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x168(0x18)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x180(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5301[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x188(0xB8)(ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x239 (0x239 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.On_BorderMinimap_MouseButtonDown
struct UMainMinimapUI_ASA_C_On_BorderMinimap_MouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x168(0xB8)(ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x220(0x18)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x238(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateSettingsWidget
struct UMainMinimapUI_ASA_C_CreateSettingsWidget_Params
{
public:
	class UMapMarkerSettingsWidget_ASA_C*        AsMap_Marker_Settings_Widget_ASA;                  // 0x0(0x8)(BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x8(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5302[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMapMarkerSettingsWidget_ASA_C*        CallFunc_Create_ReturnValue;                       // 0x20(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x240 (0x240 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnKeyDownEvent
struct UMainMinimapUI_ASA_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(ConstParm, BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x148(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<struct FKey>                          CallFunc_GetAllKeybindsByPredicate_ReturnValue;    // 0x150(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x160(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x168(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x170(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5303[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             K2Node_DynamicCast_AsPrimal_UI;                    // 0x178(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x180(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5304[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x188(0xB8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x122 (0x122 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.DoPingMinimap
struct UMainMinimapUI_ASA_C_DoPingMinimap_Params
{
public:
	enum class ETeamPingType                     PingType;                                          // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5305[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x8(0x8)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5306[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x18(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerState*                   CallFunc_GetPlayerState_ReturnValue;               // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsInTribe_ReturnValue;                    // 0x28(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5307[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class UObject*                               CallFunc_PureClassDefaultObject_ReturnValue;       // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CallFunc_GetLocationWIthCoords_Location;           // 0x40(0x18)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMapMarkerSettingsWidget_ASA_C*        K2Node_DynamicCast_AsMap_Marker_Settings_Widget_ASA; // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5308[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector_X;                            // 0x68(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x78(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_TraceGroundLocation_Found;                // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5309[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_TraceGroundLocation_Z;                    // 0x88(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x90(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x98(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0xB0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_CanTeamPing_ReturnValue;                  // 0xB9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_530A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetLinkedPlayerID_ReturnValue;            // 0xBC(0x4)(Edit, ExportObject, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class FString                                CallFunc_GetPlayerCharacterName_ReturnValue;       // 0xC0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FTeamPingData                         K2Node_MakeStruct_TeamPingData;                    // 0xD0(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanPingRallyPoint_ReturnValue;            // 0x120(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x121(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x240 (0x240 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseButtonUp
struct UMainMinimapUI_ASA_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x168(0x18)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x180(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_530B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x188(0xB8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x258 (0x258 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseMove
struct UMainMinimapUI_ASA_C_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FVector2D                             CallFunc_PointerEvent_GetCursorDelta_ReturnValue;  // 0x168(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x178(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_530C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_BreakVector2D_X;                          // 0x180(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x188(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x190(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x198(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	struct FEventReply                           CallFunc_OnMouseMove_ReturnValue;                  // 0x1A0(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x268 (0x268 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseButtonDown
struct UMainMinimapUI_ASA_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x168(0x18)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue_1; // 0x180(0x18)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x198(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x199(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x19A(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_K2_IsTimerActive_ReturnValue;             // 0x19B(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_530D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x1A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_530E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x1B0(0xB8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x250 (0x250 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseWheel
struct UMainMinimapUI_ASA_C_OnMouseWheel_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x168(0x4)(BlueprintVisible, ExportObject, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_530F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x170(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x178(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x180(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5310[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x188(0xB8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x240(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5311[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_InputZoomMinimap_ZoomInInput_ImplicitCast; // 0x248(0x8)(Edit, ExportObject, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x51 (0x51 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.GetMinimapDataRef
struct UMainMinimapUI_ASA_C_GetMinimapDataRef_Params
{
public:
	class UMinimapData*                          AsMinimap_Data;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               CallFunc_PureClassDefaultObject_ReturnValue;       // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWorld*                                CallFunc_GetPrimaryWorld_ReturnValue;              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UMinimapData*                          K2Node_DynamicCast_AsMinimap_Data;                 // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5312[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AWorldSettings*                        CallFunc_K2_GetWorldSettings_ReturnValue;          // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0x30(0x8)(ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5313[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_PureClassDefaultObject_ReturnValue_1;     // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UMinimapData*                          K2Node_DynamicCast_AsMinimap_Data_1;               // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
};

// 0x188 (0x188 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateNewWaypointOnLocation
struct UMainMinimapUI_ASA_C_CreateNewWaypointOnLocation_Params
{
public:
	struct FVector2D                             Coords;                                            // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x1C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1D(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5314[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class FString                                CallFunc_BPGetPrimaryMapName_ReturnValue;          // 0x28(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue;                      // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x40(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x48(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5315[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimapMark                          CallFunc_Array_Get_Item;                           // 0x60(0x78)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xDD(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xDE(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0xDF(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xE0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_5316[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0xE8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue_1;                    // 0xF0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetLocationWIthCoords_Location;           // 0xF8(0x18)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FMinimapMark                          K2Node_MakeStruct_MinimapMark;                     // 0x110(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.InputZoomMinimap
struct UMainMinimapUI_ASA_C_InputZoomMinimap_Params
{
public:
	double                                       ZoomInInput;                                       // 0x0(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       Speed;                                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ZoomOutInput;                                      // 0x10(0x8)(Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x40(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x50(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x144 (0x144 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.SetVirtualMinimapPosition
struct UMainMinimapUI_ASA_C_SetVirtualMinimapPosition_Params
{
public:
	double                                       XInput;                                            // 0x0(0x8)(Edit, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	double                                       YInput;                                            // 0x8(0x8)(Edit, BlueprintVisible, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	double                                       Speed;                                             // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x28(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x50(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x60(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x70(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x78(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x80(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x88(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x90(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0xA8(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0xB8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0xC0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0xD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0xD8(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector2D                             CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0xE8(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_Divide_Vector2DVector2D_ReturnValue;      // 0xF8(0x10)(Edit, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_2;                        // 0x108(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector2D_Y_2;                        // 0x110(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x118(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x120(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_3;               // 0x128(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x138(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x13C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x140(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x220 (0x220 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.UpdateMinimapSize
struct UMainMinimapUI_ASA_C_UpdateMinimapSize_Params
{
public:
	double                                       Zoom;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             LocalAligm;                                        // 0x8(0x10)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x40(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_5317[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x48(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x50(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x58(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x60(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector2D_X;                          // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x70(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x78(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x88(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x90(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x98(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0xA8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0xB0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0xB8(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_3;               // 0xC8(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector2D_X_2;                        // 0xD8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector2D_Y_2;                        // 0xE0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector2D_X_3;                        // 0xE8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_BreakVector2D_Y_3;                        // 0xF0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xF8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X_4;                        // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_BreakVector2D_Y_4;                        // 0x108(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x110(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x118(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_4;               // 0x120(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x130(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x138(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x140(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x148(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x160(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_X;                            // 0x178(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x180(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x188(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0x190(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x198(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x1A0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x1A8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x1B0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x1B8(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector2D_X_5;                        // 0x1C0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	double                                       CallFunc_BreakVector2D_Y_5;                        // 0x1C8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x1D0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x1D8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x1E0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_3;      // 0x1E8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x1F0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x1F8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_5;               // 0x200(0x10)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	float                                        K2Node_VariableSet_SavedMainMapZoom_ImplicitCast;  // 0x210(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5318[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x218(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.PreConstruct
struct UMainMinimapUI_ASA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x79 (0x79 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.RefreshTracking_Event
struct UMainMinimapUI_ASA_C_RefreshTracking_Event_Params
{
public:
	struct FMinimapMark                          Mark;                                              // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsTracking;                                        // 0x78(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.OnMouseLeave
struct UMainMinimapUI_ASA_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.Tick
struct UMainMinimapUI_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.HandleEditMark_Event
struct UMainMinimapUI_ASA_C_HandleEditMark_Event_Params
{
public:
	struct FMinimapMark                          Mark;                                              // 0x0(0x78)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreateAssignOnMapSettings
struct UMainMinimapUI_ASA_C_CreateAssignOnMapSettings_Params
{
public:
	class UMapMarkerSettingsWidget_ASA_C*        Settings;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CreatePingSelector
struct UMainMinimapUI_ASA_C_CreatePingSelector_Params
{
public:
	bool                                         OnlyForClose;                                      // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.CallPing_Event
struct UMainMinimapUI_ASA_C_CallPing_Event_Params
{
public:
	enum class ETeamPingType                     PingType;                                          // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x520 (0x520 - 0x0)
// Function MainMinimapUI_ASA.MainMinimapUI_ASA_C.ExecuteUbergraph_MainMinimapUI_ASA
struct UMainMinimapUI_ASA_C_ExecuteUbergraph_MainMinimapUI_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_5319[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimapMark                          K2Node_CustomEvent_Mark_1;                         // 0x18(0x78)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_CustomEvent_IsTracking;                     // 0x90(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_531A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB0(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x128(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x160(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_531B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x168(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMinimapMark                          K2Node_CustomEvent_Mark;                           // 0x170(0x78)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x1E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UMapMarkerSettingsWidget_ASA_C*        CallFunc_CreateSettingsWidget_AsMap_Marker_Settings_Widget_ASA; // 0x1F0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x1F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UMapMarkerSettingsWidget_ASA_C*        CallFunc_CreateSettingsWidget_AsMap_Marker_Settings_Widget_ASA_1; // 0x200(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
	class UPrimalUI*                             K2Node_DynamicCast_AsPrimal_UI;                    // 0x208(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x210(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_531C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x218(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x220(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsRightTriggerDown_ReturnValue;           // 0x228(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsLeftTriggerDown_ReturnValue;            // 0x229(0x1)(ConstParm, ExportObject, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x22A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_531D[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UMapMarkerSettingsWidget_ASA_C*        K2Node_CustomEvent_Settings;                       // 0x230(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x248(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x249(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_531E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_2; // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_3; // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x260(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x261(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_531F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_4; // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x270(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_5320[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x278(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x280(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5321[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x284(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_CustomEvent_OnlyForClose;                   // 0x288(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5322[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28C(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29C(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	enum class ETeamPingType                     K2Node_CustomEvent_PingType;                       // 0x29D(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5323[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2A0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2A4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x2A8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_5324[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CallFunc_GetLocationWIthCoords_Location;           // 0x2B0(0x18)(Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_GetMinimapLocation_ReturnValue;           // 0x2C8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_GetMinimapLocation_Coords;                // 0x2D8(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2E8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2EC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5325[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue_1;          // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue_2;          // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue_3;          // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x318(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_5; // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_6; // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x338(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x340(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x348(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
	uint8                                        Pad_5326[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_7; // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x358(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x360(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x368(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x369(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x36A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x36B(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x36C(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x36D(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_5327[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x370(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_SelectFloat_ReturnValue_3;                // 0x378(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x380(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x381(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5328[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x384(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_5329[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x398(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_8; // 0x3A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	struct FMinimapMark                          CallFunc_Array_Get_Item;                           // 0x3A8(0x78)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	struct FMinimapMark                          K2Node_SetFieldsInStruct_StructOut;                // 0x420(0x78)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x498(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x49C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_532A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x4A0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x4A8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class AShooterPlayerController*              CallFunc_PCToSPC_ReturnValue;                      // 0x4B0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x4B8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	class UPingSelectorOnMap_C*                  CallFunc_Create_ReturnValue;                       // 0x4C8(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4D0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4D4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_532B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x4D8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x4E0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	double                                       CallFunc_SelectFloat_B_ImplicitCast;               // 0x4F0(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x4F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x500(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;    // 0x508(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_FClamp_Value_ImplicitCast;                // 0x510(0x8)(BlueprintVisible, ExportObject, Net, EditConst, InstancedReference, SubobjectReference)
	double                                       K2Node_VariableSet_CurrentZoom_ImplicitCast;       // 0x518(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


