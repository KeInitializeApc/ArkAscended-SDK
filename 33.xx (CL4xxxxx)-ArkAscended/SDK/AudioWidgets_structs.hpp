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
	float                                        MeterValue;                                        // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        PeakValue;                                         // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        ClippingValue;                                     // 0x8(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x4C8 (0x4D0 - 0x8)
// ScriptStruct AudioWidgets.AudioMeterStyle
struct FAudioMeterStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_25AF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           MeterValueImage;                                   // 0x10(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           BackgroundImage;                                   // 0xE0(0xD0)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterBackgroundImage;                              // 0x1B0(0xD0)(Edit, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterValueBackgroundImage;                         // 0x280(0xD0)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateBrush                           MeterPeakImage;                                    // 0x350(0xD0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             MeterSize;                                         // 0x420(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             MeterPadding;                                      // 0x430(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        MeterValuePadding;                                 // 0x440(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        PeakValueWidth;                                    // 0x444(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector2D                             ValueRangeDb;                                      // 0x448(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bShowScale;                                        // 0x458(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bScaleSide;                                        // 0x459(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_25B3[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ScaleHashOffset;                                   // 0x45C(0x4)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        ScaleHashWidth;                                    // 0x460(0x4)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        ScaleHashHeight;                                   // 0x464(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        DecibelsPerHash;                                   // 0x468(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_25B4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x470(0x58)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_25B5[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct AudioWidgets.AudioTextBoxStyle
struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_25B8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           BackgroundImage;                                   // 0x10(0xD0)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FSlateColor                           BackgroundColor;                                   // 0xE0(0x14)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_25BA[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x748 (0x750 - 0x8)
// ScriptStruct AudioWidgets.AudioSliderStyle
struct FAudioSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_25BB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSliderStyle                          SliderStyle;                                       // 0x10(0x500)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance)
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x510(0x100)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateBrush                           WidgetBackgroundImage;                             // 0x610(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           SliderBackgroundColor;                             // 0x6E0(0x14)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25BC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             SliderBackgroundSize;                              // 0x6F8(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LabelPadding;                                      // 0x708(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           SliderBarColor;                                    // 0x70C(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           SliderThumbColor;                                  // 0x720(0x14)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           WidgetBackgroundColor;                             // 0x734(0x14)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25BD[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x158 (0x160 - 0x8)
// ScriptStruct AudioWidgets.AudioRadialSliderStyle
struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_25BE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAudioTextBoxStyle                    TextBoxStyle;                                      // 0x10(0x100)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           CenterBackgroundColor;                             // 0x110(0x14)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSlateColor                           SliderBarColor;                                    // 0x124(0x14)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance)
	struct FSlateColor                           SliderProgressColor;                               // 0x138(0x14)(ConstParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LabelPadding;                                      // 0x14C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        DefaultSliderRadius;                               // 0x150(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25BF[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

}


