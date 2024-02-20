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
// Function UI_ParentPage.UI_ParentPage_C.GetClose_B
struct UUI_ParentPage_C_GetClose_B_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
};

// 0x9 (0x9 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.PlayFadeIn
struct UUI_ParentPage_C_PlayFadeIn_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BPEscapeClosed
struct UUI_ParentPage_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2A (0x2A - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetVisibility_0
struct UUI_ParentPage_C_GetVisibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3926[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsAnyModInstalling_ReturnValue;           // 0x11(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3928[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x20(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x21(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x22(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x23(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x24(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x25(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x26(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x27(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x29(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x6B (0x6B - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ReturnModsOfCurrentPage
struct UUI_ParentPage_C_ReturnModsOfCurrentPage_Params
{
public:
	TArray<struct FInstallProgressMod>           Mod_List;                                          // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           TrueModInfo;                                       // 0x10(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           FinalOutputArray;                                  // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           TempArray;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x40(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_392D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x44(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4C(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_392E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x50(0x4)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Int32_SubOne_ReturnValue;                 // 0x54(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x58(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x5C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x60(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Int32_SubOne_ReturnValue_1;               // 0x64(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x68(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x69(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6A(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.MoreImagesLeftToDownload
struct UUI_ParentPage_C_MoreImagesLeftToDownload_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_392F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_CalculateModsPerRow_Mods;                 // 0x4(0x4)(Edit, ConstParm, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetModIndexesForCurrentRow
struct UUI_ParentPage_C_GetModIndexesForCurrentRow_Params
{
public:
	int32                                        First;                                             // 0x0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Last;                                              // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_CalculateModsPerRow_Mods;                 // 0x8(0x4)(Edit, ConstParm, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Int32_SubOne_ReturnValue;                 // 0xC(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Int32_SubOne_ReturnValue_1;               // 0x18(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x9 (0x9 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.DownloadNextBatchOfMods
struct UUI_ParentPage_C_DownloadNextBatchOfMods_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x4D0 (0x4D0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.DownloadBatchOfMods
struct UUI_ParentPage_C_DownloadBatchOfMods_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x8(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x4A0(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3935[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x4A8(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4B0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4B1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3936[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetModIndexesForCurrentRow_First;         // 0x4B4(0x4)(ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetModIndexesForCurrentRow_Last;          // 0x4B8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4BC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3938[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x4C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x4E1 (0x4E1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CheckIfImagesAreReady
struct UUI_ParentPage_C_CheckIfImagesAreReady_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_MoreImagesLeftToDownload_ReturnValue;     // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3941[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3942[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x4A8(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3943[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x4B0(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4B8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3944[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4BC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4C0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4C1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3946[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetModIndexesForCurrentRow_First;         // 0x4C4(0x4)(ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetModIndexesForCurrentRow_Last;          // 0x4C8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4CC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4CD(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3949[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x4D0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x4E0(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.DownloadImagesInAllMods
struct UUI_ParentPage_C_DownloadImagesInAllMods_Params
{
public:
	bool                                         CallFunc_InitiliazeImageDownloads_ReadyToStart;    // 0x0(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CreateEmptySlot
struct UUI_ParentPage_C_CreateEmptySlot_Params
{
public:
	int32                                        AtIndex;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        CallFunc_CalculateModsPerRow_Mods;                 // 0x4(0x4)(Edit, ConstParm, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_394E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x10(0x4)(Edit, ConstParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_394F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_EmptySlot_C*                       CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x20(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1B (0x1B - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SwitchControllerAction
struct UUI_ParentPage_C_SwitchControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	enum class EViewState                        State;                                             // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x2A (0x2A - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownTime
struct UUI_ParentPage_C_Nav_Down_from_DropdownTime_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3954[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UWidget*                               CallFunc_Nav_to_Options_ReturnValue;               // 0x10(0x8)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x20(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x29(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x2A (0x2A - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownSort
struct UUI_ParentPage_C_Nav_Down_from_DropdownSort_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3956[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UWidget*                               CallFunc_Nav_to_Options_ReturnValue;               // 0x10(0x8)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x20(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x29(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x2A (0x2A - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownCategory
struct UUI_ParentPage_C_Nav_Down_from_DropdownCategory_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_395D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UWidget*                               CallFunc_Nav_to_Options_ReturnValue;               // 0x10(0x8)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x20(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x29(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Nav for Up Move from List
struct UUI_ParentPage_C_Nav_for_Up_Move_from_List_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_395E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetNavigationRuleForList
struct UUI_ParentPage_C_SetNavigationRuleForList_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3960[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3965[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetListFocus
struct UUI_ParentPage_C_SetListFocus_Params
{
public:
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x8(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdatePaginations
struct UUI_ParentPage_C_UpdatePaginations_Params
{
public:
	TArray<struct FInstallProgressMod>           TotalList;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3972[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x18(0x4)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3973[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_FMod_Remainder;                           // 0x30(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x3C(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3974[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x40(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        K2Node_Select_Default;                             // 0x44(0x4)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ClearImageCache
struct UUI_ParentPage_C_ClearImageCache_Params
{
public:
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
};

// 0x61 (0x61 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BindToDropdown
struct UUI_ParentPage_C_BindToDropdown_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	TArray<class UUI_CustomComboBox_C*>          K2Node_MakeArray_Array;                            // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3977[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBox_C*                  CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3979[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UUI_CustomComboBox_C*                  CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x60(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x48 (0x48 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CloseAllDropdownApartFrom
struct UUI_ParentPage_C_CloseAllDropdownApartFrom_Params
{
public:
	class UUI_CustomComboBox_C*                  Dropdown;                                          // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_CustomComboBox_C*>          Dropdowns;                                         // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x2C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3980[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_CustomComboBox_C*>          K2Node_MakeArray_Array;                            // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x39 (0x39 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CloseAllDropDown
struct UUI_ParentPage_C_CloseAllDropDown_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3983[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_CustomComboBox_C*>          K2Node_MakeArray_Array;                            // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3984[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBox_C*                  CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetEnableStageForGameSlot
struct UUI_ParentPage_C_SetEnableStageForGameSlot_Params
{
public:
	bool                                         EnableStage;                                       // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_398C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x10(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_398E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3990[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x38(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x51 (0x51 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BindToGameSlot
struct UUI_ParentPage_C_BindToGameSlot_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_399D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39A1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x48(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4B2 (0x4B2 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ClearAllModsInPage
struct UUI_ParentPage_C_ClearAllModsInPage_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39AC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39AD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x18(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4B0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4B1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x22 (0x22 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateNotificationInSwitcher
struct UUI_ParentPage_C_UpdateNotificationInSwitcher_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_39B4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x10(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x12(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x13(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x14(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x18(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_39B6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x21(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateAllThemeSettings
struct UUI_ParentPage_C_UpdateAllThemeSettings_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39BB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x13 (0x13 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.IsUrlValid
struct UUI_ParentPage_C_IsUrlValid_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x11(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdatePagesPagination
struct UUI_ParentPage_C_UpdatePagesPagination_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39C3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x68(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.FilterModInfo
struct UUI_ParentPage_C_FilterModInfo_Params
{
public:
	struct FCFCoreSearchModsFilter               ReturnValue;                                       // 0x0(0x30)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
	struct FCFCoreSearchModsFilter               CallFunc_MakeSearchModsFilter_ReturnValue;         // 0x38(0x30)(Edit, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetCurrentTab
struct UUI_ParentPage_C_GetCurrentTab_Params
{
public:
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateSearchText
struct UUI_ParentPage_C_UpdateSearchText_Params
{
public:
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_39DB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x58(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
};

// 0x4C1 (0x4C1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.LoadSavedUpImagesAsync
struct UUI_ParentPage_C_LoadSavedUpImagesAsync_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_GetModIndexesForCurrentRow_First;         // 0x8(0x4)(ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetModIndexesForCurrentRow_Last;          // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4A8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_39E2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x4B0(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4B8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4B9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x4BA(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_39E5[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4BC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4C0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
};

// 0x4D0 (0x4D0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.InitiliazeImageDownloads
struct UUI_ParentPage_C_InitiliazeImageDownloads_Params
{
public:
	bool                                         ReadyToStart;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_39EE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39F0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x4A8(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_39F3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x4B0(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4B8(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4B9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39F5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4BC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4C0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4C5(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_39F7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4CC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
};

// 0x32 (0x32 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerRow
struct UUI_ParentPage_C_CalculateModsPerRow_Params
{
public:
	int32                                        Mods;                                              // 0x0(0x4)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_39FA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x10(0x8)(BlueprintVisible, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x30(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x31(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x32 (0x32 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerPage
struct UUI_ParentPage_C_CalculateModsPerPage_Params
{
public:
	int32                                        Mods;                                              // 0x0(0x4)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3A06[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x10(0x8)(BlueprintVisible, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x28(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x30(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x31(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.PrevPage
struct UUI_ParentPage_C_PrevPage_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3A0A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0xD (0xD - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.NextPage
struct UUI_ParentPage_C_NextPage_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A0E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetCurrentSearchInput
struct UUI_ParentPage_C_GetCurrentSearchInput_Params
{
public:
	class FText                                  CurrentSearchInput;                                // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.OnPageActiveted
struct UUI_ParentPage_C_OnPageActiveted_Params
{
public:
	class FText                                  Search_Input;                                      // 0x0(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4C0 (0x4C0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetCurrentClassMods
struct UUI_ParentPage_C_SetCurrentClassMods_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A13[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4A8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4AC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A14[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x4B8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A15[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4BC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetStypleOfPageArrowsButtons
struct UUI_ParentPage_C_SetStypleOfPageArrowsButtons_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4C0 (0x4C0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CreateModSlot
struct UUI_ParentPage_C_CreateModSlot_Params
{
public:
	int32                                        AtIndex;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A19[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FInstallProgressMod                   K2Node_MakeStruct_InstallProgressMod;              // 0x10(0x498)(ConstParm, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_CalculateModsPerRow_Mods;                 // 0x4A8(0x4)(Edit, ConstParm, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x4AC(0x4)(Edit, ConstParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x4B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3A1B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x4B8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.IsSearchInputValid
struct UUI_ParentPage_C_IsSearchInputValid_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Edit, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x1(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SearchForAuthorsName
struct UUI_ParentPage_C_SearchForAuthorsName_Params
{
public:
	class FText                                  Input;                                             // 0x0(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	TArray<struct FModAuthor>                    Authors;                                           // 0x18(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         AuthorFound;                                       // 0x28(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A22[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FModAuthor                            CallFunc_Array_Get_Item;                           // 0x48(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A24[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0x74(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x78(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_3A27[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x89 (0x89 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetupTimeFilter
struct UUI_ParentPage_C_SetupTimeFilter_Params
{
public:
	enum class ENUM_TimeFilters                  SelectedDefaultOption;                             // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A2E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x1C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x20(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_3A30[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x29(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_3A31[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x40(0x1)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A33[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0x48(0x38)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x80(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x84(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x305 (0x305 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SetupSortByOptions
struct UUI_ParentPage_C_SetupSortByOptions_Params
{
public:
	enum class ECFCoreModsSearchSortField        SelectedDefaultOption;                             // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A48[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  Temp_text_Variable_5;                              // 0x80(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class FText                                  Temp_text_Variable_6;                              // 0x98(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FText                                  Temp_text_Variable_7;                              // 0xB0(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
	class FText                                  Temp_text_Variable_8;                              // 0xC8(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	class FText                                  Temp_text_Variable_9;                              // 0xE0(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
	class FText                                  Temp_text_Variable_10;                             // 0xF8(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FText                                  Temp_text_Variable_11;                             // 0x110(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
	enum class ECFCoreModsSearchSortField        Temp_byte_Variable;                                // 0x128(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3A4B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Temp_text_Variable_12;                             // 0x130(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FText                                  Temp_text_Variable_13;                             // 0x148(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FText                                  Temp_text_Variable_14;                             // 0x160(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	class FText                                  Temp_text_Variable_15;                             // 0x178(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
	class FText                                  Temp_text_Variable_16;                             // 0x190(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
	class FText                                  Temp_text_Variable_17;                             // 0x1A8(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
	class FText                                  Temp_text_Variable_18;                             // 0x1C0(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
	class FText                                  Temp_text_Variable_19;                             // 0x1D8(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
	class FText                                  Temp_text_Variable_20;                             // 0x1F0(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	class FText                                  Temp_text_Variable_21;                             // 0x208(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class FText                                  Temp_text_Variable_22;                             // 0x220(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	class FText                                  Temp_text_Variable_23;                             // 0x238(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x250(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ECFCoreModsSearchSortField        Temp_byte_Variable_1;                              // 0x254(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3A54[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x258(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x25C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<enum class ECFCoreModsSearchSortField> K2Node_MakeArray_Array;                            // 0x260(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	enum class ECFCoreModsSearchSortField        CallFunc_Array_Get_Item;                           // 0x270(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ECFCoreModsSearchSortField        CallFunc_Array_Get_Item_1;                         // 0x271(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3A59[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_Select_Default;                             // 0x278(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class FText                                  K2Node_Select_Default_1;                           // 0x290(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2A8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x2B8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0x2C8(0x38)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x300(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x304(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SelectClass
struct UUI_ParentPage_C_SelectClass_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x228 (0x228 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.OnMouseButtonDown
struct UUI_ParentPage_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x168(0x1)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x169(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A6A[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x170(0xB8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1F (0x1F - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BuildPage
struct UUI_ParentPage_C_BuildPage_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3A6E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Int32_SubOne_ReturnValue;                 // 0x8(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A6F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x14(0x4)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x1D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1E(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC8 (0xC8 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.CheckWhichTextAppearsFirst
struct UUI_ParentPage_C_CheckWhichTextAppearsFirst_Params
{
public:
	class FText                                  NameOne;                                           // 0x0(0x18)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  NameTwo;                                           // 0x18(0x18)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Name_One_Appears_First;                            // 0x30(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A81[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        _numOfLettersForCheck;                             // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3A83[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0x50(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x74(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A87[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x78(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_ToUpper_ReturnValue_1;                    // 0x88(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_1; // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xAC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3A8A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0xB0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_GetCharacterAsNumber_ReturnValue;         // 0xB4(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xB8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3A8C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetCharacterAsNumber_ReturnValue_1;       // 0xBC(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xC1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xC2(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_3A8E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.IsModsListEmpty
struct UUI_ParentPage_C_IsModsListEmpty_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_3A93[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
struct UUI_ParentPage_C_BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature
struct UUI_ParentPage_C_BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.Event Update Filter By Options
struct UUI_ParentPage_C_Event_Update_Filter_By_Options_Params
{
public:
	int64                                        Current_Class_Category_ID;                         // 0x0(0x8)(Edit, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.UpdateSearch
struct UUI_ParentPage_C_UpdateSearch_Params
{
public:
	class FText                                  SearchInput;                                       // 0x0(0x18)(ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.OnSearch
struct UUI_ParentPage_C_OnSearch_Params
{
public:
	class FText                                  Search_Input;                                      // 0x0(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.PreConstruct
struct UUI_ParentPage_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.SearchForModIDs
struct UUI_ParentPage_C_SearchForModIDs_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.GetModIDs
struct UUI_ParentPage_C_GetModIDs_Params
{
public:
	TArray<int64>                                ForModIDs;                                         // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function UI_ParentPage.UI_ParentPage_C.ExecuteUbergraph_UI_ParentPage
struct UUI_ParentPage_C_ExecuteUbergraph_UI_ParentPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3A9E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                K2Node_CustomEvent_ForModIDs;                      // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_ComponentBoundEvent_Option_1;               // 0x18(0x10)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                K2Node_ComponentBoundEvent_Option;                 // 0x28(0x10)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_CustomEvent_Current_Class_Category_ID;      // 0x38(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A9F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_Event_SearchInput;                          // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  K2Node_Event_Search_Input;                         // 0x60(0x18)(BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x78(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x7C(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ECFCoreModsSearchSortField        CallFunc_Map_Find_Value;                           // 0x8C(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x8D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8E(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8F(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<int64>                                K2Node_CustomEvent_ModIds;                         // 0x90(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


