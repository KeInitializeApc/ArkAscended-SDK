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
// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
struct ULayersBlueprintLibrary_RemoveActorFromLayer_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FActorLayer                           Layer;                                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
};

// 0x20 (0x20 - 0x0)
// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
struct ULayersBlueprintLibrary_GetActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FActorLayer                           ActorLayer;                                        // 0x8(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config)
	TArray<class AActor*>                        ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
struct ULayersBlueprintLibrary_AddActorToLayer_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FActorLayer                           Layer;                                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
};

}
}


