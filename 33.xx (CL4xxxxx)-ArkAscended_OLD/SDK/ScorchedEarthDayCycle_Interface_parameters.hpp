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
	bool                                         Return;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues
struct IScorchedEarthDayCycle_Interface_C_GetElectricalStormValues_Params
{
public:
	TArray<class AActor*>                        LocationRegions;                                   // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        CurrentRegion;                                     // 0x10(0x4)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B2C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Radius;                                            // 0x18(0x8)(EditFixedSize, Parm, Config, EditConst, SubobjectReference)
};

}
}


