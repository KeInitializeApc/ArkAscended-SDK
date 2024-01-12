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
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseCustomDefaultValue;                            // 0x204(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        CustomDefaultValue;                                // 0x208(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    SliderRange;                                       // 0x210(0x88)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                ValueTags;                                         // 0x298(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SliderHandleStartAngle;                            // 0x2A8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SliderHandleEndAngle;                              // 0x2AC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AngularOffset;                                     // 0x2B0(0x4)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             HandStartEndRatio;                                 // 0x2B8(0x10)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          WidgetStyle;                                       // 0x2D0(0x500)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderBarColor;                                    // 0x7D0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          SliderProgressColor;                               // 0x7E0(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderHandleColor;                                 // 0x7F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          CenterBackgroundColor;                             // 0x800(0x10)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         Locked;                                            // 0x810(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         MouseUsesStep;                                     // 0x811(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RequiresControllerLock;                            // 0x812(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_30[0x1];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        StepSize;                                          // 0x814(0x4)(ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x818(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseVerticalDrag;                                   // 0x819(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ShowSliderHandle;                                  // 0x81A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ShowSliderHand;                                    // 0x81B(0x1)(Edit, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_32[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x820(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x830(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x840(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x850(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x860(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_33[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialSlider* GetDefaultObj();

	TArray<float> SetValueTags();
	float SetValue();
	void SetUseVerticalDrag(bool* InUseVerticalDrag);
	float SetStepSize();
	void SetSliderRange(struct FRuntimeFloatCurve* InSliderRange);
	struct FLinearColor SetSliderProgressColor();
	float SetSliderHandleStartAngle();
	float SetSliderHandleEndAngle();
	struct FLinearColor SetSliderHandleColor();
	struct FLinearColor SetSliderBarColor();
	void SetShowSliderHandle(bool* InShowSliderHandle);
	void SetShowSliderHand(bool* InShowSliderHand);
	bool SetLocked();
	struct FVector2D SetHandStartEndRatio();
	float SetCustomDefaultValue();
	struct FLinearColor SetCenterBackgroundColor();
	float SetAngularOffset();
	float GetValue();
	float GetNormalizedSliderHandlePosition();
	float GetCustomDefaultValue();
};

}


