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
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.PlayFadeInAnimation
struct UBP_ServerModsLoading_C_PlayFadeInAnimation_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x49 (0x49 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.AddToProgressSize
struct UBP_ServerModsLoading_C_AddToProgressSize_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	int64                                        Value;                                             // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B31[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                CallFunc_Map_Values_Values;                        // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B37[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Add_Int64Int64_ReturnValue;               // 0x40(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.AssureClientModsUpdated_OnUpdatedFinished
struct UBP_ServerModsLoading_C_AssureClientModsUpdated_OnUpdatedFinished_Params
{
public:
	TArray<struct FInstalledMod>                 Installed_mods;                                    // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
};

// 0x1E9 (0x1E9 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.AssureClientModsUpdated_OnProgress
struct UBP_ServerModsLoading_C_AssureClientModsUpdated_OnProgress_Params
{
public:
	struct FModsUpdateProgress                   UpdateProgress;                                    // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2B3F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLibraryProgress                      ModInstallProgress;                                // 0x8(0x40)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, SubobjectReference)
	struct FCFCoreMod                            Mod;                                               // 0x48(0x1A0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1E8(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.DownloadAllModsByFileIDs
struct UBP_ServerModsLoading_C_DownloadAllModsByFileIDs_Params
{
public:
	class FText                                  ServerName;                                        // 0x0(0x18)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                ModsToDownload;                                    // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           Mods_to_Download;                                  // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x58(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x328 (0x328 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Update Downloading Proggress Text
struct UBP_ServerModsLoading_C_Update_Downloading_Proggress_Text_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	int64                                        FileId;                                            // 0x8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	enum class ELibraryProgressState             PregressState;                                     // 0x10(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B4F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Progress;                                          // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	int64                                        TransferredBytes;                                  // 0x18(0x8)(BlueprintVisible, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ELibraryProgressState             Temp_byte_Variable;                                // 0x38(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2B50[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Len_ReturnValue;                          // 0xA0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2B51[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2B53[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xD8(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x128(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x138(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FCFCoreFileSize                       CallFunc_BreakFileSize_ReturnValue;                // 0x150(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreFileSize                       CallFunc_BreakFileSize_ReturnValue_1;              // 0x15C(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x168(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x170(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x1C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_Variable;                                // 0x1C8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2B56[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x1D0(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x220(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  K2Node_Select_Default;                             // 0x238(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x250(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x268(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x280(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x298(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x2E8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x2F8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  K2Node_Select_Default_1;                           // 0x310(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
};

// 0x88 (0x88 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateTexts
struct UBP_ServerModsLoading_C_UpdateTexts_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B64[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x70(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x5FC (0x5FC - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CalculateTatalModsSize
struct UBP_ServerModsLoading_C_CalculateTatalModsSize_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B6D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4A8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FCFCoreFileSize                       CallFunc_Get_Mod_Size_SizeStruct;                  // 0x4AC(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Get_Mod_Size_SizeInText;                  // 0x4B8(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Get_Mod_Size_bytes;                       // 0x4D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4D8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B6F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4DC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4E0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2B70[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFile                                 CallFunc_Array_Get_Item_1;                         // 0x4E8(0xF8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x5E0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B72[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Add_Int64Int64_ReturnValue;               // 0x5E8(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x5F0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x5F4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2B75[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x5F8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0xCC (0xCC - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateProgressBar
struct UBP_ServerModsLoading_C_UpdateProgressBar_Params
{
public:
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue;            // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2B79[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_1;          // 0x18(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_2B7B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x40(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, SubobjectReference)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x44(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB0(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xC8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.GetDelegate
struct UBP_ServerModsLoading_C_GetDelegate_Params
{
public:
	FDelegateProperty_                           BackDelegate;                                      // 0x0(0x10)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           CompletedDelegate;                                 // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CheckIfAllDownloaded
struct UBP_ServerModsLoading_C_CheckIfAllDownloaded_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x2AC (0x2AC - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingModsFile
struct UBP_ServerModsLoading_C_ParsingModsFile_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x1A0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1A0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A4(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFile                                 CallFunc_Array_Get_Item;                           // 0x1A8(0xF8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2A0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2A4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B81[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2A8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4AD (0x4AD - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingMods
struct UBP_ServerModsLoading_C_ParsingMods_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B85[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x10(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4A8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4AC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.SetDounloadingCountText
struct UBP_ServerModsLoading_C_SetDounloadingCountText_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x68(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x44 (0x44 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Mod Installing Error
struct UBP_ServerModsLoading_C_Mod_Installing_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3C(0x1)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2B8D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_AddOne_ReturnValue_1;               // 0x40(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x3C8 (0x3C8 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingSuccess
struct UBP_ServerModsLoading_C_ModInstallingSuccess_Params
{
public:
	struct FInstalledMod                         InstalledMod;                                      // 0x0(0x3C0)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient)
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x3C0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue_1;               // 0x3C4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.OnError
struct UBP_ServerModsLoading_C_OnError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x19 (0x19 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ControllerAction
struct UBP_ServerModsLoading_C_ControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	enum class EViewState                        State;                                             // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
};

// 0x3C (0x3C - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Tick
struct UBP_ServerModsLoading_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x574 (0x574 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ExecuteUbergraph_BP_ServerModsLoading
struct UBP_ServerModsLoading_C_ExecuteUbergraph_BP_ServerModsLoading_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2BA6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x30(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x68(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x500(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x510(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0x528(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x529(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x52A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BAA[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x530(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x538(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x570(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
};

}
}


