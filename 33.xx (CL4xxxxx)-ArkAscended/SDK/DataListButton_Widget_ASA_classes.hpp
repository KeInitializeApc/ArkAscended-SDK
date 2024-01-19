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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UImage*                                BorderBrackets;                                    // 0x338(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BorderColor;                                       // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UBorder*                               BorderOfColor;                                     // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      DinoExpirationLabel;                               // 0x350(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DinoStatusLabel;                                   // 0x358(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          MainVerticalBox;                                   // 0x360(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               TextEntryBorder;                                   // 0x368(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   TheButton;                                         // 0x370(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x378(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x388(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x398(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FText                                  VariableText;                                      // 0x3A8(0x18)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         TestValue;                                         // 0x3C0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_439D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            ToggledState;                                      // 0x3C8(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SupportMultipleOptions;                            // 0x3D8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_439E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          BrushColor;                                        // 0x3DC(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x3EC(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_439F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorTextSelected;                                 // 0x3F0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ColorTextUnselected;                               // 0x400(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseOverrideValueText;                              // 0x410(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         HideValue;                                         // 0x411(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsChildOfPanel;                                    // 0x412(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_43A1[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x414(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsAlternativeColor;                                // 0x418(0x1)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButton_Widget_ASA_C* GetDefaultObj();

	int32 GetIsAlternativeColor(bool ReturnValue, int32* CallFunc_GetVisibleChildIndex_Index, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, int32* CallFunc_GetVisibleChildIndex_Index_1, bool* CallFunc_BooleanOR_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	int32 GetVisibleChildIndex(class UPanelWidget* Parent, class UWidget* Widget, int32* ChildrenIndex, int32* CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable, int32* CallFunc_Subtract_IntInt_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	struct FLinearColor UpdateColorBrush(const struct FLinearColor& InBrushColor);
	struct FLinearColor SetupToggledState(bool* Condition, bool* CallFunc_GetIsAlternativeColor_ReturnValue);
	void BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	bool PreConstruct();
	bool SetTextButton(class FText NewText, bool* CanEditTextVariable);
	class FText SetValueText();
	class FText BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod);
	float Tick(const struct FGeometry& MyGeometry);
	bool ExecuteUbergraph_DataListButton_Widget_ASA(int32 EntryPoint, bool* CallFunc_IsVisible_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text, bool* CallFunc_GetToggledState_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class FText* CallFunc_Conv_DoubleToText_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasKeyboardFocus_ReturnValue);
	bool ToggledState__DelegateSignature(bool Set);
};

}


