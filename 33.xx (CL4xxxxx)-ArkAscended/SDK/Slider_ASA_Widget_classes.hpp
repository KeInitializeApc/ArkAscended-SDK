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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UOverlay*                              OverlayCapsLimit;                                  // 0x338(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UOverlay*                              OverlaySlider;                                     // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UProgressBar*                          ProgressBar;                                       // 0x348(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class USlider*                               SliderFloatValue;                                  // 0x350(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        LastValue;                                         // 0x358(0x4)(OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USlider_ASA_Widget_C* GetDefaultObj();

	void GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue);
	float SetupSetPercent(float* InputPin, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class UObject** CallFunc_GetOuterObject_ReturnValue, class UObject** CallFunc_GetOuterObject_ReturnValue_1, double* CallFunc_Divide_DoubleFloat_ReturnValue, float* CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	bool SetupValue(double* Float);
	struct FBPNetExecParams BPExecutedCommandForPrimalUI();
	float Tick(const struct FGeometry& MyGeometry);
	float ExecuteUbergraph_Slider_ASA_Widget(int32 EntryPoint, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_IsVisible_ReturnValue);
};

}


