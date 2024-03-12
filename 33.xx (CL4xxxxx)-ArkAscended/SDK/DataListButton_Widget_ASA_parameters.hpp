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

// 0x75 (0x75 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetIsAlternativeColor
struct UDataListButton_Widget_ASA_C_GetIsAlternativeColor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3[0x7];                                        // Fixing Size After Last Property  > TateDumper <
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x8(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_1;                  // 0x10(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_2;                  // 0x18(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_3;                  // 0x20(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_4;                  // 0x28(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_GetVisibleChildIndex_Index;               // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4[0x4];                                        // Fixing Size After Last Property  > TateDumper <
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_5[0x6];                                        // Fixing Size After Last Property  > TateDumper <
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue_5;                  // 0x58(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_6[0x3];                                        // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetVisibleChildIndex_Index_1;             // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x68(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x69(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_7[0x2];                                        // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x6C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x70(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x74(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.GetVisibleChildIndex
struct UDataListButton_Widget_ASA_C_GetVisibleChildIndex_Params
{
public:
	class UPanelWidget*                          Parent;                                            // 0x0(0x8)(ConstParm, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance)
	class UWidget*                               Widget;                                            // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	int32                                        Index;                                             // 0x10(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        ChildrenIndex;                                     // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x18(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x1C(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_8[0x3];                                        // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x24(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_9[0x3];                                        // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_A[0x4];                                        // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x38(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x39(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3A(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x3B(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x40(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x41(0x1)(BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B[0x2];                                        // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_1;                               // 0x44(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_C[0x3];                                        // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x20 (0x20 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.UpdateColorBrush
struct UDataListButton_Widget_ASA_C_UpdateColorBrush_Params
{
public:
	struct FLinearColor                          InBrushColor;                                      // 0x0(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x10(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetupToggledState
struct UDataListButton_Widget_ASA_C_SetupToggledState_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetIsAlternativeColor_ReturnValue;        // 0x2(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E[0x1];                                        // Fixing Size After Last Property  > TateDumper <
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x18(0x14)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x2C(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.PreConstruct
struct UDataListButton_Widget_ASA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1A (0x1A - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetTextButton
struct UDataListButton_Widget_ASA_C_SetTextButton_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x18(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         UseOverrideValueText;                              // 0x19(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.SetValueText
struct UDataListButton_Widget_ASA_C_SetValueText_Params
{
public:
	class FText                                  ValueText;                                         // 0x0(0x18)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x19 (0x19 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
struct UDataListButton_Widget_ASA_C_BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.Tick
struct UDataListButton_Widget_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x17D (0x17D - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ExecuteUbergraph_DataListButton_Widget_ASA
struct UDataListButton_Widget_ASA_C_ExecuteUbergraph_DataListButton_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x4(0x1)(DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1E[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_CustomEvent_NewText;                        // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_CustomEvent_CanEditTextVariable;            // 0x20(0x1)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_CustomEvent_UseOverrideValueText;           // 0x21(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_CustomEvent_ValueText;                      // 0x28(0x18)(Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x40(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x50(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue_1;             // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UPrimalUserWidget*                     K2Node_DynamicCast_AsPrimal_User_Widget;           // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x71(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_21[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x78(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x90(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GetToggledState_ReturnValue;              // 0x91(0x1)(ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_23[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x98(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_24[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0xB0(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x128(0x18)(EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x140(0x38)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x178(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_HasKeyboardFocus_ReturnValue;             // 0x17C(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function DataListButton_Widget_ASA.DataListButton_Widget_ASA_C.ToggledState__DelegateSignature
struct UDataListButton_Widget_ASA_C_ToggledState__DelegateSignature_Params
{
public:
	bool                                         Set;                                               // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

}
}


