#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3A0 - 0x330)
// WidgetBlueprintGeneratedClass ColorPicker_ASA_Widget.ColorPicker_ASA_Widget_C
class UColorPicker_ASA_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               Border_0;                                          // 0x338(0x8)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, RepNotify)
	class UImage*                                FakeImage;                                         // 0x340(0x8)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_27;                                          // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, NonTransactional, EditorOnly, NoDestructor)
	class USynth2DSlider*                        Synth2DSlider_89;                                  // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, Interp, EditorOnly, NoDestructor, AutoWeak)
	class UMaterialInstanceDynamic*              SliderMat;                                         // 0x358(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Linear_Color;                                      // 0x360(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    MaterialToPickColor;                               // 0x370(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextureRenderTarget2D*                Texture_Render_Target;                             // 0x378(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastTimeUpdateRender;                              // 0x380(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            FakeTextureToShow;                                 // 0x388(0x8)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastReadRenderPixelTime;                           // 0x390(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       ReadRenderTargetPixelInterval;                     // 0x398(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UColorPicker_ASA_Widget_C* GetDefaultObj();

	class UWidget* GetOverrideHighligteableWidgetBP();
	void TimerCooldownColorCheck();
	float UpdateColorSlider2D(double* CallFunc_GetUnpausedTimeSeconds_ReturnValue, double* CallFunc_GetUnpausedTimeSeconds_ReturnValue_1, const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool* K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, struct FColor* CallFunc_ReadRenderTargetPixel_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1);
	void UpdateSaturationBar(const struct FLinearColor& Value);
	struct FEventReply OnMouseMove_0(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, struct FEventReply* CallFunc_Handled_ReturnValue);
	void Construct();
	float Tick(struct FGeometry* MyGeometry);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void SetupColorRenderTarget();
	void UpdateColorPickerValue(const struct FVector2D& Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature();
	int32 ExecuteUbergraph_ColorPicker_ASA_Widget(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, const struct FVector2D& K2Node_CustomEvent_Value, bool* CallFunc_IsValid_ReturnValue);
};

}


