#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESoundwaveSampleRateSettings : uint8
{
	Max                            = 0,
	High                           = 1,
	Medium                         = 2,
	Low                            = 3,
	Min                            = 4,
	MatchDevice_DEPRECATED         = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
struct FPlatformRuntimeAudioCompressionOverrides
{
public:
	bool                                         bOverrideCompressionTimes;                         // 0x0(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_241F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DurationThreshold;                                 // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxNumRandomBranches;                              // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SoundCueQualityIndex;                              // 0xC(0x4)(BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


