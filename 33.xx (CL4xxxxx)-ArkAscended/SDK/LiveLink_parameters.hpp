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

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
struct ULiveLinkBlueprintLibrary_TransformNames_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<class FName>                          TransformNames;                                    // 0x18(0x10)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
struct ULiveLinkBlueprintLibrary_TransformName_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	class FName                                  Name;                                              // 0x20(0x8)(ConstParm, Net, OutParm)
};

// 0x1C (0x1C - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x18(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_4E[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
struct ULiveLinkBlueprintLibrary_RemoveSource_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_50[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
struct ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
struct ULiveLinkBlueprintLibrary_NumberOfTransforms_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	int32                                        ReturnValue;                                       // 0x18(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5D[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bForThisFrame;                                     // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x19(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_5F[0x2];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
struct ULiveLinkBlueprintLibrary_IsSourceStillValid_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_60[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
struct ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_63[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
struct ULiveLinkBlueprintLibrary_HasParent_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_66[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
struct ULiveLinkBlueprintLibrary_GetTransformByName_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	class FName                                  TransformName;                                     // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x20(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
struct ULiveLinkBlueprintLibrary_GetTransformByIndex_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	int32                                        TransformIndex;                                    // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_6D[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x20(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
struct ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params
{
public:
	struct FLiveLinkSubjectKey                   SubjectKey;                                        // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
struct ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid_Params
{
public:
	struct FGuid                                 SourceGuid;                                        // 0x0(0x10)(Edit, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
struct ULiveLinkBlueprintLibrary_GetSourceType_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
struct ULiveLinkBlueprintLibrary_GetSourceStatus_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
struct ULiveLinkBlueprintLibrary_GetSourceMachineName_Params
{
public:
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
struct ULiveLinkBlueprintLibrary_GetRootTransform_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x18(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0xC8 (0xC8 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
struct ULiveLinkBlueprintLibrary_GetPropertyValue_Params
{
public:
	struct FLiveLinkBasicBlueprintData           BasicData;                                         // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FName                                  PropertyName;                                      // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	float                                        Value;                                             // 0xC0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	bool                                         ReturnValue;                                       // 0xC4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_80[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
struct ULiveLinkBlueprintLibrary_GetParent_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FLiveLinkTransform                    Parent;                                            // 0x20(0x20)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x88 (0x88 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
struct ULiveLinkBlueprintLibrary_GetMetadata_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FSubjectMetadata                      MetaData;                                          // 0x18(0x70)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params
{
public:
	bool                                         bIncludeDisabledSubject;                           // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bIncludeVirtualSubject;                            // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_87[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	TArray<struct FLiveLinkSubjectKey>           ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
struct ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
struct ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params
{
public:
	bool                                         bIncludeVirtualSubject;                            // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_8E[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	TArray<struct FLiveLinkSubjectName>          ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
struct ULiveLinkBlueprintLibrary_GetCurves_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	TMap<class FName, float>                     Curves;                                            // 0x18(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x30 (0x30 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
struct ULiveLinkBlueprintLibrary_GetChildren_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<struct FLiveLinkTransform>            Children;                                          // 0x20(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0xD0 (0xD0 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
struct ULiveLinkBlueprintLibrary_GetBasicData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FLiveLinkBasicBlueprintData           BasicBlueprintData;                                // 0x18(0xB8)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
struct ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FLiveLinkSkeletonStaticData           AnimationStaticData;                               // 0x18(0x30)(Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x48(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_9D[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
struct ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params
{
public:
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x0(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FLiveLinkAnimationFrameData           AnimationFrameData;                                // 0x18(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_9E[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	class UClass*                                Role;                                              // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_9F[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	class UClass*                                Role;                                              // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	float                                        WorldTimeOffset;                                   // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_A3[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x18(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_A4[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	class UClass*                                Role;                                              // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	struct FTimecode                             SceneTime;                                         // 0x10(0x14)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_A6[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_A7[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
struct ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params
{
public:
	struct FLiveLinkSubjectRepresentation        SubjectRepresentation;                             // 0x0(0x10)(Edit, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FLiveLinkBaseBlueprintData            OutBlueprintData;                                  // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_A8[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
struct ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
struct ULiveLinkBlueprintLibrary_ChildCount_Params
{
public:
	struct FLiveLinkTransform                    LiveLinkTransform;                                 // 0x0(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	int32                                        ReturnValue;                                       // 0x20(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_A9[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
struct ULiveLinkComponent_GetSubjectDataAtWorldTime_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	float                                        WorldTime;                                         // 0x8(0x4)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bSuccess;                                          // 0xC(0x1)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B4[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x10(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
struct ULiveLinkComponent_GetSubjectDataAtSceneTime_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	struct FTimecode                             SceneTime;                                         // 0x8(0x14)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bSuccess;                                          // 0x1C(0x1)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B6[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x20(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x28 (0x28 - 0x0)
// Function LiveLink.LiveLinkComponent.GetSubjectData
struct ULiveLinkComponent_GetSubjectData_Params
{
public:
	class FName                                  SubjectName;                                       // 0x0(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         bSuccess;                                          // 0x8(0x1)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B9[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	struct FSubjectFrameHandle                   SubjectFrameHandle;                                // 0x10(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
struct ULiveLinkComponent_GetAvailableSubjectNames_Params
{
public:
	TArray<class FName>                          SubjectNames;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
struct ULiveLinkMessageBusFinder_GetAvailableProviders_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	float                                        Duration;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
	uint8                                        Pad_BE[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	TArray<struct FProviderPollResult>           AvailableProviders;                                // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
struct ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
{
public:
	class ULiveLinkMessageBusFinder*             ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
struct ULiveLinkMessageBusFinder_ConnectToProvider_Params
{
public:
	struct FProviderPollResult                   Provider;                                          // 0x0(0x40)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLiveLinkSourceHandle                 SourceHandle;                                      // 0x40(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function LiveLink.LiveLinkPreset.ApplyToClientLatent
struct ULiveLinkPreset_ApplyToClientLatent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function LiveLink.LiveLinkPreset.ApplyToClient
struct ULiveLinkPreset_ApplyToClient_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function LiveLink.LiveLinkPreset.AddToClient
struct ULiveLinkPreset_AddToClient_Params
{
public:
	bool                                         bRecreatePresets;                                  // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
struct ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params
{
public:
	struct FLiveLinkBaseStaticData               InStruct;                                          // 0x0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_F2[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
struct ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params
{
public:
	struct FLiveLinkBaseFrameData                InStruct;                                          // 0x0(0xA0)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         bInShouldStampCurrentTime;                         // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xA1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_F3[0x6];                                       // Fixing Size Of Struct > TateDumper <
};

}
}


