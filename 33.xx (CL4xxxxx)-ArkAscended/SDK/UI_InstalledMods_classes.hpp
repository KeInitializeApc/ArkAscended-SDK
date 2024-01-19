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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class FString                                SortOption;                                        // 0x9F8(0x10)(BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
	class UUI_Prompt_UninstallAll_C*             UninstallAllPopup;                                 // 0xA08(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           NonInstallingMods;                                 // 0xA10(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_InstalledMods_C* GetDefaultObj();

	bool OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue, TArray<struct FInstallProgressMod>* TempMods, bool* K2Node_SwitchEnum_CmpSuccess);
	int32 FilterOutNonInstalling(TArray<struct FInstallProgressMod>* Full_list, TArray<struct FInstallProgressMod>* FilteredList, TArray<struct FInstallProgressMod>* TempList, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess);
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
	bool ExecuteUbergraph_UI_InstalledMods(int32 EntryPoint, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UUI_Prompt_UninstallAll_C* CallFunc_Create_ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_FilterOutNonInstalling_FilteredList, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue, const TArray<struct FInstallProgressMod>& CallFunc_ReturnModsOfCurrentPage_TrueModInfo, enum class ENUM_SideTabs* CallFunc_GetCurrentActivePage_CurrentActiveTab, bool* K2Node_SwitchEnum_CmpSuccess, const struct FInstallProgressMod& CallFunc_Array_Get_Item, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, const TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32* CallFunc_Array_Length_ReturnValue_3, int32* CallFunc_Array_Length_ReturnValue_4);
};

}


