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

// 0x4D8 (0x4D8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnEventBroadcasted
struct UUI_StoreMenu_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3899[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_389A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x38(0x498)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4D0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_389B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4D4(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x4D4 (0x4D4 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.GetAllModsIDs
struct UUI_StoreMenu_C_GetAllModsIDs_Params
{
public:
	TArray<int64>                                List;                                              // 0x0(0x10)(ConstParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int64>                                NewLocalVar;                                       // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_389D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x30(0x498)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4CC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_389E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4D0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.DestroyPremiumCheckHandle
struct UUI_StoreMenu_C_DestroyPremiumCheckHandle_Params
{
public:
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.BPEscapeClosed
struct UUI_StoreMenu_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x951 (0x951 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.NotificationHandle
struct UUI_StoreMenu_C_NotificationHandle_Params
{
public:
	enum class EGameModsEvent                    Selection;                                         // 0x0(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38A4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   Mod;                                               // 0x8(0x498)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FInstallProgressMod                   ModToHandle;                                       // 0x4A0(0x498)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_NotificationManager_C*             CallFunc_GetNotifManager_Output;                   // 0x938(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x940(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x941(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_38A5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_NotificationManager_C*             CallFunc_GetNotifManager_Output_1;                 // 0x948(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x950(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc4
struct UUI_StoreMenu_C_UI_StoreMenu_AutoGenFunc4_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc3
struct UUI_StoreMenu_C_UI_StoreMenu_AutoGenFunc3_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.RequestInstalledModsFromAPI
struct UUI_StoreMenu_C_RequestInstalledModsFromAPI_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Back from Server Mods
struct UUI_StoreMenu_C_Back_from_Server_Mods_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x59 (0x59 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SwitchControllerAction
struct UUI_StoreMenu_C_SwitchControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	enum class EViewState                        State;                                             // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1B(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1C(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x1D(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1E(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x1F(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x20(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_5;          // 0x21(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_6;          // 0x22(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_7;          // 0x23(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	uint8                                        Pad_38B3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_NotificationManager_C*             CallFunc_GetNotifManager_Output;                   // 0x28(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x31(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x32(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x33(0x1)(DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x34(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x35(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_38B4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      K2Node_DynamicCast_AsUI_Parent_Page;               // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_38B6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      K2Node_DynamicCast_AsUI_Parent_Page_1;             // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
};

// 0x11 (0x11 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SetInitStoreFocus
struct UUI_StoreMenu_C_SetInitStoreFocus_Params
{
public:
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      K2Node_DynamicCast_AsUI_Parent_Page;               // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.PlayStartFadeInAnimation
struct UUI_StoreMenu_C_PlayStartFadeInAnimation_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.EnabledTabSwitching
struct UUI_StoreMenu_C_EnabledTabSwitching_Params
{
public:
	bool                                         bInIsEnabled;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UpdateMyModsVisibility
struct UUI_StoreMenu_C_UpdateMyModsVisibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SetCurrentActivePage
struct UUI_StoreMenu_C_SetCurrentActivePage_Params
{
public:
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x0(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_38C4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	enum class ENUM_SideTabs                     Temp_byte_Variable;                                // 0xE(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ENUM_SideTabs                     Temp_byte_Variable_1;                              // 0xF(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x11(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x12(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_38C7[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x18(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38C8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Select_Default;                             // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UUI_Button_Sidebar_C*                  K2Node_Select_Default_1;                           // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x40(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_38C9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      K2Node_Select_Default_2;                           // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
};

// 0x19 (0x19 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.GetCurrentActivePage
struct UUI_StoreMenu_C_GetCurrentActivePage_Params
{
public:
	class UUI_ParentPage_C*                      CurrentPage;                                       // 0x0(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x8(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     Temp_byte_Variable;                                // 0x9(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_38CE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      K2Node_Select_Default;                             // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UpdateSearchFilter
struct UUI_StoreMenu_C_UpdateSearchFilter_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_38D4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x20(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x38(0x8)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x40(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x41(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_38D5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x60(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38D6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Select_Default;                             // 0x64(0x4)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.DestroyModPageMenu
struct UUI_StoreMenu_C_DestroyModPageMenu_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.CreateModPageMenu
struct UUI_StoreMenu_C_CreateModPageMenu_Params
{
public:
	int64                                        Mod_ID;                                            // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DrawUIOnZOrder;                                    // 0x8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38DC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         ModPageRef;                                        // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         CallFunc_CreateModPageFromStoreMenu_ReturnValue;   // 0x20(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.CreateRightClickMenu
struct UUI_StoreMenu_C_CreateRightClickMenu_Params
{
public:
	class UUI_GameSlot_C*                        UI_GameSlot;                                       // 0x0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, DuplicateTransient)
	bool                                         ShouldViewBeVisible;                               // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SepareteReportWithLine;                            // 0x9(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38E4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WidgetWidth;                                       // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UUI_RightClickMenu_C*                  MenuRef;                                           // 0x18(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_RightClickMenu_C*                  CallFunc_Create_ReturnValue;                       // 0x20(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.DestroyRightClickMenu
struct UUI_StoreMenu_C_DestroyRightClickMenu_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0xF30 (0xF30 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UpdateAllStoreMenuWidgets
struct UUI_StoreMenu_C_UpdateAllStoreMenuWidgets_Params
{
public:
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x0(0x8)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xA(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         Temp_bool_Variable;                                // 0xB(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_38EB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle; // 0x10(0x3F0)(Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1; // 0x400(0x3F0)(Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x7F0(0x3F0)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    Temp_object_Variable_1;                            // 0xBE0(0x8)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0xBE8(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xBF0(0xD0)(ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xCC0(0xD0)(ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0xD90(0xD0)(ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0xE60(0xD0)(ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
};

// 0x109 (0x109 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.InitTheme
struct UUI_StoreMenu_C_InitTheme_Params
{
public:
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38EF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreThemeRowData                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x100)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x108(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.ShouldCustomizeTheme
struct UUI_StoreMenu_C_ShouldCustomizeTheme_Params
{
public:
	class UUI_ThemeCustomizer_C*                 CallFunc_Create_ReturnValue;                       // 0x0(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.InitAllTabs
struct UUI_StoreMenu_C_InitAllTabs_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_38F4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x14(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class UUI_Button_Sidebar_C*                  CallFunc_Array_Get_Item;                           // 0x18(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class UUI_ParentPage_C*                      CallFunc_Array_Get_Item_1;                         // 0x20(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x2C(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_38F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x34(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	TArray<class UUI_ParentPage_C*>              K2Node_MakeArray_Array;                            // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	TArray<class UUI_Button_Sidebar_C*>          K2Node_MakeArray_Array_1;                          // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x79 (0x79 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnSearchedTextCommitted
struct UUI_StoreMenu_C_OnSearchedTextCommitted_Params
{
public:
	TArray<class UWidget*>                       WidgetArray;                                       // 0x0(0x10)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_38F9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_38FA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IBPI_PageWidgets_C>   K2Node_DynamicCast_AsBPI_Page_Widgets;             // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_38FB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.CloseBNavigation
struct UUI_StoreMenu_C_CloseBNavigation_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38FF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TScriptInterface<class IBPI_PageWidgets_C>   K2Node_DynamicCast_AsBPI_Page_Widgets;             // 0x18(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3900[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetClose_B_Widget;                        // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OpenCurrentActivePage
struct UUI_StoreMenu_C_OpenCurrentActivePage_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.UpdateCloseButtonSearchVisiblity
struct UUI_StoreMenu_C_UpdateCloseButtonSearchVisiblity_Params
{
public:
	class FText                                  SearchInput;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x23 (0x23 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SelectPage
struct UUI_StoreMenu_C_SelectPage_Params
{
public:
	class UUI_Button_Sidebar_C*                  Target;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UUI_Button_Sidebar_C*                  CallFunc_Array_Get_Item;                           // 0x18(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x22(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnFail_A1413E6746555E5B30E503B4FC8CC5D8
struct UUI_StoreMenu_C_OnFail_A1413E6746555E5B30E503B4FC8CC5D8_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccess_A1413E6746555E5B30E503B4FC8CC5D8
struct UUI_StoreMenu_C_OnSuccess_A1413E6746555E5B30E503B4FC8CC5D8_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event On CFCore Init Error
struct UUI_StoreMenu_C_Event_On_CFCore_Init_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_StoreMenu_C_BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x19 (0x19 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_StoreMenu_C_BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event Result
struct UUI_StoreMenu_C_Event_Result_Params
{
public:
	bool                                         Is_authenticated;                                  // 0x0(0x1)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event On Get User Info Failed
struct UUI_StoreMenu_C_Event_On_Get_User_Info_Failed_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x40 (0x40 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event On Get User Info
struct UUI_StoreMenu_C_Event_On_Get_User_Info_Params
{
public:
	struct FMe                                   Me;                                                // 0x0(0x40)(ConstParm, BlueprintVisible, ReturnParm, Transient)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.Event On Sync Installed Mods Error
struct UUI_StoreMenu_C_Event_On_Sync_Installed_Mods_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x40 (0x40 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.DELETE_FocusableOnKeyDown_1
struct UUI_StoreMenu_C_DELETE_FocusableOnKeyDown_1_Params
{
public:
	struct FKeyEvent                             KeyEvent;                                          // 0x0(0x40)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.SetNewTextInSearch
struct UUI_StoreMenu_C_SetNewTextInSearch_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.ButtonCall
struct UUI_StoreMenu_C_ButtonCall_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	enum class EViewState                        State;                                             // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccessGetMyPremiumMods
struct UUI_StoreMenu_C_OnSuccessGetMyPremiumMods_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnFailGetMyPremiumMods
struct UUI_StoreMenu_C_OnFailGetMyPremiumMods_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccessPremiumModsCheck
struct UUI_StoreMenu_C_OnSuccessPremiumModsCheck_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.FailedPremiumModsChecks
struct UUI_StoreMenu_C_FailedPremiumModsChecks_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.WaitForPurchaseResponse
struct UUI_StoreMenu_C_WaitForPurchaseResponse_Params
{
public:
	TArray<int64>                                InModIds;                                          // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccessGeneratePremium
struct UUI_StoreMenu_C_OnSuccessGeneratePremium_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnErrorGeneratePremium
struct UUI_StoreMenu_C_OnErrorGeneratePremium_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.temp2
struct UUI_StoreMenu_C_Temp2_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.temp1
struct UUI_StoreMenu_C_Temp1_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.GamepadChangeTab
struct UUI_StoreMenu_C_GamepadChangeTab_Params
{
public:
	bool                                         Forward;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnRequestedModPage
struct UUI_StoreMenu_C_OnRequestedModPage_Params
{
public:
	int64                                        ForModID;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OpenModPageForID
struct UUI_StoreMenu_C_OpenModPageForID_Params
{
public:
	int64                                        Mod_ID;                                            // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnModInfoFound
struct UUI_StoreMenu_C_OnModInfoFound_Params
{
public:
	class UUI_GameSlot_C*                        ForGameSlot;                                       // 0x0(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x6B9 (0x6B9 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.ExecuteUbergraph_UI_StoreMenu
struct UUI_StoreMenu_C_ExecuteUbergraph_UI_StoreMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3946[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x18(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x40(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x49(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3947[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_2;         // 0x50(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FGenPremiumCheckoutUrlRequest         K2Node_MakeStruct_GenPremiumCheckoutUrlRequest;    // 0x58(0x10)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x68(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	struct FCFCoreError                          K2Node_CustomEvent_error_6;                        // 0x78(0x38)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_3;         // 0xB0(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0xB8(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	class UUI_Prompt_SignIn_C*                   CallFunc_Create_ReturnValue;                       // 0xD8(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsWithInterface_FoundWidgets;  // 0xE0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3949[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0xF8(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x110(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_CustomEvent_is_authenticated;               // 0x111(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_394A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_4;         // 0x118(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	struct FCFCoreError                          K2Node_CustomEvent_error_5;                        // 0x120(0x38)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	struct FMe                                   K2Node_CustomEvent_me;                             // 0x158(0x40)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CallFunc_MakeSettingsFromProjectConfig_ReturnValue; // 0x198(0x88)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x220(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	struct FCFCoreError                          K2Node_CustomEvent_error_4;                        // 0x230(0x38)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x268(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
	struct FKeyEvent                             K2Node_Event_KeyEvent;                             // 0x278(0x40)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x2B8(0x18)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x2D0(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_394C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x2D4(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x2E4(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
	uint8                                        Pad_394D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x2F8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x300(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x310(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_5;         // 0x320(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x328(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x330(0x8)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x338(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_394F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage_1;       // 0x340(0x8)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab_1;  // 0x348(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3950[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_CustomEvent_InText;                         // 0x350(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x368(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x378(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3951[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x380(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x388(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3952[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x390(0x18)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0x3A8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3954[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x3B0(0x8)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x3B8(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x3C0(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3955[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x3C4(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_3956[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x3D8(0x8)(Edit, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x3E0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x3E1(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_3958[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                K2Node_CustomEvent_ModIds_2;                       // 0x3E8(0x10)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FCFCoreError                          K2Node_CustomEvent_error_3;                        // 0x3F8(0x38)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x430(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x438(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, EditorOnly)
	TArray<int64>                                K2Node_CustomEvent_ModIds_1;                       // 0x448(0x10)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FCFCoreError                          K2Node_CustomEvent_error_2;                        // 0x458(0x38)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue_6;         // 0x490(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x498(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	TArray<int64>                                K2Node_CustomEvent_InModIds;                       // 0x4A8(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x4B8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x4C8(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4E0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_3959[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUserWidget*                     CallFunc_Array_Get_Item;                           // 0x4E8(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	class FString                                K2Node_CustomEvent_url;                            // 0x4F0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error_1;                        // 0x500(0x38)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x538(0x1)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_395A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x53C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage_2;       // 0x540(0x8)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab_2;  // 0x548(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_395C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UUI_ParentPage_C*                      CallFunc_Array_Get_Item_1;                         // 0x550(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x558(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_395D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                K2Node_CustomEvent_ModIds;                         // 0x560(0x10)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x570(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x580(0x38)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x5B8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x5C8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x5D8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NoDestructor)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_7;         // 0x5E8(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x5F0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_DidAllTheModsGetBought_ReturnValue;       // 0x5F1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x5F2(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_395E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5F4(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x5F8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_395F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x5FC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         K2Node_Event_forward;                              // 0x600(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0x601(0x1)(ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x602(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3960[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x604(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NoDestructor)
	uint8                                        CallFunc_Subtract_ByteByte_ReturnValue;            // 0x614(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3962[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x618(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x628(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x629(0x1)(DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x62A(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x62B(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        CallFunc_Percent_ByteByte_ReturnValue;             // 0x62C(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0x62D(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3963[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_8;         // 0x630(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x638(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional, NoDestructor)
	int64                                        K2Node_Event_ForModID;                             // 0x648(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_Int64Int64_ReturnValue;           // 0x650(0x1)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3964[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                K2Node_MakeArray_Array_1;                          // 0x658(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	int64                                        K2Node_CustomEvent_Mod_ID;                         // 0x668(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage_3;       // 0x670(0x8)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab_3;  // 0x678(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_3965[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_BrowseMods_C*                      K2Node_DynamicCast_AsUI_Browse_Mods;               // 0x680(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x688(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_3966[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_CustomEvent_ForGameSlot;                    // 0x690(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         CallFunc_CreateModPageMenu_ModPageRef;             // 0x698(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage_4;       // 0x6A0(0x8)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab_4;  // 0x6A8(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_3967[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_BrowseMods_C*                      K2Node_DynamicCast_AsUI_Browse_Mods_1;             // 0x6B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x6B8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
};

// 0x1 (0x1 - 0x0)
// Function UI_StoreMenu.UI_StoreMenu_C.OnInputDeviceChanged__DelegateSignature
struct UUI_StoreMenu_C_OnInputDeviceChanged__DelegateSignature_Params
{
public:
	enum class ENUM_InputDevices                 Device;                                            // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


