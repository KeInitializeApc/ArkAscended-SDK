#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x671 (0x9A1 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_Button.ASAUIWidget_Button_C
class UASAUIWidget_Button_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Bracket;                                           // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button;                                            // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, GlobalConfig)
	class USizeBox*                              Button_SizeBox;                                    // 0x348(0x8)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Button_Text_ControllerIcon;                        // 0x350(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Left;                                  // 0x358(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Right;                                 // 0x360(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                SelectedLine;                                      // 0x368(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScaleBox*                             TheScaleBox;                                       // 0x370(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Left;                                  // 0x378(0x18)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x390(0x10)(ExportObject, BlueprintReadOnly, Parm, Transient, GlobalConfig)
	class UTexture2D*                            ButtonLabel_Icon;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ButtonLabel_Icon_Size;                             // 0x3A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Right;                                 // 0x3B8(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabel_Font;                                  // 0x3D0(0x58)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       HeightOverride;                                    // 0x428(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	double                                       WidthOverride;                                     // 0x430(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_338[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          ButtonStyle;                                       // 0x440(0x3F0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           BracketBrush;                                      // 0x830(0xD0)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Normal_Inactive;                         // 0x900(0x10)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Normal_Active;                           // 0x910(0x10)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Hovered;                                 // 0x920(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Pressed;                                 // 0x930(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Normal;                               // 0x940(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Hovered;                              // 0x950(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Pressed;                              // 0x960(0x10)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Initialized;                                       // 0x970(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Active;                                            // 0x971(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_33A[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ActionKey;                                         // 0x978(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2D*                            Button_Label_Icon_KBM;                             // 0x988(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PreventButtonOnKBM;                                // 0x990(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Is_Gamepad_Active;                                 // 0x991(0x1)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UsesSelectedLine;                                  // 0x992(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_33B[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            ButtonIconDefault;                                 // 0x998(0x8)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ForceScaleText;                                    // 0x9A0(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_Button_C* GetDefaultObj();

	class FText SetButtonText();
	class UTexture2D* Fix_PS_Icons(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	bool UpdateInputIcon(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast);
	bool UpdateBracketAndTextColors(bool Temp_bool_Variable, struct FLinearColor* K2Node_Select_Default);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void UpdateButton();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void SetActive(bool* NewActive);
	void Construct();
	void OnWidgetGamepadActiveChangedBP(bool bIsGamepadActive);
	float ExecuteUbergraph_ASAUIWidget_Button(bool* K2Node_CustomEvent_newActive, bool* K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Variable, struct FLinearColor* K2Node_Select_Default);
	void OnButtonClicked__DelegateSignature();
};

}


