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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UOverlay*                              OverlayCapsLimit;                                  // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              OverlaySlider;                                     // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar;                                       // 0x348(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig)
	class USlider*                               SliderFloatValue;                                  // 0x350(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastValue;                                         // 0x358(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USlider_ASA_Widget_C* GetDefaultObj();

	class UWidget* GetOverrideHighligteableWidgetBP();
	float SetupSetPercent(float* InputPin, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, bool* K2Node_DynamicCast_bSuccess, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	bool SetupValue(double* Float);
	void BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams);
	float Tick(struct FGeometry* MyGeometry);
	float ExecuteUbergraph_Slider_ASA_Widget(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float CallFunc_GetValue_ReturnValue, bool* CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_GetValue_ReturnValue_1);
};

}


