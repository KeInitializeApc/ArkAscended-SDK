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

// 0xB9 (0xB9 - 0x0)
// Function CheatMenuEggButton.CheatMenuEggButton_C.ExecuteUbergraph_CheatMenuEggButton
struct UCheatMenuEggButton_C_ExecuteUbergraph_CheatMenuEggButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_2806[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x10(0x8)(ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2807[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x48(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2808[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x4C(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             K2Node_Select_Default;                             // 0x50(0x30)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_2809[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class UPrimalItem>             K2Node_Select_Default_1;                           // 0x88(0x30)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
};

}
}


