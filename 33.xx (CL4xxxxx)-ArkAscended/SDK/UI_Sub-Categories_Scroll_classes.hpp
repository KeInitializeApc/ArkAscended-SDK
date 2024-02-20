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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UButton*                               Category_Button;                                   // 0x338(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UScrollBox*                            ScrollBar_Categories;                              // 0x340(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  CustomComboBoxWidget_Ref;                          // 0x348(0x8)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            CustomComboBoxOptionWidget_Ref;                    // 0x350(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        SubCategoriesDEP;                                  // 0x358(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsCategoryHovered;                                 // 0x368(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsHoveredWidget;                                   // 0x369(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38BD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnSubcategorySelect;                               // 0x370(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            PreRemoval;                                        // 0x380(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x390(0x3F0)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x780(0x3F0)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xB70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsScrollHovered;                                   // 0xB80(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategories_Scroll_C* GetDefaultObj();

	struct FGeometry OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Event_Create_Scroll();
	int64 Event_On_Subcategory_Select_Event();
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnInitialized();
	void Event_Is_Still_Hovered();
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	class UUI_SubMinusCategory_C* Event_Check_If_Selected(class FString* Text);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	bool ExecuteUbergraph_UI_SubMinusCategories_Scroll(class FString* K2Node_CustomEvent_Text, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1);
	void PreRemoval__DelegateSignature();
	int64 OnSubcategorySelect__DelegateSignature();
};

}


