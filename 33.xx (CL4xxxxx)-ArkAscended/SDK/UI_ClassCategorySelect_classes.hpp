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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Main;                                // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_ED;                             // 0x340(0x10)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<struct FCategory>                     ClassCategories;                                   // 0x350(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPageWIdget;                               // 0x360(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<class UUI_Button_ClassCategory_C*>    ClassCategoriesButtons;                            // 0x368(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FCategory                             CurrentClassCategory;                              // 0x378(0x78)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClassesInit;                                     // 0x3F0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x400(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_ClassCategorySelect_C* GetDefaultObj();

	bool DoesModBelongToCategory(struct FInstalledMod* Mod_List, struct FCategory* Category, bool* IsPresent, int32* CurrentNum, int32 CallFunc_Conv_Int64ToInt_ReturnValue);
	bool FilterToModsOfClass(TArray<struct FInstallProgressMod>* Mod_List, struct FCategory* Category, TArray<struct FInstallProgressMod>* ListOfMods, TArray<struct FInstallProgressMod>* TempListToReturn, int32* CurrentNum, int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	bool Check_Num_Of_Mods_In_Each_Class(struct FCategory* Category, int32* NumberInInt, class FText* NumberInTXT, int32* CurrentNum, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void OnClassCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	struct FCFCoreError OnClassCategoriesInfoFound_Error();
	void SortClassCategories();
	void ConstructClass();
	FDelegateProperty_ ExecuteUbergraph_UI_ClassCategorySelect(int32 CallFunc_Add_IntInt_ReturnValue, const struct FCFCoreGetCategoriesFilter& CallFunc_MakeGetCategoriesFilter_ReturnValue, TArray<struct FCategory>* K2Node_CustomEvent_categories, int32* CallFunc_Array_Length_ReturnValue, struct FCategory* CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue, struct FCategory* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2);
	void OnClassesInit__DelegateSignature();
	void OnSelectionChanged_ED__DelegateSignature();
};

}


