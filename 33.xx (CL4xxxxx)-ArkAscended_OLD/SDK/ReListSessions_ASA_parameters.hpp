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
// Function ReListSessions_ASA.ReListSessions_ASA_C.UpdateFavoritesTab
struct UReListSessions_ASA_C_UpdateFavoritesTab_Params
{
public:
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.HandleAscendDescendSwitch
struct UReListSessions_ASA_C_HandleAscendDescendSwitch_Params
{
public:
	class UComboBoxString*                       ComboBox;                                          // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	int32                                        ForIndex;                                          // 0x8(0x4)(EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0xC(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.Update Horizontal Tab Enabled States
struct UReListSessions_ASA_C_Update_Horizontal_Tab_Enabled_States_Params
{
public:
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B58[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x16(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x17(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x59 (0x59 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.SetupPlatformSpecificTextBox
struct UReListSessions_ASA_C_SetupPlatformSpecificTextBox_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x18(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x30(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x48(0x10)(Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2E0 (0x2E0 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDownEvent
struct UReListSessions_ASA_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x148(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x149(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x14A(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x14B(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B6C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_OnKeyDown_ReturnValue;                    // 0x150(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UComboBoxString*                       CallFunc_GetOpenComboBox_ReturnValue;              // 0x208(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x210(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_B6D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x218(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x220(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x228(0xB8)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2E8 (0x2E8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDown
struct UReListSessions_ASA_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKey                                  LocalKey;                                          // 0x130(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x148(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x160(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FEventReply                           CallFunc_OnKeyDown_ReturnValue;                    // 0x168(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x220(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x228(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x229(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_B70[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x230(0xB8)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.GetSizeboxForExtraHandheldScaling
struct UReListSessions_ASA_C_GetSizeboxForExtraHandheldScaling_Params
{
public:
	class USizeBox*                              ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.GetWidgetToScaleForHandheld
struct UReListSessions_ASA_C_GetWidgetToScaleForHandheld_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReListSessions_ASA_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.OnServerListingClickedModPopup
struct UReListSessions_ASA_C_OnServerListingClickedModPopup_Params
{
public:
	bool                                         bNeedInit;                                         // 0x0(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B76[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                ModIds;                                            // 0x8(0x10)(ExportObject, Net, EditFixedSize, OutParm, Transient, GlobalConfig, SubobjectReference)
	class FString                                ServerName;                                        // 0x18(0x10)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int64                                        ServerID;                                          // 0x28(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIJoinEvent
struct UReListSessions_ASA_C_ModUIJoinEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIReportEvent
struct UReListSessions_ASA_C_ModUIReportEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIFavoriteEvent
struct UReListSessions_ASA_C_ModUIFavoriteEvent_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.SetCurrentServerSearchType
struct UReListSessions_ASA_C_SetCurrentServerSearchType_Params
{
public:
	int32                                        ServerType;                                        // 0x0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReListSessions_ASA_C_BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.Tick
struct UReListSessions_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
};

// 0x141 (0x141 - 0x0)
// Function ReListSessions_ASA.ReListSessions_ASA_C.ExecuteUbergraph_ReListSessions_ASA
struct UReListSessions_ASA_C_ExecuteUbergraph_ReListSessions_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B9E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UBP_ServerModsWidget_C*                CallFunc_Create_ReturnValue;                       // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x12(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x13(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_IsChecked_ReturnValue_2;                  // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x15(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x16(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsChecked_ReturnValue_3;                  // 0x17(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x28(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
	uint8                                        Pad_BA0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x3C(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_Event_bNeedInit;                            // 0x4C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_BA1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                K2Node_Event_ModIds;                               // 0x50(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                K2Node_Event_ServerName;                           // 0x60(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int64                                        K2Node_Event_ServerId;                             // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x90(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	int64                                        K2Node_CustomEvent_ServerId_2;                     // 0xA0(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference, RepNotify, Interp)
	int64                                        K2Node_CustomEvent_ServerId_1;                     // 0xA8(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference, Interp)
	int64                                        K2Node_CustomEvent_ServerId;                       // 0xB0(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        K2Node_Event_ServerType;                           // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue_4;                  // 0xBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_BA4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xC0(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0xD0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0xD1(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_BA6[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xD4(0x38)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x10C(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x110(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x114(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x115(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_BA9[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x118(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x120(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_BAD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x128(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x130(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x138(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_RegisterModelClass_ReturnValue;           // 0x140(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

}
}


