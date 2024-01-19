#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x380 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomColorPicker.UI_CustomColorPicker_C
class UUI_CustomColorPicker_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class USlider*                               SLIDER_Opacity;                                    // 0x338(0x8)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USlider*                               SLIDER_Saturation;                                 // 0x340(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USlider*                               SLIDER_Value;                                      // 0x348(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USynth2DSlider*                        SYNTH_Picker;                                      // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_HexValue;                                     // 0x358(0x8)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnColorChanged;                                    // 0x360(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OptionChanged;                                     // 0x370(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomColorPicker_C* GetDefaultObj();

	void SetColorPickerEnabled(bool* bInIsEnabled);
	TArray<class FString> LimitTextSize(const class FString& SourceString, class FString* Array, class FString* CallFunc_JoinStringArray_ReturnValue);
	float UpdateAllSliders(struct FLinearColor* Color, double* CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	float GetFinalColor(double CallFunc_Multiply_DoubleDouble_ReturnValue);
	float OnUpdateOpacity(double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_1);
	double OnUpdateValue(double* CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void OnUpdateSaturation();
	float OnUpdate2DSynth(double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_1);
	void SetValueBarValue(struct FLinearColor* Color, class UMaterialInstanceDynamic** CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic** CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic** CallFunc_GetDynamicMaterial_ReturnValue_2);
	void SetSaturationBarColor(struct FLinearColor* Color, class UMaterialInstanceDynamic** CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic** CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic** CallFunc_GetDynamicMaterial_ReturnValue_2);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
	class FText BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature();
	class FText ExecuteUbergraph_UI_CustomColorPicker(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text, struct FLinearColor* CallFunc_Conv_ColorToLinearColor_ReturnValue);
	void OptionChanged__DelegateSignature();
	void OnColorChanged__DelegateSignature(struct FLinearColor* Color);
};

}


