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

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnEventBroadcasted
struct UBP_ServerModsWidget_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_39DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_39DE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BPHighlightWidgetOnStart
struct UBP_ServerModsWidget_C_BPHighlightWidgetOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1B (0x1B - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BPGamepadReleased
struct UBP_ServerModsWidget_C_BPGamepadReleased_Params
{
public:
	struct FKey                                  TheKey;                                            // 0x0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x1A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
};

// 0x4D0 (0x4D0 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateModList
struct UBP_ServerModsWidget_C_CreateModList_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39EA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x18(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4B0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4B4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39EC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UWrapBoxSlot*                          CallFunc_AddChildToWrapBox_ReturnValue;            // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4D0 (0x4D0 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AddToTotalSize
struct UBP_ServerModsWidget_C_AddToTotalSize_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreFileSize                       CallFunc_Get_Mod_Size_SizeStruct;                  // 0x498(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_39F2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Get_Mod_Size_SizeInText;                  // 0x4A8(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Get_Mod_Size_bytes;                       // 0x4C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Add_Int64Int64_ReturnValue;               // 0x4C8(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1F (0x1F - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.BP_ServerModsWidget_AutoGenFunc
struct UBP_ServerModsWidget_C_BP_ServerModsWidget_AutoGenFunc_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	enum class EViewState                        State;                                             // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1B(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1D(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1E(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetEnoughSpaceToDownloadAllMods
struct UBP_ServerModsWidget_C_GetEnoughSpaceToDownloadAllMods_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_Greater_Int64Int64_ReturnValue;           // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x9AA (0x9AA - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetCompleteInstalledModsStatus
struct UBP_ServerModsWidget_C_GetCompleteInstalledModsStatus_Params
{
public:
	bool                                         AllModsInstalled;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A0C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TotalInstalledMods;                                // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalNonInstalledMods;                             // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A0D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           InstalledMods;                                     // 0x10(0x10)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           NonInstalledModList;                               // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           TempListYes;                                       // 0x30(0x10)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           TempListNo;                                        // 0x40(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   Temp_struct_Variable;                              // 0x60(0x498)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4F8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4FC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x500(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_3A10[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x508(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x9A0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x9A4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9A8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x9A9(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdatePurchaseButtonEnabled
struct UBP_ServerModsWidget_C_UpdatePurchaseButtonEnabled_Params
{
public:
	bool                                         CallFunc_GetAllModsPurchased_AllModsPurchased;     // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A12[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                CallFunc_GetAllModsPurchased_NotPurchasedModIDs;   // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateFreeSpaceText
struct UBP_ServerModsWidget_C_UpdateFreeSpaceText_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A16[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_FormatFileSize_ReturnValue;               // 0x8(0x10)(ExportObject, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdatePurchaseState
struct UBP_ServerModsWidget_C_UpdatePurchaseState_Params
{
public:
	class FText                                  PurchaseAndDownloadModsText;                       // 0x0(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  DownloadModsText;                                  // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x31(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x32(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable_1;                              // 0x33(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x34(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x35(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_2;                              // 0x36(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_GetAllModsPurchased_AllModsPurchased;     // 0x37(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                CallFunc_GetAllModsPurchased_NotPurchasedModIDs;   // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x48(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x49(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3A1E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x4C(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class FText                                  K2Node_Select_Default_2;                           // 0x50(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
};

// 0x18 (0x18 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.InitializePageState
struct UBP_ServerModsWidget_C_InitializePageState_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Debug_SuccessFileInfosFromIDs
struct UBP_ServerModsWidget_C_Debug_SuccessFileInfosFromIDs_Params
{
public:
	TArray<struct FFile>                         Files;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Debug_RequestFileInfosFromIDs
struct UBP_ServerModsWidget_C_Debug_RequestFileInfosFromIDs_Params
{
public:
	TArray<int64>                                TargetArray;                                       // 0x0(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x134 (0x134 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateFileModToIDList
struct UBP_ServerModsWidget_C_CreateFileModToIDList_Params
{
public:
	TArray<struct FFile>                         Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	TArray<int64>                                ModsIds;                                           // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A2B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFile                                 CallFunc_Array_Get_Item;                           // 0x30(0xF8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x128(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A2C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x12C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x130(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.InitDropdownMenu
struct UBP_ServerModsWidget_C_InitDropdownMenu_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4AD (0x4AD - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetAnyPremiumModsExist
struct UBP_ServerModsWidget_C_GetAnyPremiumModsExist_Params
{
public:
	bool                                         Exist;                                             // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A36[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4A8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4AC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AnimationPlayFadeInOnInit
struct UBP_ServerModsWidget_C_AnimationPlayFadeInOnInit_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.AnimationPlayFadeInOnStart
struct UBP_ServerModsWidget_C_AnimationPlayFadeInOnStart_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4FE (0x4FE - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.GetAllModsPurchased
struct UBP_ServerModsWidget_C_GetAllModsPurchased_Params
{
public:
	bool                                         AllModsPurchased;                                  // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A4A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                NotPurchasedModIDs;                                // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                TEMP_ModsWhichWillBePurchased;                     // 0x18(0x10)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x28(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A4E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3A50[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x40(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4D8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x4DC(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4E0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4E1(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A57[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4E4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int64                                        CallFunc_Array_Get_Item_1;                         // 0x4E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4F0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x4F4(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4F5(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x4F6(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A5D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x4F8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x4FC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x4FD(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.DestroyPremiumBuyHandle
struct UBP_ServerModsWidget_C_DestroyPremiumBuyHandle_Params
{
public:
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA68 (0xA68 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateModPricingList
struct UBP_ServerModsWidget_C_CreateModPricingList_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A77[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWBP_PriceColumns_C*                   CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3A79[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x20(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4B8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A7C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_MakeFInstallProgressMod_ReturnValue;      // 0x4C0(0x498)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x958(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x9A8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x9B8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x9D0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3A80[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<double>                               CallFunc_Map_Keys_Keys;                            // 0x9D8(0x10)(ExportObject, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x9E8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A85[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Array_Get_Item_1;                         // 0x9F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x9F8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3A86[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Map_Find_Value;                           // 0x9FC(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xA00(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_3A88[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA04(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA08(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A89[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0xA10(0x8)(Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xA18(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3A8B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xA1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_GetIsModPaidStatus_Premium;               // 0xA20(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Purchased;             // 0xA21(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A8D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetIsModPaidStatus_Tier_Price;            // 0xA28(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetIsModPaidStatus_Currency_Symbol;       // 0xA30(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xA40(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Map_Find_Value_1;                         // 0xA48(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xA4C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_3A8F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0xA50(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA54(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA55(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A90[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0xA58(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3A91[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xA60(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdatePageDiskSpaceAvailability
struct UBP_ServerModsWidget_C_UpdatePageDiskSpaceAvailability_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_GetAllModsPurchased_AllModsPurchased;     // 0x3(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A97[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                CallFunc_GetAllModsPurchased_NotPurchasedModIDs;   // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetEnoughSpaceToDownloadAllMods_ReturnValue; // 0x18(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1A(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3A98[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_NotificationManager_C*             CallFunc_GetNotifManager_Output;                   // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Get Server Mods Delegate
struct UBP_ServerModsWidget_C_Get_Server_Mods_Delegate_Params
{
public:
	FDelegateProperty_                           JoinEvent;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           BackEvent;                                         // 0x10(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           ReportEvent;                                       // 0x20(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, SubobjectReference)
	FDelegateProperty_                           FavoriteEvent;                                     // 0x30(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           ErrorEvent;                                        // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.EndDownloadCheck
struct UBP_ServerModsWidget_C_EndDownloadCheck_Params
{
public:
	bool                                         CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled; // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A9B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods; // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods; // 0x8(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A9C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_GetCompleteInstalledModsStatus_InstalledMods; // 0x10(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList; // 0x20(0x10)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateTexts
struct UBP_ServerModsWidget_C_UpdateTexts_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled; // 0x2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods; // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods; // 0x8(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AA2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_GetCompleteInstalledModsStatus_InstalledMods; // 0x10(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList; // 0x20(0x10)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3AA3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_FormatFileSize_ReturnValue;               // 0x68(0x10)(ExportObject, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x78(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3AA4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x80(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnError
struct UBP_ServerModsWidget_C_OnError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x20 (0x20 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnModsDirInfo
struct UBP_ServerModsWidget_C_OnModsDirInfo_Params
{
public:
	struct FModsDirInfo                          ModsDirInfo;                                       // 0x0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnModsDirInfoError
struct UBP_ServerModsWidget_C_OnModsDirInfoError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnSuccessGeneratePremium
struct UBP_ServerModsWidget_C_OnSuccessGeneratePremium_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnErrorGeneratePremium
struct UBP_ServerModsWidget_C_OnErrorGeneratePremium_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.PreConstruct
struct UBP_ServerModsWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On CFCore Init Error
struct UBP_ServerModsWidget_C_Event_On_CFCore_Init_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event Result
struct UBP_ServerModsWidget_C_Event_Result_Params
{
public:
	bool                                         Is_authenticated;                                  // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On Get User Info Failed
struct UBP_ServerModsWidget_C_Event_On_Get_User_Info_Failed_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x40 (0x40 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On Get User Info
struct UBP_ServerModsWidget_C_Event_On_Get_User_Info_Params
{
public:
	struct FMe                                   Me;                                                // 0x0(0x40)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Event On Sync Installed Mods Error
struct UBP_ServerModsWidget_C_Event_On_Sync_Installed_Mods_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x20 (0x20 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnSuccessSpaceCheck
struct UBP_ServerModsWidget_C_OnSuccessSpaceCheck_Params
{
public:
	struct FModsDirInfo                          ModsDirInfo;                                       // 0x0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnErrorSpaceCheck
struct UBP_ServerModsWidget_C_OnErrorSpaceCheck_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnSuccessPremiumModsCheck
struct UBP_ServerModsWidget_C_OnSuccessPremiumModsCheck_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FailedPremiumModsChecks
struct UBP_ServerModsWidget_C_FailedPremiumModsChecks_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Success
struct UBP_ServerModsWidget_C_Success_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FailedToFindPremium
struct UBP_ServerModsWidget_C_FailedToFindPremium_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.SuccessGetFileInfoByIDs
struct UBP_ServerModsWidget_C_SuccessGetFileInfoByIDs_Params
{
public:
	TArray<struct FFile>                         Files;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Tick
struct UBP_ServerModsWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnAuthenticated
struct UBP_ServerModsWidget_C_OnAuthenticated_Params
{
public:
	bool                                         bAuth;                                             // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
};

// 0x688 (0x688 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ExecuteUbergraph_BP_ServerModsWidget
struct UBP_ServerModsWidget_C_ExecuteUbergraph_BP_ServerModsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3AC8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x48(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	struct FModsDirInfo                          K2Node_CustomEvent_ModsDirInfo_1;                  // 0x58(0x20)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FCFCoreError                          K2Node_CustomEvent_error_7;                        // 0x78(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_2;         // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xC8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FString                                K2Node_CustomEvent_url;                            // 0xD8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error_6;                        // 0xE8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x120(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3ACA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x124(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x134(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3ACB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x138(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x148(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x150(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x151(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_3ACC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreError                          K2Node_CustomEvent_error_5;                        // 0x158(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	bool                                         K2Node_CustomEvent_is_authenticated;               // 0x190(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x191(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3ACE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreError                          K2Node_CustomEvent_error_4;                        // 0x198(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	struct FMe                                   K2Node_CustomEvent_me;                             // 0x1D0(0x40)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreSettings                       CallFunc_MakeSettingsFromProjectConfig_ReturnValue; // 0x210(0x88)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error_3;                        // 0x298(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x2D0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_3;         // 0x2E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x2E8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	class UBP_ServerModsLoading_C*               CallFunc_Create_ReturnValue;                       // 0x2F8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_4;         // 0x300(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_5;         // 0x308(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x310(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x320(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_6;         // 0x330(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x338(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x348(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	struct FModsDirInfo                          K2Node_CustomEvent_ModsDirInfo;                    // 0x358(0x20)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error_2;                        // 0x378(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_7;         // 0x3B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x3B8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_8;         // 0x3C8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_Greater_Int64Int64_ReturnValue;           // 0x3D0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AD0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_NotificationManager_C*             CallFunc_GetNotifManager_Output;                   // 0x3D8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x3E0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x3F0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
	TArray<int64>                                K2Node_CustomEvent_ModIds_1;                       // 0x400(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x410(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	struct FCFCoreError                          K2Node_CustomEvent_error_1;                        // 0x420(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_9;         // 0x458(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x460(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3AD2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x468(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x470(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetAllModsPurchased_AllModsPurchased;     // 0x471(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AD3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                CallFunc_GetAllModsPurchased_NotPurchasedModIDs;   // 0x478(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetAllModsPurchased_AllModsPurchased_1;   // 0x488(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3AD4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                CallFunc_GetAllModsPurchased_NotPurchasedModIDs_1; // 0x490(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FGenPremiumCheckoutUrlRequest         K2Node_MakeStruct_GenPremiumCheckoutUrlRequest;    // 0x4A0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                K2Node_CustomEvent_ModIds;                         // 0x4B0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x4C0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x4F8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x500(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x510(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x520(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	struct FMatchPlatformFilesFilter             K2Node_MakeStruct_MatchPlatformFilesFilter;        // 0x530(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_10;        // 0x540(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x548(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	TArray<struct FFile>                         K2Node_CustomEvent_files;                          // 0x558(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                CallFunc_CreateFileModToIDList_ModsIds;            // 0x568(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x578(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	bool                                         CallFunc_GetAllModsPurchased_AllModsPurchased_2;   // 0x588(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_3AD5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                CallFunc_GetAllModsPurchased_NotPurchasedModIDs_2; // 0x590(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_DidAllTheModsGetBought_ReturnValue;       // 0x5A0(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5A1(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5A2(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3AD6[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_11;        // 0x5A8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x5B0(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AD7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0x5B4(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	bool                                         CallFunc_GetAllModsPurchased_AllModsPurchased_3;   // 0x5C4(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_3AD9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                CallFunc_GetAllModsPurchased_NotPurchasedModIDs_3; // 0x5C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled; // 0x5D8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3ADA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods; // 0x5DC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods; // 0x5E0(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3ADB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_GetCompleteInstalledModsStatus_InstalledMods; // 0x5E8(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList; // 0x5F8(0x10)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetCompleteInstalledModsStatus_AllModsInstalled_1; // 0x608(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3ADC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetCompleteInstalledModsStatus_TotalInstalledMods_1; // 0x60C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_GetCompleteInstalledModsStatus_TotalNonInstalledMods_1; // 0x610(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_3ADD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_GetCompleteInstalledModsStatus_InstalledMods_1; // 0x618(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	TArray<struct FInstallProgressMod>           CallFunc_GetCompleteInstalledModsStatus_NonInstalledModList_1; // 0x628(0x10)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x638(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x670(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         K2Node_CustomEvent_bAuth;                          // 0x674(0x1)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3ADF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x678(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.StartDownloads__DelegateSignature
struct UBP_ServerModsWidget_C_StartDownloads__DelegateSignature_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.JoinEvent__DelegateSignature
struct UBP_ServerModsWidget_C_JoinEvent__DelegateSignature_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FavoriteEvent__DelegateSignature
struct UBP_ServerModsWidget_C_FavoriteEvent__DelegateSignature_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.RepotrEvent__DelegateSignature
struct UBP_ServerModsWidget_C_RepotrEvent__DelegateSignature_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


