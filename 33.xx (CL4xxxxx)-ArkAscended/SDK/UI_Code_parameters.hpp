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

// 0x9 (0x9 - 0x0)
// Function UI_Code.UI_Code_C.OnLeftArrow
struct UUI_Code_C_OnLeftArrow_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x9 (0x9 - 0x0)
// Function UI_Code.UI_Code_C.OnRightArrow
struct UUI_Code_C_OnRightArrow_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function UI_Code.UI_Code_C.GetDigits
struct UUI_Code_C_GetDigits_Params
{
public:
	class FString                                Digits;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x50(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x60(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x90(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xA0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xB0(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
};

// 0x16 (0x16 - 0x0)
// Function UI_Code.UI_Code_C.BackSpace
struct UUI_Code_C_BackSpace_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A78[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x10(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x15(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x15D (0x15D - 0x0)
// Function UI_Code.UI_Code_C.SetDigitToText
struct UUI_Code_C_SetDigitToText_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1A9C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Text;                                              // 0x8(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_1AA3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item;                           // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x58(0x1)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AA4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AA5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x90(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xC8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0xE0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Array_Get_Item_4;                         // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x108(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x118(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x130(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x148(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x158(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x15C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x161 (0x161 - 0x0)
// Function UI_Code.UI_Code_C.OnPreviewKeyDown
struct UUI_Code_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x149(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x14A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1AB4[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetDigits_Digits;                         // 0x150(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x160(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function UI_Code.UI_Code_C.PreConstruct
struct UUI_Code_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x4A1 (0x4A1 - 0x0)
// Function UI_Code.UI_Code_C.ExecuteUbergraph_UI_Code
struct UUI_Code_C_ExecuteUbergraph_UI_Code_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_1B25[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Variable_2;                               // 0xE0(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1B27[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_5;                 // 0xE8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x100(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B2B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_4;                 // 0x108(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x120(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_1B2C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_3;                 // 0x128(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_2;                // 0x140(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1B2E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_2;                 // 0x148(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_3;                // 0x160(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
	uint8                                        Pad_1B33[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x168(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_4;                // 0x180(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_1B35[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x188(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_5;                // 0x1A0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_1B36[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x1B8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_Array_Get_Item;                           // 0x1C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1D8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x1F0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1F4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_1B3A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_3;                               // 0x1F8(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_1B3B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x200(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_1; // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x220(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_1;            // 0x230(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_1B3E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x238(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x250(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_1B40[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_4;                               // 0x254(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x258(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x25C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x260(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        Temp_int_Variable_5;                               // 0x264(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x268(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x26C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x270(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_1B43[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x280(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x350(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B47[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x358(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_2; // 0x368(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x378(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x388(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x398(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_3; // 0x3B0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x3C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_2;            // 0x3D0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1B5B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x3D8(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x3F0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1B60[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_LastIndex_ReturnValue_3;            // 0x3F4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x3F8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_1B65[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x400(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_4; // 0x410(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Array_Get_Item_4;                         // 0x420(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x430(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x440(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_5; // 0x458(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x468(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_4;            // 0x478(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_1B73[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x480(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x498(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_1B76[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Array_LastIndex_ReturnValue_5;            // 0x49C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_5;             // 0x4A0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
};

// 0x10 (0x10 - 0x0)
// Function UI_Code.UI_Code_C.OnDigitsFilled__DelegateSignature
struct UUI_Code_C_OnDigitsFilled__DelegateSignature_Params
{
public:
	class FString                                Digits;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, InstancedReference, SubobjectReference)
};

}
}


