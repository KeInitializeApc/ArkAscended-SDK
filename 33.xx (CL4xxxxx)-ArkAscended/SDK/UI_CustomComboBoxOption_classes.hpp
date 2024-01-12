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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button_Option;                                     // 0x338(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UBorder*                               ImageBorder;                                       // 0x340(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_Border;                                        // 0x348(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UImage*                                IMG_ChevronRight;                                  // 0x350(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UBorder*                               SizeBorder;                                        // 0x358(0x8)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class USpacer*                               Spacer_1;                                          // 0x360(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, Interp)
	class USpacer*                               Spacer_2;                                          // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, RepNotify, Interp)
	class USpacer*                               Spacer_Text;                                       // 0x370(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_Option;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UUI_CustomComboBox_C*                  UI_CustomComboBoxWidget;                           // 0x380(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FSTRUCT_CustomComboBoxOption          CategoryInfo;                                      // 0x388(0x38)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Text;                                              // 0x3C0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	class UUI_CustomComboBox_C*                  Owner;                                             // 0x3D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	struct FVector2D                             Size;                                              // 0x3D8(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	double                                       TextSpacing;                                       // 0x3E8(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FVector2D                             ImageSize;                                         // 0x3F0(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         HasImage;                                          // 0x400(0x1)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Image;                                             // 0x408(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x410(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FVector2D                             ImageBackgroundSize;                               // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<class FString>                        SubOptionsDEP;                                     // 0x430(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        FontSize;                                          // 0x440(0x4)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2E1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll;                               // 0x448(0x8)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x450(0x3F0)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x840(0x3F0)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FSTRUCT_SubOptions                    Settings_Sub_Options;                              // 0xC30(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xC58(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FSlateColor                           HoveredText;                                       // 0xC68(0x14)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FSlateColor                           BaseText;                                          // 0xC7C(0x14)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FSlateColor                           FocusedText;                                       // 0xC90(0x14)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FSlateColor                           ActiveText;                                        // 0xCA4(0x14)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E3[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          BaseButtonStyle;                                   // 0xCC0(0x3F0)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomComboBoxOption_C* GetDefaultObj();

	TScriptInterface<class IBPI_CustomComboBoxInterface_C> OnOptionSelected(int64* ID, bool* K2Node_DynamicCast_bSuccess);
	bool UpdateHoveredOption(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBoxOption_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue);
	class UUI_SubMinusCategory_C* OnNavRight(enum class EUINavigation* Navigation, bool* CallFunc_IsValid_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool RemoveSpacingIfNotHaveArrow(int32* CallFunc_Array_Length_ReturnValue);
	void RemoveSpacingIfNotHaveImage();
	bool CheckIfSubCategorySelected(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, struct FSTRUCT_SubOptions* CallFunc_Array_Get_Item);
	float OnUpdate(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool* CallFunc_HasAnyUserFocus_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	struct FTimerHandle ContinueUpdating(bool CallFunc_K2_TimerExists_ReturnValue);
	void StopUpdating();
	class UTexture2DDynamic* OnFail_2F79E7094E3FA19CAF12DEBE91370E8A();
	class UTexture2DDynamic* OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Event_On_Sub_Option_Clicked(class FString* SubCategory, int64* SubCategoryID);
	void Event_Check_If_Still_Hovered();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Event_Check_If_Selected();
	void Construct();
	struct FFocusEvent OnAddedToFocusPath();
	struct FFocusEvent OnRemovedFromFocusPath();
	bool Event_Update_Navigation();
	void Event_Close();
	void Event_Remove_Scroll();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	void FocusON();
	void FocusOff();
	bool ExecuteUbergraph_UI_CustomComboBoxOption(bool Temp_bool_Variable, enum class EUINavigationRule Temp_byte_Variable, enum class EUINavigationRule Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_2, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable, bool Temp_bool_IsClosed_Variable, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool* K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_2, int64 K2Node_CustomEvent_SubCategoryID, enum class ESlateVisibility Temp_byte_Variable_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_CheckIfSubCategorySelected_IsSelected, struct FGeometry* CallFunc_GetCachedGeometry_ReturnValue, float* CallFunc_GetViewportScale_ReturnValue, struct FVector2D* CallFunc_LocalToViewport_PixelPosition, struct FVector2D* CallFunc_LocalToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32* CallFunc_Array_Length_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, int32* CallFunc_Array_Length_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class EUINavigationRule* K2Node_Select_Default, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_2, struct FSlateColor* K2Node_Select_Default_2, struct FSlateColor* K2Node_Select_Default_3, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasAnyUserFocus_ReturnValue, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


