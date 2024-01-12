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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	FMulticastInlineDelegateProperty_            ChangedColor;                                      // 0x480(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHideColor;                                        // 0x490(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_4BE7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            SelectedOption;                                    // 0x498(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_ColorPicker_Widget_ASA_C* GetDefaultObj();

	class UColorPicker_ASA_Widget_C* ExtraSetupToggledButton(bool* K2Node_DynamicCast_bSuccess);
	class FText SetupTextValue();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams);
	struct FVector2D UpdateColorPicker();
	double ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA(int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool* K2Node_DynamicCast_bSuccess, struct FLinearColor* CallFunc_SelectColor_ReturnValue, TArray<class UUI_PCOptionsMenu*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_PCOptionsMenu** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool SelectedOption__DelegateSignature();
	void ChangedColor__DelegateSignature(struct FLinearColor* Color);
};

}


