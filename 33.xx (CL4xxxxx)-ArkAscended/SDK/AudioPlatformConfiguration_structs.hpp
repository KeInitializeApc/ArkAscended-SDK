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
	bool                                         bOverrideCompressionTimes;                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3066[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DurationThreshold;                                 // 0x4(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MaxNumRandomBranches;                              // 0x8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        SoundCueQualityIndex;                              // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}


