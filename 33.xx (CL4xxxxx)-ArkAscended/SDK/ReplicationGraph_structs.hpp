#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct ReplicationGraph.ClassReplicationInfo
struct FClassReplicationInfo
{
public:
	float                                        DistancePriorityScale;                             // 0x0(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StarvationPriorityScale;                           // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AccumulatedNetPriorityBias;                        // 0x8(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NetCriticalPriority;                               // 0xC(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       ReplicationPeriodFrame;                            // 0x10(0x2)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       FastPath_ReplicationPeriodFrame;                   // 0x12(0x2)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       ActorChannelFrameTimeout;                          // 0x14(0x2)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNetCritical;                                      // 0x16(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C9[0x51];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CullDistance;                                      // 0x68(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CullDistanceSquared;                               // 0x6C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
struct FConnectionAlwaysRelevantNodePair
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                              // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
struct FAlwaysRelevantActorInfo
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                LastViewer;                                        // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                LastViewTarget;                                    // 0x10(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReplicationGraph.TearOffActorInfo
struct FTearOffActorInfo
{
public:
	uint8                                        Pad_1CA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                Actor;                                             // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	uint8                                        Pad_1CB[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReplicationGraph.LastLocationGatherInfo
struct FLastLocationGatherInfo
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LastLocation;                                      // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LastOutOfRangeLocationCheck;                       // 0x20(0x18)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


