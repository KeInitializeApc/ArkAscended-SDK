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
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ExportObject, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
	bool                                         bUseCustomDefaultValue;                            // 0x204(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_267C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CustomDefaultValue;                                // 0x208(0x4)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_267D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    SliderRange;                                       // 0x210(0x88)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<float>                                ValueTags;                                         // 0x298(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SliderHandleStartAngle;                            // 0x2A8(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SliderHandleEndAngle;                              // 0x2AC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AngularOffset;                                     // 0x2B0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2681[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             HandStartEndRatio;                                 // 0x2B8(0x10)(ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2682[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          WidgetStyle;                                       // 0x2D0(0x500)(ConstParm, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderBarColor;                                    // 0x7D0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          SliderProgressColor;                               // 0x7E0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderHandleColor;                                 // 0x7F0(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FLinearColor                          CenterBackgroundColor;                             // 0x800(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Locked;                                            // 0x810(0x1)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         MouseUsesStep;                                     // 0x811(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         RequiresControllerLock;                            // 0x812(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2683[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StepSize;                                          // 0x814(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         IsFocusable;                                       // 0x818(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         UseVerticalDrag;                                   // 0x819(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ShowSliderHandle;                                  // 0x81A(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ShowSliderHand;                                    // 0x81B(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2686[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x820(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x830(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x840(0x10)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x850(0x10)(Edit, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x860(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2687[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	float GetValue();
	float GetNormalizedSliderHandlePosition();
	float GetCustomDefaultValue();
};

}


