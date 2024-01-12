#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAudioRadialSliderLayout : uint8
{
	Layout_LabelTop                = 0,
	Layout_LabelCenter             = 1,
	Layout_LabelBottom             = 2,
	Layout_MAX                     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct AudioWidgets.MeterChannelInfo
struct FMeterChannelInfo
{
public:
	float                                        MeterValue;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        PeakValue;                                         // 0x4(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        ClippingValue;                                     // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x4C8 (0x4D0 - 0x8)
// ScriptStruct AudioWidgets.AudioMeterStyle
struct FAudioMeterStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_26A4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           MeterValueImage;                                   // 0x10(0xD0)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImage;                                   // 0xE0(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterBackgroundImage;                              // 0x1B0(0xD0)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterValueBackgroundImage;                         // 0x280(0xD0)(ConstParm, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterPeakImage;                                    // 0x350(0xD0)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             MeterSize;                                         // 0x420(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             MeterPadding;                                      // 0x430(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MeterValuePadding;                                 // 0x440(0x4)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        PeakValueWidth;                                    // 0x444(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             ValueRangeDb;                                      // 0x448(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bShowScale;                                        // 0x458(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bScaleSide;                                        // 0x459(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_26A5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ScaleHashOffset;                                   // 0x45C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        ScaleHashWidth;                                    // 0x460(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        ScaleHashHeight;                                   // 0x464(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        DecibelsPerHash;                                   // 0x468(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_26A6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x470(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_26A7[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct AudioWidgets.AudioTextBoxStyle
struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_26A8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundImage;                                   // 0x10(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           BackgroundColor;                                   // 0xE0(0x14)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_26A9[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x748 (0x750 - 0x8)
// ScriptStruct AudioWidgets.AudioSliderStyle
struct FAudioSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_26AA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          SliderStyle;                                       // 0x10(0x500)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x510(0x100)(ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           WidgetBackgroundImage;                             // 0x610(0xD0)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           SliderBackgroundColor;                             // 0x6E0(0x14)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_26AB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             SliderBackgroundSize;                              // 0x6F8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LabelPadding;                                      // 0x708(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           SliderBarColor;                                    // 0x70C(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           SliderThumbColor;                                  // 0x720(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           WidgetBackgroundColor;                             // 0x734(0x14)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_26AC[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x158 (0x160 - 0x8)
// ScriptStruct AudioWidgets.AudioRadialSliderStyle
struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_26AD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x10(0x100)(ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           CenterBackgroundColor;                             // 0x110(0x14)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           SliderBarColor;                                    // 0x124(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           SliderProgressColor;                               // 0x138(0x14)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LabelPadding;                                      // 0x14C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DefaultSliderRadius;                               // 0x150(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_26AE[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

}


