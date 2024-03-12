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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USlider*                               SLIDER_Opacity;                                    // 0x338(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USlider*                               SLIDER_Saturation;                                 // 0x340(0x8)(Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USlider*                               SLIDER_Value;                                      // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USynth2DSlider*                        SYNTH_Picker;                                      // 0x350(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UEditableText*                         TEXT_HexValue;                                     // 0x358(0x8)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnColorChanged;                                    // 0x360(0x10)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OptionChanged;                                     // 0x370(0x10)(Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomColorPicker_C* GetDefaultObj();

	void SetColorPickerEnabled(bool* bInIsEnabled);
	int32 LimitTextSize(class FString* SourceString, class FString* Array, const TArray<class FString>& LocalArray, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue);
	double UpdateAllSliders(struct FLinearColor* Color, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, const class FString& CallFunc_SRGBtoHEX_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast);
	double GetFinalColor(const struct FLinearColor& FinalColor, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast);
	double OnUpdateOpacity(double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	double OnUpdateValue(struct FVector2D* CallFunc_MakeVector2D_ReturnValue);
	void OnUpdateSaturation();
	double OnUpdate2DSynth(double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	class UMaterialInstanceDynamic* SetValueBarValue(struct FLinearColor* Color);
	class UMaterialInstanceDynamic* SetSaturationBarColor(struct FLinearColor* Color);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float* Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float* Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float* Value);
	class FText BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(enum class ETextCommit* CommitMethod);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature();
	struct FLinearColor ExecuteUbergraph_UI_CustomColorPicker(int32* EntryPoint, float K2Node_ComponentBoundEvent_Value_4, float K2Node_ComponentBoundEvent_Value_3, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const class FString& CallFunc_SRGBtoHEX_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_LimitTextSize_Array);
	void OptionChanged__DelegateSignature();
	void OnColorChanged__DelegateSignature(struct FLinearColor* Color);
};

}


