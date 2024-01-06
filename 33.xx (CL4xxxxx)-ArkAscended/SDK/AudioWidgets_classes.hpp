#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x580 (0x770 - 0x1F0)
// Class AudioWidgets.AudioMeter
class UAudioMeter : public UWidget
{
public:
	TArray<struct FMeterChannelInfo>             MeterChannelInfo;                                  // 0x1F0(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm)
	FDelegateProperty_                           MeterChannelInfoDelegate;                          // 0x200(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FAudioMeterStyle                      WidgetStyle;                                       // 0x210(0x4D0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x6E0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_1F59[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          BackgroundColor;                                   // 0x6E4(0x10)(Edit, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterBackgroundColor;                              // 0x6F4(0x10)(ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterValueColor;                                   // 0x704(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterPeakColor;                                    // 0x714(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterClippingColor;                                // 0x724(0x10)(ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterScaleColor;                                   // 0x734(0x10)(Edit, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterScaleLabelColor;                              // 0x744(0x10)(ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F5F[0x1C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioMeter* GetDefaultObj();

	struct FLinearColor SetMeterValueColor();
	struct FLinearColor SetMeterScaleLabelColor();
	struct FLinearColor SetMeterScaleColor();
	struct FLinearColor SetMeterPeakColor();
	struct FLinearColor SetMeterClippingColor();
	void SetMeterChannelInfo(const TArray<struct FMeterChannelInfo>& InMeterChannelInfo);
	struct FLinearColor SetMeterBackgroundColor();
	struct FLinearColor SetBackgroundColor();
	void GetMeterChannelInfo__DelegateSignature(TArray<struct FMeterChannelInfo>* ReturnValue);
	void GetMeterChannelInfo(TArray<struct FMeterChannelInfo>* ReturnValue);
};

// 0x220 (0x410 - 0x1F0)
// Class AudioWidgets.AudioRadialSlider
class UAudioRadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EAudioRadialSliderLayout          WidgetLayout;                                      // 0x204(0x1)(ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F8D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CenterBackgroundColor;                             // 0x208(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderProgressColor;                               // 0x218(0x10)(BlueprintVisible, EditFixedSize, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderBarColor;                                    // 0x228(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             HandStartEndRatio;                                 // 0x238(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class FText                                  UnitsText;                                         // 0x248(0x18)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x260(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowLabelOnlyOnHover;                              // 0x270(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowUnitsText;                                     // 0x271(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsUnitsTextReadOnly;                               // 0x272(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsValueTextReadOnly;                               // 0x273(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        SliderThickness;                                   // 0x274(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             OutputRange;                                       // 0x278(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x288(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1F91[0x178];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioRadialSlider* GetDefaultObj();

	void SetWidgetLayout(enum class EAudioRadialSliderLayout* InLayout);
	void SetValueTextReadOnly(bool* bIsReadOnly);
	void SetUnitsTextReadOnly(bool* bIsReadOnly);
	void SetUnitsText(class FText* Units);
	struct FSlateColor SetTextLabelBackgroundColor();
	void SetSliderThickness(float* InThickness);
	struct FLinearColor SetSliderProgressColor();
	struct FLinearColor SetSliderBarColor();
	void SetShowUnitsText(bool* bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool* bShowLabelOnlyOnHover);
	void SetOutputRange(struct FVector2D* InOutputRange);
	void SetHandStartEndRatio(struct FVector2D* InHandStartEndRatio);
	struct FLinearColor SetCenterBackgroundColor();
	void GetSliderValue(float* OutputValue, float* ReturnValue);
	void GetOutputValue(float* InSliderValue, float* ReturnValue);
};

// 0x0 (0x410 - 0x410)
// Class AudioWidgets.AudioVolumeRadialSlider
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioVolumeRadialSlider* GetDefaultObj();

};

// 0x0 (0x410 - 0x410)
// Class AudioWidgets.AudioFrequencyRadialSlider
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioFrequencyRadialSlider* GetDefaultObj();

};

// 0x850 (0xA40 - 0x1F0)
// Class AudioWidgets.AudioSliderBase
class UAudioSliderBase : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_1FC1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  UnitsText;                                         // 0x1F8(0x18)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x210(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           TextLabelBackgroundColorDelegate;                  // 0x220(0x10)(EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowLabelOnlyOnHover;                              // 0x230(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowUnitsText;                                     // 0x231(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsUnitsTextReadOnly;                               // 0x232(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsValueTextReadOnly;                               // 0x233(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueDelegate;                                     // 0x234(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderBackgroundColor;                             // 0x244(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           SliderBackgroundColorDelegate;                     // 0x254(0x10)(BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderBarColor;                                    // 0x264(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           SliderBarColorDelegate;                            // 0x274(0x10)(BlueprintVisible, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderThumbColor;                                  // 0x284(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           SliderThumbColorDelegate;                          // 0x294(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          WidgetBackgroundColor;                             // 0x2A4(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           WidgetBackgroundColorDelegate;                     // 0x2B4(0x10)(Edit, ConstParm, BlueprintVisible, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x2C4(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_1FC8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x2C8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FC9[0x768];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioSliderBase* GetDefaultObj();

	struct FLinearColor SetWidgetBackgroundColor();
	void SetValueTextReadOnly(bool* bIsReadOnly);
	void SetUnitsTextReadOnly(bool* bIsReadOnly);
	void SetUnitsText(class FText* Units);
	struct FSlateColor SetTextLabelBackgroundColor();
	struct FLinearColor SetSliderThumbColor();
	struct FLinearColor SetSliderBarColor();
	struct FLinearColor SetSliderBackgroundColor();
	void SetShowUnitsText(bool* bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool* bShowLabelOnlyOnHover);
	void GetSliderValue(float* OutputValue, float* ReturnValue);
	void GetOutputValue(float* InSliderValue, float* ReturnValue);
	void GetLinValue(float* OutputValue, float* ReturnValue);
};

// 0x10 (0xA50 - 0xA40)
// Class AudioWidgets.AudioSlider
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>            LinToOutputCurve;                                  // 0xA40(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UCurveFloat>            OutputToLinCurve;                                  // 0xA48(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAudioSlider* GetDefaultObj();

};

// 0x0 (0xA50 - 0xA50)
// Class AudioWidgets.AudioVolumeSlider
class UAudioVolumeSlider : public UAudioSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioVolumeSlider* GetDefaultObj();

};

// 0x10 (0xA50 - 0xA40)
// Class AudioWidgets.AudioFrequencySlider
class UAudioFrequencySlider : public UAudioSliderBase
{
public:
	struct FVector2D                             OutputRange;                                       // 0xA40(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAudioFrequencySlider* GetDefaultObj();

};

}

