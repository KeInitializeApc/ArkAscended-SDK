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
// Function NinjaLiveInterface.NinjaLiveInterface_C.LiveFluidParams
struct INinjaLiveInterface_C_LiveFluidParams_Params
{
public:
	double                                       BrushSize;                                         // 0x0(0x8)(ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function NinjaLiveInterface.NinjaLiveInterface_C.LiveActivation
struct INinjaLiveInterface_C_LiveActivation_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       FadeTimeOfBrush;                                   // 0x8(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	double                                       FadeTimeOfCanvas;                                  // 0x10(0x8)(Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

}
}


