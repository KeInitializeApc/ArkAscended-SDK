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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UImage*                                Image;                                             // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_2;                                           // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, Interp)
	class UImage*                                Image_68;                                          // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, RepNotify, NonTransactional, AutoWeak)
	class USynth2DSlider*                        Synth2DSlider_89;                                  // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, Interp, EditorOnly, NoDestructor, AutoWeak)
	class UMaterialInstanceDynamic*              SliderMat;                                         // 0x360(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Linear_Color;                                      // 0x368(0x10)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    MaterialToPickColor;                               // 0x378(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextureRenderTarget2D*                Texture_Render_Target;                             // 0x380(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastTimeUpdateRender;                              // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UOverallFatMusclePicker_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget** ReturnValue);
	float UpdateColorSlider2D(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, float K2Node_MakeStruct_FloatParam2_ImplicitCast);
	void UpdateSaturationBar(const struct FLinearColor& Value);
	void Construct();
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void BndEvt__ColorPicker_ASA_Widget_Synth2DSlider_89_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEventSynth2D__DelegateSignature(float Value);
	void UpdateColorPickerValue(const struct FVector2D& Value);
	struct FVector2D ExecuteUbergraph_OverallFatMusclePicker(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


