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

// 0x1 (0x1 - 0x0)
// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetIsElectricalStorm
struct IScorchedEarthDayCycle_Interface_C_GetIsElectricalStorm_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(ConstParm, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues
struct IScorchedEarthDayCycle_Interface_C_GetElectricalStormValues_Params
{
public:
	TArray<class AActor*>                        LocationRegions;                                   // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CurrentRegion;                                     // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D36[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Radius;                                            // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


