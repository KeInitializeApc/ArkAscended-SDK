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

// 0x10 (0x10 - 0x0)
// Function CableComponent.CableComponent.SetAttachEndToComponent
struct UCableComponent_SetAttachEndToComponent_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  SocketName;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function CableComponent.CableComponent.SetAttachEndTo
struct UCableComponent_SetAttachEndTo_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FName                                  ComponentProperty;                                 // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FName                                  SocketName;                                        // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CableComponent.CableComponent.GetCableParticleLocations
struct UCableComponent_GetCableParticleLocations_Params
{
public:
	TArray<struct FVector>                       Locations;                                         // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function CableComponent.CableComponent.GetAttachedComponent
struct UCableComponent_GetAttachedComponent_Params
{
public:
	class USceneComponent*                       ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function CableComponent.CableComponent.GetAttachedActor
struct UCableComponent_GetAttachedActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}

