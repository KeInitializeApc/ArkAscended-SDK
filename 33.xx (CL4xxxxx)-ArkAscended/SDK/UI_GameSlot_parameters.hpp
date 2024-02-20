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

// 0x979 (0x979 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnEventBroadcasted
struct UUI_GameSlot_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1CD6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   NewInformation;                                    // 0x30(0x498)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4CC(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4D0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4D4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x4D8(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x970(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x974(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x978(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.SequenceEvent__ENTRYPOINTUI_GameSlot
struct UUI_GameSlot_C_SequenceEvent__ENTRYPOINTUI_GameSlot_Params
{
public:
	class UImage*                                IMG_GameImage;                                     // 0x0(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x150 (0x150 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdatePaidPremiumStatus
struct UUI_GameSlot_C_UpdatePaidPremiumStatus_Params
{
public:
	TArray<int64>                                IDof_Owned_Mods;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_1CFB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x31(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x32(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x33(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_GetIsModPaidStatus_Premium;               // 0x34(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Purchased;             // 0x35(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D07[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetIsModPaidStatus_Tier_Price;            // 0x38(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetIsModPaidStatus_Currency_Symbol;       // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x68(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB8(0x50)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x108(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x118(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x130(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_1D13[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_Select_Default_1;                           // 0x138(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
};

// 0x5 (0x5 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Change Slot Enable State
struct UUI_GameSlot_C_Change_Slot_Enable_State_Params
{
public:
	bool                                         IsEnableState;                                     // 0x0(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.PlayStartingAnimation
struct UUI_GameSlot_C_PlayStartingAnimation_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GetDownloadCount
struct UUI_GameSlot_C_GetDownloadCount_Params
{
public:
	class FText                                  FinalAmount;                                       // 0x0(0x18)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_FormatDownloadNumber_FinalAmount;         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateModCard
struct UUI_GameSlot_C_UpdateModCard_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D38[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x10(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x12(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x13(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GetModName
struct UUI_GameSlot_C_GetModName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
};

// 0x1D (0x1D - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.ClearAllModsInAllPages
struct UUI_GameSlot_C_ClearAllModsInAllPages_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D3F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      CallFunc_Array_Get_Item;                           // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateDownloadCount
struct UUI_GameSlot_C_UpdateDownloadCount_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D45[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetDownloadCount_FinalAmount;             // 0x8(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateModSize
struct UUI_GameSlot_C_UpdateModSize_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D4A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreFileSize                       CallFunc_Get_Mod_Size_SizeStruct;                  // 0x4(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Get_Mod_Size_SizeInText;                  // 0x10(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Get_Mod_Size_bytes;                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Update LikeStatus
struct UUI_GameSlot_C_Update_LikeStatus_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateImage
struct UUI_GameSlot_C_UpdateImage_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateAuthors
struct UUI_GameSlot_C_UpdateAuthors_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D50[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetAuthorName_CombinedAuthorsNames;       // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_StringLimit_NewString;                    // 0x18(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateModName
struct UUI_GameSlot_C_UpdateModName_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D54[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetModName_Name;                          // 0x8(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x94 (0x94 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Try Set Game Version
struct UUI_GameSlot_C_Try_Set_Game_Version_Params
{
public:
	bool                                         IsNumericallySet;                                  // 0x0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1D78[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp;                                              // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                Result;                                            // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D79[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFileIndex                            CallFunc_Array_Get_Item;                           // 0x30(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Split_LeftS;                              // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class FString                                CallFunc_Split_RightS;                             // 0x78(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x88(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_1D7B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x8C(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
};

// 0x211 (0x211 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.FormatDownloadNumber
struct UUI_GameSlot_C_FormatDownloadNumber_Params
{
public:
	int64                                        Downloads;                                         // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  FinalAmount;                                       // 0x8(0x18)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue;              // 0x20(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DAA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue;            // 0x28(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_1;          // 0x48(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x50(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x78(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x88(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x98(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0xA8(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xD0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xE0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xF0(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_1DAE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xF8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_2;          // 0x110(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_3;          // 0x118(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_2;           // 0x120(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_3;           // 0x138(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x150(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x160(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x170(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_GetSubstring_ReturnValue_1;               // 0x180(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x190(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x1A0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1B0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1C8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x1D8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1F0(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_1DB4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_4;           // 0x1F8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue_1;            // 0x210(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x20 (0x20 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GenerateModNameToolTipWidget
struct UUI_GameSlot_C_GenerateModNameToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DC2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ToolTipWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GenerateAuthorNameToolTipWidget
struct UUI_GameSlot_C_GenerateAuthorNameToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUI_ToolTipWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x498 (0x498 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.InitModInfo
struct UUI_GameSlot_C_InitModInfo_Params
{
public:
	struct FInstallProgressMod                   NewModInfo;                                        // 0x0(0x498)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x278 (0x278 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnMouseButtonDown
struct UUI_GameSlot_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x168(0x1)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x169(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DF2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FEventReply                           K2Node_MakeStruct_EventReply;                      // 0x170(0xB8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_RightClickMenu_C*                  CallFunc_CreateRightClickMenu_MenuRef;             // 0x228(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x230(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        CallFunc_GetMousePosition_LocationX;               // 0x238(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_GetMousePosition_LocationY;               // 0x23C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetMousePosition_ReturnValue;             // 0x240(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DFA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x248(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x250(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x258(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;   // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnFail_9D95364741CA1B5428249F8ACB4C6143
struct UUI_GameSlot_C_OnFail_9D95364741CA1B5428249F8ACB4C6143_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnSuccess_9D95364741CA1B5428249F8ACB4C6143
struct UUI_GameSlot_C_OnSuccess_9D95364741CA1B5428249F8ACB4C6143_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82
struct UUI_GameSlot_C_OnFail_B97DCA8245D1E43D54A2A9BEF5BD8D82_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82
struct UUI_GameSlot_C_OnSuccess_B97DCA8245D1E43D54A2A9BEF5BD8D82_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.BP_OnItemExpansionChanged
struct UUI_GameSlot_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.BP_OnItemSelectionChanged
struct UUI_GameSlot_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnListItemObjectSet
struct UUI_GameSlot_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.CustomEvent
struct UUI_GameSlot_C_CustomEvent_Params
{
public:
	struct FModsDirInfo                          ModsDirInfo;                                       // 0x0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)
};

// 0x38 (0x38 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.CustomEvent_1
struct UUI_GameSlot_C_CustomEvent_1_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Animation_UpdateModImage
struct UUI_GameSlot_C_Animation_UpdateModImage_Params
{
public:
	class UImage*                                IMG_GameImage;                                     // 0x0(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Tick
struct UUI_GameSlot_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.RequestDownloadImage
struct UUI_GameSlot_C_RequestDownloadImage_Params
{
public:
	class FString                                URL_String;                                        // 0x0(0x10)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4DA (0x4DA - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.ExecuteUbergraph_UI_GameSlot
struct UUI_GameSlot_C_ExecuteUbergraph_UI_GameSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E73[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_3;                      // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_2;                      // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x48(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x51(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_1E77[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               Temp_object_Variable_1;                            // 0x58(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x60(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x78(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_1E7A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x80(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x98(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x99(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_1E7D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0xA0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0xA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xB0(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0xC0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xC8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class UTexture2DDynamic*                     Temp_object_Variable_2;                            // 0xD8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0xE0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xE8(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xE9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xEA(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         K2Node_Event_bIsExpanded;                          // 0xEB(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bIsSelected;                          // 0xEC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E85[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               K2Node_Event_ListItemObject;                       // 0xF0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x108(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_1E88[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FModsDirInfo                          K2Node_CustomEvent_ModsDirInfo;                    // 0x110(0x20)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x130(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               Temp_object_Variable_3;                            // 0x168(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, NonTransactional)
	bool                                         Temp_bool_Variable_1;                              // 0x170(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_1E8B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x174(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x184(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	uint8                                        Pad_1E8D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x188(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_StringLimit_NewString;                    // 0x1B0(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_StringLimit_NewString_1;                  // 0x1C0(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1D0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1E8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class UUI_NotificationManager_C*             CallFunc_GetNotifManager_Output;                   // 0x200(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                K2Node_CustomEvent_IMG_GameImage;                  // 0x208(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x210(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_1E93[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x214(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x228(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x229(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_1E97[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               K2Node_Select_Default;                             // 0x230(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_1E98[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x240(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UUI_Prompt_Uninstall_C*                CallFunc_Create_ReturnValue;                       // 0x310(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x318(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x319(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E9B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x320(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x328(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x33C(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	bool                                         CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace; // 0x33D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_InitializeModView_ReturnValue;            // 0x33E(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E9F[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x340(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x350(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x388(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x38C(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x38D(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EA1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x390(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue_1;              // 0x3A0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x3A8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	uint8                                        Pad_1EA4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               K2Node_Select_Default_1;                           // 0x3B0(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x3B8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	uint8                                        Pad_1EA6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x3C0(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x490(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_1EA8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x498(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         CallFunc_CreateModPageMenu_ModPageRef;             // 0x4A0(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ModPage_C*                         CallFunc_CreateModPageFromStandalone_ReturnValue;  // 0x4A8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_CustomEvent_URL_String;                     // 0x4B0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x4C0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x4C8(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_1EAB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x4D0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x4D8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x4D9(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

}
}


