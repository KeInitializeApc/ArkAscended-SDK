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

// 0x18 (0x18 - 0x0)
// Function CheatMenuCheatButton.CheatMenuCheatButton_C.CloseConfirmation
struct UCheatMenuCheatButton_C_CloseConfirmation_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function CheatMenuCheatButton.CheatMenuCheatButton_C.ShowConfirmation
struct UCheatMenuCheatButton_C_ShowConfirmation_Params
{
public:
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x10(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function CheatMenuCheatButton.CheatMenuCheatButton_C.ExecuteUbergraph_CheatMenuCheatButton
struct UCheatMenuCheatButton_C_ExecuteUbergraph_CheatMenuCheatButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_30FF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	class FString                                K2Node_Select_Default;                             // 0x58(0x10)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

}
}


