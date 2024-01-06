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

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
struct UMoviePipelineSetting_SetIsEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
struct UMoviePipelineSetting_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
struct UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Params
{
public:
	TArray<class FString>                        InOutUnrealURLParams;                              // 0x0(0x10)(ConstParm, OutParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        InOutCommandLineArgs;                              // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        InOutDeviceProfileCvars;                           // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        InOutExecCmds;                                     // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
struct UMoviePipelineSetting_BuildNewProcessCommandLine_Params
{
public:
	class FString                                InOutUnrealURLParams;                              // 0x0(0x10)(ConstParm, OutParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                InOutCommandLineArgs;                              // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
struct UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
struct UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x150 (0x150 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
struct UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Params
{
public:
	struct FMoviePipelineFormatArgs              InOutFormatArgs;                                   // 0x0(0xA8)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FMoviePipelineFormatArgs              ReturnValue;                                       // 0xA8(0xA8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
struct UMovieRenderDebugWidget_OnInitializedForPipeline_Params
{
public:
	class UMoviePipeline*                        ForPipeline;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.Shutdown
struct UMoviePipeline_Shutdown_Params
{
public:
	bool                                         bError;                                            // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
struct UMoviePipeline_SetInitializationTime_Params
{
public:
	struct FDateTime                             InDateTime;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.RequestShutdown
struct UMoviePipeline_RequestShutdown_Params
{
public:
	bool                                         bIsError;                                          // 0x0(0x1)(ConstParm, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.IsShutdownRequested
struct UMoviePipeline_IsShutdownRequested_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.Initialize
struct UMoviePipeline_Initialize_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
struct UMoviePipeline_GetPreviewTexture_Params
{
public:
	class UTexture*                              ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetPipelinePrimaryConfig
struct UMoviePipeline_GetPipelinePrimaryConfig_Params
{
public:
	class UMoviePipelinePrimaryConfig*           ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
struct UMoviePipeline_GetPipelineMasterConfig_Params
{
public:
	class UMoviePipelinePrimaryConfig*           ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
struct UMoviePipeline_GetInitializationTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
struct UMoviePipeline_GetCurrentJob_Params
{
public:
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
struct UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params
{
public:
	class ULevelSequence*                        InSequence;                                        // 0x0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShotsChanged;                                     // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x120 (0x120 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
struct UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params
{
public:
	struct FMoviePipelineFilenameResolveParams   InParams;                                          // 0x0(0x118)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGetNextVersion;                                   // 0x118(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_41[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x11C(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1E0 (0x1E0 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
struct UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params
{
public:
	class FString                                InFormatString;                                    // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FMoviePipelineFilenameResolveParams   InParams;                                          // 0x10(0x118)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FString                                OutFinalPath;                                      // 0x128(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FMoviePipelineFormatArgs              OutMergedFormatArgs;                               // 0x138(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
struct UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Params
{
public:
	class FString                                InManifestFilePath;                                // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootTimecode
struct UMoviePipelineBlueprintLibrary_GetRootTimecode_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FTimecode                             ReturnValue;                                       // 0x8(0x14)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_48[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootFrameNumber
struct UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_49[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
struct UMoviePipelineBlueprintLibrary_GetPipelineState_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	enum class EMovieRenderPipelineState         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_4C[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
struct UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutCurrentIndex;                                   // 0x8(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutTotalCount;                                     // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
struct UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutCurrentIndex;                                   // 0x8(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutTotalCount;                                     // 0xC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
struct UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
struct UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FTimecode                             ReturnValue;                                       // 0x8(0x14)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_50[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
struct UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_51[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
struct UMoviePipelineBlueprintLibrary_GetMapPackageName_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
struct UMoviePipelineBlueprintLibrary_GetJobName_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
struct UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FDateTime                             ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
struct UMoviePipelineBlueprintLibrary_GetJobAuthor_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
struct UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FTimespan                             OutEstimate;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_5C[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
struct UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params
{
public:
	class UMoviePipelinePrimaryConfig*           InPrimaryConfig;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorShot*            InPipelineExecutorShot;                            // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FIntPoint                             ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
struct UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FTimecode                             ReturnValue;                                       // 0x8(0x14)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_63[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
struct UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FFrameNumber                          ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_64[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
struct UMoviePipelineBlueprintLibrary_GetCurrentSequence_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class ULevelSequence*                        ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FMoviePipelineSegmentWorkMetrics      ReturnValue;                                       // 0x8(0x28)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	enum class EMovieRenderShotState             ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_65[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
struct UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FText                                  OutOuterName;                                      // 0x8(0x18)(Net, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FText                                  OutInnerName;                                      // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
struct UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_69[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
struct UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6A[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
struct UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorShot*            ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
struct UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params
{
public:
	class UMoviePipeline*                        InMoviePipeline;                                   // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6B[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
struct UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params
{
public:
	class UMoviePipeline*                        InPipeline;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_6D[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
struct UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params
{
public:
	class UClass*                                InSettingType;                                     // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelinePrimaryConfig*           InPrimaryConfig;                                   // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorShot*            InShot;                                            // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineSetting*                 ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
struct UMoviePipelineBlueprintLibrary_DuplicateSequence_Params
{
public:
	class UObject*                               Outer;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class UMovieSceneSequence*                   InSequence;                                        // 0x8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMovieSceneSequence*                   ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.SetConfigOrigin
struct UMoviePipelineConfigBase_SetConfigOrigin_Params
{
public:
	class UMoviePipelineConfigBase*              InConfig;                                          // 0x0(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
struct UMoviePipelineConfigBase_RemoveSetting_Params
{
public:
	class UMoviePipelineSetting*                 InSetting;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
struct UMoviePipelineConfigBase_GetUserSettings_Params
{
public:
	TArray<class UMoviePipelineSetting*>         ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetConfigOrigin
struct UMoviePipelineConfigBase_GetConfigOrigin_Params
{
public:
	class UMoviePipelineConfigBase*              ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
struct UMoviePipelineConfigBase_FindSettingsByClass_Params
{
public:
	class UClass*                                InClass;                                           // 0x0(0x8)(ConstParm, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIncludeDisabledSettings;                          // 0x8(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_79[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	TArray<class UMoviePipelineSetting*>         ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
struct UMoviePipelineConfigBase_FindSettingByClass_Params
{
public:
	class UClass*                                InClass;                                           // 0x0(0x8)(ConstParm, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIncludeDisabledSettings;                          // 0x8(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_7A[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelineSetting*                 ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
struct UMoviePipelineConfigBase_FindOrAddSettingByClass_Params
{
public:
	class UClass*                                InClass;                                           // 0x0(0x8)(ConstParm, Net, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIncludeDisabledSettings;                          // 0x8(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bExactMatch;                                       // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_7B[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelineSetting*                 ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
struct UMoviePipelineConfigBase_CopyFrom_Params
{
public:
	class UMoviePipelineConfigBase*              InConfig;                                          // 0x0(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
struct UMoviePipelineExecutorBase_SetStatusProgress_Params
{
public:
	float                                        InProgress;                                        // 0x0(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
struct UMoviePipelineExecutorBase_SetStatusMessage_Params
{
public:
	class FString                                InStatus;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
struct UMoviePipelineExecutorBase_SetMoviePipelineClass_Params
{
public:
	class UClass*                                InPipelineClass;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
struct UMoviePipelineExecutorBase_SendSocketMessage_Params
{
public:
	class FString                                InMessage;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7F[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
struct UMoviePipelineExecutorBase_SendHTTPRequest_Params
{
public:
	class FString                                InURL;                                             // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                InVerb;                                            // 0x10(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                InMessage;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           InHeaders;                                         // 0x30(0x50)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x80(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_80[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
struct UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params
{
public:
	class UMoviePipeline*                        ErroredPipeline;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFatal;                                            // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_81[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FText                                  ErrorReason;                                       // 0x10(0x18)(BlueprintVisible, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
struct UMoviePipelineExecutorBase_IsSocketConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
struct UMoviePipelineExecutorBase_IsRendering_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
struct UMoviePipelineExecutorBase_GetStatusProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
struct UMoviePipelineExecutorBase_GetStatusMessage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
struct UMoviePipelineExecutorBase_Execute_Params
{
public:
	class UMoviePipelineQueue*                   InPipelineQueue;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
struct UMoviePipelineExecutorBase_ConnectSocket_Params
{
public:
	class FString                                InHostName;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        InPort;                                            // 0x10(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_82[0x3];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
struct UMoviePipelinePythonHostExecutor_OnMapLoad_Params
{
public:
	class UWorld*                                InWorld;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
struct UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params
{
public:
	class UWorld*                                ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
struct UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params
{
public:
	class UMoviePipelineQueue*                   InPipelineQueue;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
struct UMoviePipelineExecutorShot_ShouldRender_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
struct UMoviePipelineExecutorShot_SetStatusProgress_Params
{
public:
	float                                        InProgress;                                        // 0x0(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
struct UMoviePipelineExecutorShot_SetStatusMessage_Params
{
public:
	class FString                                InStatus;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
struct UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params
{
public:
	class UMoviePipelineShotConfig*              InPreset;                                          // 0x0(0x8)(OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
struct UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params
{
public:
	class UMoviePipelineShotConfig*              InPreset;                                          // 0x0(0x8)(OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
struct UMoviePipelineExecutorShot_GetStatusProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
struct UMoviePipelineExecutorShot_GetStatusMessage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
struct UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params
{
public:
	class UMoviePipelineShotConfig*              ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
struct UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params
{
public:
	class UMoviePipelineShotConfig*              ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
struct UMoviePipelineExecutorShot_GetCameraName_Params
{
public:
	int32                                        InCameraIndex;                                     // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_95[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
struct UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params
{
public:
	class UClass*                                InConfigType;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineShotConfig*              ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
struct UMoviePipelineExecutorJob_SetStatusProgress_Params
{
public:
	float                                        InProgress;                                        // 0x0(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
struct UMoviePipelineExecutorJob_SetStatusMessage_Params
{
public:
	class FString                                InStatus;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
struct UMoviePipelineExecutorJob_SetSequence_Params
{
public:
	struct FSoftObjectPath                       InSequence;                                        // 0x0(0x20)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
struct UMoviePipelineExecutorJob_SetPresetOrigin_Params
{
public:
	class UMoviePipelinePrimaryConfig*           InPreset;                                          // 0x0(0x8)(OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
struct UMoviePipelineExecutorJob_SetIsEnabled_Params
{
public:
	bool                                         bInEnabled;                                        // 0x0(0x1)(Edit, BlueprintReadOnly, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
struct UMoviePipelineExecutorJob_SetConsumed_Params
{
public:
	bool                                         bInConsumed;                                       // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
struct UMoviePipelineExecutorJob_SetConfiguration_Params
{
public:
	class UMoviePipelinePrimaryConfig*           InPreset;                                          // 0x0(0x8)(OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
struct UMoviePipelineExecutorJob_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
struct UMoviePipelineExecutorJob_IsConsumed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
struct UMoviePipelineExecutorJob_GetStatusProgress_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
struct UMoviePipelineExecutorJob_GetStatusMessage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
struct UMoviePipelineExecutorJob_GetPresetOrigin_Params
{
public:
	class UMoviePipelinePrimaryConfig*           ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
struct UMoviePipelineExecutorJob_GetConfiguration_Params
{
public:
	class UMoviePipelinePrimaryConfig*           ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.SetQueueOrigin
struct UMoviePipelineQueue_SetQueueOrigin_Params
{
public:
	class UMoviePipelineQueue*                   InConfig;                                          // 0x0(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
struct UMoviePipelineQueue_SetJobIndex_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Index;                                             // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_9B[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.GetQueueOrigin
struct UMoviePipelineQueue_GetQueueOrigin_Params
{
public:
	class UMoviePipelineQueue*                   ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
struct UMoviePipelineQueue_GetJobs_Params
{
public:
	TArray<class UMoviePipelineExecutorJob*>     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
struct UMoviePipelineQueue_DuplicateJob_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
struct UMoviePipelineQueue_DeleteJob_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
struct UMoviePipelineQueue_CopyFrom_Params
{
public:
	class UMoviePipelineQueue*                   InQueue;                                           // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
struct UMoviePipelineQueue_AllocateNewJob_Params
{
public:
	class UClass*                                InJobType;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
struct UMoviePipelineQueueEngineSubsystem_SetConfiguration_Params
{
public:
	class UClass*                                InProgressWidgetClass;                             // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRenderPlayerViewport;                             // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9D[0x7];                                       // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
struct UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params
{
public:
	class UMoviePipelineExecutorBase*            InExecutor;                                        // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
struct UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params
{
public:
	class UClass*                                InExecutorType;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorBase*            ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
struct UMoviePipelineQueueEngineSubsystem_RenderJob_Params
{
public:
	class UMoviePipelineExecutorJob*             InJob;                                             // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
struct UMoviePipelineQueueEngineSubsystem_IsRendering_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
struct UMoviePipelineQueueEngineSubsystem_GetQueue_Params
{
public:
	class UMoviePipelineQueue*                   ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
struct UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params
{
public:
	class UMoviePipelineExecutorBase*            ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
struct UMoviePipelineQueueEngineSubsystem_AllocateJob_Params
{
public:
	class ULevelSequence*                        InSequence;                                        // 0x0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetTransientSettings
struct UMoviePipelinePrimaryConfig_GetTransientSettings_Params
{
public:
	TArray<class UMoviePipelineSetting*>         ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetEffectiveFrameRate
struct UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Params
{
public:
	class ULevelSequence*                        InSequence;                                        // 0x0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FFrameRate                            ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetAllSettings
struct UMoviePipelinePrimaryConfig_GetAllSettings_Params
{
public:
	bool                                         bIncludeDisabledSettings;                          // 0x0(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIncludeTransientSettings;                         // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	TArray<class UMoviePipelineSetting*>         ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


