#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B0 (0x5E0 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_Button_Style4.ASAUIWidget_Button_Style4_C
class UASAUIWidget_Button_Style4_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UButton*                               Button;                                            // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, GlobalConfig)
	class UImage*                                Button_Text_ControllerIcon;                        // 0x340(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Left;                                  // 0x348(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Right;                                 // 0x350(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, RepNotify)
	class UImage*                                SelectedLine;                                      // 0x360(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USizeBox*                              SizeBox;                                           // 0x368(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig)
	class FText                                  ButtonLabel_Left;                                  // 0x370(0x18)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x388(0x10)(ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
	class UTexture*                              ButtonLabel_Icon;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ButtonLabel_Icon_Size;                             // 0x3A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Right;                                 // 0x3B0(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabel_Font;                                  // 0x3C8(0x58)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       HeightOverride;                                    // 0x420(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	double                                       WidthOverride;                                     // 0x428(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           NormalStyle_Active;                                // 0x430(0xD0)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           NormalStyle_Inactive;                              // 0x500(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMargin                               ButtonTextPadding;                                 // 0x5D0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_Button_Style4_C* GetDefaultObj();

	void Construct();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void UpdateButton();
	void SetActive(bool* NewActive);
	float ExecuteUbergraph_ASAUIWidget_Button_Style4(bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool* K2Node_CustomEvent_newActive, bool CallFunc_BooleanAND_ReturnValue, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool* K2Node_DynamicCast_bSuccess, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast_1);
	void OnButtonClicked__DelegateSignature();
};

}


