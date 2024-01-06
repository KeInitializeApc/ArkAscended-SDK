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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UVerticalBox*                          BaseVerticalBox;                                   // 0x338(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UBorder*                               Border_1;                                          // 0x340(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, Interp)
	class UBorder*                               Border_2;                                          // 0x348(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, RepNotify, Interp)
	class UBorder*                               Border_3;                                          // 0x350(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, NonTransactional)
	class UBorder*                               Border_484;                                        // 0x358(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, RepNotify, NonTransactional, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UButton*                               Button_SelectedOption;                             // 0x360(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_DropIcon;                                      // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UOverlay*                              Options;                                           // 0x370(0x8)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UScrollBox*                            Options_ScrollBox;                                 // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class USpacer*                               Spacer_Text;                                       // 0x380(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UBorder*                               SpacersBorder;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_OptionSelect;                                 // 0x390(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UVerticalBox*                          Verticalbox_Options;                               // 0x398(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             ScrollBoxSize;                                     // 0x3A0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FSTRUCT_CustomComboBoxOption>  DefaultOptions;                                    // 0x3B0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                DefaultOption;                                     // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x3D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FString                                SelectedOption;                                    // 0x3E0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FVector2D                             BaseSize;                                          // 0x3F0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         OptionSpacing_;                                    // 0x400(0x1)(ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_327[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          OptionSpacersColor;                                // 0x404(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_328[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       TextSpacingSize;                                   // 0x418(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxSpacer_C*            LastSpacer;                                        // 0x420(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTexture2D*                            DropmenuArrow;                                     // 0x428(0x8)(Edit, Net, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTexture2D*                            OpendDropmenuArrow;                                // 0x430(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         FirstHasImage_;                                    // 0x438(0x1)(ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_32B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                OptionClass;                                       // 0x440(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         HasImage_;                                         // 0x448(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_32C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ImageSize;                                         // 0x450(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Image;                                             // 0x460(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x468(0x10)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             Image_Background_Size;                             // 0x478(0x10)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            PostPreConstruct;                                  // 0x488(0x10)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class FString>                        DefaultSubOptionsDEP;                              // 0x498(0x10)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsClearOnUpdate;                                   // 0x4A8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_32F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               Owner;                                             // 0x4B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_OptionsWidgetArray;                             // 0x4B8(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_331[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          OptionOpenStyle;                                   // 0x4D0(0x3F0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FButtonStyle                          OptionCloseStyle;                                  // 0x8C0(0x3F0)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            DefaultSubOptions;                                 // 0xCB0(0x10)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            UI_LastOption;                                     // 0xCC0(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_HoverdOptions;                                  // 0xCC8(0x10)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            UI_SelectedOptionWidget;                           // 0xCD8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0xCE0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOpenOptions;                                     // 0xCE8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCloseOption;                                     // 0xCF8(0x10)(Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          BaseBorder;                                        // 0xD08(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          HoveredBorder;                                     // 0xD18(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          PressedBorder;                                     // 0xD28(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_332[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          BaseButtonStyle;                                   // 0xD40(0x3F0)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         DropdownExpanded;                                  // 0x1130(0x1)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomComboBox_C* GetDefaultObj();

	class UUI_CustomComboBoxOption_C* Event_Set_Selected_Option(const class FString& Option, class FText* CallFunc_Conv_StringToText_ReturnValue);
	bool SetUpNavigationSingle(class UObject** Object, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue);
	bool Nav_to_Options(class UWidget** ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option);
	enum class EUINavigation Nav_Back_Tomain_Button(class UWidget** ReturnValue);
	bool SetUpNavigation(TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_1, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_2, int32* CallFunc_Add_IntInt_ReturnValue);
	bool OnKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, struct FEventReply* ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsHovered_ReturnValue);
	bool GetOptionAtIndex(class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option);
	void Setup();
	bool PreConstruct();
	struct FSTRUCT_CustomComboBoxOption Event_Add_Option();
	void BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Open_Options();
	void Event_Close_Options();
	void Event_Clear_Options();
	void Event_Generate_Default_Options();
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(const class FString& Option, int64* ID);
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void CloseOtherWay();
	void Focus_On();
	void FocusOff();
	float Tick(const struct FGeometry& MyGeometry);
	void Construct();
	struct FButtonStyle ExecuteUbergraph_UI_CustomComboBox(int32* EntryPoint, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1, class UUI_CustomComboBoxSpacer_C* CallFunc_Create_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_CustomEvent_CategoryInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Create_ReturnValue_1, bool* Temp_bool_Variable, bool* K2Node_Select_Default, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_2, bool* CallFunc_NotEqual_StrStr_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_3, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class FText* CallFunc_Conv_StringToText_ReturnValue_1, bool* CallFunc_HasAnyUserFocus_ReturnValue);
	void OnCloseOption__DelegateSignature();
	void OnOpenOptions__DelegateSignature(class UUI_CustomComboBox_C* NewParam);
	void PostPreConstruct__DelegateSignature();
	void OnOptionSelected__DelegateSignature(const class FString& Option);
};

}


