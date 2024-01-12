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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UVerticalBox*                          BaseVerticalBox;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UBorder*                               Border_1;                                          // 0x340(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, Interp)
	class UBorder*                               Border_2;                                          // 0x348(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, RepNotify, Interp)
	class UBorder*                               Border_3;                                          // 0x350(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, NonTransactional)
	class UBorder*                               Border_484;                                        // 0x358(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, RepNotify, NonTransactional, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable)
	class UButton*                               Button_SelectedOption;                             // 0x360(0x8)(ConstParm, ExportObject, Net, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_DropIcon;                                      // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, InstancedReference, SubobjectReference)
	class UOverlay*                              Options;                                           // 0x370(0x8)(ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UScrollBox*                            Options_ScrollBox;                                 // 0x378(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USpacer*                               Spacer_Text;                                       // 0x380(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UBorder*                               SpacersBorder;                                     // 0x388(0x8)(ConstParm, ExportObject, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_OptionSelect;                                 // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UVerticalBox*                          Verticalbox_Options;                               // 0x398(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FVector2D                             ScrollBoxSize;                                     // 0x3A0(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	TArray<struct FSTRUCT_CustomComboBoxOption>  DefaultOptions;                                    // 0x3B0(0x10)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FString                                DefaultOption;                                     // 0x3C0(0x10)(Edit, BlueprintVisible, Parm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x3D0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FString                                SelectedOption;                                    // 0x3E0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	struct FVector2D                             BaseSize;                                          // 0x3F0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         OptionSpacing_;                                    // 0x400(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3826[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          OptionSpacersColor;                                // 0x404(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3827[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TextSpacingSize;                                   // 0x418(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxSpacer_C*            LastSpacer;                                        // 0x420(0x8)(Edit, BlueprintReadOnly, Net, OutParm, Transient, InstancedReference, SubobjectReference)
	class UTexture2D*                            DropmenuArrow;                                     // 0x428(0x8)(Edit, Net, Parm, Transient, InstancedReference, SubobjectReference)
	class UTexture2D*                            OpendDropmenuArrow;                                // 0x430(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	bool                                         FirstHasImage_;                                    // 0x438(0x1)(BlueprintReadOnly, EditFixedSize, Parm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3828[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                OptionClass;                                       // 0x440(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	bool                                         HasImage_;                                         // 0x448(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3829[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ImageSize;                                         // 0x450(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Image;                                             // 0x460(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x468(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FVector2D                             Image_Background_Size;                             // 0x478(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            PostPreConstruct;                                  // 0x488(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	TArray<class FString>                        DefaultSubOptionsDEP;                              // 0x498(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Transient, InstancedReference, SubobjectReference)
	bool                                         IsClearOnUpdate;                                   // 0x4A8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_382A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               Owner;                                             // 0x4B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_OptionsWidgetArray;                             // 0x4B8(0x10)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_382C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          OptionOpenStyle;                                   // 0x4D0(0x3F0)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	struct FButtonStyle                          OptionCloseStyle;                                  // 0x8C0(0x3F0)(Edit, Net, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            DefaultSubOptions;                                 // 0xCB0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            UI_LastOption;                                     // 0xCC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_HoverdOptions;                                  // 0xCC8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_CustomComboBoxOption_C*            UI_SelectedOptionWidget;                           // 0xCD8(0x8)(Edit, ConstParm, Net, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0xCE0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnOpenOptions;                                     // 0xCE8(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCloseOption;                                     // 0xCF8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          BaseBorder;                                        // 0xD08(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FLinearColor                          HoveredBorder;                                     // 0xD18(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          PressedBorder;                                     // 0xD28(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_382D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          BaseButtonStyle;                                   // 0xD40(0x3F0)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         DropdownExpanded;                                  // 0x1130(0x1)(ExportObject, BlueprintReadOnly, Parm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomComboBox_C* GetDefaultObj();

	class UUI_CustomComboBoxOption_C* Event_Set_Selected_Option(bool CallOnOptionSelected_, class FText CallFunc_Conv_StringToText_ReturnValue);
	bool SetUpNavigationSingle(class UObject** Object, class UUI_CustomComboBoxOption_C** K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool* K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	class UWidget* Nav_to_Options(enum class EUINavigation* Navigation, class UUI_CustomComboBoxOption_C** K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool* K2Node_DynamicCast_bSuccess);
	class UWidget* Nav_Back_Tomain_Button(enum class EUINavigation* Navigation);
	bool SetUpNavigation(int32 CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget** CallFunc_Array_Get_Item, class UWidget** CallFunc_Array_Get_Item_1, class UUI_CustomComboBoxOption_C** K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool* K2Node_DynamicCast_bSuccess, class UUI_CustomComboBoxOption_C** K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_1, bool* K2Node_DynamicCast_bSuccess_1, class UWidget** CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBoxOption_C** K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option_2, bool* K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Add_IntInt_ReturnValue);
	bool OnKeyDown(struct FGeometry* MyGeometry);
	class UWidget* GetOptionAtIndex(bool* CallFunc_IsValid_ReturnValue, class UUI_CustomComboBoxOption_C** K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool* K2Node_DynamicCast_bSuccess);
	void Setup();
	void PreConstruct(bool IsDesignTime);
	void Event_Add_Option(const struct FSTRUCT_CustomComboBoxOption& CategoryInfo);
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
	float Tick(struct FGeometry* MyGeometry);
	void Construct();
	class APlayerController* ExecuteUbergraph_UI_CustomComboBox(class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, struct FSTRUCT_CustomComboBoxOption* K2Node_CustomEvent_CategoryInfo, int32* CallFunc_Array_Length_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8, const class FString& CallFunc_GetOptionAtIndex_Text, class UUI_CustomComboBoxOption_C* CallFunc_GetOptionAtIndex_AsCustomComboBoxOption, bool CallFunc_GetOptionAtIndex_IsValid, bool Temp_bool_Variable, bool* K2Node_Select_Default, int32* CallFunc_Array_Add_ReturnValue, class UUI_CustomComboBoxOption_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_9, class UUI_CustomComboBoxOption_C** CallFunc_Array_Get_Item_1, class UUI_CustomComboBoxOption_C** CallFunc_Array_Get_Item_2, bool* CallFunc_IsValid_ReturnValue_10, bool* CallFunc_IsValid_ReturnValue_11, int32* CallFunc_Array_Length_ReturnValue_2, int32* CallFunc_Array_Length_ReturnValue_3, struct FSTRUCT_CustomComboBoxOption* CallFunc_Array_Get_Item_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_12, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, bool* CallFunc_IsValid_ReturnValue_15, class FText CallFunc_Conv_StringToText_ReturnValue_1, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasAnyUserFocus_ReturnValue, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
	void OnCloseOption__DelegateSignature();
	void OnOpenOptions__DelegateSignature(class UUI_CustomComboBox_C* NewParam);
	void PostPreConstruct__DelegateSignature();
	class FString OnOptionSelected__DelegateSignature();
};

}


