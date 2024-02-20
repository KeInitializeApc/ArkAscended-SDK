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
	float                                        MeterValue;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        PeakValue;                                         // 0x4(0x4)(Edit, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        ClippingValue;                                     // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x4C8 (0x4D0 - 0x8)
// ScriptStruct AudioWidgets.AudioMeterStyle
struct FAudioMeterStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_454[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           MeterValueImage;                                   // 0x10(0xD0)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImage;                                   // 0xE0(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterBackgroundImage;                              // 0x1B0(0xD0)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterValueBackgroundImage;                         // 0x280(0xD0)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterPeakImage;                                    // 0x350(0xD0)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector2D                             MeterSize;                                         // 0x420(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector2D                             MeterPadding;                                      // 0x430(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        MeterValuePadding;                                 // 0x440(0x4)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        PeakValueWidth;                                    // 0x444(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FVector2D                             ValueRangeDb;                                      // 0x448(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bShowScale;                                        // 0x458(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	bool                                         bScaleSide;                                        // 0x459(0x1)(ExportObject, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_464[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ScaleHashOffset;                                   // 0x45C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        ScaleHashWidth;                                    // 0x460(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        ScaleHashHeight;                                   // 0x464(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int32                                        DecibelsPerHash;                                   // 0x468(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_466[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x470(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_467[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct AudioWidgets.AudioTextBoxStyle
struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_46A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundImage;                                   // 0x10(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FSlateColor                           BackgroundColor;                                   // 0xE0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_46C[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x748 (0x750 - 0x8)
// ScriptStruct AudioWidgets.AudioSliderStyle
struct FAudioSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_46E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          SliderStyle;                                       // 0x10(0x500)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance)
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x510(0x100)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           WidgetBackgroundImage;                             // 0x610(0xD0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           SliderBackgroundColor;                             // 0x6E0(0x14)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_472[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             SliderBackgroundSize;                              // 0x6F8(0x10)(Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LabelPadding;                                      // 0x708(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           SliderBarColor;                                    // 0x70C(0x14)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FSlateColor                           SliderThumbColor;                                  // 0x720(0x14)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           WidgetBackgroundColor;                             // 0x734(0x14)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_474[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x158 (0x160 - 0x8)
// ScriptStruct AudioWidgets.AudioRadialSliderStyle
struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_477[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x10(0x100)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           CenterBackgroundColor;                             // 0x110(0x14)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSlateColor                           SliderBarColor;                                    // 0x124(0x14)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FSlateColor                           SliderProgressColor;                               // 0x138(0x14)(OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LabelPadding;                                      // 0x14C(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultSliderRadius;                               // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_478[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

}


