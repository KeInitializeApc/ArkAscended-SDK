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

// 0x1B (0x1B - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.BPGamepadReleased
struct UTermsAndConditions_C_BPGamepadReleased_Params
{
public:
	struct FKey                                  TheKey;                                            // 0x0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
};

// 0x1 (0x1 - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.BPHighlightWidgetOnStart
struct UTermsAndConditions_C_BPHighlightWidgetOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.PlayFadeAnimation
struct UTermsAndConditions_C_PlayFadeAnimation_Params
{
public:
	enum class EUMGSequencePlayMode              PlayMode;                                          // 0x0(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EE4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3C (0x3C - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.Tick
struct UTermsAndConditions_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InDeltaTime;                                       // 0x38(0x4)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x119 (0x119 - 0x0)
// Function TermsAndConditions.TermsAndConditions_C.ExecuteUbergraph_TermsAndConditions
struct UTermsAndConditions_C_ExecuteUbergraph_TermsAndConditions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1F0F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UShooterGameViewportClient*            CallFunc_GetViewportClient_ReturnValue;            // 0x18(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UPrimalUI*                             CallFunc_GetUISceneFromClass_ReturnValue;          // 0x20(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UUI_ListSessions*                      K2Node_DynamicCast_AsUI_List_Sessions;             // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x31(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	uint8                                        Pad_1F10[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;          // 0x40(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	uint8                                        Pad_1F11[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue_1;          // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x50(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_1;          // 0x58(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2;          // 0x60(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1F12[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue_2;          // 0x68(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue_2;          // 0x70(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x78(0x38)(BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
	float                                        K2Node_Event_InDeltaTime;                          // 0xB0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_1F16[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xB8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue_1;                // 0xC0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0xC8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
	class UShooterGameViewportClient*            CallFunc_GetViewportClient_ReturnValue_1;          // 0xD0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UPrimalUI*                             CallFunc_GetUISceneFromClass_ReturnValue_1;        // 0xD8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	class UPrimalUI*                             CallFunc_GetUISceneFromClass_ReturnValue_2;        // 0xE0(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UUI_MainMenu*                          K2Node_DynamicCast_AsUI_Main_Menu;                 // 0xE8(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_1F18[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_ListSessions*                      K2Node_DynamicCast_AsUI_List_Sessions_1;           // 0xF8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x100(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_1F19[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x108(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x118(0x1)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

}
}


