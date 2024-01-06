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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Main;                                // 0x338(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_ED;                             // 0x340(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FCategory>                     ClassCategories;                                   // 0x350(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPageWIdget;                               // 0x360(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<class UUI_Button_ClassCategory_C*>    ClassCategoriesButtons;                            // 0x368(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	struct FCategory                             CurrentClassCategory;                              // 0x378(0x78)(ExportObject, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClassesInit;                                     // 0x3F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x400(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_ClassCategorySelect_C* GetDefaultObj();

	bool DoesModBelongToCategory(const struct FInstalledMod& Mod_List, struct FCategory* Category, bool IsPresent, int32* CurrentNum);
	bool FilterToModsOfClass(const TArray<struct FInstallProgressMod>& Mod_List, struct FCategory* Category, const TArray<struct FInstallProgressMod>& ListOfMods, const TArray<struct FInstallProgressMod>& TempListToReturn, int32* CurrentNum, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_AddUnique_ReturnValue);
	bool Check_Num_Of_Mods_In_Each_Class(struct FCategory* Category, int32 NumberInInt, class FText NumberInTXT, int32* CurrentNum, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FText* CallFunc_Conv_IntToText_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1);
	void OnClassCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	struct FCFCoreError OnClassCategoriesInfoFound_Error();
	void SortClassCategories();
	void ConstructClass();
	FDelegateProperty_ ExecuteUbergraph_UI_ClassCategorySelect(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, struct FCFCoreGetCategoriesFilter* CallFunc_MakeGetCategoriesFilter_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, int32 Temp_int_Loop_Counter_Variable_1, int32* CallFunc_Add_IntInt_ReturnValue_1);
	void OnClassesInit__DelegateSignature();
	void OnSelectionChanged_ED__DelegateSignature();
};

}


