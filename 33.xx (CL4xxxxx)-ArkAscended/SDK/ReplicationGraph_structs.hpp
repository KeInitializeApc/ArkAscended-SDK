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
	float                                        DistancePriorityScale;                             // 0x0(0x4)(Edit, ExportObject, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        StarvationPriorityScale;                           // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AccumulatedNetPriorityBias;                        // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        NetCriticalPriority;                               // 0xC(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       ReplicationPeriodFrame;                            // 0x10(0x2)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       FastPath_ReplicationPeriodFrame;                   // 0x12(0x2)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       ActorChannelFrameTimeout;                          // 0x14(0x2)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNetCritical;                                      // 0x16(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14E[0x51];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CullDistance;                                      // 0x68(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CullDistanceSquared;                               // 0x6C(0x4)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
struct FConnectionAlwaysRelevantNodePair
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
struct FAlwaysRelevantActorInfo
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(Edit, ConstParm, Net, Config, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                LastViewer;                                        // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                LastViewTarget;                                    // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReplicationGraph.TearOffActorInfo
struct FTearOffActorInfo
{
public:
	uint8                                        Pad_151[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                Actor;                                             // 0x8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	uint8                                        Pad_152[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReplicationGraph.LastLocationGatherInfo
struct FLastLocationGatherInfo
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(Edit, ConstParm, Net, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LastLocation;                                      // 0x8(0x18)(ExportObject, BlueprintReadOnly, Net, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LastOutOfRangeLocationCheck;                       // 0x20(0x18)(Edit, ExportObject, Net, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


