#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x348 - 0x330)
// WidgetBlueprintGeneratedClass UI_NotificationManager.UI_NotificationManager_C
class UUI_NotificationManager_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UOverlay*                              Overlay;                                           // 0x338(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	class UUI_Notification_C*                    UI_NotificationVar;                                // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_NotificationManager_C* GetDefaultObj();

	class UUI_Notification_C* CreateNotify(class UUI_Notification_C* ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UOverlaySlot** CallFunc_AddChildToOverlay_ReturnValue);
	void PlayInstalledNotification(struct FInstallProgressMod* InstallProgressMod);
	void PlayErrorNotEnoughSpace();
	void PlayUnknownError();
	void Destruct();
	void PlayCantJoinServer();
	int32 ExecuteUbergraph_UI_NotificationManager(class UUI_Notification_C** CallFunc_CreateNotify_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FInstallProgressMod* K2Node_CustomEvent_InstallProgressMod, class FString* CallFunc_GetModName_Name, class FText* CallFunc_Conv_StringToText_ReturnValue, class UUI_Notification_C** CallFunc_CreateNotify_ReturnValue_1, class UUI_Notification_C** CallFunc_CreateNotify_ReturnValue_2, class UUI_Notification_C** CallFunc_CreateNotify_ReturnValue_3);
};

}


