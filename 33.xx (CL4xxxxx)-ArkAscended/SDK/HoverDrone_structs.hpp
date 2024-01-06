#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoverDroneDebug : uint8
{
	Off                            = 0,
	Position                       = 1,
	Velocity                       = 4,
	RotationalVelocity             = 8,
	Altitude                       = 16,
	ForceFacing                    = 32,
	FOV                            = 64,
	All                            = 125,
	EHoverDroneDebug_MAX           = 126,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct HoverDrone.DroneSpeedParameters
struct FDroneSpeedParameters
{
public:
	float                                        LinearAccelScale;                                  // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LinearDecelScale;                                  // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotAccelScale;                                     // 0x8(0x4)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        RotDecelScale;                                     // 0xC(0x4)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxLinearSpeedScale;                               // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxRotSpeedScale;                                  // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        HoverThrustScale;                                  // 0x18(0x4)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

}


