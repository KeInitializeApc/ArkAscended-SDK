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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UImage*                                BorderBrackets;                                    // 0x338(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BorderColor;                                       // 0x340(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	class UBorder*                               BorderOfColor;                                     // 0x348(0x8)(ConstParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      DinoExpirationLabel;                               // 0x350(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DinoStatusLabel;                                   // 0x358(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          MainVerticalBox;                                   // 0x360(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               TextEntryBorder;                                   // 0x368(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   TheButton;                                         // 0x370(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x378(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x388(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x398(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  VariableText;                                      // 0x3A8(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         TestValue;                                         // 0x3C0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_32FC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            ToggledState;                                      // 0x3C8(0x10)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SupportMultipleOptions;                            // 0x3D8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_32FD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          BrushColor;                                        // 0x3DC(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x3EC(0x1)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_32FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorTextSelected;                                 // 0x3F0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ColorTextUnselected;                               // 0x400(0x10)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseOverrideValueText;                              // 0x410(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         HideValue;                                         // 0x411(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsChildOfPanel;                                    // 0x412(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3300[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x414(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsAlternativeColor;                                // 0x418(0x1)(Edit, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButton_Widget_ASA_C* GetDefaultObj();

	bool GetIsAlternativeColor(class UPanelWidget** CallFunc_GetParent_ReturnValue, class UPanelWidget** CallFunc_GetParent_ReturnValue_1, class UPanelWidget** CallFunc_GetParent_ReturnValue_2, class UPanelWidget** CallFunc_GetParent_ReturnValue_3, class UPanelWidget** CallFunc_GetParent_ReturnValue_4, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue, class UPanelWidget** CallFunc_GetParent_ReturnValue_5, int32* CallFunc_SelectInt_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue);
	bool GetVisibleChildIndex(class UPanelWidget* Parent, bool Temp_bool_Variable, int32* Temp_int_Variable, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32* Temp_int_Variable_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	struct FLinearColor UpdateColorBrush(const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	struct FSlateColor SetupToggledState(bool* Condition, struct FLinearColor* CallFunc_SelectColor_ReturnValue);
	void BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	bool SetTextButton();
	class FText SetValueText();
	enum class ETextCommit BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature();
	float Tick(struct FGeometry* MyGeometry);
	bool ExecuteUbergraph_DataListButton_Widget_ASA(const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool* K2Node_DynamicCast_bSuccess, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	bool ToggledState__DelegateSignature(bool Set);
};

}


