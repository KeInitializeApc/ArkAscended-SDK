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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Bracket;                                           // 0x338(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UButton*                               Button;                                            // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USizeBox*                              Button_SizeBox;                                    // 0x348(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UImage*                                Button_Text_ControllerIcon;                        // 0x350(0x8)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Left;                                  // 0x358(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            Button_Text_Right;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                SelectedLine;                                      // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UScaleBox*                             TheScaleBox;                                       // 0x370(0x8)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FText                                  ButtonLabel_Left;                                  // 0x378(0x18)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x390(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	class UTexture2D*                            ButtonLabel_Icon;                                  // 0x3A0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ButtonLabel_Icon_Size;                             // 0x3A8(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  ButtonLabel_Right;                                 // 0x3B8(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateFontInfo                        ButtonLabel_Font;                                  // 0x3D0(0x58)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       HeightOverride;                                    // 0x428(0x8)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	double                                       WidthOverride;                                     // 0x430(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_4AA0[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FButtonStyle                          ButtonStyle;                                       // 0x440(0x3F0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance)
	struct FSlateBrush                           BracketBrush;                                      // 0x830(0xD0)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          TextColor_Normal_Inactive;                         // 0x900(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          TextColor_Normal_Active;                           // 0x910(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          TextColor_Hovered;                                 // 0x920(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          TextColor_Pressed;                                 // 0x930(0x10)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          BracketColor_Normal;                               // 0x940(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          BracketColor_Hovered;                              // 0x950(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FLinearColor                          BracketColor_Pressed;                              // 0x960(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         Initialized;                                       // 0x970(0x1)(ConstParm, BlueprintVisible, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Active;                                            // 0x971(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_4AA1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ActionKey;                                         // 0x978(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2D*                            Button_Label_Icon_KBM;                             // 0x988(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         PreventButtonOnKBM;                                // 0x990(0x1)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         Is_Gamepad_Active;                                 // 0x991(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         UsesSelectedLine;                                  // 0x992(0x1)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4AA2[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            ButtonIconDefault;                                 // 0x998(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         ForceScaleText;                                    // 0x9A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UASAUIWidget_Button_C* GetDefaultObj();

	void SetButtonText(class FText* TheText);
	bool Fix_PS_Icons(bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue);
	struct FDeprecateSlateVector2D UpdateInputIcon(bool CallFunc_BooleanAND_ReturnValue);
	bool UpdateBracketAndTextColors(bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default);
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
	bool OnWidgetGamepadActiveChangedBP();
	float ExecuteUbergraph_ASAUIWidget_Button(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default);
	void OnButtonClicked__DelegateSignature();
};

}


