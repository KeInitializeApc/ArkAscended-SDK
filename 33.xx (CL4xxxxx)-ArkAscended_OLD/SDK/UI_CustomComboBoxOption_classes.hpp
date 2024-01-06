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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button_Option;                                     // 0x338(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	class UBorder*                               ImageBorder;                                       // 0x340(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Border;                                        // 0x348(0x8)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UImage*                                IMG_ChevronRight;                                  // 0x350(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UBorder*                               SizeBorder;                                        // 0x358(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class USpacer*                               Spacer_1;                                          // 0x360(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, Interp)
	class USpacer*                               Spacer_2;                                          // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp)
	class USpacer*                               Spacer_Text;                                       // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Option;                                       // 0x378(0x8)(Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_CustomComboBoxWidget;                           // 0x380(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          CategoryInfo;                                      // 0x388(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Text;                                              // 0x3C0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class UUI_CustomComboBox_C*                  Owner;                                             // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	struct FVector2D                             Size;                                              // 0x3D8(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	double                                       TextSpacing;                                       // 0x3E8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             ImageSize;                                         // 0x3F0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         HasImage;                                          // 0x400(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3EA8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x408(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x410(0x10)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             ImageBackgroundSize;                               // 0x420(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class FString>                        SubOptionsDEP;                                     // 0x430(0x10)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	int32                                        FontSize;                                          // 0x440(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3EAA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll;                               // 0x448(0x8)(Edit, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x450(0x3F0)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x840(0x3F0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FSTRUCT_SubOptions                    Settings_Sub_Options;                              // 0xC30(0x28)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xC58(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FSlateColor                           HoveredText;                                       // 0xC68(0x14)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FSlateColor                           BaseText;                                          // 0xC7C(0x14)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FSlateColor                           FocusedText;                                       // 0xC90(0x14)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FSlateColor                           ActiveText;                                        // 0xCA4(0x14)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3EAB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          BaseButtonStyle;                                   // 0xCC0(0x3F0)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomComboBoxOption_C* GetDefaultObj();

	bool OnOptionSelected(const class FString& Option, int64* ID);
	bool UpdateHoveredOption(int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	bool OnNavRight(class UWidget** ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue);
	bool RemoveSpacingIfNotHaveArrow();
	void RemoveSpacingIfNotHaveImage();
	bool CheckIfSubCategorySelected(int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	float OnUpdate(double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, bool* CallFunc_HasAnyUserFocus_ReturnValue, int32* CallFunc_Array_Find_ReturnValue);
	void ContinueUpdating(bool CallFunc_K2_TimerExists_ReturnValue, struct FTimerHandle* CallFunc_K2_SetTimer_ReturnValue);
	void StopUpdating();
	class UTexture2DDynamic* OnFail_2F79E7094E3FA19CAF12DEBE91370E8A();
	class UTexture2DDynamic* OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A();
	bool PreConstruct();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	int64 Event_On_Sub_Option_Clicked();
	void Event_Check_If_Still_Hovered();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Event_Check_If_Selected();
	void Construct();
	void OnAddedToFocusPath(struct FFocusEvent* InFocusEvent);
	void OnRemovedFromFocusPath(struct FFocusEvent* InFocusEvent);
	bool Event_Update_Navigation();
	void Event_Close();
	void Event_Remove_Scroll();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	void FocusON();
	void FocusOff();
	struct FButtonStyle ExecuteUbergraph_UI_CustomComboBoxOption(int32* EntryPoint, bool* Temp_bool_Variable, enum class EUINavigationRule* Temp_byte_Variable, enum class EUINavigationRule* Temp_byte_Variable_1, bool* Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool* Temp_bool_Variable_2, class UCanvasPanelSlot** K2Node_DynamicCast_AsCanvas_Panel_Slot, class FText* CallFunc_Conv_StringToText_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_EqualEqual_TextText_ReturnValue, bool* CallFunc_CheckIfSubCategorySelected_IsSelected, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float* CallFunc_GetViewportScale_ReturnValue, struct FVector2D* CallFunc_LocalToViewport_PixelPosition, struct FVector2D* CallFunc_LocalToViewport_ViewportPosition, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_SubMinusCategories_Scroll_C* CallFunc_Create_ReturnValue, enum class EUINavigationRule* K2Node_Select_Default, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool* Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_1, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue_2, bool* CallFunc_EqualEqual_TextText_ReturnValue_1, struct FSlateColor* K2Node_Select_Default_2, struct FSlateColor* K2Node_Select_Default_3, bool* CallFunc_HasAnyUserFocus_ReturnValue, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


