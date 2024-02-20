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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_Main;                                // 0x338(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_ED;                             // 0x340(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCategory>                     ClassCategories;                                   // 0x350(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ParentPage_C*                      UI_ParentPageWIdget;                               // 0x360(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_Button_ClassCategory_C*>    ClassCategoriesButtons;                            // 0x368(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCategory                             CurrentClassCategory;                              // 0x378(0x78)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClassesInit;                                     // 0x3F0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x400(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_ClassCategorySelect_C* GetDefaultObj();

	int32 DoesModBelongToCategory(struct FCategory* Category, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	int32 FilterToModsOfClass(struct FCategory* Category, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
	int32 Check_Num_Of_Mods_In_Each_Class(struct FCategory* Category, bool* CallFunc_IsValid_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue);
	void ConstructClass();
	TArray<struct FCategory> OnClassCategoriesInfoFound();
	struct FCFCoreError OnClassCategoriesInfoFound_Error();
	void SortClassCategories();
	FDelegateProperty_ ExecuteUbergraph_UI_ClassCategorySelect(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue);
	void OnClassesInit__DelegateSignature();
	void OnSelectionChanged_ED__DelegateSignature();
};

}


