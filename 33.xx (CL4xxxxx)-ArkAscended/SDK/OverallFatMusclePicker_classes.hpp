#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x390 - 0x330)
// WidgetBlueprintGeneratedClass OverallFatMusclePicker.OverallFatMusclePicker_C
class UOverallFatMusclePicker_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x338(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x340(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x348(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_68;                                          // 0x350(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, RepNotify, NonTransactional, AutoWeak)
	class USynth2DSlider*                        Synth2DSlider_89;                                  // 0x358(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp, EditorOnly, NoDestructor, AutoWeak)
	class UMaterialInstanceDynamic*              SliderMat;                                         // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Linear_Color;                                      // 0x368(0x10)(ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    MaterialToPickColor;                               // 0x378(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTextureRenderTarget2D*                Texture_Render_Target;                             // 0x380(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastTimeUpdateRender;                              // 0x388(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UOverallFatMusclePicker_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue);
	float UpdateColorSlider2D(const struct FVector2D& CallFunc_GetValue_ReturnValue, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams);
	void UpdateSaturationBar(struct FLinearColor* Value);
	void Construct();
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float* Value);
	void UpdateColorPickerValue(struct FVector2D* Value);
	struct FVector2D ExecuteUbergraph_OverallFatMusclePicker(float* K2Node_ComponentBoundEvent_Value_1, float* K2Node_ComponentBoundEvent_Value);
};

}


