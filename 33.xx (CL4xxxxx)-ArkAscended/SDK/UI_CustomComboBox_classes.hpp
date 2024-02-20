#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE01 (0x1131 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomComboBox.UI_CustomComboBox_C
class UUI_CustomComboBox_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UVerticalBox*                          BaseVerticalBox;                                   // 0x338(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border_1;                                          // 0x340(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp)
	class UBorder*                               Border_2;                                          // 0x348(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, Interp)
	class UBorder*                               Border_3;                                          // 0x350(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, NonTransactional)
	class UBorder*                               Border_484;                                        // 0x358(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, NonTransactional, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UButton*                               Button_SelectedOption;                             // 0x360(0x8)(Edit, ConstParm, ExportObject, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DropIcon;                                      // 0x368(0x8)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Options;                                           // 0x370(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class UScrollBox*                            Options_ScrollBox;                                 // 0x378(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_Text;                                       // 0x380(0x8)(Edit, BlueprintVisible, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               SpacersBorder;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_OptionSelect;                                 // 0x390(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          Verticalbox_Options;                               // 0x398(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ScrollBoxSize;                                     // 0x3A0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_CustomComboBoxOption>  DefaultOptions;                                    // 0x3B0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FString                                DefaultOption;                                     // 0x3C0(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x3D0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SelectedOption;                                    // 0x3E0(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst)
	struct FVector2D                             BaseSize;                                          // 0x3F0(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         OptionSpacing_;                                    // 0x400(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_310E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          OptionSpacersColor;                                // 0x404(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_310F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TextSpacingSize;                                   // 0x418(0x8)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxSpacer_C*            LastSpacer;                                        // 0x420(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            DropmenuArrow;                                     // 0x428(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            OpendDropmenuArrow;                                // 0x430(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         FirstHasImage_;                                    // 0x438(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3112[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                OptionClass;                                       // 0x440(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         HasImage_;                                         // 0x448(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3115[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ImageSize;                                         // 0x450(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UTexture2D*                            Image;                                             // 0x460(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x468(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             Image_Background_Size;                             // 0x478(0x10)(ConstParm, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            PostPreConstruct;                                  // 0x488(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        DefaultSubOptionsDEP;                              // 0x498(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsClearOnUpdate;                                   // 0x4A8(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3118[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               Owner;                                             // 0x4B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_OptionsWidgetArray;                             // 0x4B8(0x10)(BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3119[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          OptionOpenStyle;                                   // 0x4D0(0x3F0)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          OptionCloseStyle;                                  // 0x8C0(0x3F0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            DefaultSubOptions;                                 // 0xCB0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            UI_LastOption;                                     // 0xCC0(0x8)(ExportObject, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_HoverdOptions;                                  // 0xCC8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            UI_SelectedOptionWidget;                           // 0xCD8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0xCE0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOpenOptions;                                     // 0xCE8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCloseOption;                                     // 0xCF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BaseBorder;                                        // 0xD08(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          HoveredBorder;                                     // 0xD18(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          PressedBorder;                                     // 0xD28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3121[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          BaseButtonStyle;                                   // 0xD40(0x3F0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DropdownExpanded;                                  // 0x1130(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomComboBox_C* GetDefaultObj();

	class UUI_CustomComboBoxOption_C* Event_Set_Selected_Option(class FString* Option, bool* CallOnOptionSelected_, class FText* CallFunc_Conv_StringToText_ReturnValue);
	FDelegateProperty_ SetUpNavigationSingle(class UObject** Object, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1);
	bool Nav_to_Options(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option);
	void Nav_Back_Tomain_Button(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	int32 SetUpNavigation(int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_1, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_2, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1);
	bool OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_IsHovered_ReturnValue);
	bool GetOptionAtIndex(int32* Index, class FString* Text, bool* CallFunc_IsValid_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option);
	void Setup();
	void PreConstruct(bool* IsDesignTime);
	struct FSTRUCT_CustomComboBoxOption Event_Add_Option();
	void BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Open_Options();
	void Event_Close_Options();
	void Event_Clear_Options();
	void Event_Generate_Default_Options();
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(class FString* Option, int64* ID);
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void CloseOtherWay();
	void Focus_On();
	void FocusOff();
	float Tick();
	void Construct();
	bool ExecuteUbergraph_UI_CustomComboBox(class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, const struct FSTRUCT_CustomComboBoxOption& K2Node_CustomEvent_CategoryInfo, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue_1, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8, class FString* CallFunc_GetOptionAtIndex_Text, class UUI_CustomComboBoxOption_C** CallFunc_GetOptionAtIndex_AsCustomComboBoxOption, bool* CallFunc_GetOptionAtIndex_IsValid, bool* Temp_bool_Variable, bool* K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, bool* CallFunc_IsValid_ReturnValue_11, bool* CallFunc_IsValid_ReturnValue_12, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, bool* CallFunc_IsValid_ReturnValue_15, class FText* CallFunc_Conv_StringToText_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasAnyUserFocus_ReturnValue, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle);
	void OnCloseOption__DelegateSignature();
	class UUI_CustomComboBox_C* OnOpenOptions__DelegateSignature();
	void PostPreConstruct__DelegateSignature();
	void OnOptionSelected__DelegateSignature(class FString* Option);
};

}


