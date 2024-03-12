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
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
struct AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor)
	int32                                        PeriodFrame;                                       // 0x8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_F0[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
struct AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor)
	float                                        CullDistance;                                      // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F2[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
struct AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
struct AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params
{
public:
	class FString                                Str;                                               // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
struct AReplicationGraphDebugActor_ClientCellInfo_Params
{
public:
	struct FVector                               CellLocation;                                      // 0x0(0x18)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector                               CellExtent;                                        // 0x18(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        Actors;                                            // 0x30(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}
}


