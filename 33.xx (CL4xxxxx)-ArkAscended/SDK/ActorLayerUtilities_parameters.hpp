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
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FActorLayer                           Layer;                                             // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
};

// 0x20 (0x20 - 0x0)
// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
struct ULayersBlueprintLibrary_GetActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FActorLayer                           ActorLayer;                                        // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config)
	TArray<class AActor*>                        ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
struct ULayersBlueprintLibrary_AddActorToLayer_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FActorLayer                           Layer;                                             // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
};

}
}


