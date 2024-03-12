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

// 0x80 (0x80 - 0x0)
// Function DataListButtonVariable_HairStylePicker_Widget_ASA.DataListButtonVariable_HairStylePicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
struct UDataListButtonVariable_HairStylePicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x78)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function DataListButtonVariable_HairStylePicker_Widget_ASA.DataListButtonVariable_HairStylePicker_Widget_ASA_C.SetParameterValue
struct UDataListButtonVariable_HairStylePicker_Widget_ASA_C_SetParameterValue_Params
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	bool                                         bPreventCallParent;                                // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x2A0 (0x2A0 - 0x0)
// Function DataListButtonVariable_HairStylePicker_Widget_ASA.DataListButtonVariable_HairStylePicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_HairStylePicker_Widget_ASA
struct UDataListButtonVariable_HairStylePicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_HairStylePicker_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_57E2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_57E3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                K2Node_Event_Value;                                // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_Event_bPreventCallParent;                   // 0x28(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_57E4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x48(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_57E5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue_1;              // 0x50(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_57E6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  K2Node_Event_CommandName;                          // 0x5C(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_57E7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x68(0x78)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0xE0(0xD0)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1B0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x1C8(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x1CC(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_57E8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue_1;       // 0x1D0(0xD0)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
};

}
}


