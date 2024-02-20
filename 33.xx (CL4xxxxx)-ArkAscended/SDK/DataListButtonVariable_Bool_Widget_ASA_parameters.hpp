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

// 0x78 (0x78 - 0x0)
// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.SetupTextValue
struct UDataListButtonVariable_Bool_Widget_ASA_C_SetupTextValue_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class FText                                  ReturnText;                                        // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1[0x7];                                        // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x50(0x10)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.ExtraSetupToggledButton
struct UDataListButtonVariable_Bool_Widget_ASA_C_ExtraSetupToggledButton_Params
{
public:
	bool                                         Toggle;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2[0x6];                                        // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3[0x6];                                        // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.PreConstruct
struct UDataListButtonVariable_Bool_Widget_ASA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA
struct UDataListButtonVariable_Bool_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

}
}


