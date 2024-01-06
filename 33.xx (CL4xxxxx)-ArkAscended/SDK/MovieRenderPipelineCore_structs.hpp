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
	class FString                                CameraName;                                        // 0x10(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineRenderPassOutputData
struct FMoviePipelineRenderPassOutputData
{
public:
	TArray<class FString>                        FilePaths;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineShotOutputData
struct FMoviePipelineShotOutputData
{
public:
	TWeakObjectPtr<class UMoviePipelineExecutorShot> Shot;                                              // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	TMap<struct FMoviePipelinePassIdentifier, struct FMoviePipelineRenderPassOutputData> RenderPassData;                                    // 0x8(0x50)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineOutputData
struct FMoviePipelineOutputData
{
public:
	class UMoviePipeline*                        Pipeline;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	class UMoviePipelineExecutorJob*             Job;                                               // 0x8(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	bool                                         bSuccess;                                          // 0x10(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_A1[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMoviePipelineShotOutputData>  ShotData;                                          // 0x18(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineSidecarCamera
struct FMoviePipelineSidecarCamera
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x18(0x10)(ConstParm, Net, OutParm)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
struct FMoviePipelineSegmentWorkMetrics
{
public:
	class FString                                SegmentName;                                       // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        OutputFrameIndex;                                  // 0x10(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        TotalOutputFrameCount;                             // 0x14(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        OutputSubSampleIndex;                              // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        TotalSubSampleCount;                               // 0x1C(0x4)(BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        EngineWarmUpFrameIndex;                            // 0x20(0x4)(BlueprintVisible, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        TotalEngineWarmUpFrameCount;                       // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineCameraCutInfo
struct FMoviePipelineCameraCutInfo
{
public:
	uint8                                        Pad_A3[0xA8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineFormatArgs
struct FMoviePipelineFormatArgs
{
public:
	TMap<class FString, class FString>           FilenameArguments;                                 // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           FileMetadata;                                      // 0x50(0x50)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             InJob;                                             // 0xA0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieRenderPipelineCore.MoviePipelineFilenameResolveParams
struct FMoviePipelineFilenameResolveParams
{
public:
	int32                                        FrameNumber;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        FrameNumberShot;                                   // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        FrameNumberRel;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        FrameNumberShotRel;                                // 0xC(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                CameraNameOverride;                                // 0x10(0x10)(Edit, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                ShotNameOverride;                                  // 0x20(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ZeroPadFrameNumberCount;                           // 0x30(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bForceRelativeFrameNumbers;                        // 0x34(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A4[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                FileNameOverride;                                  // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           FileNameFormatOverrides;                           // 0x48(0x50)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	TMap<class FString, class FString>           FileMetadata;                                      // 0x98(0x50)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FDateTime                             InitializationTime;                                // 0xE8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InitializationVersion;                             // 0xF0(0x4)(ConstParm, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A5[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelineExecutorJob*             Job;                                               // 0xF8(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_A6[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelineExecutorShot*            ShotOverride;                                      // 0x108(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        AdditionalFrameNumberOffset;                       // 0x110(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A7[0x4];                                       // Fixing Size Of Struct > TateDumper <
};

}


