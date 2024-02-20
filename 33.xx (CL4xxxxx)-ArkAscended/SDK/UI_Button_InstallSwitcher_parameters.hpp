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

// 0x2 (0x2 - 0x0)
// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.UpdateButtonSwitcherStatus
struct UUI_Button_InstallSwitcher_C_UpdateButtonSwitcherStatus_Params
{
public:
	enum class EInstallStatus                    Selection;                                         // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.UpdateButtonCollor
struct UUI_Button_InstallSwitcher_C_UpdateButtonCollor_Params
{
public:
	enum class ENUM_Install                      ButtonStatus;                                      // 0x0(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.SetProgress
struct UUI_Button_InstallSwitcher_C_SetProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ELibraryProgressState             InstalationState;                                  // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.ExecuteUbergraph_UI_Button_InstallSwitcher
struct UUI_Button_InstallSwitcher_C_ExecuteUbergraph_UI_Button_InstallSwitcher_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3951[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_CustomEvent_Amount;                         // 0x8(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	enum class ELibraryProgressState             K2Node_CustomEvent_InstalationState;               // 0xC(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3952[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetProcessedBarProgress_ReturnValue;      // 0x10(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetProcessedBarProgress_MaintainPreviousValue; // 0x18(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_3953[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x1C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast_1;      // 0x20(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

}
}


