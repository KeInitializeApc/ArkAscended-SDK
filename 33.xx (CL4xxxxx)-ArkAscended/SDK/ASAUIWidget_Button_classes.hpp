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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                Bracket;                                           // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button;                                            // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class USizeBox*                              Button_SizeBox;                                    // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Button_Text_ControllerIcon;                        // 0x350(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Left;                                  // 0x358(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Right;                                 // 0x360(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UImage*                                SelectedLine;                                      // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class UScaleBox*                             TheScaleBox;                                       // 0x370(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Left;                                  // 0x378(0x18)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x390(0x10)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UTexture2D*                            ButtonLabel_Icon;                                  // 0x3A0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             ButtonLabel_Icon_Size;                             // 0x3A8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Right;                                 // 0x3B8(0x18)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabel_Font;                                  // 0x3D0(0x58)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	double                                       HeightOverride;                                    // 0x428(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	double                                       WidthOverride;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_38DC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          ButtonStyle;                                       // 0x440(0x3F0)(Edit, Parm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           BracketBrush;                                      // 0x830(0xD0)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Normal_Inactive;                         // 0x900(0x10)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Normal_Active;                           // 0x910(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Hovered;                                 // 0x920(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColor_Pressed;                                 // 0x930(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Normal;                               // 0x940(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Hovered;                              // 0x950(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BracketColor_Pressed;                              // 0x960(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Initialized;                                       // 0x970(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Active;                                            // 0x971(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_38DF[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ActionKey;                                         // 0x978(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UTexture2D*                            Button_Label_Icon_KBM;                             // 0x988(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PreventButtonOnKBM;                                // 0x990(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Is_Gamepad_Active;                                 // 0x991(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UsesSelectedLine;                                  // 0x992(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38E2[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            ButtonIconDefault;                                 // 0x998(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ForceScaleText;                                    // 0x9A0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_Button_C* GetDefaultObj();

	class FText SetButtonText();
	TMap<class FString, class FString> Fix_PS_Icons(bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	struct FDeprecateSlateVector2D UpdateInputIcon(bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	struct FSlateColor UpdateBracketAndTextColors(bool* Temp_bool_Variable, struct FLinearColor* K2Node_Select_Default, bool* CallFunc_IsHovered_ReturnValue, bool* CallFunc_IsPressed_ReturnValue);
	void Destruct();
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void UpdateButton();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	bool SetActive();
	void Construct();
	bool OnWidgetGamepadActiveChangedBP();
	float ExecuteUbergraph_ASAUIWidget_Button(bool K2Node_Event_bIsGamepadActive, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* Temp_bool_Variable, struct FLinearColor* K2Node_Select_Default);
	void OnButtonClicked__DelegateSignature();
};

}


