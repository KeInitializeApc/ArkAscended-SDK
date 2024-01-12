#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x851 (0xB81 - 0x330)
// WidgetBlueprintGeneratedClass UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C
class UUI_SubMinusCategories_Scroll_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Category_Button;                                   // 0x338(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UScrollBox*                            ScrollBar_Categories;                              // 0x340(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  CustomComboBoxWidget_Ref;                          // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            CustomComboBoxOptionWidget_Ref;                    // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	TArray<class FString>                        SubCategoriesDEP;                                  // 0x358(0x10)(Edit, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         IsCategoryHovered;                                 // 0x368(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         IsHoveredWidget;                                   // 0x369(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_4AEF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSubcategorySelect;                               // 0x370(0x10)(Edit, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            PreRemoval;                                        // 0x380(0x10)(Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x390(0x3F0)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x780(0x3F0)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xB70(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         IsScrollHovered;                                   // 0xB80(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategories_Scroll_C* GetDefaultObj();

	bool OnKeyDown(struct FGeometry* MyGeometry);
	void Event_Create_Scroll();
	void Event_On_Subcategory_Select_Event(class FString* SubCategory, int64* SubCategoryID);
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnInitialized();
	void Event_Is_Still_Hovered();
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	class FString Event_Check_If_Selected(class UUI_SubMinusCategory_C* SubCategoryWidget_Ref);
	struct FFocusEvent OnRemovedFromFocusPath();
	struct FFocusEvent OnAddedToFocusPath();
	bool ExecuteUbergraph_UI_SubMinusCategories_Scroll(int64 K2Node_CustomEvent_SubCategoryID, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_SubMinusCategory_C* K2Node_CustomEvent_SubCategoryWidget_Ref, const class FString& K2Node_CustomEvent_Text, class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, struct FSTRUCT_SubOptions* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent);
	void PreRemoval__DelegateSignature();
	void OnSubcategorySelect__DelegateSignature(class FString* SubCategory, int64* SubCategoryID);
};

}


