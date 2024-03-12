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
	enum class EInstallStatus                    Selection;                                         // 0x0(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.UpdateButtonCollor
struct UUI_Button_InstallSwitcher_C_UpdateButtonCollor_Params
{
public:
	enum class ENUM_Install                      ButtonStatus;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.SetProgress
struct UUI_Button_InstallSwitcher_C_SetProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ELibraryProgressState             InstalationState;                                  // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// Function UI_Button_InstallSwitcher.UI_Button_InstallSwitcher_C.ExecuteUbergraph_UI_Button_InstallSwitcher
struct UUI_Button_InstallSwitcher_C_ExecuteUbergraph_UI_Button_InstallSwitcher_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_25DB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_CustomEvent_Amount;                         // 0x8(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ELibraryProgressState             K2Node_CustomEvent_InstalationState;               // 0xC(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_25DD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_GetProcessedBarProgress_ReturnValue;      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_GetProcessedBarProgress_MaintainPreviousValue; // 0x18(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_25DF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x1C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast_1;      // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
};

}
}


