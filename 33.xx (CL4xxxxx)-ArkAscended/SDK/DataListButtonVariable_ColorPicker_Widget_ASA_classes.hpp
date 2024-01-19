#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4A8 - 0x478)
// WidgetBlueprintGeneratedClass DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C
class UDataListButtonVariable_ColorPicker_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            ChangedColor;                                      // 0x480(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHideColor;                                        // 0x490(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_491E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            SelectedOption;                                    // 0x498(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_ColorPicker_Widget_ASA_C* GetDefaultObj();

	bool ExtraSetupToggledButton(class UWidget** CallFunc_GetChildAt_ReturnValue, class UColorPicker_ASA_Widget_C* K2Node_DynamicCast_AsColor_Picker_ASA_Widget);
	class FText SetupTextValue(class FText ReturnText);
	bool PreConstruct();
	void Construct();
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	void UpdateColorPicker(struct FVector2D* ColorPickerSliderValue);
	bool ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const struct FVector2D& K2Node_Event_ColorPickerSliderValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UColorPicker_ASA_Widget_C* K2Node_DynamicCast_AsColor_Picker_ASA_Widget, class UUI_PCOptionsMenu* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast);
	bool SelectedOption__DelegateSignature();
	void ChangedColor__DelegateSignature(struct FLinearColor* Color);
};

}


