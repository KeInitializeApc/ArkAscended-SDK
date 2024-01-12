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
// Function DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
struct UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Params
{
public:
	class UDataflow*                             Dataflow;                                          // 0x0(0x8)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	class FName                                  TerminalNodeName;                                  // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UObject*                               ResultAsset;                                       // 0x10(0x8)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


