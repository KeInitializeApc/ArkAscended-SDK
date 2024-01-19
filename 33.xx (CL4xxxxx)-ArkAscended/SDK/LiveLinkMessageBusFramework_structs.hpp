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
	struct FGuid                                 PollRequest;                                       // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LiveLinkVersion;                                   // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
struct FLiveLinkPongMessage
{
public:
	class FString                                ProviderName;                                      // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FString                                MachineName;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 PollRequest;                                       // 0x20(0x10)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        LiveLinkVersion;                                   // 0x30(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_34A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CreationPlatformTime;                              // 0x38(0x8)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
struct FLiveLinkConnectMessage
{
public:
	int32                                        LiveLinkVersion;                                   // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
struct FLiveLinkHeartbeatMessage
{
public:
	uint8                                        Pad_34AA[0x1];                                     // Fixing Size Of Struct > TateDumper <
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
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x0(0x20)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  SubjectName;                                       // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
struct FLiveLinkSubjectFrameMessage
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst)
	TArray<struct FTransform>                    Transforms;                                        // 0x8(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLiveLinkCurveElement>         Curves;                                            // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, EditConst)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x28(0x60)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       Time;                                              // 0x88(0x8)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

}


