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
	bool                                         Return;                                            // 0x0(0x1)(Edit, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues
struct IScorchedEarthDayCycle_Interface_C_GetElectricalStormValues_Params
{
public:
	TArray<class AActor*>                        LocationRegions;                                   // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        CurrentRegion;                                     // 0x10(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_338[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       Radius;                                            // 0x18(0x8)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
};

}
}


