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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            ChangedColor;                                      // 0x480(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHideColor;                                        // 0x490(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3CC4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            SelectedOption;                                    // 0x498(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_ColorPicker_Widget_ASA_C* GetDefaultObj();

	bool ExtraSetupToggledButton(bool Toggle, class UColorPicker_ASA_Widget_C** K2Node_DynamicCast_AsColor_Picker_ASA_Widget);
	class FText SetupTextValue(class FText* ReturnText);
	bool PreConstruct();
	void Construct();
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	struct FVector2D UpdateColorPicker();
	bool ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_SwitchName_CmpSuccess, struct FVector2D* K2Node_Event_ColorPickerSliderValue, class UColorPicker_ASA_Widget_C** K2Node_DynamicCast_AsColor_Picker_ASA_Widget, const TArray<class UUI_PCOptionsMenu*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, double* CallFunc_MakeVector2D_X_ImplicitCast, double* CallFunc_MakeVector2D_Y_ImplicitCast);
	void SelectedOption__DelegateSignature(bool Toggle);
	void ChangedColor__DelegateSignature(struct FLinearColor* Color);
};

}


