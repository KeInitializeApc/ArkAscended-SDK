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

// 0x1D0 (0x1D0 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.FilterOutCategories
struct UUI_CategoriesSelect_C_FilterOutCategories_Params
{
public:
	TArray<struct FCategory>                     Categories;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FCategory                             CallFunc_Array_Get_Item;                           // 0x18(0x78)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x90(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37C9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xB0(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_37CA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xB8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xCC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_37CB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_37CD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0xD8(0x38)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x110(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_37CF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCategory                             CallFunc_Array_Get_Item_1;                         // 0x118(0x78)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x190(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37D0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSTRUCT_SubOptions                    K2Node_MakeStruct_STRUCT_SubOptions;               // 0x198(0x28)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1C0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1C4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue_1;      // 0x1C8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1C9(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_37D1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1CC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x98 (0x98 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.CreateAllCategoriesCategory
struct UUI_CategoriesSelect_C_CreateAllCategoriesCategory_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0x28(0x38)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1;   // 0x60(0x38)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x38 (0x38 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnCategoriesInfoFound_Error
struct UUI_CategoriesSelect_C_OnCategoriesInfoFound_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x8 (0x8 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.UpdateOptions
struct UUI_CategoriesSelect_C_UpdateOptions_Params
{
public:
	int64                                        Current_Class_Category_ID;                         // 0x0(0x8)(Edit, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.PreConstruct
struct UUI_CategoriesSelect_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnOptionSelectedInterface
struct UUI_CategoriesSelect_C_OnOptionSelectedInterface_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	int64                                        ID;                                                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class UUI_CustomComboBoxOption_C*            OptionWidget;                                      // 0x18(0x8)(Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnCategoriesInfoFound
struct UUI_CategoriesSelect_C_OnCategoriesInfoFound_Params
{
public:
	TArray<struct FCategory>                     Categories;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x3C (0x3C - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.Tick
struct UUI_CategoriesSelect_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x13C (0x13C - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.ExecuteUbergraph_UI_CategoriesSelect
struct UUI_CategoriesSelect_C_ExecuteUbergraph_UI_CategoriesSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_37E0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_37E1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x50(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37E2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_37E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_Event_Current_Class_Category_ID;            // 0x70(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x78(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x88(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
	struct FCFCoreGetCategoriesFilter            CallFunc_MakeGetCategoriesFilter_ReturnValue;      // 0x8C(0x4)(ExportObject, Net, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          CallFunc_Array_Get_Item;                           // 0x90(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_37E6[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Event_Option;                               // 0xD0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_Event_ID;                                   // 0xE0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            K2Node_Event_OptionWidget;                         // 0xE8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCategory>                     K2Node_CustomEvent_categories;                     // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x100(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x138(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
};

}
}


