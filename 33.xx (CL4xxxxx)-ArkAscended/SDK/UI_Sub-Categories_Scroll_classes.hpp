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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Category_Button;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            ScrollBar_Categories;                              // 0x340(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  CustomComboBoxWidget_Ref;                          // 0x348(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            CustomComboBoxOptionWidget_Ref;                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        SubCategoriesDEP;                                  // 0x358(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsCategoryHovered;                                 // 0x368(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsHoveredWidget;                                   // 0x369(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34A9[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSubcategorySelect;                               // 0x370(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            PreRemoval;                                        // 0x380(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x390(0x3F0)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x780(0x3F0)(EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xB70(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsScrollHovered;                                   // 0xB80(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategories_Scroll_C* GetDefaultObj();

	bool OnKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, const struct FEventReply& ReturnValue);
	void Event_Create_Scroll();
	void Event_On_Subcategory_Select_Event(const class FString& SubCategory, int64 SubCategoryID);
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnInitialized();
	void Event_Is_Still_Hovered();
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	class FString Event_Check_If_Selected(class UUI_SubMinusCategory_C* SubCategoryWidget_Ref);
	void OnRemovedFromFocusPath(struct FFocusEvent* InFocusEvent);
	void OnAddedToFocusPath(struct FFocusEvent* InFocusEvent);
	class FText ExecuteUbergraph_UI_SubMinusCategories_Scroll(int32 EntryPoint, bool* CallFunc_IsVisible_ReturnValue, class UUI_SubMinusCategory_C* CallFunc_Create_ReturnValue, const class FString& K2Node_CustomEvent_SubCategory, int64 K2Node_CustomEvent_SubCategoryID, class UPanelSlot** CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUI_SubMinusCategory_C* K2Node_CustomEvent_SubCategoryWidget_Ref, bool* CallFunc_EqualEqual_TextText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FSTRUCT_SubOptions& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool* CallFunc_BooleanOR_ReturnValue);
	void PreRemoval__DelegateSignature();
	void OnSubcategorySelect__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID);
};

}


