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

// 0x9 (0x9 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.CreateNotifManager
struct UReListSessions_ASA_C_CreateNotifManager_Params
{
public:
	class UUI_NotificationManager_C*             CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.UpdateFavoritesTab
struct UReListSessions_ASA_C_UpdateFavoritesTab_Params
{
public:
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.HandleAscendDescendSwitch
struct UReListSessions_ASA_C_HandleAscendDescendSwitch_Params
{
public:
	class UComboBoxString*                       ComboBox;                                          // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        ForIndex;                                          // 0x8(0x4)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0xC(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.Update Horizontal Tab Enabled States
struct UReListSessions_ASA_C_Update_Horizontal_Tab_Enabled_States_Params
{
public:
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3A56[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x10(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x14(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x16(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x17(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x59 (0x59 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.SetupPlatformSpecificTextBox
struct UReListSessions_ASA_C_SetupPlatformSpecificTextBox_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x18(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x30(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x48(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x58(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x2E0 (0x2E0 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDownEvent
struct UReListSessions_ASA_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x148(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x149(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x14A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x14B(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3A70[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_OnKeyDown_ReturnValue;                    // 0x150(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       CallFunc_GetOpenComboBox_ReturnValue;              // 0x208(0x8)(BlueprintVisible, ExportObject, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x210(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A72[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x228(0xB8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2E8 (0x2E8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDown
struct UReListSessions_ASA_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  LocalKey;                                          // 0x130(0x18)(ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x148(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	struct FEventReply                           CallFunc_OnKeyDown_ReturnValue;                    // 0x168(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x228(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x229(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3A84[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x230(0xB8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.GetSizeboxForExtraHandheldScaling
struct UReListSessions_ASA_C_GetSizeboxForExtraHandheldScaling_Params
{
public:
	class USizeBox*                              ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.GetWidgetToScaleForHandheld
struct UReListSessions_ASA_C_GetWidgetToScaleForHandheld_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnServerListingClickedModPopup
struct UReListSessions_ASA_C_OnServerListingClickedModPopup_Params
{
public:
	bool                                         bNeedInit;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A94[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                ModIds;                                            // 0x8(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class FString                                ServerName;                                        // 0x18(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        ServerID;                                          // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIJoinEvent
struct UReListSessions_ASA_C_ModUIJoinEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIReportEvent
struct UReListSessions_ASA_C_ModUIReportEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIFavoriteEvent
struct UReListSessions_ASA_C_ModUIFavoriteEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.SetCurrentServerSearchType
struct UReListSessions_ASA_C_SetCurrentServerSearchType_Params
{
public:
	int32                                        ServerType;                                        // 0x0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReListSessions_ASA_C_BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.Tick
struct UReListSessions_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReListSessions_ASA_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ModFilterList_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature
struct UReListSessions_ASA_C_BndEvt__ReListSessions_ASA_ModFilterList_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x181 (0x181 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ExecuteUbergraph_ReListSessions_ASA
struct UReListSessions_ASA_C_ExecuteUbergraph_ReListSessions_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3AAC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_RegisterModelClass_ReturnValue;           // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x11(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x12(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x14(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsChecked_ReturnValue_2;                  // 0x15(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3AAD[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x28(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3AAE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x3C(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_Event_bNeedInit;                            // 0x4C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AAF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                K2Node_Event_ModIds;                               // 0x50(0x10)(Edit, ConstParm, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_Event_ServerName;                           // 0x60(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_Event_ServerId;                             // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int64                                        K2Node_CustomEvent_ServerId_2;                     // 0x90(0x8)(ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int64                                        K2Node_CustomEvent_ServerId_1;                     // 0x98(0x8)(ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int64                                        K2Node_CustomEvent_ServerId;                       // 0xA0(0x8)(ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        K2Node_Event_ServerType;                           // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue_3;                  // 0xAC(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_3AB0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xC0(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0xC1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3AB1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xC4(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0xFC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x100(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x104(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x105(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_3AB2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x108(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x110(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3AB3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x118(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x120(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x128(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsChecked_ReturnValue_4;                  // 0x138(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3AB4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x140(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x148(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_3AB7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UBP_ServerModsWidget_C*                CallFunc_Create_ReturnValue;                       // 0x150(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x158(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3AB8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x160(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x170(0x1)(ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AB9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x174(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	int64                                        CallFunc_Map_Find_Value;                           // 0x178(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x180(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

}
}


