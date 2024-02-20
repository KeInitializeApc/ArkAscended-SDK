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

// 0x1B0 (0x1B0 - 0x0)
// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
struct UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params
{
public:
	struct FChaosPhysicsCollisionInfo            PhysicsCollision;                                  // 0x0(0xC0)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FHitResult                            ReturnValue;                                       // 0xC0(0xF0)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
struct AChaosSolverActor_SetSolverActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

}
}


