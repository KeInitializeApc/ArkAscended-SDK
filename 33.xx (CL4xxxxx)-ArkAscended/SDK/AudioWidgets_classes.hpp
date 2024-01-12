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
	FDelegateProperty_                           MeterChannelInfoDelegate;                          // 0x200(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FAudioMeterStyle                      WidgetStyle;                                       // 0x210(0x4D0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x6E0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_263F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          BackgroundColor;                                   // 0x6E4(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterBackgroundColor;                              // 0x6F4(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterValueColor;                                   // 0x704(0x10)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterPeakColor;                                    // 0x714(0x10)(Edit, ExportObject, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterClippingColor;                                // 0x724(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterScaleColor;                                   // 0x734(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MeterScaleLabelColor;                              // 0x744(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2640[0x1C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioMeter* GetDefaultObj();

	struct FLinearColor SetMeterValueColor();
	struct FLinearColor SetMeterScaleLabelColor();
	struct FLinearColor SetMeterScaleColor();
	struct FLinearColor SetMeterPeakColor();
	struct FLinearColor SetMeterClippingColor();
	TArray<struct FMeterChannelInfo> SetMeterChannelInfo();
	struct FLinearColor SetMeterBackgroundColor();
	struct FLinearColor SetBackgroundColor();
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo();
};

// 0x220 (0x410 - 0x1F0)
// Class AudioWidgets.AudioRadialSlider
class UAudioRadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x1F0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1F4(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class EAudioRadialSliderLayout          WidgetLayout;                                      // 0x204(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_266B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CenterBackgroundColor;                             // 0x208(0x10)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderProgressColor;                               // 0x218(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderBarColor;                                    // 0x228(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FVector2D                             HandStartEndRatio;                                 // 0x238(0x10)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class FText                                  UnitsText;                                         // 0x248(0x18)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x260(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowLabelOnlyOnHover;                              // 0x270(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowUnitsText;                                     // 0x271(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsUnitsTextReadOnly;                               // 0x272(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsValueTextReadOnly;                               // 0x273(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        SliderThickness;                                   // 0x274(0x4)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             OutputRange;                                       // 0x278(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x288(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_266F[0x178];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioRadialSlider* GetDefaultObj();

	void SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout);
	void SetValueTextReadOnly(bool* bIsReadOnly);
	void SetUnitsTextReadOnly(bool* bIsReadOnly);
	void SetUnitsText(class FText Units);
	void SetTextLabelBackgroundColor(struct FSlateColor* InColor);
	void SetSliderThickness(float InThickness);
	struct FLinearColor SetSliderProgressColor();
	struct FLinearColor SetSliderBarColor();
	void SetShowUnitsText(bool bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
	void SetOutputRange(const struct FVector2D& InOutputRange);
	void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);
	struct FLinearColor SetCenterBackgroundColor();
	float GetSliderValue(float OutputValue);
	float GetOutputValue();
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
	uint8                                        Pad_269A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  UnitsText;                                         // 0x1F8(0x18)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x210(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           TextLabelBackgroundColorDelegate;                  // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowLabelOnlyOnHover;                              // 0x230(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ShowUnitsText;                                     // 0x231(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsUnitsTextReadOnly;                               // 0x232(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsValueTextReadOnly;                               // 0x233(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           ValueDelegate;                                     // 0x234(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SliderBackgroundColor;                             // 0x244(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           SliderBackgroundColorDelegate;                     // 0x254(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderBarColor;                                    // 0x264(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	FDelegateProperty_                           SliderBarColorDelegate;                            // 0x274(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          SliderThumbColor;                                  // 0x284(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           SliderThumbColorDelegate;                          // 0x294(0x10)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          WidgetBackgroundColor;                             // 0x2A4(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	FDelegateProperty_                           WidgetBackgroundColorDelegate;                     // 0x2B4(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	enum class EOrientation                      Orientation;                                       // 0x2C4(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_269F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_26A0[0x768];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioSliderBase* GetDefaultObj();

	struct FLinearColor SetWidgetBackgroundColor();
	void SetValueTextReadOnly(bool* bIsReadOnly);
	void SetUnitsTextReadOnly(bool* bIsReadOnly);
	void SetUnitsText(class FText Units);
	void SetTextLabelBackgroundColor(struct FSlateColor* InColor);
	struct FLinearColor SetSliderThumbColor();
	struct FLinearColor SetSliderBarColor();
	struct FLinearColor SetSliderBackgroundColor();
	void SetShowUnitsText(bool bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
	float GetSliderValue(float OutputValue);
	float GetOutputValue();
	float GetLinValue(float OutputValue);
};

// 0x10 (0xA50 - 0xA40)
// Class AudioWidgets.AudioSlider
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>            LinToOutputCurve;                                  // 0xA40(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UCurveFloat>            OutputToLinCurve;                                  // 0xA48(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

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
	struct FVector2D                             OutputRange;                                       // 0xA40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAudioFrequencySlider* GetDefaultObj();

};

}


