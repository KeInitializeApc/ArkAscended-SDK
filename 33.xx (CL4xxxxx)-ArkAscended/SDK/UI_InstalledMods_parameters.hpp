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

// 0x42 (0x42 - 0x0)
// Function UI_InstalledMods.UI_InstalledMods_C.OnEventBroadcasted
struct UUI_InstalledMods_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F54[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2F56[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           TempMods;                                          // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x40(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x41(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4DF (0x4DF - 0x0)
// Function UI_InstalledMods.UI_InstalledMods_C.FilterOutNonInstalling
struct UUI_InstalledMods_C_FilterOutNonInstalling_Params
{
public:
	TArray<struct FInstallProgressMod>           Full_list;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           FilteredList;                                      // 0x10(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           TempList;                                          // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F5B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x40(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4D8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x4DC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4DD(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4DE(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
};

// 0x59A (0x59A - 0x0)
// Function UI_InstalledMods.UI_InstalledMods_C.ExecuteUbergraph_UI_InstalledMods
struct UUI_InstalledMods_C_ExecuteUbergraph_UI_InstalledMods_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F6A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_FilterOutNonInstalling_FilteredList;      // 0x10(0x10)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_UninstallAll_C*             CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x40(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2F6B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x58(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x64(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2F6C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_ReturnModsOfCurrentPage_TrueModInfo;      // 0x68(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x80(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x81(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x82(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_2F6E[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x84(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x88(0x498)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x520(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x524(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x528(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x52C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F6F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x530(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2F70[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x538(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x548(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x550(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x554(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2F71[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0x558(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x560(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x564(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2F74[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x568(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x570(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F75[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x574(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2F76[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x588(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x590(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x594(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x598(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x599(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
};

}
}


