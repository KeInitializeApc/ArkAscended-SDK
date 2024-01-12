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
	class UClass*                                ReplicationConnectionManagerClass;                 // 0x28(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UNetDriver*                            NetDriver;                                         // 0x30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	TArray<class UNetReplicationGraphConnection*> Connections;                                       // 0x38(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UNetReplicationGraphConnection*> PendingConnections;                                // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A8[0x40];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UReplicationGraphNode*>         GlobalGraphNodes;                                  // 0x98(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UReplicationGraphNode*>         PrepareForReplicationNodes;                        // 0xA8(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A9[0x4B8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraph* GetDefaultObj();

};

// 0x30 (0x5A0 - 0x570)
// Class ReplicationGraph.BasicReplicationGraph
class UBasicReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_GridSpatialization2D* GridNode;                                          // 0x570(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x578(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;                   // 0x580(0x10)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        ActorsWithoutNetConnection;                        // 0x590(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBasicReplicationGraph* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ReplicationGraph.ReplicationGraphNode
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>         AllChildNodes;                                     // 0x28(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1AE[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode* GetDefaultObj();

};

// 0xD0 (0x120 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_ActorList
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	uint8                                        Pad_1AF[0xD0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ActorList* GetDefaultObj();

};

// 0x118 (0x168 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
	uint8                                        Pad_1B0[0x118];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ActorListFrequencyBuckets* GetDefaultObj();

};

// 0x30 (0x150 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1B3[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_DynamicSpatialFrequency* GetDefaultObj();

};

// 0x138 (0x258 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1B4[0x138];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_ConnectionDormancyNode* GetDefaultObj();

};

// 0x10 (0x130 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1B6[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_DormancyNode* GetDefaultObj();

};

// 0x50 (0x170 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_GridCell
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1B7[0x40];                                     // Fixing Size After Last Property  > TateDumper <
	class UReplicationGraphNode*                 DynamicNode;                                       // 0x160(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UReplicationGraphNode_DormancyNode*    DormancyNode;                                      // 0x168(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UReplicationGraphNode_GridCell* GetDefaultObj();

};

// 0x220 (0x270 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:
	uint8                                        Pad_1B8[0x220];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_GridSpatialization2D* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                 ChildNode;                                         // 0x50(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BA[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_AlwaysRelevant* GetDefaultObj();

};

// 0x80 (0x1A0 - 0x120)
// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1BB[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAlwaysRelevantActorInfo>      PastRelevantActors;                                // 0x140(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BC[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_AlwaysRelevant_ForConnection* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>             TearOffActors;                                     // 0x50(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BD[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UReplicationGraphNode_TearOff_ForConnection* GetDefaultObj();

};

// 0x348 (0x370 - 0x28)
// Class ReplicationGraph.NetReplicationGraphConnection
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1BE[0x144];                                    // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class AReplicationGraphDebugActor> DebugActor;                                        // 0x174(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FLastLocationGatherInfo>       LastGatherLocations;                               // 0x180(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C0[0xA8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UReplicationGraphNode*>         ConnectionGraphNodes;                              // 0x238(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                       // 0x248(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C1[0x120];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNetReplicationGraphConnection* GetDefaultObj();

};

// 0x10 (0x4D8 - 0x4C8)
// Class ReplicationGraph.ReplicationGraphDebugActor
class AReplicationGraphDebugActor : public AActor
{
public:
	class UReplicationGraph*                     ReplicationGraph;                                  // 0x4C8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
	class UNetReplicationGraphConnection*        ConnectionManager;                                 // 0x4D0(0x8)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AReplicationGraphDebugActor* GetDefaultObj();

	void ServerStopDebugging();
	void ServerStartDebugging();
	void ServerSetPeriodFrameForClass(class UClass* Class, int32 PeriodFrame);
	float ServerSetCullDistanceForClass(class UClass* Class);
	void ServerSetConditionalActorBreakpoint(class AActor** Actor);
	void ServerPrintCullDistances();
	void ServerPrintAllActorInfo(const class FString& Str);
	void ServerCellInfo();
	TArray<class AActor*> ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent);
};

}


