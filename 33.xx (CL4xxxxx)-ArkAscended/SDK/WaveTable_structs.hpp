#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWaveTableResolution : uint8
{
	None                           = 0,
	Res_8                          = 3,
	Res_16                         = 4,
	Res_32                         = 5,
	Res_64                         = 6,
	Res_128                        = 7,
	Res_256                        = 8,
	Res_512                        = 9,
	Res_1024                       = 10,
	Res_2048                       = 11,
	Res_4096                       = 12,
	Res_Max                        = 12,
	Maximum                        = 13,
	EWaveTableResolution_MAX       = 14,
};

enum class EWaveTableCurve : uint8
{
	Linear                         = 0,
	Linear_Inv                     = 1,
	Exp                            = 2,
	Exp_Inverse                    = 3,
	Log                            = 4,
	Sin                            = 5,
	Sin_Full                       = 6,
	SCurve                         = 7,
	Shared                         = 8,
	Custom                         = 9,
	File                           = 10,
	Count                          = 11,
	EWaveTableCurve_MAX            = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// ScriptStruct WaveTable.WaveTableTransform
struct FWaveTableTransform
{
public:
	enum class EWaveTableCurve                   Curve;                                             // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config)
	uint8                                        Pad_17E8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scalar;                                            // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRichCurve                            CurveCustom;                                       // 0x8(0x80)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCurveFloat*                           CurveShared;                                       // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                WaveTable;                                         // 0x90(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	float                                        FinalValue;                                        // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17EA[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct WaveTable.WaveTableBankEntry
struct FWaveTableBankEntry
{
public:
	struct FWaveTableTransform                   Transform;                                         // 0x0(0xA8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WaveTable.WaveTableSettings
struct FWaveTableSettings
{
public:
	struct FFilePath                             FilePath;                                          // 0x0(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        ChannelIndex;                                      // 0x10(0x4)(ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	float                                        Phase;                                             // 0x14(0x4)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Top;                                               // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        Tail;                                              // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FadeIn;                                            // 0x20(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	float                                        FadeOut;                                           // 0x24(0x4)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	bool                                         bNormalize;                                        // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRemoveOffset;                                     // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_17EC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                SourcePCMData;                                     // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


