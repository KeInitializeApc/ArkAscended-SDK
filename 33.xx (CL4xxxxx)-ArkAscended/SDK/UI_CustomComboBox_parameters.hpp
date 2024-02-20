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
// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Set Selected Option
struct UUI_CustomComboBox_C_Event_Set_Selected_Option_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	bool                                         CallOnOptionSelected_;                             // 0x10(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3084[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxOption_C*            OptionWidget;                                      // 0x18(0x8)(Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x45 (0x45 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.SetUpNavigationSingle
struct UUI_CustomComboBox_C_SetUpNavigationSingle_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3085[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;   // 0x10(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_3086[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3087[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x44(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
};

// 0x29 (0x29 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.Nav to Options
struct UUI_CustomComboBox_C_Nav_to_Options_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3088[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_3089[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;   // 0x20(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.Nav Back Tomain Button
struct UUI_CustomComboBox_C_Nav_Back_Tomain_Button_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
	uint8                                        Pad_308B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x7D (0x7D - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.SetUpNavigation
struct UUI_CustomComboBox_C_SetUpNavigation_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Int32_SubOne_ReturnValue;                 // 0x4(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Int32_AddOne_ReturnValue;                 // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_308F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3090[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UWidget*                               CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;   // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3092[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_1; // 0x48(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3093[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item_2;                         // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3094[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_2; // 0x68(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x71(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3096[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x7C(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
};

// 0x14C (0x14C - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.OnKeyDown
struct UUI_CustomComboBox_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x149(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x14A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x14B(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.GetOptionAtIndex
struct UUI_CustomComboBox_C_GetOptionAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_309F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Text;                                              // 0x8(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class UUI_CustomComboBoxOption_C*            AsCustomComboBoxOption;                            // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsValid;                                           // 0x20(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
	uint8                                        Pad_30A0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_30A2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxOption_C*            K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;   // 0x38(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.PreConstruct
struct UUI_CustomComboBox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Add Option
struct UUI_CustomComboBox_C_Event_Add_Option_Params
{
public:
	struct FSTRUCT_CustomComboBoxOption          CategoryInfo;                                      // 0x0(0x38)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOptionSelectedInterface
struct UUI_CustomComboBox_C_OnOptionSelectedInterface_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
	int64                                        ID;                                                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class UUI_CustomComboBoxOption_C*            OptionWidget;                                      // 0x18(0x8)(Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.Tick
struct UUI_CustomComboBox_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x640 (0x640 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.ExecuteUbergraph_UI_CustomComboBox
struct UUI_CustomComboBox_C_ExecuteUbergraph_UI_CustomComboBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_30CD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x22(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x23(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x24(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x25(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_30CE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x2C(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_30CF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x30(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x34(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_30D1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxSpacer_C*            CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x50(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x51(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x52(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x53(0x1)(Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x54(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x58(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30D2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSTRUCT_CustomComboBoxOption          K2Node_CustomEvent_CategoryInfo;                   // 0x60(0x38)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_30DE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                K2Node_Event_Option;                               // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        K2Node_Event_ID;                                   // 0xC8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            K2Node_Event_OptionWidget;                         // 0xD0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xE0(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xE8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xF8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xF9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
	uint8                                        Pad_30E1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxOption_C*            CallFunc_Create_ReturnValue_1;                     // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x108(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class FString                                CallFunc_GetOptionAtIndex_Text;                    // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            CallFunc_GetOptionAtIndex_AsCustomComboBoxOption;  // 0x120(0x8)(ConstParm, ExportObject, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetOptionAtIndex_IsValid;                 // 0x128(0x1)(Edit, ConstParm, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x129(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         K2Node_Select_Default;                             // 0x12A(0x1)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_30E2[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x130(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x138(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x148(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_30E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxOption_C*            CallFunc_Array_Get_Item;                           // 0x150(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x158(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x15C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x160(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_30E6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x164(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x168(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_30E8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_CustomComboBoxOption_C*            CallFunc_Array_Get_Item_1;                         // 0x170(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UUI_CustomComboBoxOption_C*            CallFunc_Array_Get_Item_2;                         // 0x178(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x180(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x181(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
	uint8                                        Pad_30EA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x184(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x188(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x18C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x18D(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_30EB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x190(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x194(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	struct FSTRUCT_CustomComboBoxOption          CallFunc_Array_Get_Item_3;                         // 0x198(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x1D0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x1D1(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	uint8                                        Pad_30F0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x1D4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x1D8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1D9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1DA(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_30F2[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x1E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x1E8(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x1E9(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x1EA(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
	uint8                                        Pad_30F4[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1F0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x208(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x240(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x244(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_30F6[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x250(0x3F0)(OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOpenOptions__DelegateSignature
struct UUI_CustomComboBox_C_OnOpenOptions__DelegateSignature_Params
{
public:
	class UUI_CustomComboBox_C*                  NewParam;                                          // 0x0(0x8)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOptionSelected__DelegateSignature
struct UUI_CustomComboBox_C_OnOptionSelected__DelegateSignature_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

}
}


