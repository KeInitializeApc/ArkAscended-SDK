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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class FString                                SortOption;                                        // 0x9F8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_Prompt_UninstallAll_C*             UninstallAllPopup;                                 // 0xA08(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           NonInstallingMods;                                 // 0xA10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstalledMods_C* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList, const TArray<struct FInstallProgressMod>& TempMods, bool* CallFunc_IsValid_ReturnValue);
	bool FilterOutNonInstalling(const TArray<struct FInstallProgressMod>& Full_list, const TArray<struct FInstallProgressMod>& FilteredList, const TArray<struct FInstallProgressMod>& TempList, int32 CallFunc_Add_IntInt_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue);
	void Change_Uninstall_All_Button_Visiblity();
	void Construct();
	struct FInstallProgressMod Event_On_Mod_Installed();
	struct FInstallProgressMod Event_On_Mod_Uninstalled();
	void GetMods();
	void Destruct();
	void PullModsFromAPI();
	void ContinueUninstallAll();
	void RemovePopup();
	void ShowUninstallAllPopup();
	bool ExecuteUbergraph_UI_InstalledMods(int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue, TArray<struct FInstallProgressMod>* CallFunc_FilterOutNonInstalling_FilteredList, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, TArray<struct FInstallProgressMod>* CallFunc_ReturnModsOfCurrentPage_TrueModInfo, class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool* CallFunc_IsValid_ReturnValue_3, struct FInstallProgressMod* CallFunc_Array_Get_Item, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UWidget** CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, class UWidget** CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool* CallFunc_IsValid_ReturnValue_5, int32* CallFunc_Array_Length_ReturnValue_3, int32* CallFunc_Array_Length_ReturnValue_4);
};

}


