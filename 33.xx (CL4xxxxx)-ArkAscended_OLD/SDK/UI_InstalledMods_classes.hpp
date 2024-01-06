#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xA20 - 0x9F0)
// WidgetBlueprintGeneratedClass UI_InstalledMods.UI_InstalledMods_C
class UUI_InstalledMods_C : public UUI_ParentPage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class FString                                SortOption;                                        // 0x9F8(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UUI_Prompt_UninstallAll_C*             UninstallAllPopup;                                 // 0xA08(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           NonInstallingMods;                                 // 0xA10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstalledMods_C* GetDefaultObj();

	bool OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool* ReturnValue, TArray<struct FInstallProgressMod>* TempMods);
	bool FilterOutNonInstalling(TArray<struct FInstallProgressMod>* Full_list, const TArray<struct FInstallProgressMod>& FilteredList, TArray<struct FInstallProgressMod>* TempList, int32* CallFunc_Add_IntInt_ReturnValue);
	void Change_Uninstall_All_Button_Visiblity();
	void Construct();
	void Event_On_Mod_Installed(const struct FInstallProgressMod& Mod);
	void Event_On_Mod_Uninstalled(const struct FInstallProgressMod& Mod);
	void GetMods();
	void Destruct();
	void PullModsFromAPI();
	void ContinueUninstallAll();
	void RemovePopup();
	void ShowUninstallAllPopup();
	bool ExecuteUbergraph_UI_InstalledMods(int32* EntryPoint, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, class UUI_Prompt_UninstallAll_C* CallFunc_Create_ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_FilterOutNonInstalling_FilteredList, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, int32* CallFunc_Add_IntInt_ReturnValue_2, TArray<class UWidget*>* K2Node_MakeArray_Array);
};

}


