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

// 0x219 (0x219 - 0x0)
// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnKeyDownEvent
struct UASAUI_MainMenuWidget_SettingsOverlay_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FKey                                  LocalKey;                                          // 0x130(0x18)(ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x148(0x18)(ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x160(0xB8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x218(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.Tick
struct UASAUI_MainMenuWidget_SettingsOverlay_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x44 (0x44 - 0x0)
// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay
struct UASAUI_MainMenuWidget_SettingsOverlay_C_ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsConsoleBuild_ReturnValue;               // 0x4(0x1)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FB2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
};

}
}


