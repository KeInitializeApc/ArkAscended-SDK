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

// 0x20 (0x20 - 0x0)
// Function UI_NotificationManager.UI_NotificationManager_C.CreateNotify
struct UUI_NotificationManager_C_CreateNotify_Params
{
public:
	class UUI_Notification_C*                    ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4DA5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Notification_C*                    CallFunc_Create_ReturnValue;                       // 0x10(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue;            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x498 (0x498 - 0x0)
// Function UI_NotificationManager.UI_NotificationManager_C.PlayInstalledNotification
struct UUI_NotificationManager_C_PlayInstalledNotification_Params
{
public:
	struct FInstallProgressMod                   InstallProgressMod;                                // 0x0(0x498)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
};

// 0x4F0 (0x4F0 - 0x0)
// Function UI_NotificationManager.UI_NotificationManager_C.ExecuteUbergraph_UI_NotificationManager
struct UUI_NotificationManager_C_ExecuteUbergraph_UI_NotificationManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_4DB2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_Notification_C*                    CallFunc_CreateNotify_ReturnValue;                 // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_4DB5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInstallProgressMod                   K2Node_CustomEvent_InstallProgressMod;             // 0x18(0x498)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CallFunc_GetModName_Name;                          // 0x4B0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x4C0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UUI_Notification_C*                    CallFunc_CreateNotify_ReturnValue_1;               // 0x4D8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	class UUI_Notification_C*                    CallFunc_CreateNotify_ReturnValue_2;               // 0x4E0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	class UUI_Notification_C*                    CallFunc_CreateNotify_ReturnValue_3;               // 0x4E8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
};

}
}


