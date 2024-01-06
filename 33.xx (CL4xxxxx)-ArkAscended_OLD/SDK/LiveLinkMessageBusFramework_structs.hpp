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

// 0x14 (0x14 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
struct FLiveLinkPingMessage
{
public:
	struct FGuid                                 PollRequest;                                       // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LiveLinkVersion;                                   // 0x10(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
struct FLiveLinkPongMessage
{
public:
	class FString                                ProviderName;                                      // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                MachineName;                                       // 0x10(0x10)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 PollRequest;                                       // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LiveLinkVersion;                                   // 0x30(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2756[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CreationPlatformTime;                              // 0x38(0x8)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
struct FLiveLinkConnectMessage
{
public:
	int32                                        LiveLinkVersion;                                   // 0x0(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
struct FLiveLinkHeartbeatMessage
{
public:
	uint8                                        Pad_2759[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
struct FLiveLinkClearSubject
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
struct FLiveLinkSubjectDataMessage
{
public:
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x0(0x20)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  SubjectName;                                       // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
struct FLiveLinkSubjectFrameMessage
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
	TArray<struct FTransform>                    Transforms;                                        // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<struct FLiveLinkCurveElement>         Curves;                                            // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, EditConst)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x28(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	double                                       Time;                                              // 0x88(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}


