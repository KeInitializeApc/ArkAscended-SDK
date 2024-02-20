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

// 0x5A (0x5A - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.OnEventBroadcasted
struct UUI_BrowseMods_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_39D9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_39DA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x48(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_39DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_GameSlot_C*                        K2Node_DynamicCast_AsUI_Game_Slot;                 // 0x50(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x59(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.UpdatePageCount
struct UUI_BrowseMods_C_UpdatePageCount_Params
{
public:
	struct FCFCoreApiResponsePagination          CFCoreApiResponsePagination;                       // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_39E3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x14(0x4)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x18(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
	double                                       CallFunc_FMod_Remainder;                           // 0x28(0x8)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_FMod_ReturnValue;                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x34(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_39E7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        K2Node_Select_Default;                             // 0x3C(0x4)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.GetCurrentSearchInput
struct UUI_BrowseMods_C_GetCurrentSearchInput_Params
{
public:
	class FText                                  CurrentSearchInput;                                // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.GetModIDs
struct UUI_BrowseMods_C_GetModIDs_Params
{
public:
	TArray<int64>                                ForModIDs;                                         // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.ExecuteUbergraph_UI_BrowseMods
struct UUI_BrowseMods_C_ExecuteUbergraph_UI_BrowseMods_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_39FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_CalculateModsPerPage_Mods;                // 0x10(0x4)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A00[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreSearchModsFilter               CallFunc_FilterModInfo_ReturnValue;                // 0x18(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Int32_SubOne_ReturnValue;                 // 0x48(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x4C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A02[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreApiRequestPagination           CallFunc_MakeApiRequestPagination_ReturnValue;     // 0x54(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A03[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x60(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x68(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A05[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int64>                                K2Node_Event_ForModIDs;                            // 0x70(0x10)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x80(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
};

// 0x8 (0x8 - 0x0)
// Function UI_BrowseMods.UI_BrowseMods_C.OnExplicitModFound__DelegateSignature
struct UUI_BrowseMods_C_OnExplicitModFound__DelegateSignature_Params
{
public:
	class UUI_GameSlot_C*                        ForGameSlot;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


