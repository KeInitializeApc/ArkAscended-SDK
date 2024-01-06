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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Category_Button;                                   // 0x338(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UScrollBox*                            ScrollBar_Categories;                              // 0x340(0x8)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  CustomComboBoxWidget_Ref;                          // 0x348(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            CustomComboBoxOptionWidget_Ref;                    // 0x350(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<class FString>                        SubCategoriesDEP;                                  // 0x358(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsCategoryHovered;                                 // 0x368(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsHoveredWidget;                                   // 0x369(0x1)(Edit, Net, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_A12[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSubcategorySelect;                               // 0x370(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            PreRemoval;                                        // 0x380(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x390(0x3F0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x780(0x3F0)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xB70(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsScrollHovered;                                   // 0xB80(0x1)(ConstParm, ExportObject, Net, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategories_Scroll_C* GetDefaultObj();

	bool OnKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, struct FEventReply* ReturnValue);
	void Event_Create_Scroll();
	int64 Event_On_Subcategory_Select_Event();
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnInitialized();
	void Event_Is_Still_Hovered();
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	class FString Event_Check_If_Selected();
	void OnRemovedFromFocusPath(struct FFocusEvent* InFocusEvent);
	void OnAddedToFocusPath(struct FFocusEvent* InFocusEvent);
	struct FFocusEvent ExecuteUbergraph_UI_SubMinusCategories_Scroll(int32* EntryPoint, bool CallFunc_IsVisible_ReturnValue, class UUI_SubMinusCategory_C* CallFunc_Create_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_EqualEqual_TextText_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void PreRemoval__DelegateSignature();
	int64 OnSubcategorySelect__DelegateSignature();
};

}


