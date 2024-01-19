#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x408 - 0x330)
// WidgetBlueprintGeneratedClass UI_ClassCategorySelect.UI_ClassCategorySelect_C
class UUI_ClassCategorySelect_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Main;                                // 0x338(0x8)(Edit, BlueprintVisible, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_ED;                             // 0x340(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCategory>                     ClassCategories;                                   // 0x350(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPageWIdget;                               // 0x360(0x8)(Edit, ConstParm, ExportObject, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_Button_ClassCategory_C*>    ClassCategoriesButtons;                            // 0x368(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCategory                             CurrentClassCategory;                              // 0x378(0x78)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClassesInit;                                     // 0x3F0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x400(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_ClassCategorySelect_C* GetDefaultObj();

	int32 DoesModBelongToCategory(const struct FInstalledMod& Mod_List, struct FCategory* Category, bool IsPresent, int32* CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	int32 FilterToModsOfClass(const TArray<struct FInstallProgressMod>& Mod_List, struct FCategory* Category, const TArray<struct FInstallProgressMod>& ListOfMods, const TArray<struct FInstallProgressMod>& TempListToReturn, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Conv_Int64ToInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	int32 Check_Num_Of_Mods_In_Each_Class(struct FCategory* Category, int32 NumberInInt, class FText NumberInTXT, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnClassCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	struct FCFCoreError OnClassCategoriesInfoFound_Error();
	void SortClassCategories();
	void ConstructClass();
	bool ExecuteUbergraph_UI_ClassCategorySelect(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const TArray<struct FCategory>& K2Node_CustomEvent_categories, int32* CallFunc_Array_Length_ReturnValue, const struct FCategory& CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error, const struct FCategory& CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnClassesInit__DelegateSignature();
	void OnSelectionChanged_ED__DelegateSignature();
};

}


