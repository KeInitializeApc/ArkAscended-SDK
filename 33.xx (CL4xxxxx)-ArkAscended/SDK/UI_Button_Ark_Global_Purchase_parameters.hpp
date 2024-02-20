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

// 0x3C (0x3C - 0x0)
// Function UI_Button_Ark_Global_Purchase.UI_Button_Ark_Global_Purchase_C.Tick
struct UUI_Button_Ark_Global_Purchase_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x51 (0x51 - 0x0)
// Function UI_Button_Ark_Global_Purchase.UI_Button_Ark_Global_Purchase_C.ExecuteUbergraph_UI_Button_Ark_Global_Purchase
struct UUI_Button_Ark_Global_Purchase_C_ExecuteUbergraph_UI_Button_Ark_Global_Purchase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x40(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x50(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)
};

}
}


