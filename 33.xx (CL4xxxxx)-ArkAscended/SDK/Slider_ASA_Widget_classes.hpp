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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UOverlay*                              OverlayCapsLimit;                                  // 0x338(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UOverlay*                              OverlaySlider;                                     // 0x340(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UProgressBar*                          ProgressBar;                                       // 0x348(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig)
	class USlider*                               SliderFloatValue;                                  // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastValue;                                         // 0x358(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USlider_ASA_Widget_C* GetDefaultObj();

	class UWidget* GetOverrideHighligteableWidgetBP();
	float SetupSetPercent(float* InputPin, bool PreventRecallParent, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void SetupValue(double* Float, bool PreventRecallParent);
	void BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams);
	float Tick(struct FGeometry* MyGeometry);
	float ExecuteUbergraph_Slider_ASA_Widget(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsVisible_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_Conv_IntToBool_ReturnValue, double K2Node_CustomEvent_Float, bool K2Node_CustomEvent_PreventRecallParent, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast);
};

}


