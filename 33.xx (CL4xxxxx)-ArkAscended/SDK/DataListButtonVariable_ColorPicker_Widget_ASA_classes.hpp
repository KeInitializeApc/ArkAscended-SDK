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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            ChangedColor;                                      // 0x480(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHideColor;                                        // 0x490(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A92[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            SelectedOption;                                    // 0x498(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_ColorPicker_Widget_ASA_C* GetDefaultObj();

	bool ExtraSetupToggledButton();
	class FText SetupTextValue(class FText* Text);
	void PreConstruct(bool* IsDesignTime);
	void Construct();
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	struct FVector2D UpdateColorPicker();
	double ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA(bool K2Node_SwitchName_CmpSuccess);
	bool SelectedOption__DelegateSignature();
	void ChangedColor__DelegateSignature(struct FLinearColor* Color);
};

}


