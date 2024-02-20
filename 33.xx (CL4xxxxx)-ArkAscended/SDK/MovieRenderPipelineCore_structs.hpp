#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMoviePipelineEncodeQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	EMoviePipelineEncodeQuality_MAX = 4,
};

enum class EFCPXMLExportDataSource : uint8
{
	OutputMetadata                 = 0,
	SequenceData                   = 1,
	FCPXMLExportDataSource_MAX     = 2,
};

enum class EMoviePipelineTextureStreamingMethod : uint8
{
	None                           = 0,
	Disabled                       = 1,
	FullyLoad                      = 2,
	EMoviePipelineTextureStreamingMethod_MAX = 3,
};

enum class EMovieRenderPipelineState : uint8
{
	Uninitialized                  = 0,
	ProducingFrames                = 1,
	Finalize                       = 2,
	Export                         = 3,
	Finished                       = 4,
	EMovieRenderPipelineState_MAX  = 5,
};

enum class EMovieRenderShotState : uint8
{
	Uninitialized                  = 0,
	WarmingUp                      = 1,
	MotionBlur                     = 2,
	Rendering                      = 3,
	Finished                       = 4,
	EMovieRenderShotState_MAX      = 5,
};

enum class EMoviePipelineShutterTiming : uint8
{
	FrameOpen                      = 0,
	FrameCenter                    = 1,
	FrameClose                     = 2,
	EMoviePipelineShutterTiming_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelinePassIdentifier
struct FMoviePipelinePassIdentifier
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FString                                CameraName;                                        // 0x10(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
struct FMoviePipelineRenderPassOutputData
{
public:
	TArray<class FString>                        FilePaths;                                         // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineShotOutputData
struct FMoviePipelineShotOutputData
{
public:
	TWeakObjectPtr<class UMoviePipelineExecutorShot> Shot;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TMap<struct FMoviePipelinePassIdentifier, struct FMoviePipelineRenderPassOutputData> RenderPassData;                                    // 0x8(0x50)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineOutputData
struct FMoviePipelineOutputData
{
public:
	class UMoviePipeline*                        Pipeline;                                          // 0x0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class UMoviePipelineExecutorJob*             Job;                                               // 0x8(0x8)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bSuccess;                                          // 0x10(0x1)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_760[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMoviePipelineShotOutputData>  ShotData;                                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineSidecarCamera
struct FMoviePipelineSidecarCamera
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_766[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x18(0x10)(ConstParm, Net, OutParm)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
struct FMoviePipelineSegmentWorkMetrics
{
public:
	class FString                                SegmentName;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OutputFrameIndex;                                  // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalOutputFrameCount;                             // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OutputSubSampleIndex;                              // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalSubSampleCount;                               // 0x1C(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EngineWarmUpFrameIndex;                            // 0x20(0x4)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TotalEngineWarmUpFrameCount;                       // 0x24(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineCameraCutInfo
struct FMoviePipelineCameraCutInfo
{
public:
	uint8                                        Pad_775[0xA8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineFormatArgs
struct FMoviePipelineFormatArgs
{
public:
	TMap<class FString, class FString>           FilenameArguments;                                 // 0x0(0x50)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, class FString>           FileMetadata;                                      // 0x50(0x50)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMoviePipelineExecutorJob*             InJob;                                             // 0xA0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
struct FMoviePipelineFilenameResolveParams
{
public:
	int32                                        FrameNumber;                                       // 0x0(0x4)(Edit, Net, Parm, Transient, DisableEditOnInstance)
	int32                                        FrameNumberShot;                                   // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameNumberRel;                                    // 0x8(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameNumberShotRel;                                // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                CameraNameOverride;                                // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ShotNameOverride;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ZeroPadFrameNumberCount;                           // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceRelativeFrameNumbers;                        // 0x34(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_77A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                FileNameOverride;                                  // 0x38(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, class FString>           FileNameFormatOverrides;                           // 0x48(0x50)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, class FString>           FileMetadata;                                      // 0x98(0x50)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FDateTime                             InitializationTime;                                // 0xE8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        InitializationVersion;                             // 0xF0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_77E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelineExecutorJob*             Job;                                               // 0xF8(0x8)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_77F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelineExecutorShot*            ShotOverride;                                      // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AdditionalFrameNumberOffset;                       // 0x110(0x4)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_780[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

}


