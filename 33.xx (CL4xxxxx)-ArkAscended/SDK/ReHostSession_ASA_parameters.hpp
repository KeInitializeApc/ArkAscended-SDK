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

// 0x2A (0x2A - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.OnEventBroadcasted
struct UReHostSession_ASA_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_34A1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.CreateNotifManager
struct UReHostSession_ASA_C_CreateNotifManager_Params
{
public:
	class UUI_NotificationManager_C*             CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.OnRecievedInstalledModsInfo
struct UReHostSession_ASA_C_OnRecievedInstalledModsInfo_Params
{
public:
	TArray<struct FInstallProgressMod>           InstalledMods;                                     // 0x0(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.HasUGCPrivileges
struct UReHostSession_ASA_C_HasUGCPrivileges_Params
{
public:
	bool                                         HasPrivilege;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34A7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UShooterGameInstance*                  K2Node_DynamicCast_AsShooter_Game_Instance;        // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_CanUseUserGeneratedContent_ReturnValue;   // 0x19(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.Assert Selected Item for Preview
struct UReHostSession_ASA_C_Assert_Selected_Item_for_Preview_Params
{
public:
	class UScrollBox*                            ForScrollbox;                                      // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FoundSelectedIndex;                                // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x10(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34AC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_34AD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x20(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UDataListEntryButton_HostSession*      K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session; // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34AE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UCustomButtonWidget*                   CallFunc_BPGetButton_ReturnValue;                  // 0x38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x44(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x45(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34AF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x48(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	class UDataListEntryButton_HostSession*      K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1; // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BPIsSelected_ReturnValue;                 // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34B0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.IsPresetDifficultyUIOpen
struct UReHostSession_ASA_C_IsPresetDifficultyUIOpen_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.BPIsPresetDifficultyUIOpen
struct UReHostSession_ASA_C_BPIsPresetDifficultyUIOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsPresetDifficultyUIOpen_NewParam;        // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1D2 (0x1D2 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_ModImage_Border_Background
struct UReHostSession_ASA_C_Get_ModImage_Border_Background_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34B7[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xE0(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B1(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34B8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_SelectObject_ReturnValue;                 // 0x1B8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTexture*                              CallFunc_K2_GetTextureParameterValue_ReturnValue;  // 0x1C0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTexture*                              K2Node_DynamicCast_AsTexture;                      // 0x1C8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1D1(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x260 (0x260 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.OnKeyDownEvent
struct UReHostSession_ASA_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* LocalSubMenu;                                      // 0x130(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  LocalKey;                                          // 0x138(0x18)(ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsPresetDifficultyUIOpen_NewParam;        // 0x150(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x158(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x170(0xB8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x238(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x23C(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x23D(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x23E(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x23F(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UWidget*                               CallFunc_SwitchButton_Widget_2;                    // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x248(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x249(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_34C1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x24C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	class UWidget*                               CallFunc_SwitchButton_Widget_3;                    // 0x250(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* K2Node_Select_Default;                             // 0x258(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x1CA (0x1CA - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_MapImage_Border_Background
struct UReHostSession_ASA_C_Get_MapImage_Border_Background_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xD0(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34C4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture*                              CallFunc_K2_GetTextureParameterValue_ReturnValue;  // 0x1A8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B1(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34C5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_SelectObject_ReturnValue;                 // 0x1B8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTexture*                              K2Node_DynamicCast_AsTexture;                      // 0x1C0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1C9(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.Tick
struct UReHostSession_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature
struct UReHostSession_ASA_C_BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x4 (0x4 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature
struct UReHostSession_ASA_C_BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.OnModInfoRequested
struct UReHostSession_ASA_C_OnModInfoRequested_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x5A1 (0x5A1 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.ExecuteUbergraph_ReHostSession_ASA
struct UReHostSession_ASA_C_ExecuteUbergraph_ReHostSession_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_34DA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34DB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x18(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x20(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_34DD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x60(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34DE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUI*                             CallFunc_Create_ReturnValue;                       // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x78(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_34E0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x80(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x88(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu_1;          // 0x90(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_34E5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x9C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0xA4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0xA8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34E6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0xB0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0xB8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0xC0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xC8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC9(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasUGCPrivileges_HasPrivilege;            // 0xCA(0x1)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34E7[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xCC(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xD0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_34E8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        K2Node_Event_ModID;                                // 0xD8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xE0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0xE8(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_RegisterModelClass_ReturnValue;           // 0x580(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34E9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x584(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x588(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x589(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x58A(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34EA[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_StoreMenu_C*                       CallFunc_Create_ReturnValue_1;                     // 0x590(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x598(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x5A0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


