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

// 0xF3 (0xF3 - 0x0)
// Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.SetCollapsedPreviewIcon
struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_SetCollapsedPreviewIcon_Params
{
public:
	int32                                        Input;                                             // 0x0(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	uint8                                        Pad_562A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            IconToUse;                                         // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x10(0xD0)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0xE0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            CallFunc_AssetResolve_ReturnValue;                 // 0xE8(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0xF0(0x1)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF2(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.SetParameterValue
struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_SetParameterValue_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bPreventCallParent;                                // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.RefreshEyebrows
struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_RefreshEyebrows_Params
{
public:
	bool                                         IsFemale;                                          // 0x0(0x1)(ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x15D (0x15D - 0x0)
// Function DataListButtonVariable_EyebrowStylePicker_Widget_ASA.DataListButtonVariable_EyebrowStylePicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_EyebrowStylePicker_Widget_ASA
struct UDataListButtonVariable_EyebrowStylePicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_EyebrowStylePicker_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x8(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_562B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x10(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x88(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FName                                  K2Node_Event_CommandName;                          // 0x90(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x98(0x78)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class FString                                K2Node_Event_Value;                                // 0x110(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bPreventCallParent;                   // 0x120(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_562C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x124(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x128(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_562D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x130(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x148(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_CustomEvent_IsFemale;                       // 0x149(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_562E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalUserWidget*                     CallFunc_Array_Get_Item;                           // 0x150(0x8)(EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x158(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x15C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

}
}


