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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UOverlay*                              Overlay;                                           // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UUI_Notification_C*                    UI_NotificationVar;                                // 0x340(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_NotificationManager_C* GetDefaultObj();

	class UOverlaySlot* CreateNotify(class UUI_Notification_C* CallFunc_Create_ReturnValue);
	void PlayInstalledNotification(struct FInstallProgressMod* InstallProgressMod);
	void PlayErrorNotEnoughSpace();
	void PlayUnknownError();
	void Destruct();
	void PlayCantJoinServer();
	class UUI_Notification_C* ExecuteUbergraph_UI_NotificationManager(int32* EntryPoint);
};

}


