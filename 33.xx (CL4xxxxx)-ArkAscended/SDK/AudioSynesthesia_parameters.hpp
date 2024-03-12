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
	float                                        InSeconds;                                         // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                OutConstantQ;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
struct UConstantQNRT_GetChannelConstantQAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                OutConstantQ;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
struct ULoudnessNRT_GetNormalizedLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
struct ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
struct ULoudnessNRT_GetLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
struct ULoudnessNRT_GetChannelLoudnessAtTime_Params
{
public:
	float                                        InSeconds;                                         // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x4(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OutLoudness;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
struct UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params
{
public:
	float                                        InStartSeconds;                                    // 0x0(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InEndSeconds;                                      // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x8(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CB0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutOnsetTimestamps;                                // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                OutOnsetStrengths;                                 // 0x20(0x10)(Edit, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
struct UOnsetNRT_GetChannelOnsetsBetweenTimes_Params
{
public:
	float                                        InStartSeconds;                                    // 0x0(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        InEndSeconds;                                      // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InChannel;                                         // 0x8(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CB5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutOnsetTimestamps;                                // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<float>                                OutOnsetStrengths;                                 // 0x20(0x10)(Edit, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
struct USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
struct USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Params
{
public:
	float                                        InSampleRate;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CC8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                OutCenterFrequencies;                              // 0x8(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


