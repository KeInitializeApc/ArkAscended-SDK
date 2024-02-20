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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UOverlay*                              OverlayCapsLimit;                                  // 0x338(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              OverlaySlider;                                     // 0x340(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar;                                       // 0x348(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class USlider*                               SliderFloatValue;                                  // 0x350(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastValue;                                         // 0x358(0x4)(ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class USlider_ASA_Widget_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue);
	double SetupSetPercent(float* InputPin, class FString* CallFunc_Conv_DoubleToString_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	bool SetupValue(double Float);
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	float Tick();
	double ExecuteUbergraph_Slider_ASA_Widget(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, float CallFunc_GetValue_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float* CallFunc_SetValue_InValue_ImplicitCast);
};

}


