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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button_Option;                                     // 0x338(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               ImageBorder;                                       // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_Border;                                        // 0x348(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                IMG_ChevronRight;                                  // 0x350(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               SizeBorder;                                        // 0x358(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USpacer*                               Spacer_1;                                          // 0x360(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class USpacer*                               Spacer_2;                                          // 0x368(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	class USpacer*                               Spacer_Text;                                       // 0x370(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_Option;                                       // 0x378(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_CustomComboBoxWidget;                           // 0x380(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          CategoryInfo;                                      // 0x388(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Text;                                              // 0x3C0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class UUI_CustomComboBox_C*                  Owner;                                             // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	struct FVector2D                             Size;                                              // 0x3D8(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	double                                       TextSpacing;                                       // 0x3E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ImageSize;                                         // 0x3F0(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         HasImage;                                          // 0x400(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_48DE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x408(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x410(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ImageBackgroundSize;                               // 0x420(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        SubOptionsDEP;                                     // 0x430(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FontSize;                                          // 0x440(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_48DF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll;                               // 0x448(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x450(0x3F0)(EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x840(0x3F0)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSTRUCT_SubOptions                    Settings_Sub_Options;                              // 0xC30(0x28)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xC58(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           HoveredText;                                       // 0xC68(0x14)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           BaseText;                                          // 0xC7C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSlateColor                           FocusedText;                                       // 0xC90(0x14)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           ActiveText;                                        // 0xCA4(0x14)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_48E2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          BaseButtonStyle;                                   // 0xCC0(0x3F0)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomComboBoxOption_C* GetDefaultObj();

	bool OnOptionSelected(int64* ID, TScriptInterface<class IBPI_CustomComboBoxInterface_C>* K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface);
	int32 UpdateHoveredOption(int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue);
	bool OnNavRight(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UUI_SubMinusCategory_C** K2Node_DynamicCast_AsUI_Sub__Category);
	void RemoveSpacingIfNotHaveArrow(int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void RemoveSpacingIfNotHaveImage();
	bool CheckIfSubCategorySelected(int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Array_Length_ReturnValue, const struct FSTRUCT_SubOptions& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	float OnUpdate(bool CallFunc_HasAnyUserFocus_ReturnValue, int32* CallFunc_Array_Find_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue);
	bool ContinueUpdating(struct FTimerHandle* CallFunc_K2_SetTimer_ReturnValue);
	void StopUpdating();
	class UTexture2DDynamic* OnFail_2F79E7094E3FA19CAF12DEBE91370E8A();
	class UTexture2DDynamic* OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A();
	bool PreConstruct();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Event_On_Sub_Option_Clicked(const class FString& SubCategory, int64 SubCategoryID);
	void Event_Check_If_Still_Hovered();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Event_Check_If_Selected();
	void Construct();
	void OnAddedToFocusPath(struct FFocusEvent* InFocusEvent);
	void OnRemovedFromFocusPath(struct FFocusEvent* InFocusEvent);
	void Event_Update_Navigation(bool* IsLast);
	void Event_Close();
	void Event_Remove_Scroll();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	float Tick(const struct FGeometry& MyGeometry);
	void FocusON();
	void FocusOff();
	struct FButtonStyle ExecuteUbergraph_UI_CustomComboBoxOption(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool* CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_2, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic** K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, struct FSlateFontInfo* K2Node_MakeStruct_SlateFontInfo, const class FString& K2Node_CustomEvent_SubCategory, int64 K2Node_CustomEvent_SubCategoryID, bool* CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_CheckIfSubCategorySelected_IsSelected, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32* CallFunc_Array_Length_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool* K2Node_CustomEvent_IsLast, class UUI_SubMinusCategories_Scroll_C* CallFunc_Create_ReturnValue, enum class EUINavigationRule K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool* CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool* CallFunc_EqualEqual_TextText_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool CallFunc_HasAnyUserFocus_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


