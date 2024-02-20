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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               Border_0;                                          // 0x338(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, RepNotify)
	class UImage*                                FakeImage;                                         // 0x340(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Image_27;                                          // 0x348(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, NonTransactional, EditorOnly, NoDestructor)
	class USynth2DSlider*                        Synth2DSlider_89;                                  // 0x350(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp, EditorOnly, NoDestructor, AutoWeak)
	class UMaterialInstanceDynamic*              SliderMat;                                         // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Linear_Color;                                      // 0x360(0x10)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    MaterialToPickColor;                               // 0x370(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextureRenderTarget2D*                Texture_Render_Target;                             // 0x378(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastTimeUpdateRender;                              // 0x380(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            FakeTextureToShow;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastReadRenderPixelTime;                           // 0x390(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       ReadRenderTargetPixelInterval;                     // 0x398(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UColorPicker_ASA_Widget_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue);
	void TimerCooldownColorCheck();
	float UpdateColorSlider2D(double* CallFunc_Subtract_DoubleFloat_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const struct FVector2D& CallFunc_GetValue_ReturnValue_1, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool* CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast);
	void UpdateSaturationBar(struct FLinearColor* Value);
	struct FEventReply OnMouseMove_0(const struct FEventReply& ReturnValue);
	void Construct();
	float Tick();
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value);
	void SetupColorRenderTarget();
	void UpdateColorPickerValue(struct FVector2D* Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEventSynth2D__DelegateSignature();
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEventSynth2D__DelegateSignature();
	struct FVector2D ExecuteUbergraph_ColorPicker_ASA_Widget(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float* K2Node_ComponentBoundEvent_Value_1, float* K2Node_ComponentBoundEvent_Value, bool* CallFunc_IsValid_ReturnValue);
};

}


