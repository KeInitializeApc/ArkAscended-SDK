#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
struct UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(Edit, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                OutConstantQ;                                      // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
struct UConstantQNRT_GetChannelConstantQAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(Edit, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                OutConstantQ;                                      // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
struct ULoudnessNRT_GetNormalizedLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
struct ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(Edit, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
struct ULoudnessNRT_GetLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
struct ULoudnessNRT_GetChannelLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(Edit, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
struct UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params
{
public:
	float                                        InStartSeconds;                                    // 0x0(0x4)(ConstParm, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InEndSeconds;                                      // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x8(0x4)(Edit, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_180B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutOnsetTimestamps;                                // 0x10(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                OutOnsetStrengths;                                 // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
struct UOnsetNRT_GetChannelOnsetsBetweenTimes_Params
{
public:
	float                                        InStartSeconds;                                    // 0x0(0x4)(ConstParm, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        InEndSeconds;                                      // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x8(0x4)(Edit, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_180F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutOnsetTimestamps;                                // 0x10(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                OutOnsetStrengths;                                 // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
struct USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
struct USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Params
{
public:
	float                                        InSampleRate;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1814[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutCenterFrequencies;                              // 0x8(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

}
}


