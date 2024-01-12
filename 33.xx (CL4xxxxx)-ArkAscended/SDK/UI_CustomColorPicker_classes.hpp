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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class USlider*                               SLIDER_Opacity;                                    // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class USlider*                               SLIDER_Saturation;                                 // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class USlider*                               SLIDER_Value;                                      // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class USynth2DSlider*                        SYNTH_Picker;                                      // 0x350(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UEditableText*                         TEXT_HexValue;                                     // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnColorChanged;                                    // 0x360(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OptionChanged;                                     // 0x370(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomColorPicker_C* GetDefaultObj();

	void SetColorPickerEnabled(bool* bInIsEnabled);
	TArray<class FString> LimitTextSize(class FString* SourceString, class FString* Array, const class FString& CallFunc_JoinStringArray_ReturnValue);
	float UpdateAllSliders(struct FLinearColor* Color, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	float GetFinalColor(float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, const struct FVector2D& CallFunc_GetValue_ReturnValue_3, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double* CallFunc_Multiply_DoubleDouble_ReturnValue);
	float OnUpdateOpacity(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double* CallFunc_Multiply_DoubleDouble_ReturnValue);
	double OnUpdateValue(float CallFunc_GetValue_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y);
	void OnUpdateSaturation();
	float OnUpdate2DSynth(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double* CallFunc_Multiply_DoubleDouble_ReturnValue);
	class UMaterialInstanceDynamic* SetValueBarValue(struct FLinearColor* Color);
	class UMaterialInstanceDynamic* SetSaturationBarColor(struct FLinearColor* Color);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
	enum class ETextCommit BndEvt__UI_CustomColorPicker_TEXT_HexValue_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SYNTH_Picker_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Saturation_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Value_K2Node_ComponentBoundEvent_10_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__UI_CustomColorPicker_SLIDER_Opacity_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature();
	struct FColor ExecuteUbergraph_UI_CustomColorPicker(bool* CallFunc_IsValid_ReturnValue, float K2Node_ComponentBoundEvent_Value_4, float K2Node_ComponentBoundEvent_Value_3, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue);
	void OptionChanged__DelegateSignature();
	void OnColorChanged__DelegateSignature(struct FLinearColor* Color);
};

}


