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
	TArray<struct FCategory>                     Categories;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FCategory                             CallFunc_Array_Get_Item;                           // 0x18(0x78)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x90(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4CB5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xB0(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4CB6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xB8(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC8(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xCC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4CBA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD0(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4CBC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0xD8(0x38)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x110(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_4CBF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCategory                             CallFunc_Array_Get_Item_1;                         // 0x118(0x78)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x190(0x1)(Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4CC1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSTRUCT_SubOptions                    K2Node_MakeStruct_STRUCT_SubOptions;               // 0x198(0x28)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1C0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1C4(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue_1;      // 0x1C8(0x1)(Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1C9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_4CC3[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1CC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x98 (0x98 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.CreateAllCategoriesCategory
struct UUI_CategoriesSelect_C_CreateAllCategoriesCategory_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption;     // 0x28(0x38)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1;   // 0x60(0x38)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
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
	int64                                        Current_Class_Category_ID;                         // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.PreConstruct
struct UUI_CategoriesSelect_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnOptionSelectedInterface
struct UUI_CategoriesSelect_C_OnOptionSelectedInterface_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int64                                        ID;                                                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class UUI_CustomComboBoxOption_C*            OptionWidget;                                      // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.OnCategoriesInfoFound
struct UUI_CategoriesSelect_C_OnCategoriesInfoFound_Params
{
public:
	TArray<struct FCategory>                     Categories;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst)
};

// 0x3C (0x3C - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.Tick
struct UUI_CategoriesSelect_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x13C (0x13C - 0x0)
// Function UI_CategoriesSelect.UI_CategoriesSelect_C.ExecuteUbergraph_UI_CategoriesSelect
struct UUI_CategoriesSelect_C_ExecuteUbergraph_UI_CategoriesSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4CE5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x8(0x38)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4CE7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x48(0x8)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x50(0x1)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4CE9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_4CEB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x68(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_Event_Current_Class_Category_ID;            // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x78(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x88(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FCFCoreGetCategoriesFilter            CallFunc_MakeGetCategoriesFilter_ReturnValue;      // 0x8C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          CallFunc_Array_Get_Item;                           // 0x90(0x38)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC8(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC9(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_4CEE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Event_Option;                               // 0xD0(0x10)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_Event_ID;                                   // 0xE0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            K2Node_Event_OptionWidget;                         // 0xE8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCategory>                     K2Node_CustomEvent_categories;                     // 0xF0(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x100(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x138(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


