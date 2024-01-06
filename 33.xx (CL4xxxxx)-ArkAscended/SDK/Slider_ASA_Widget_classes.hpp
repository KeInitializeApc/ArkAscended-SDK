#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x35C - 0x330)
// WidgetBlueprintGeneratedClass Slider_ASA_Widget.Slider_ASA_Widget_C
class USlider_ASA_Widget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UOverlay*                              OverlayCapsLimit;                                  // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              OverlaySlider;                                     // 0x340(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar;                                       // 0x348(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig)
	class USlider*                               SliderFloatValue;                                  // 0x350(0x8)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastValue;                                         // 0x358(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USlider_ASA_Widget_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget** ReturnValue);
	double SetupSetPercent(float* InputPin, bool PreventRecallParent, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, double* CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast, float* CallFunc_SetPercent_InPercent_ImplicitCast);
	void SetupValue(double* Float, bool PreventRecallParent);
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	float Tick(const struct FGeometry& MyGeometry);
	double ExecuteUbergraph_Slider_ASA_Widget(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool* CallFunc_Conv_IntToBool_ReturnValue, double K2Node_CustomEvent_Float, bool K2Node_CustomEvent_PreventRecallParent, double* CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast);
};

}


