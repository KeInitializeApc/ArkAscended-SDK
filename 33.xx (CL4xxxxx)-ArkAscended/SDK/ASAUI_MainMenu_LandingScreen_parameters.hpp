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

// 0x8 (0x8 - 0x0)
// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.ModIDLinkRequested
struct UASAUI_MainMenu_LandingScreen_C_ModIDLinkRequested_Params
{
public:
	int64                                        ModIDRequested;                                    // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.ExecuteUbergraph_ASAUI_MainMenu_LandingScreen
struct UASAUI_MainMenu_LandingScreen_C_ExecuteUbergraph_ASAUI_MainMenu_LandingScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3AD1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        K2Node_CustomEvent_ModIDRequested;                 // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UShooterGameViewportClient*            CallFunc_GetViewportClient_ReturnValue;            // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UPrimalUI*                             CallFunc_GetUISceneFromClass_ReturnValue;          // 0x30(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UUI_MainMenu*                          K2Node_DynamicCast_AsUI_Main_Menu;                 // 0x38(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C.OnModIDLinkRequested__DelegateSignature
struct UASAUI_MainMenu_LandingScreen_C_OnModIDLinkRequested__DelegateSignature_Params
{
public:
	int64                                        ModIDRequested;                                    // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

}
}


