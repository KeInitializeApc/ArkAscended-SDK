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
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.DeepLinkModPage
struct UReMainMenuUI_ASA_C_DeepLinkModPage_Params
{
public:
	int64                                        RequestedModID;                                    // 0x0(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.CreateNotifManager
struct UReMainMenuUI_ASA_C_CreateNotifManager_Params
{
public:
	class UUI_NotificationManager_C*             CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x22 (0x22 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SettingsOverlayIsOpen
struct UReMainMenuUI_ASA_C_SettingsOverlayIsOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3B0E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B0F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUI_MainMenuWidget_SettingsOverlay_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay; // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x21(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightTheStartButton
struct UReMainMenuUI_ASA_C_HighlightTheStartButton_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x225 (0x225 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnKeyDownEvent
struct UReMainMenuUI_ASA_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  LocalKey;                                          // 0x130(0x18)(ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x148(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x160(0xB8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x218(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x21D(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x21E(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3B1B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x220(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x224(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.UpdateLeftTextPosition
struct UReMainMenuUI_ASA_C_UpdateLeftTextPosition_Params
{
public:
	bool                                         IsCTAVisible;                                      // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3B1F[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x14(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	struct FMargin                               K2Node_Select_Default;                             // 0x24(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3B21[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadActiveChangedBP
struct UReMainMenuUI_ASA_C_OnGamepadActiveChangedBP_Params
{
public:
	bool                                         bIsGamepadActive;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadSelectionChanged
struct UReMainMenuUI_ASA_C_OnGamepadSelectionChanged_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SetMainJoinedButtonVisibility
struct UReMainMenuUI_ASA_C_SetMainJoinedButtonVisibility_Params
{
public:
	enum class ESlateVisibility                  NewVisibilty;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.Tick
struct UReMainMenuUI_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1B0 (0x1B0 - 0x0)
// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.ExecuteUbergraph_ReMainMenuUI_ASA
struct UReMainMenuUI_ASA_C_ExecuteUbergraph_ReMainMenuUI_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B2D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_RegisterModelClass_ReturnValue;           // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B2E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x24(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x28(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B30[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3B31[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B32[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUI_MainMenuWidget_SettingsOverlay_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay; // 0x50(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x59(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x5A(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3B33[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UCreditsUI_C*                          CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x68(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x78(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x88(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         K2Node_Event_bIsGamepadActive;                     // 0x98(0x1)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B34[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x9C(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_3B35[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               K2Node_Event_widget;                               // 0xB0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   K2Node_DynamicCast_AsCustom_Button_Widget;         // 0xB8(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Play_ReturnValue;                         // 0xC2(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B37[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xC8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Rewind_ReturnValue;                       // 0xD1(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B38[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0xD8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xE0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0xE8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0xF8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x100(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UShooterGameInstance*                  K2Node_DynamicCast_AsShooter_Game_Instance;        // 0x110(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x118(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  K2Node_Event_newVisibilty;                         // 0x119(0x1)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3B39[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x11C(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x154(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x158(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x160(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Play_ReturnValue_1;                       // 0x161(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3B3B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue_1;                     // 0x168(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x170(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1A0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
};

}
}


