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
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bUseCustomDefaultValue;                            // 0x204(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_34[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        CustomDefaultValue;                                // 0x208(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_35[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    SliderRange;                                       // 0x210(0x88)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                ValueTags;                                         // 0x298(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SliderHandleStartAngle;                            // 0x2A8(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SliderHandleEndAngle;                              // 0x2AC(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AngularOffset;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_36[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             HandStartEndRatio;                                 // 0x2B8(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_38[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          WidgetStyle;                                       // 0x2D0(0x500)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderBarColor;                                    // 0x7D0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          SliderProgressColor;                               // 0x7E0(0x10)(ConstParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderHandleColor;                                 // 0x7F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FLinearColor                          CenterBackgroundColor;                             // 0x800(0x10)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         Locked;                                            // 0x810(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	bool                                         MouseUsesStep;                                     // 0x811(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RequiresControllerLock;                            // 0x812(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A[0x1];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        StepSize;                                          // 0x814(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x818(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseVerticalDrag;                                   // 0x819(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ShowSliderHandle;                                  // 0x81A(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ShowSliderHand;                                    // 0x81B(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3C[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x820(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x830(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x840(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x850(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x860(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URadialSlider* GetDefaultObj();

	void SetValueTags(TArray<float>* InValueTags);
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
	void GetValue(float ReturnValue);
	void GetNormalizedSliderHandlePosition(float ReturnValue);
	void GetCustomDefaultValue(float ReturnValue);
};

}


