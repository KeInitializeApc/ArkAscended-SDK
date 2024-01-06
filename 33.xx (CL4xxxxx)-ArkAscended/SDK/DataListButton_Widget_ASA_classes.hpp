#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE9 (0x419 - 0x330)
// WidgetBlueprintGeneratedClass DataListButton_Widget_ASA.DataListButton_Widget_ASA_C
class UDataListButton_Widget_ASA_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UImage*                                BorderBrackets;                                    // 0x338(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BorderColor;                                       // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UBorder*                               BorderOfColor;                                     // 0x348(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      DinoExpirationLabel;                               // 0x350(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DinoStatusLabel;                                   // 0x358(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          MainVerticalBox;                                   // 0x360(0x8)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               TextEntryBorder;                                   // 0x368(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   TheButton;                                         // 0x370(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x378(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x388(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x398(0x10)(BlueprintVisible, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  VariableText;                                      // 0x3A8(0x18)(Edit, BlueprintReadOnly, Net, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         TestValue;                                         // 0x3C0(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CE0[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            ToggledState;                                      // 0x3C8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SupportMultipleOptions;                            // 0x3D8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CE3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          BrushColor;                                        // 0x3DC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x3EC(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CE4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorTextSelected;                                 // 0x3F0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ColorTextUnselected;                               // 0x400(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseOverrideValueText;                              // 0x410(0x1)(Edit, ExportObject, BlueprintReadOnly, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         HideValue;                                         // 0x411(0x1)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsChildOfPanel;                                    // 0x412(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CEA[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x414(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsAlternativeColor;                                // 0x418(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButton_Widget_ASA_C* GetDefaultObj();

	bool GetIsAlternativeColor(bool* ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1);
	int32 GetVisibleChildIndex(class UPanelWidget* Parent, int32* CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue_1);
	void UpdateColorBrush(struct FLinearColor* InBrushColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	struct FLinearColor SetupToggledState(bool* Condition);
	void BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	bool PreConstruct();
	bool SetTextButton(class FText* NewText, bool UseOverrideValueText);
	void SetValueText(class FText ValueText);
	class FText BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(enum class ETextCommit CommitMethod);
	float Tick(const struct FGeometry& MyGeometry);
	bool ExecuteUbergraph_DataListButton_Widget_ASA(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FString* CallFunc_Conv_TextToString_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams);
	bool ToggledState__DelegateSignature();
};

}


