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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class FString                                SortOption;                                        // 0x9F8(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UUI_Prompt_UninstallAll_C*             UninstallAllPopup;                                 // 0xA08(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           NonInstallingMods;                                 // 0xA10(0x10)(EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstalledMods_C* GetDefaultObj();

	bool OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool* ReturnValue, TArray<struct FInstallProgressMod>* TempMods, bool* K2Node_SwitchEnum_CmpSuccess);
	bool FilterOutNonInstalling(TArray<struct FInstallProgressMod>* Full_list, TArray<struct FInstallProgressMod>* FilteredList, TArray<struct FInstallProgressMod>* TempList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_Array_RemoveItem_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess);
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
	bool ExecuteUbergraph_UI_InstalledMods(int32 EntryPoint, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_FilterOutNonInstalling_FilteredList, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool* K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue_2, TArray<class UWidget*>* K2Node_MakeArray_Array, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_3);
};

}


