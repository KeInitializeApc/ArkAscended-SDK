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

// 0x4 (0x4 - 0x0)
// Function HoverDrone.HoverDroneMovementComponent.SetCurrentFOV
struct UHoverDroneMovementComponent_SetCurrentFOV_Params
{
public:
	float                                        NewFOV;                                            // 0x0(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function HoverDrone.HoverDroneMovementComponent.ForceFacing
struct UHoverDroneMovementComponent_ForceFacing_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// Function HoverDrone.HoverDroneMovementComponent.AddVelocity
struct UHoverDroneMovementComponent_AddVelocity_Params
{
public:
	struct FVector                               VelocityImpulse;                                   // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function HoverDrone.HoverDroneMovementComponent.AddRotationalVelocity
struct UHoverDroneMovementComponent_AddRotationalVelocity_Params
{
public:
	struct FRotator                              RotationalVel;                                     // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoverDrone.HoverDronePawn.TurnAccel
struct AHoverDronePawn_TurnAccel_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoverDrone.HoverDronePawn.SetDroneSpeedIndex
struct AHoverDronePawn_SetDroneSpeedIndex_Params
{
public:
	int32                                        SpeedIndex;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoverDrone.HoverDronePawn.SetAllowSpeedChange
struct AHoverDronePawn_SetAllowSpeedChange_Params
{
public:
	bool                                         bOnOff;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoverDrone.HoverDronePawn.MoveUp
struct AHoverDronePawn_MoveUp_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoverDrone.HoverDronePawn.LookUpAccel
struct AHoverDronePawn_LookUpAccel_Params
{
public:
	float                                        Val;                                               // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoverDrone.HoverDronePawn.IsMaintainingConstantAltitude
struct AHoverDronePawn_IsMaintainingConstantAltitude_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function HoverDrone.HoverDronePawn.GetTiltedDroneRotation
struct AHoverDronePawn_GetTiltedDroneRotation_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_17DD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoverDrone.HoverDronePawn.GetDroneSpeedIndex
struct AHoverDronePawn_GetDroneSpeedIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoverDrone.HoverDronePawn.GetAltitude
struct AHoverDronePawn_GetAltitude_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


