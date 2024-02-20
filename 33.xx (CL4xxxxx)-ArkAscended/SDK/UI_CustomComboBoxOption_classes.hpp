#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD80 (0x10B0 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomComboBoxOption.UI_CustomComboBoxOption_C
class UUI_CustomComboBoxOption_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UButton*                               Button_Option;                                     // 0x338(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               ImageBorder;                                       // 0x340(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Border;                                        // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ChevronRight;                                  // 0x350(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               SizeBorder;                                        // 0x358(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_1;                                          // 0x360(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp)
	class USpacer*                               Spacer_2;                                          // 0x368(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify, Interp)
	class USpacer*                               Spacer_Text;                                       // 0x370(0x8)(Edit, BlueprintVisible, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Option;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_CustomComboBoxWidget;                           // 0x380(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          CategoryInfo;                                      // 0x388(0x38)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Text;                                              // 0x3C0(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	class UUI_CustomComboBox_C*                  Owner;                                             // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	struct FVector2D                             Size;                                              // 0x3D8(0x10)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	double                                       TextSpacing;                                       // 0x3E8(0x8)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ImageSize;                                         // 0x3F0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         HasImage;                                          // 0x400(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_389D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x408(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x410(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ImageBackgroundSize;                               // 0x420(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        SubOptionsDEP;                                     // 0x430(0x10)(BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FontSize;                                          // 0x440(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_389E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll;                               // 0x448(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x450(0x3F0)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x840(0x3F0)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_SubOptions                    Settings_Sub_Options;                              // 0xC30(0x28)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xC58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           HoveredText;                                       // 0xC68(0x14)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           BaseText;                                          // 0xC7C(0x14)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           FocusedText;                                       // 0xC90(0x14)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ActiveText;                                        // 0xCA4(0x14)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38A0[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          BaseButtonStyle;                                   // 0xCC0(0x3F0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomComboBoxOption_C* GetDefaultObj();

	bool OnOptionSelected(class FString* Option, int64* ID, TScriptInterface<class IBPI_CustomComboBoxInterface_C> K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface);
	bool UpdateHoveredOption(int32* CallFunc_Array_Add_ReturnValue);
	bool OnNavRight(enum class EUINavigation Navigation, class UWidget* ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UUI_SubMinusCategory_C* K2Node_DynamicCast_AsUI_Sub__Category);
	int32 RemoveSpacingIfNotHaveArrow(bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	void RemoveSpacingIfNotHaveImage();
	bool CheckIfSubCategorySelected(class FString* SelectedOption, bool* IsSelected);
	float OnUpdate(double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, bool* CallFunc_HasAnyUserFocus_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue);
	struct FTimerHandle ContinueUpdating(bool CallFunc_K2_TimerExists_ReturnValue);
	void StopUpdating();
	void OnFail_2F79E7094E3FA19CAF12DEBE91370E8A(class UTexture2DDynamic** Texture);
	void OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A(class UTexture2DDynamic** Texture);
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	int64 Event_On_Sub_Option_Clicked();
	void Event_Check_If_Still_Hovered();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Event_Check_If_Selected();
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Event_Update_Navigation(bool IsLast);
	void Event_Close();
	void Event_Remove_Scroll();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	float Tick();
	void FocusON();
	void FocusOff();
	bool ExecuteUbergraph_UI_CustomComboBoxOption(bool* Temp_bool_Variable, enum class EUINavigationRule* Temp_byte_Variable, enum class EUINavigationRule* Temp_byte_Variable_1, bool* Temp_bool_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_CustomEvent_IsLast, enum class EUINavigationRule* K2Node_Select_Default, bool* CallFunc_Array_Contains_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_1, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, struct FSlateColor* K2Node_Select_Default_2, struct FSlateColor* K2Node_Select_Default_3, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasAnyUserFocus_ReturnValue, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


