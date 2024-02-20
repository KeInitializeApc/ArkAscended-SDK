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

// 0x10 (0x10 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.SetEnabledStateOfButtonIndex
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_SetEnabledStateOfButtonIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         Enabled_;                                          // 0x4(0x1)(ConstParm, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5(0x1)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2E6A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.GetPreviousAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_GetPreviousAvailableButtonIndex_Params
{
public:
	int32                                        StartingIndex;                                     // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FirstButton;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FoundNextButton;                                   // 0x8(0x4)(Edit, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2E71[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2E73[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetLastAvailableButtonIndex_FirstButton;  // 0x18(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1C(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E75[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x24(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2E76[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x31(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E78[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetLastAvailableButtonIndex_FirstButton_1; // 0x34(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.GetNextAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_GetNextAvailableButtonIndex_Params
{
public:
	int32                                        StartingIndex;                                     // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FirstButton;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FoundNextButton;                                   // 0x8(0x4)(Edit, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2E7E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E80[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Get_First_Available_Button_Index_FirstButton; // 0x1C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Get_First_Available_Button_Index_FirstButton_1; // 0x24(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2E81[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x31(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E82[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
};

// 0x32 (0x32 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.GetLastAvailableButtonIndex
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_GetLastAvailableButtonIndex_Params
{
public:
	int32                                        FirstButton;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FoundFirstButton;                                  // 0x4(0x4)(ExportObject, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2E8A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x14(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E8C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x18(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x1C(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x20(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_2E8D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
};

// 0x29 (0x29 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.Get First Available Button Index
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_Get_First_Available_Button_Index_Params
{
public:
	int32                                        FirstButton;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FoundFirstButton;                                  // 0x4(0x4)(ExportObject, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_2E95[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E96[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E97[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
};

// 0x69 (0x69 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.Fix Console Icons
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_Fix_Console_Icons_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0xC(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2EA1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EA2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EA3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UImage*                                K2Node_DynamicCast_AsImage;                        // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EA4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x60(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.SwitchButton
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_SwitchButton_Params
{
public:
	bool                                         Next;                                              // 0x0(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_2EA7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               Widget;                                            // 0x8(0x8)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	class UASAUIWidget_Button_Style4_C*          NewLocalVar;                                       // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	int32                                        CallFunc_GetPreviousAvailableButtonIndex_FirstButton; // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2EA8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_GetNextAvailableButtonIndex_FirstButton;  // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2EA9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item_1;                         // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
};

// 0x19 (0x19 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.SetButtonsInactive
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_SetButtonsInactive_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item;                           // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.PreConstruct
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.Tick
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x244 (0x244 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Sub_Style4
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Sub_Style4_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2ECB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x8(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2ECD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        Temp_int_Variable;                                 // 0x2C(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
	class UPrimalUserWidget*                     CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimalUI*                             K2Node_DynamicCast_AsPrimal_UI;                    // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2ECF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x48(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2ED0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x51(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x52(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x53(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        Temp_int_Variable_1;                               // 0x54(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x60(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x61(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_2ED2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x64(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x68(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_4;            // 0x69(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_5;            // 0x6A(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_6;            // 0x6B(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_7;            // 0x6C(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_8;            // 0x6D(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, EditorOnly)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_9;            // 0x6E(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp, EditorOnly)
	uint8                                        Pad_2ED3[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x70(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_10;           // 0x74(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
	uint8                                        Pad_2ED4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x78(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_2ED5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UASAUIWidget_Button_Style4_C*          CallFunc_Array_Get_Item_1;                         // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class UTexture*                              CallFunc_Array_Get_Item_2;                         // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x90(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x94(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2ED6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x98(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0xA0(0x10)(EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class UWidget*                               CallFunc_Array_Get_Item_3;                         // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue;            // 0xBC(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_2ED8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue;                 // 0xF8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	double                                       CallFunc_BreakVector2D_X;                          // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x110(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue_1;          // 0x118(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue_1;               // 0x150(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x160(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x168(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x170(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	struct FGeometry                             CallFunc_GetCachedGeometry_ReturnValue_2;          // 0x178(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1B0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_2ED9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CallFunc_GetLocalSize_ReturnValue_2;               // 0x1B8(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1C8(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x200(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x204(0x1)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2EDA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Temp_int_Variable_2;                               // 0x208(0x4)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2EDC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_2;                 // 0x210(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x218(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x220(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x224(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_2EDD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x228(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
	uint8                                        Pad_2EDE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UASAUIWidget_Button_Style4_C*>  K2Node_MakeArray_Array;                            // 0x230(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x240(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C.OnSelectionIndexChanged__DelegateSignature
struct UASAUIWidget_HorizontalListSelector_Sub_Style4_C_OnSelectionIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

}
}


