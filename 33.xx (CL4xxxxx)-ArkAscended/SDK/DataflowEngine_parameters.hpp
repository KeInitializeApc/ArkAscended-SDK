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
	class UDataflow*                             Dataflow;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  TerminalNodeName;                                  // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UObject*                               ResultAsset;                                       // 0x10(0x8)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


