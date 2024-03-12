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
// Function ChatBoxUI.ChatBoxUI_C.Switch Chat Mode
struct UChatBoxUI_C_Switch_Chat_Mode_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5CF8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ChatBoxUI.ChatBoxUI_C.OnGamepadActiveChangedBP
struct UChatBoxUI_C_OnGamepadActiveChangedBP_Params
{
public:
	bool                                         bIsGamepadActive;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function ChatBoxUI.ChatBoxUI_C.ExecuteUbergraph_ChatBoxUI
struct UChatBoxUI_C_ExecuteUbergraph_ChatBoxUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         K2Node_Event_bIsGamepadActive;                     // 0x4(0x1)(Edit, ConstParm, ExportObject, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

}
}


