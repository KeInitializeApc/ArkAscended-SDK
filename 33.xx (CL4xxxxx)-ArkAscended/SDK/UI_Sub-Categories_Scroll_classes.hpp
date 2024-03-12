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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UButton*                               Category_Button;                                   // 0x338(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            ScrollBar_Categories;                              // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  CustomComboBoxWidget_Ref;                          // 0x348(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            CustomComboBoxOptionWidget_Ref;                    // 0x350(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        SubCategoriesDEP;                                  // 0x358(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsCategoryHovered;                                 // 0x368(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsHoveredWidget;                                   // 0x369(0x1)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4E22[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSubcategorySelect;                               // 0x370(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            PreRemoval;                                        // 0x380(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x390(0x3F0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x780(0x3F0)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xB70(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsScrollHovered;                                   // 0xB80(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategories_Scroll_C* GetDefaultObj();

	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent, struct FKey* CallFunc_GetKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Event_Create_Scroll();
	void Event_On_Subcategory_Select_Event(const class FString& SubCategory, int64 SubCategoryID);
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnInitialized();
	void Event_Is_Still_Hovered();
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	class FString Event_Check_If_Selected();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	bool ExecuteUbergraph_UI_SubMinusCategories_Scroll(int32* EntryPoint, bool CallFunc_IsVisible_ReturnValue, class UUI_SubMinusCategory_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPanelSlot** CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_EqualEqual_TextText_ReturnValue, const struct FSTRUCT_SubOptions& CallFunc_Array_Get_Item);
	void PreRemoval__DelegateSignature();
	void OnSubcategorySelect__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID);
};

}


