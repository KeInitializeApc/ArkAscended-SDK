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

// 0x30 (0x30 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
struct AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params
{
public:
	struct FVector                               InViewLocation;                                    // 0x0(0x18)(BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               InViewDirection;                                   // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
struct AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
struct AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	bool                                         bSelectInEditor;                                   // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F28[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
struct AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnable;                                           // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F2A[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
struct AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params
{
public:
	int32                                        ExtensionId;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        HandlerId;                                         // 0x4(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
struct AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        HandlerId;                                         // 0x4(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
struct AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params
{
public:
	struct FGameplayDebuggerDataPackRPCParams    Params;                                            // 0x0(0x30)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
};

}
}


