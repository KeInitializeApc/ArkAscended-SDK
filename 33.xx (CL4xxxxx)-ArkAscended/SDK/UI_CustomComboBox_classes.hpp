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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UVerticalBox*                          BaseVerticalBox;                                   // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               Border_1;                                          // 0x340(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class UBorder*                               Border_2;                                          // 0x348(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	class UBorder*                               Border_3;                                          // 0x350(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	class UBorder*                               Border_484;                                        // 0x358(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UButton*                               Button_SelectedOption;                             // 0x360(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_DropIcon;                                      // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              Options;                                           // 0x370(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UScrollBox*                            Options_ScrollBox;                                 // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_Text;                                       // 0x380(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               SpacersBorder;                                     // 0x388(0x8)(ExportObject, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_OptionSelect;                                 // 0x390(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          Verticalbox_Options;                               // 0x398(0x8)(BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ScrollBoxSize;                                     // 0x3A0(0x10)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_CustomComboBoxOption>  DefaultOptions;                                    // 0x3B0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                DefaultOption;                                     // 0x3C0(0x10)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x3D0(0x10)(ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SelectedOption;                                    // 0x3E0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FVector2D                             BaseSize;                                          // 0x3F0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         OptionSpacing_;                                    // 0x400(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4758[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          OptionSpacersColor;                                // 0x404(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4759[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TextSpacingSize;                                   // 0x418(0x8)(BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxSpacer_C*            LastSpacer;                                        // 0x420(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            DropmenuArrow;                                     // 0x428(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            OpendDropmenuArrow;                                // 0x430(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         FirstHasImage_;                                    // 0x438(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_475A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                OptionClass;                                       // 0x440(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         HasImage_;                                         // 0x448(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_475B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ImageSize;                                         // 0x450(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Image;                                             // 0x460(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x468(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             Image_Background_Size;                             // 0x478(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            PostPreConstruct;                                  // 0x488(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        DefaultSubOptionsDEP;                              // 0x498(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsClearOnUpdate;                                   // 0x4A8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_475C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               Owner;                                             // 0x4B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_OptionsWidgetArray;                             // 0x4B8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_475D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          OptionOpenStyle;                                   // 0x4D0(0x3F0)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          OptionCloseStyle;                                  // 0x8C0(0x3F0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            DefaultSubOptions;                                 // 0xCB0(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            UI_LastOption;                                     // 0xCC0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_HoverdOptions;                                  // 0xCC8(0x10)(ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            UI_SelectedOptionWidget;                           // 0xCD8(0x8)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0xCE0(0x8)(Edit, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOpenOptions;                                     // 0xCE8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCloseOption;                                     // 0xCF8(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BaseBorder;                                        // 0xD08(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          HoveredBorder;                                     // 0xD18(0x10)(Edit, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          PressedBorder;                                     // 0xD28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_475E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          BaseButtonStyle;                                   // 0xD40(0x3F0)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DropdownExpanded;                                  // 0x1130(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomComboBox_C* GetDefaultObj();

	class FText Event_Set_Selected_Option();
	int32 SetUpNavigationSingle(class UObject** Object, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	bool Nav_to_Options(enum class EUINavigation Navigation, class UWidget* ReturnValue, bool* CallFunc_IsVisible_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue);
	void Nav_Back_Tomain_Button(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	int32 SetUpNavigation(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	bool OnKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, const struct FEventReply& ReturnValue, bool* CallFunc_IsVisible_ReturnValue);
	bool GetOptionAtIndex(class UWidget** CallFunc_GetChildAt_ReturnValue);
	void Setup();
	bool PreConstruct();
	void Event_Add_Option(struct FSTRUCT_CustomComboBoxOption* CategoryInfo);
	void BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Open_Options();
	void Event_Close_Options();
	void Event_Clear_Options();
	void Event_Generate_Default_Options();
	class UUI_CustomComboBoxOption_C* OnOptionSelectedInterface(int64* ID);
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void CloseOtherWay();
	void Focus_On();
	void FocusOff();
	float Tick(const struct FGeometry& MyGeometry);
	void Construct();
	struct FButtonStyle ExecuteUbergraph_UI_CustomComboBox(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, class UUI_CustomComboBoxSpacer_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UPanelSlot** CallFunc_AddChild_ReturnValue, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Create_ReturnValue_1, class UPanelSlot** CallFunc_AddChild_ReturnValue_1, bool Temp_bool_Variable, bool K2Node_Select_Default, double* CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32* CallFunc_Array_Add_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item_1, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue_2, int32* CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, const struct FSTRUCT_CustomComboBoxOption& CallFunc_Array_Get_Item_3, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool CallFunc_HasAnyUserFocus_ReturnValue);
	void OnCloseOption__DelegateSignature();
	void OnOpenOptions__DelegateSignature(class UUI_CustomComboBox_C** NewParam);
	void PostPreConstruct__DelegateSignature();
	class FString OnOptionSelected__DelegateSignature();
};

}


