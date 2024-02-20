#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x690 (0x880 - 0x1F0)
// Class AdvancedWidgets.RadialSlider
class URadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	bool                                         bUseCustomDefaultValue;                            // 0x204(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_231D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CustomDefaultValue;                                // 0x208(0x4)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2320[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    SliderRange;                                       // 0x210(0x88)(Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                ValueTags;                                         // 0x298(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SliderHandleStartAngle;                            // 0x2A8(0x4)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SliderHandleEndAngle;                              // 0x2AC(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AngularOffset;                                     // 0x2B0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2322[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             HandStartEndRatio;                                 // 0x2B8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2324[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          WidgetStyle;                                       // 0x2D0(0x500)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderBarColor;                                    // 0x7D0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          SliderProgressColor;                               // 0x7E0(0x10)(OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderHandleColor;                                 // 0x7F0(0x10)(ConstParm, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          CenterBackgroundColor;                             // 0x800(0x10)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Locked;                                            // 0x810(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         MouseUsesStep;                                     // 0x811(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         RequiresControllerLock;                            // 0x812(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2326[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StepSize;                                          // 0x814(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x818(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         UseVerticalDrag;                                   // 0x819(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ShowSliderHandle;                                  // 0x81A(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ShowSliderHand;                                    // 0x81B(0x1)(BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_234E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x820(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x830(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x840(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x850(0x10)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x860(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_236C[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialSlider* GetDefaultObj();

	TArray<float> SetValueTags();
	float SetValue();
	bool SetUseVerticalDrag();
	float SetStepSize();
	struct FRuntimeFloatCurve SetSliderRange();
	struct FLinearColor SetSliderProgressColor();
	float SetSliderHandleStartAngle();
	float SetSliderHandleEndAngle();
	struct FLinearColor SetSliderHandleColor();
	struct FLinearColor SetSliderBarColor();
	bool SetShowSliderHandle();
	bool SetShowSliderHand();
	bool SetLocked();
	struct FVector2D SetHandStartEndRatio();
	float SetCustomDefaultValue();
	struct FLinearColor SetCenterBackgroundColor();
	float SetAngularOffset();
	void GetValue(float ReturnValue);
	void GetNormalizedSliderHandlePosition(float ReturnValue);
	void GetCustomDefaultValue(float ReturnValue);
};

}


