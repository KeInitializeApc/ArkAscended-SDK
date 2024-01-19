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
// Function Sentry.SentryAttachment.InitializeWithPath
struct USentryAttachment_InitializeWithPath_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class FString                                ContentType;                                       // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Sentry.SentryAttachment.InitializeWithData
struct USentryAttachment_InitializeWithData_Params
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class FString                                ContentType;                                       // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryAttachment.GetPath
struct USentryAttachment_GetPath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryAttachment.GetFilename
struct USentryAttachment_GetFilename_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryAttachment.GetData
struct USentryAttachment_GetData_Params
{
public:
	TArray<uint8>                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryAttachment.GetContentType
struct USentryAttachment_GetContentType_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryBreadcrumb.SetType
struct USentryBreadcrumb_SetType_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryBreadcrumb.SetMessage
struct USentryBreadcrumb_SetMessage_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Sentry.SentryBreadcrumb.SetLevel
struct USentryBreadcrumb_SetLevel_Params
{
public:
	enum class ESentryLevel                      Level;                                             // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x50 (0x50 - 0x0)
// Function Sentry.SentryBreadcrumb.SetData
struct USentryBreadcrumb_SetData_Params
{
public:
	TMap<class FString, class FString>           Data;                                              // 0x0(0x50)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryBreadcrumb.SetCategory
struct USentryBreadcrumb_SetCategory_Params
{
public:
	class FString                                Category;                                          // 0x0(0x10)(ConstParm, BlueprintReadOnly, OutParm, Transient)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryBreadcrumb.GetType
struct USentryBreadcrumb_GetType_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryBreadcrumb.GetMessage
struct USentryBreadcrumb_GetMessage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Sentry.SentryBreadcrumb.GetLevel
struct USentryBreadcrumb_GetLevel_Params
{
public:
	enum class ESentryLevel                      ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Sentry.SentryBreadcrumb.GetData
struct USentryBreadcrumb_GetData_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryBreadcrumb.GetCategory
struct USentryBreadcrumb_GetCategory_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryEvent.SetMessage
struct USentryEvent_SetMessage_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Sentry.SentryEvent.SetLevel
struct USentryEvent_SetLevel_Params
{
public:
	enum class ESentryLevel                      Level;                                             // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryEvent.GetMessage
struct USentryEvent_GetMessage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Sentry.SentryEvent.GetLevel
struct USentryEvent_GetLevel_Params
{
public:
	enum class ESentryLevel                      ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryId.ToString
struct USentryId_ToString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentryLibrary.StringToBytesArray
struct USentryLibrary_StringToBytesArray_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<uint8>                                ReturnValue;                                       // 0x10(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Sentry.SentryLibrary.SaveStringToFile
struct USentryLibrary_SaveStringToFile_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function Sentry.SentryLibrary.CreateSentryUserFeedback
struct USentryLibrary_CreateSentryUserFeedback_Params
{
public:
	class USentryId*                             EventId;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	class FString                                Email;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FString                                Comments;                                          // 0x28(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USentryUserFeedback*                   ReturnValue;                                       // 0x38(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// Function Sentry.SentryLibrary.CreateSentryUser
struct USentryLibrary_CreateSentryUser_Params
{
public:
	class FString                                Email;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FString                                ID;                                                // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                Username;                                          // 0x20(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FString                                IpAddress;                                         // 0x30(0x10)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           Data;                                              // 0x40(0x50)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class USentryUser*                           ReturnValue;                                       // 0x90(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentryLibrary.CreateSentryEvent
struct USentryLibrary_CreateSentryEvent_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESentryLevel                      Level;                                             // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_1DA6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USentryEvent*                          ReturnValue;                                       // 0x18(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function Sentry.SentryLibrary.CreateSentryBreadcrumb
struct USentryLibrary_CreateSentryBreadcrumb_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Type;                                              // 0x10(0x10)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	class FString                                Category;                                          // 0x20(0x10)(ConstParm, BlueprintReadOnly, OutParm, Transient)
	TMap<class FString, class FString>           Data;                                              // 0x30(0x50)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESentryLevel                      Level;                                             // 0x80(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_1DAD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USentryBreadcrumb*                     ReturnValue;                                       // 0x88(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
struct USentryLibrary_CreateSentryAttachmentWithPath_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class FString                                ContentType;                                       // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USentryAttachment*                     ReturnValue;                                       // 0x30(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
struct USentryLibrary_CreateSentryAttachmentWithData_Params
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	class FString                                ContentType;                                       // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USentryAttachment*                     ReturnValue;                                       // 0x30(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentryLibrary.ByteArrayToString
struct USentryLibrary_ByteArrayToString_Params
{
public:
	TArray<uint8>                                Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentryScope.SetTagValue
struct USentryScope_SetTagValue_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x10(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x50 (0x50 - 0x0)
// Function Sentry.SentryScope.SetTags
struct USentryScope_SetTags_Params
{
public:
	TMap<class FString, class FString>           Tags;                                              // 0x0(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config)
};

// 0x1 (0x1 - 0x0)
// Function Sentry.SentryScope.SetLevel
struct USentryScope_SetLevel_Params
{
public:
	enum class ESentryLevel                      Level;                                             // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.SetFingerprint
struct USentryScope_SetFingerprint_Params
{
public:
	TArray<class FString>                        Fingerprint;                                       // 0x0(0x10)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentryScope.SetExtraValue
struct USentryScope_SetExtraValue_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x10(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x50 (0x50 - 0x0)
// Function Sentry.SentryScope.SetExtras
struct USentryScope_SetExtras_Params
{
public:
	TMap<class FString, class FString>           Extras;                                            // 0x0(0x50)(Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.SetEnvironment
struct USentryScope_SetEnvironment_Params
{
public:
	class FString                                Environment;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.SetDist
struct USentryScope_SetDist_Params
{
public:
	class FString                                Dist;                                              // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function Sentry.SentryScope.SetContext
struct USentryScope_SetContext_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	TMap<class FString, class FString>           Values;                                            // 0x10(0x50)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.RemoveTag
struct USentryScope_RemoveTag_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.RemoveExtra
struct USentryScope_RemoveExtra_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.RemoveContext
struct USentryScope_RemoveContext_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentryScope.GetTagValue
struct USentryScope_GetTagValue_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Sentry.SentryScope.GetTags
struct USentryScope_GetTags_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Sentry.SentryScope.GetLevel
struct USentryScope_GetLevel_Params
{
public:
	enum class ESentryLevel                      ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.GetFingerprint
struct USentryScope_GetFingerprint_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentryScope.GetExtraValue
struct USentryScope_GetExtraValue_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Sentry.SentryScope.GetExtras
struct USentryScope_GetExtras_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.GetEnvironment
struct USentryScope_GetEnvironment_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryScope.GetDist
struct USentryScope_GetDist_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Sentry.SentryScope.AddBreadcrumb
struct USentryScope_AddBreadcrumb_Params
{
public:
	class USentryBreadcrumb*                     Breadcrumb;                                        // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Sentry.SentryScope.AddAttachment
struct USentryScope_AddAttachment_Params
{
public:
	class USentryAttachment*                     Attachment;                                        // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Sentry.SentrySubsystem.SetUser
struct USentrySubsystem_SetUser_Params
{
public:
	class USentryUser*                           User;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentrySubsystem.SetTag
struct USentrySubsystem_SetTag_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x10(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x1 (0x1 - 0x0)
// Function Sentry.SentrySubsystem.SetLevel
struct USentrySubsystem_SetLevel_Params
{
public:
	enum class ESentryLevel                      Level;                                             // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x60 (0x60 - 0x0)
// Function Sentry.SentrySubsystem.SetContext
struct USentrySubsystem_SetContext_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	TMap<class FString, class FString>           Values;                                            // 0x10(0x50)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentrySubsystem.RemoveTag
struct USentrySubsystem_RemoveTag_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentrySubsystem.InitializeWithSettings
struct USentrySubsystem_InitializeWithSettings_Params
{
public:
	FDelegateProperty_                           OnConfigureSettings;                               // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentrySubsystem.ConfigureScope
struct USentrySubsystem_ConfigureScope_Params
{
public:
	FDelegateProperty_                           OnConfigureScope;                                  // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
struct USentrySubsystem_CaptureUserFeedbackWithParams_Params
{
public:
	class USentryId*                             EventId;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                Email;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FString                                Comments;                                          // 0x18(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                Name;                                              // 0x28(0x10)(ConstParm, Net, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function Sentry.SentrySubsystem.CaptureUserFeedback
struct USentrySubsystem_CaptureUserFeedback_Params
{
public:
	class USentryUserFeedback*                   UserFeedback;                                      // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function Sentry.SentrySubsystem.CaptureMessageWithScope
struct USentrySubsystem_CaptureMessageWithScope_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           OnConfigureScope;                                  // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class ESentryLevel                      Level;                                             // 0x20(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_1E1F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USentryId*                             ReturnValue;                                       // 0x28(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentrySubsystem.CaptureMessage
struct USentrySubsystem_CaptureMessage_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESentryLevel                      Level;                                             // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_1E22[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USentryId*                             ReturnValue;                                       // 0x18(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Sentry.SentrySubsystem.CaptureEventWithScope
struct USentrySubsystem_CaptureEventWithScope_Params
{
public:
	class USentryEvent*                          Event;                                             // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           OnConfigureScope;                                  // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USentryId*                             ReturnValue;                                       // 0x18(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentrySubsystem.CaptureEvent
struct USentrySubsystem_CaptureEvent_Params
{
public:
	class USentryEvent*                          Event;                                             // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class USentryId*                             ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
struct USentrySubsystem_AddBreadcrumbWithParams_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Category;                                          // 0x10(0x10)(ConstParm, BlueprintReadOnly, OutParm, Transient)
	class FString                                Type;                                              // 0x20(0x10)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	TMap<class FString, class FString>           Data;                                              // 0x30(0x50)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class ESentryLevel                      Level;                                             // 0x80(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_1E2F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function Sentry.SentrySubsystem.AddBreadcrumb
struct USentrySubsystem_AddBreadcrumb_Params
{
public:
	class USentryBreadcrumb*                     Breadcrumb;                                        // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUser.SetUsername
struct USentryUser_SetUsername_Params
{
public:
	class FString                                Username;                                          // 0x0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUser.SetIpAddress
struct USentryUser_SetIpAddress_Params
{
public:
	class FString                                IpAddress;                                         // 0x0(0x10)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUser.SetId
struct USentryUser_SetId_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUser.SetEmail
struct USentryUser_SetEmail_Params
{
public:
	class FString                                Email;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Sentry.SentryUser.SetData
struct USentryUser_SetData_Params
{
public:
	TMap<class FString, class FString>           Data;                                              // 0x0(0x50)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUser.GetUsername
struct USentryUser_GetUsername_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUser.GetIpAddress
struct USentryUser_GetIpAddress_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUser.GetId
struct USentryUser_GetId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUser.GetEmail
struct USentryUser_GetEmail_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Sentry.SentryUser.GetData
struct USentryUser_GetData_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUserFeedback.SetName
struct USentryUserFeedback_SetName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUserFeedback.SetEmail
struct USentryUserFeedback_SetEmail_Params
{
public:
	class FString                                Email;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUserFeedback.SetComment
struct USentryUserFeedback_SetComment_Params
{
public:
	class FString                                Comments;                                          // 0x0(0x10)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Sentry.SentryUserFeedback.Initialize
struct USentryUserFeedback_Initialize_Params
{
public:
	class USentryId*                             EventId;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUserFeedback.GetName
struct USentryUserFeedback_GetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUserFeedback.GetEmail
struct USentryUserFeedback_GetEmail_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Sentry.SentryUserFeedback.GetComment
struct USentryUserFeedback_GetComment_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


