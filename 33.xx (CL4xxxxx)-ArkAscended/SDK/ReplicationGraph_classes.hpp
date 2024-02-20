#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x548 (0x570 - 0x28)
// Class ReplicationGraph.ReplicationGraph
class UReplicationGraph : public UReplicationDriver
{
public:
	class UClass*                                ReplicationConnectionManagerClass;                 // 0x28(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UNetDriver*                            NetDriver;                                         // 0x30(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	TArray<class UNetReplicationGraphConnection*> Connections;                                       // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class UNetReplicationGraphConnection*> PendingConnections;                                // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_130[0x40];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UReplicationGraphNode*>         GlobalGraphNodes;                                  // 0x98(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class UReplicationGraphNode*>         PrepareForReplicationNodes;                        // 0xA8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_131[0x4B8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraph* GetDefaultObj();

};

// 0x30 (0x5A0 - 0x570)
// Class ReplicationGraph.BasicReplicationGraph
class UBasicReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_GridSpatialization2D* GridNode;                                          // 0x570(0x8)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x578(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;                   // 0x580(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        ActorsWithoutNetConnection;                        // 0x590(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBasicReplicationGraph* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ReplicationGraph.ReplicationGraphNode
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>         AllChildNodes;                                     // 0x28(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_132[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode* GetDefaultObj();

};

// 0xD0 (0x120 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_ActorList
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	uint8                                        Pad_133[0xD0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ActorList* GetDefaultObj();

};

// 0x118 (0x168 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
	uint8                                        Pad_134[0x118];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ActorListFrequencyBuckets* GetDefaultObj();

};

// 0x30 (0x150 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_135[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_DynamicSpatialFrequency* GetDefaultObj();

};

// 0x138 (0x258 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_136[0x138];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ConnectionDormancyNode* GetDefaultObj();

};

// 0x10 (0x130 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_137[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_DormancyNode* GetDefaultObj();

};

// 0x50 (0x170 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_GridCell
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_138[0x40];                                     // Fixing Size After Last Property  > TateDumper <
	class UReplicationGraphNode*                 DynamicNode;                                       // 0x160(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UReplicationGraphNode_DormancyNode*    DormancyNode;                                      // 0x168(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UReplicationGraphNode_GridCell* GetDefaultObj();

};

// 0x220 (0x270 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	uint8                                        Pad_139[0x220];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_GridSpatialization2D* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                 ChildNode;                                         // 0x50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_13A[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_AlwaysRelevant* GetDefaultObj();

};

// 0x80 (0x1A0 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_13B[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAlwaysRelevantActorInfo>      PastRelevantActors;                                // 0x140(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_13C[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_AlwaysRelevant_ForConnection* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>             TearOffActors;                                     // 0x50(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_13D[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_TearOff_ForConnection* GetDefaultObj();

};

// 0x348 (0x370 - 0x28)
// Class ReplicationGraph.NetReplicationGraphConnection
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x28(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_13E[0x144];                                    // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class AReplicationGraphDebugActor> DebugActor;                                        // 0x174(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_13F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FLastLocationGatherInfo>       LastGatherLocations;                               // 0x180(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_140[0xA8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UReplicationGraphNode*>         ConnectionGraphNodes;                              // 0x238(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                       // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_141[0x120];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNetReplicationGraphConnection* GetDefaultObj();

};

// 0x10 (0x4D8 - 0x4C8)
// Class ReplicationGraph.ReplicationGraphDebugActor
class AReplicationGraphDebugActor : public AActor
{
public:
	class UReplicationGraph*                     ReplicationGraph;                                  // 0x4C8(0x8)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UNetReplicationGraphConnection*        ConnectionManager;                                 // 0x4D0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AReplicationGraphDebugActor* GetDefaultObj();

	void ServerStopDebugging();
	void ServerStartDebugging();
	int32 ServerSetPeriodFrameForClass(class UClass* Class);
	float ServerSetCullDistanceForClass(class UClass* Class);
	void ServerSetConditionalActorBreakpoint(class AActor** Actor);
	void ServerPrintCullDistances();
	class FString ServerPrintAllActorInfo();
	void ServerCellInfo();
	TArray<class AActor*> ClientCellInfo();
};

}


