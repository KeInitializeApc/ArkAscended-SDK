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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                BorderBrackets;                                    // 0x338(0x8)(ConstParm, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UBorder*                               BorderColor;                                       // 0x340(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               BorderOfColor;                                     // 0x348(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UEditableTextBox*                      DinoExpirationLabel;                               // 0x350(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UTextBlock*                            DinoStatusLabel;                                   // 0x358(0x8)(Edit, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UVerticalBox*                          MainVerticalBox;                                   // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UBorder*                               TextEntryBorder;                                   // 0x368(0x8)(EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   TheButton;                                         // 0x370(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x378(0x10)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x388(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x398(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	class FText                                  VariableText;                                      // 0x3A8(0x18)(ConstParm, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         TestValue;                                         // 0x3C0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AF9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            ToggledState;                                      // 0x3C8(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         SupportMultipleOptions;                            // 0x3D8(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AFB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          BrushColor;                                        // 0x3DC(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         CanEditTextVariable;                               // 0x3EC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AFE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorTextSelected;                                 // 0x3F0(0x10)(Edit, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ColorTextUnselected;                               // 0x400(0x10)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         UseOverrideValueText;                              // 0x410(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         HideValue;                                         // 0x411(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         IsChildOfPanel;                                    // 0x412(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AFF[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Maximum_Fractional_Digits;                         // 0x414(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         IsAlternativeColor;                                // 0x418(0x1)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButton_Widget_ASA_C* GetDefaultObj();

	int32 GetIsAlternativeColor(bool ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_SelectInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	int32 GetVisibleChildIndex(class UPanelWidget** Parent, int32* Index, bool* Temp_bool_Variable, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	struct FLinearColor UpdateColorBrush();
	struct FLinearColor SetupToggledState();
	void BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	bool SetTextButton();
	class FText SetValueText();
	enum class ETextCommit BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(class FText* Text);
	float Tick();
	bool ExecuteUbergraph_DataListButton_Widget_ASA(class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FString* CallFunc_Conv_TextToString_ReturnValue_1, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
	bool ToggledState__DelegateSignature(bool Set);
};

}


