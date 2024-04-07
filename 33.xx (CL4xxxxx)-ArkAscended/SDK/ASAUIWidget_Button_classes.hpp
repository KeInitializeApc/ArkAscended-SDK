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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                Bracket;                                           // 0x338(0x8)(Edit, ExportObject, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button;                                            // 0x340(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	class USizeBox*                              Button_SizeBox;                                    // 0x348(0x8)(ConstParm, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Button_Text_ControllerIcon;                        // 0x350(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Left;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Right;                                 // 0x360(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                SelectedLine;                                      // 0x368(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UScaleBox*                             TheScaleBox;                                       // 0x370(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Left;                                  // 0x378(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x390(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
	class UTexture2D*                            ButtonLabel_Icon;                                  // 0x3A0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ButtonLabel_Icon_Size;                             // 0x3A8(0x10)(Edit, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Right;                                 // 0x3B8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabel_Font;                                  // 0x3D0(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	double                                       HeightOverride;                                    // 0x428(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	double                                       WidthOverride;                                     // 0x430(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_4CDE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          ButtonStyle;                                       // 0x440(0x3F0)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FSlateBrush                           BracketBrush;                                      // 0x830(0xD0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Normal_Inactive;                         // 0x900(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Normal_Active;                           // 0x910(0x10)(ConstParm, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Hovered;                                 // 0x920(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Pressed;                                 // 0x930(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Normal;                               // 0x940(0x10)(Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Hovered;                              // 0x950(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Pressed;                              // 0x960(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Initialized;                                       // 0x970(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         Active;                                            // 0x971(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_4CE8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ActionKey;                                         // 0x978(0x10)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            Button_Label_Icon_KBM;                             // 0x988(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PreventButtonOnKBM;                                // 0x990(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Is_Gamepad_Active;                                 // 0x991(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UsesSelectedLine;                                  // 0x992(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4CEC[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            ButtonIconDefault;                                 // 0x998(0x8)(ConstParm, ExportObject, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ForceScaleText;                                    // 0x9A0(0x1)(ConstParm, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_Button_C* GetDefaultObj();

	void SetButtonText(class FText* TheText);
	bool Fix_PS_Icons(TMap<class FString, class FString>* XSX_ui_names, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class FString* CallFunc_GetObjectName_ReturnValue, TMap<class FString, class FString>* K2Node_MakeVariable_MakeVariableOutput, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue);
	struct FDeprecateSlateVector2D UpdateInputIcon();
	struct FSlateColor UpdateBracketAndTextColors(bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue);
	void Destruct();
	bool PreConstruct();
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void UpdateButton();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	bool SetActive();
	void Construct();
	void OnWidgetGamepadActiveChangedBP(bool* bIsGamepadActive);
	float ExecuteUbergraph_ASAUIWidget_Button(int32* EntryPoint, bool* K2Node_Event_bIsGamepadActive, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABasePlayerController* K2Node_DynamicCast_AsBase_Player_Controller, bool* K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
	void OnButtonClicked__DelegateSignature();
};

}


