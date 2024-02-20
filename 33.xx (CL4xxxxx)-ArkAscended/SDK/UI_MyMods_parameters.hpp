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

// 0x51 (0x51 - 0x0)
// Function UI_MyMods.UI_MyMods_C.OnEventBroadcasted
struct UUI_MyMods_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3450[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3452[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x38(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x39(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_3454[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_ReturnModsOfCurrentPage_TrueModInfo;      // 0x40(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x50(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, Interp)
};

// 0x50 (0x50 - 0x0)
// Function UI_MyMods.UI_MyMods_C.UpdatePagination
struct UUI_MyMods_C_UpdatePagination_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_3458[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x4(0x4)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	int32                                        CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt; // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3459[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT; // 0x18(0x18)(ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_FMod_Remainder;                           // 0x38(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x44(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_345D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x48(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        K2Node_Select_Default;                             // 0x4C(0x4)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x65 (0x65 - 0x0)
// Function UI_MyMods.UI_MyMods_C.ExecuteUbergraph_UI_MyMods
struct UUI_MyMods_C_ExecuteUbergraph_UI_MyMods_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_346B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x28(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_346D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3470[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x64(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

}
}


