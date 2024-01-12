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
	int32                                        EntryPoint;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_2791[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x10(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_2794[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2795[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x4C(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             K2Node_Select_Default;                             // 0x50(0x30)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x80(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_2797[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class UPrimalItem>             K2Node_Select_Default_1;                           // 0x88(0x30)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0xB8(0x1)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
};

}
}


