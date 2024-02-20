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

// 0x8 (0x8 - 0x0)
// Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing
struct UAudioAnalyzer_StopAnalyzing_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing
struct UAudioAnalyzer_StartAnalyzing_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UAudioBus*                             AudioBusToAnalyze;                                 // 0x8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

}
}


