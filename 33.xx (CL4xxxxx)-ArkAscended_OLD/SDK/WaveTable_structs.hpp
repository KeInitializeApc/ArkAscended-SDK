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
	enum class EWaveTableCurve                   Curve;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_1EF1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scalar;                                            // 0x4(0x4)(Edit, BlueprintVisible, InstancedReference, SubobjectReference)
	struct FRichCurve                            CurveCustom;                                       // 0x8(0x80)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UCurveFloat*                           CurveShared;                                       // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                WaveTable;                                         // 0x90(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	float                                        FinalValue;                                        // 0xA0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EF3[0x4];                                     // Fixing Size Of Struct > TateDumper <
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
	struct FFilePath                             FilePath;                                          // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ChannelIndex;                                      // 0x10(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        Phase;                                             // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, InstancedReference, SubobjectReference)
	float                                        Top;                                               // 0x18(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	float                                        Tail;                                              // 0x1C(0x4)(Edit, ExportObject, BlueprintReadOnly, InstancedReference, SubobjectReference)
	float                                        FadeIn;                                            // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	float                                        FadeOut;                                           // 0x24(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	bool                                         bNormalize;                                        // 0x28(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bRemoveOffset;                                     // 0x29(0x1)(Edit, BlueprintReadOnly, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F06[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                SourcePCMData;                                     // 0x30(0x10)(Edit, ExportObject, InstancedReference, SubobjectReference)
};

}


