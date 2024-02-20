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

// 0x69 (0x69 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DidAllTheModsGetBought
struct UBPFL_GlobalFunctions_C_DidAllTheModsGetBought_Params
{
public:
	TArray<int64>                                ModsBought;                                        // 0x0(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                ModsRequested;                                     // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               WorldContextObject;                                // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FD3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                InitialList;                                       // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FD4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Array_Get_Item;                           // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x60(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x61(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FD5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x68(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xE8 (0xE8 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DEBUG_Premium_PurchasedMods
struct UBPFL_GlobalFunctions_C_DEBUG_Premium_PurchasedMods_Params
{
public:
	TArray<int64>                                Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FString                                ModList;                                           // 0x20(0x10)(Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_1FDB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FDC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_1FDD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x70(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x80(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FDE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x88(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FDF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FE1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xB8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xC8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xD8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
};

// 0xD0 (0xD0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DEBUG_Premium_WaitingBuyResponse
struct UBPFL_GlobalFunctions_C_DEBUG_Premium_WaitingBuyResponse_Params
{
public:
	TArray<int64>                                Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FString                                ModList;                                           // 0x20(0x10)(Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int64                                        CallFunc_Array_Get_Item;                           // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FEF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x7C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_1FF0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x80(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x90(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xA0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xB0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xC0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
};

// 0x4B8 (0x4B8 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModPremium
struct UBPFL_GlobalFunctions_C_GetIsModPremium_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x498(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	struct FPremiumDetails                       Premium_Details;                                   // 0x4A0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetNotifManager
struct UBPFL_GlobalFunctions_C_GetNotifManager_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class UUI_NotificationManager_C*             Output;                                            // 0x8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
	TArray<class UUI_NotificationManager_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FFE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_NotificationManager_C*             CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
};

// 0x500 (0x500 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModPaidStatus
struct UBPFL_GlobalFunctions_C_GetIsModPaidStatus_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                PurchasedModsIDs;                                  // 0x498(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x4A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         Premium;                                           // 0x4B0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Purchased;                                         // 0x4B1(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2006[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Tier_Price;                                        // 0x4B8(0x8)(ConstParm, ExportObject, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Currency_Symbol;                                   // 0x4C0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4D0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4D4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int64                                        CallFunc_Array_Get_Item;                           // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x4E0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2007[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4E4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4E8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2008[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4EC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       K2Node_FunctionResult_Tier_Price_ImplicitCast;     // 0x4F0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	double                                       K2Node_FunctionResult_Tier_Price_ImplicitCast_1;   // 0x4F8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x30 (0x30 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromStandalone
struct UBPFL_GlobalFunctions_C_CreateModPageFromStandalone_Params
{
public:
	int64                                        Mod_ID;                                            // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DrawUIOnZOrder;                                    // 0x8(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2011[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0x10(0x8)(Edit, ConstParm, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class UUI_ModPage_C*                         ReturnValue;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UUI_ModPage_C*                         CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x4A3 (0x4A3 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModValid
struct UBPFL_GlobalFunctions_C_GetIsModValid_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x498(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         IsValid;                                           // 0x4A0(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4A1(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4A2(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xDB0 (0xDB0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.DebugMod
struct UBPFL_GlobalFunctions_C_DebugMod_Params
{
public:
	struct FInstallProgressMod                   InstallProgressMod;                                // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config)
	class UObject*                               WorldContextObject;                                // 0x498(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Debug_BroadcastEvent;                              // 0x4A0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	enum class EGameModsEvent                    Event;                                             // 0x4A1(0x1)(ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         DebugInstallingUpdating;                           // 0x4A2(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2044[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                ModPurchasedIDs;                                   // 0x4A8(0x10)(ExportObject, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x4B8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	struct FInstallProgressMod                   DebugingMod;                                       // 0x4C0(0x498)(BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                TotalPrint;                                        // 0x958(0x10)(BlueprintReadOnly, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	enum class EGameModsEvent                    CalledEvent;                                       // 0x968(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2047[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               Owner;                                             // 0x970(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	enum class EInstallStatus                    Temp_byte_Variable;                                // 0x978(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Premium;               // 0x979(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsModPaidStatus_Purchased;             // 0x97A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_204C[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetIsModPaidStatus_Tier_Price;            // 0x980(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetIsModPaidStatus_Currency_Symbol;       // 0x988(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x998(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Temp_string_Variable;                              // 0x9A8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                Temp_string_Variable_1;                            // 0x9B8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
	class FString                                Temp_string_Variable_2;                            // 0x9C8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                Temp_string_Variable_3;                            // 0x9D8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                Temp_string_Variable_4;                            // 0x9E8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class FString                                Temp_string_Variable_5;                            // 0x9F8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class FString                                Temp_string_Variable_6;                            // 0xA08(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	int32                                        CallFunc_ReplaceInline_ReturnValue;                // 0xA18(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	enum class EInstallStatus                    Temp_byte_Variable_1;                              // 0xA1C(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2054[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Temp_string_Variable_7;                            // 0xA20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
	class FString                                Temp_string_Variable_8;                            // 0xA30(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
	class FString                                Temp_string_Variable_9;                            // 0xA40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
	class FString                                Temp_string_Variable_10;                           // 0xA50(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                Temp_string_Variable_11;                           // 0xA60(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
	class FString                                Temp_string_Variable_12;                           // 0xA70(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FString                                Temp_string_Variable_13;                           // 0xA80(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
	struct FPremiumDetails                       CallFunc_GetIsModPremium_Premium_Details;          // 0xA90(0x18)(BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_Select_Default;                             // 0xAA8(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0xAB8(0x10)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xAC8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_1;          // 0xAD8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xAE8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                K2Node_Select_Default_1;                           // 0xAF8(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xB08(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xB18(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0xB28(0x10)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xB38(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xB48(0x10)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0xB58(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xB70(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0xB80(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_2;           // 0xB98(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xBB0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0xBC0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0xBD0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                CallFunc_GetModName_Name;                          // 0xBE0(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xBF0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_GetIsModAvailable_Is_Available;           // 0xC00(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_205A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xC08(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_2;          // 0xC18(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0xC28(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	bool                                         CallFunc_GetIsModValid_IsValid;                    // 0xC38(0x1)(Edit, BlueprintVisible, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_205B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_3;          // 0xC40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC50(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_205D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0xC58(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0xC68(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0xC78(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0xC88(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_12;             // 0xC98(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_13;             // 0xCA8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_14;             // 0xCB8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_15;             // 0xCC8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_16;             // 0xCD8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_17;             // 0xCE8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_18;             // 0xCF8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_19;             // 0xD08(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0xD18(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_20;             // 0xD28(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_21;             // 0xD38(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_22;             // 0xD48(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_23;             // 0xD58(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_24;             // 0xD68(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_25;             // 0xD78(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_26;             // 0xD88(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_27;             // 0xD98(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
	double                                       CallFunc_Conv_DoubleToString_InDouble_ImplicitCast; // 0xDA8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4D9 (0x4D9 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.Is There Enough Space to Install Mod
struct UBPFL_GlobalFunctions_C_Is_There_Enough_Space_to_Install_Mod_Params
{
public:
	int64                                        DiskSpace;                                         // 0x0(0x8)(BlueprintVisible, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FInstallProgressMod                   ModToInstall;                                      // 0x8(0x498)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x4A0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         EnoughSpace;                                       // 0x4A8(0x1)(ConstParm, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2076[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreFileSize                       CallFunc_Get_Mod_Size_SizeStruct;                  // 0x4AC(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Get_Mod_Size_SizeInText;                  // 0x4B8(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Get_Mod_Size_bytes;                       // 0x4D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_Int64Int64_ReturnValue;      // 0x4D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetProcessedBarProgress
struct UBPFL_GlobalFunctions_C_GetProcessedBarProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ELibraryProgressState             InstallProgressState;                              // 0x4(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_208F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	double                                       ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         MaintainPreviousValue;                             // 0x18(0x1)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2090[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Temp_real_Variable;                                // 0x20(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2092[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       Temp_real_Variable_1;                              // 0x38(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x40(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x48(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	double                                       Temp_real_Variable_2;                              // 0x50(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       Temp_real_Variable_3;                              // 0x58(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	double                                       Temp_real_Variable_4;                              // 0x60(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	double                                       Temp_real_Variable_5;                              // 0x68(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	double                                       Temp_real_Variable_6;                              // 0x70(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
	double                                       Temp_real_Variable_7;                              // 0x78(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
	double                                       Temp_real_Variable_8;                              // 0x80(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
	double                                       Temp_real_Variable_9;                              // 0x88(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
	double                                       Temp_real_Variable_10;                             // 0x90(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
	enum class ELibraryProgressState             Temp_byte_Variable;                                // 0x98(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2098[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_Select_Default;                             // 0xA0(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xA8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x4A1 (0x4A1 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetIsModAvailable
struct UBPFL_GlobalFunctions_C_GetIsModAvailable_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x498(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	bool                                         Is_Available;                                      // 0x4A0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromID
struct UBPFL_GlobalFunctions_C_CreateModPageFromID_Params
{
public:
	int64                                        Mod_ID;                                            // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DrawUIOnZOrder;                                    // 0x8(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class UUI_ModPage_C*                         ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UUI_ModPage_C*                         CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromStoreMenu
struct UBPFL_GlobalFunctions_C_CreateModPageFromStoreMenu_Params
{
public:
	int64                                        Mod_ID;                                            // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DrawUIOnZOrder;                                    // 0x8(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_20A6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0x10(0x8)(Edit, ConstParm, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x18(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class UUI_ModPage_C*                         ReturnValue;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UUI_ModPage_C*                         CallFunc_Create_ReturnValue;                       // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x20B (0x20B - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.FormatDownloadNumber
struct UBPFL_GlobalFunctions_C_FormatDownloadNumber_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FText                                  FinalAmount;                                       // 0x10(0x18)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue;            // 0x40(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0x48(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_1;          // 0x60(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_2;           // 0x78(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x90(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xA0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0xC0(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xD0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xE8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xF8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x108(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_20D8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x110(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_2;          // 0x128(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_3;          // 0x130(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_3;           // 0x138(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_4;           // 0x150(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x168(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x178(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x188(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_GetSubstring_ReturnValue_1;               // 0x198(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x1A8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x1B8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1C8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1E0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x1F0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x208(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue;              // 0x209(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue_1;            // 0x20A(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x6F0 (0x6F0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModVersion
struct UBPFL_GlobalFunctions_C_GetModVersion_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x498(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FText                                  FinalAmount;                                       // 0x4A0(0x18)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        NameLikeChar;                                      // 0x4B8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ModsFileName;                                      // 0x4C8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4D8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4DC(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4E0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4E4(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4E8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4EC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2121[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4F0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2122[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x4F8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x508(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x509(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2124[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x50C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x510(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2127[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x514(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x518(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2128[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFile                                 CallFunc_Array_Get_Item;                           // 0x520(0xF8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x618(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsNumeric_ReturnValue;                    // 0x628(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x629(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x62A(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x62B(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x62C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x630(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x648(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x658(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_212E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Temp_text_Variable;                                // 0x660(0x18)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x678(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2130[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x680(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  K2Node_Select_Default;                             // 0x690(0x18)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x6A8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_ReplaceInline_ReturnValue;                // 0x6B8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x6BC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x6C0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x6C4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x6C5(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2132[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x6C8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6CC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2134[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Len_ReturnValue;                          // 0x6D0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x6D4(0x1)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	uint8                                        Pad_2136[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0x6D8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2137[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x6E0(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4D0 (0x4D0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetDownloadCount
struct UBPFL_GlobalFunctions_C_GetDownloadCount_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x498(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FText                                  FinalAmount;                                       // 0x4A0(0x18)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_FormatDownloadNumber_FinalAmount;         // 0x4B8(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4B0 (0x4B0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModName
struct UBPFL_GlobalFunctions_C_GetModName_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x498(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FString                                Name;                                              // 0x4A0(0x10)(ConstParm, Net, OutParm)
};

// 0x621 (0x621 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.Get Mod Size
struct UBPFL_GlobalFunctions_C_Get_Mod_Size_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x498(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	struct FCFCoreFileSize                       SizeStruct;                                        // 0x4A0(0xC)(BlueprintVisible, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_214E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  SizeInText;                                        // 0x4B0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int64                                        Bytes;                                             // 0x4C8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4D0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4D4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFile                                 CallFunc_Array_Get_Item;                           // 0x4D8(0xF8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5D0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2150[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CallFunc_MaxInt64_ReturnValue;                     // 0x5D8(0x8)(Edit, ConstParm, ExportObject, Parm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_FormatFileSize_ReturnValue;               // 0x5E0(0x10)(ExportObject, EditConst, GlobalConfig, SubobjectReference)
	struct FCFCoreFileSize                       CallFunc_BreakFileSize_ReturnValue;                // 0x5F0(0xC)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2152[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x600(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x618(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2154[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x61C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x620(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x538 (0x538 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetAuthorName
struct UBPFL_GlobalFunctions_C_GetAuthorName_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x498(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FString                                CombinedAuthorsNames;                              // 0x4A0(0x10)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Local_TotalAuthors;                                // 0x4B0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FModAuthor                            CallFunc_Array_Get_Item;                           // 0x4C8(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4F0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4F4(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4F8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2167[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_StringLimit_NewString;                    // 0x500(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x510(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x520(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_216A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x528(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0xBD0 (0xBD0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateButtonStyleFromSingleColor
struct UBPFL_GlobalFunctions_C_CreateButtonStyleFromSingleColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	uint8                                        Pad_217A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          ButtonStyle;                                       // 0x20(0x3F0)(Edit, Parm, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          CallFunc_Add_LinearColorLinearColor_ReturnValue;   // 0x410(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x420(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x434(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_217B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x450(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x520(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x5F0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue_1;  // 0x600(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x610(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x624(0x14)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_217D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x640(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x710(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x7E0(0x3F0)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x69 (0x69 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoByte
struct UBPFL_GlobalFunctions_C_HEXtoByte_Params
{
public:
	class FString                                First_value;                                       // 0x0(0x10)(Edit, BlueprintReadOnly, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Second_value;                                      // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	uint8                                        InputPin1;                                         // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2189[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        HexDigits;                                         // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	int32                                        CallFunc_And_IntInt_ReturnValue;                   // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        CallFunc_And_IntInt_ReturnValue_1;                 // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x60(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x68(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
};

// 0xC8 (0xC8 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoSRGB
struct UBPFL_GlobalFunctions_C_HEXtoSRGB_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	struct FColor                                Color;                                             // 0x18(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_219B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item;                           // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        CallFunc_HEXtoByte_InputPin1;                      // 0x70(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_219E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_4;                         // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        CallFunc_HEXtoByte_InputPin1_1;                    // 0x98(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_21A1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_6;                         // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	class FString                                CallFunc_Array_Get_Item_7;                         // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	uint8                                        CallFunc_HEXtoByte_InputPin1_2;                    // 0xC0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        CallFunc_HEXtoByte_InputPin1_3;                    // 0xC1(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_21A4[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                K2Node_MakeStruct_Color;                           // 0xC4(0x4)(Edit, BlueprintVisible, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x84 (0x84 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SRGBtoHEX
struct UBPFL_GlobalFunctions_C_SRGBtoHEX_Params
{
public:
	struct FColor                                Color;                                             // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_21AA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        String;                                            // 0x20(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_21AB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                K2Node_MakeArray_Array;                            // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        CallFunc_Array_Get_Item;                           // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_21AC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_ByteToHex_ReturnValue;                    // 0x50(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_21AE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_21AF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ByteToHex
struct UBPFL_GlobalFunctions_C_ByteToHex_Params
{
public:
	uint8                                        InputPin;                                          // 0x0(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor)
	uint8                                        Pad_21BD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        HexDigits;                                         // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x40(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x44(0x4)(Edit, ConstParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_And_IntInt_ReturnValue;                   // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        CallFunc_And_IntInt_ReturnValue_1;                 // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	class FString                                CallFunc_Array_Get_Item;                           // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SetFocusedWidget
struct UBPFL_GlobalFunctions_C_SetFocusedWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	TArray<class UUI_StoreMenu_C*>               CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x7D (0x7D - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.TextLimit
struct UBPFL_GlobalFunctions_C_TextLimit_Params
{
public:
	class UTextBlock*                            Text;                                              // 0x0(0x8)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	int32                                        Limit;                                             // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_21C9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                String;                                            // 0x10(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FString                                CallFunc_StringLimit_NewString;                    // 0x28(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x50(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x7C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x33 (0x33 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CheckPlayerInputDevices
struct UBPFL_GlobalFunctions_C_CheckPlayerInputDevices_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	enum class ENUM_InputDevices                 UsingGamepad_;                                     // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_21D6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UUI_StoreMenu_C*>               CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_InputDevices                 Temp_byte_Variable;                                // 0x20(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_21D9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_StoreMenu_C*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENUM_InputDevices                 Temp_byte_Variable_1;                              // 0x31(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
	enum class ENUM_InputDevices                 K2Node_Select_Default;                             // 0x32(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.StringLimit
struct UBPFL_GlobalFunctions_C_StringLimit_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Limit;                                             // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_21F2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
	class FString                                NewString;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                LocalString;                                       // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x48(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x4C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_21F5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_21F7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item;                           // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x80(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x85(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x86(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x87(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x88(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2203[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x90(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x20 (0x20 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ErrorMessage
struct UBPFL_GlobalFunctions_C_ErrorMessage_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FString                                ErrorMessage;                                      // 0x8(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
};

}
}


