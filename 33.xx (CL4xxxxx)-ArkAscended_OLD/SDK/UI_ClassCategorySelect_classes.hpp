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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Main;                                // 0x338(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_ED;                             // 0x340(0x10)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FCategory>                     ClassCategories;                                   // 0x350(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPageWIdget;                               // 0x360(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<class UUI_Button_ClassCategory_C*>    ClassCategoriesButtons;                            // 0x368(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	struct FCategory                             CurrentClassCategory;                              // 0x378(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClassesInit;                                     // 0x3F0(0x10)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x400(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_ClassCategorySelect_C* GetDefaultObj();

	bool DoesModBelongToCategory(const struct FInstalledMod& Mod_List, struct FCategory* Category, bool IsPresent, int32 CurrentNum);
	bool FilterToModsOfClass(const TArray<struct FInstallProgressMod>& Mod_List, struct FCategory* Category, const TArray<struct FInstallProgressMod>& ListOfMods, const TArray<struct FInstallProgressMod>& TempListToReturn, int32 CurrentNum, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_AddUnique_ReturnValue);
	bool Check_Num_Of_Mods_In_Each_Class(struct FCategory* Category, int32 NumberInInt, class FText NumberInTXT, int32 CurrentNum, int32* CallFunc_Add_IntInt_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1);
	void OnClassCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	struct FCFCoreError OnClassCategoriesInfoFound_Error();
	void SortClassCategories();
	void ConstructClass();
	FDelegateProperty_ ExecuteUbergraph_UI_ClassCategorySelect(int32* EntryPoint, int32* CallFunc_Add_IntInt_ReturnValue, struct FCFCoreGetCategoriesFilter* CallFunc_MakeGetCategoriesFilter_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1);
	void OnClassesInit__DelegateSignature();
	void OnSelectionChanged_ED__DelegateSignature();
};

}


