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
	float                                        InSeconds;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<float>                                OutConstantQ;                                      // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
struct UConstantQNRT_GetChannelConstantQAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<float>                                OutConstantQ;                                      // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
struct ULoudnessNRT_GetNormalizedLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
struct ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
struct ULoudnessNRT_GetLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
struct ULoudnessNRT_GetChannelLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
struct UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params
{
public:
	float                                        InStartSeconds;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        InEndSeconds;                                      // 0x4(0x4)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_267F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutOnsetTimestamps;                                // 0x10(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<float>                                OutOnsetStrengths;                                 // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
struct UOnsetNRT_GetChannelOnsetsBetweenTimes_Params
{
public:
	float                                        InStartSeconds;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        InEndSeconds;                                      // 0x4(0x4)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2682[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutOnsetTimestamps;                                // 0x10(0x10)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<float>                                OutOnsetStrengths;                                 // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
struct USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
struct USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Params
{
public:
	float                                        InSampleRate;                                      // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2687[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutCenterFrequencies;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


