#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xA40 - 0xA10)
// WidgetBlueprintGeneratedClass UI_InstalledMods.UI_InstalledMods_C
class UUI_InstalledMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA10(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                SortOption;                                        // 0xA18(0x10)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_Prompt_UninstallAll_C*             UninstallAllPopup;                                 // 0xA28(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           NonInstallingMods;                                 // 0xA30(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstalledMods_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, TArray<struct FInstallProgressMod>* TempMods, bool* CallFunc_IsValid_ReturnValue);
	bool FilterOutNonInstalling(TArray<struct FInstallProgressMod>* Full_list, TArray<struct FInstallProgressMod>* FilteredList, TArray<struct FInstallProgressMod>* TempList);
	void Change_Uninstall_All_Button_Visiblity();
	void Construct();
	void GetMods();
	void Destruct();
	void PullModsFromAPI();
	void ContinueUninstallAll();
	void RemovePopup();
	void ShowUninstallAllPopup();
	bool ExecuteUbergraph_UI_InstalledMods(bool* CallFunc_IsValid_ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_FilterOutNonInstalling_FilteredList, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_SubscribeViewToEvents_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3);
};

}


