#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineSetting
class UMoviePipelineSetting : public UObject
{
public:
	TWeakObjectPtr<class UMoviePipeline>         CachedPipeline;                                    // 0x28(0x8)(ConstParm, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_11[0x17];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineSetting* GetDefaultObj();

	bool SetIsEnabled();
	void IsEnabled(bool* ReturnValue);
	void BuildNewProcessCommandLineArgs(TArray<class FString>* InOutUnrealURLParams, const TArray<class FString>& InOutCommandLineArgs, TArray<class FString>* InOutDeviceProfileCvars, TArray<class FString>* InOutExecCmds);
	void BuildNewProcessCommandLine(class FString* InOutUnrealURLParams, const class FString& InOutCommandLineArgs);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
public:
	enum class EMoviePipelineShutterTiming       ShutterTiming;                                     // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_13[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        OverscanPercentage;                                // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRenderAllCameras;                                 // 0x50(0x1)(ConstParm, ExportObject, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCameraSetting* GetDefaultObj();

};

// 0x0 (0x568 - 0x568)
// Class MovieRenderPipelineCore.MoviePipelineGameMode
class AMoviePipelineGameMode : public AGameModeBase
{
public:

	static class UClass* StaticClass();
	static class AMoviePipelineGameMode* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
public:
	int32                                        TileCount;                                         // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference)
	float                                        TextureSharpnessBias;                              // 0x4C(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	float                                        OverlapRatio;                                      // 0x50(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideSubSurfaceScattering;                     // 0x54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_19[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        BurleySampleCount;                                 // 0x58(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllocateHistoryPerTile;                           // 0x5C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A[0xB];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineHighResSetting* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
public:
	bool                                         bCloseEditor;                                      // 0x38(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArguments;                    // 0x40(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FString                                InheritedCommandLineArguments;                     // 0x50(0x10)(Edit, ConstParm, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        InitialDelayFrameCount;                            // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F[0x4];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutorSettings* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputBase
class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineOutputBase* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{
public:
	class FText                                  CategoryText;                                      // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsValidOnPrimary;                                 // 0x60(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsValidOnShots;                                   // 0x61(0x1)(Edit, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanBeDisabled;                                    // 0x62(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_25[0x5];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineSetting_BlueprintBase* GetDefaultObj();

	void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);
	void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);
	void ReceiveGetFormatArguments(const struct FMoviePipelineFormatArgs& InOutFormatArgs, struct FMoviePipelineFormatArgs* ReturnValue);
	void OnEngineTickBeginFrame();
};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineViewFamilySetting* GetDefaultObj();

};

// 0x0 (0x320 - 0x320)
// Class MovieRenderPipelineCore.MovieRenderDebugWidget
class UMovieRenderDebugWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMovieRenderDebugWidget* GetDefaultObj();

	void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
};

// 0x3E8 (0x410 - 0x28)
// Class MovieRenderPipelineCore.MoviePipeline
class UMoviePipeline : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnMoviePipelineFinishedDelegate;                   // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoviePipelineWorkFinishedDelegate;               // 0x38(0x10)(Edit, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoviePipelineShotWorkFinishedDelegate;           // 0x48(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineCustomTimeStep*          CustomTimeStep;                                    // 0x58(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F[0x10];                                      // Fixing Size After Last Property  > TateDumper <
	class UEngineCustomTimeStep*                 CachedPrevCustomTimeStep;                          // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class ULevelSequence*                        TargetSequence;                                    // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x80(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMovieRenderDebugWidget*               DebugWidget;                                       // 0x88(0x8)(ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UTexture*                              PreviewTexture;                                    // 0x90(0x8)(EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_30[0x288];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DebugWidgetClass;                                  // 0x320(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             CurrentJob;                                        // 0x328(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_32[0xE0];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipeline* GetDefaultObj();

	void Shutdown(bool bError);
	void SetInitializationTime(const struct FDateTime& InDateTime);
	void RequestShutdown(bool bIsError);
	void OnMoviePipelineFinishedImpl();
	void IsShutdownRequested(bool* ReturnValue);
	void Initialize(class UMoviePipelineExecutorJob** InJob);
	void GetPreviewTexture(class UTexture** ReturnValue);
	void GetPipelinePrimaryConfig(class UMoviePipelinePrimaryConfig** ReturnValue);
	void GetPipelineMasterConfig(class UMoviePipelinePrimaryConfig** ReturnValue);
	void GetInitializationTime(struct FDateTime* ReturnValue);
	void GetCurrentJob(class UMoviePipelineExecutorJob** ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
public:
	uint8                                        Pad_34[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
public:
	int32                                        SpatialSampleCount;                                // 0x48(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	int32                                        TemporalSampleCount;                               // 0x4C(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideAntiAliasing;                             // 0x50(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	enum class EAntiAliasingMethod               AntiAliasingMethod;                                // 0x51(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_38[0x2];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        RenderWarmUpCount;                                 // 0x54(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCameraCutForWarmUp;                            // 0x58(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_39[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        EngineWarmUpCount;                                 // 0x5C(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRenderWarmUpFrames;                               // 0x60(0x1)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3A[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineAntiAliasingSetting* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineBlueprintLibrary* GetDefaultObj();

	class ULevelSequence* UpdateJobShotListFromSequence(class UMoviePipelineExecutorJob** InJob, bool* bShotsChanged);
	void ResolveVersionNumber(struct FMoviePipelineFilenameResolveParams* InParams, bool* bGetNextVersion, int32* ReturnValue);
	void ResolveFilenameFormatArguments(class FString* InFormatString, struct FMoviePipelineFilenameResolveParams* InParams, class FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs);
	void LoadManifestFileFromString(class FString* InManifestFilePath, class UMoviePipelineQueue** ReturnValue);
	void GetRootTimecode(class UMoviePipeline** InMoviePipeline, struct FTimecode* ReturnValue);
	void GetRootFrameNumber(class UMoviePipeline** InMoviePipeline, struct FFrameNumber* ReturnValue);
	void GetPipelineState(class UMoviePipeline* InPipeline, enum class EMovieRenderPipelineState* ReturnValue);
	void GetOverallSegmentCounts(class UMoviePipeline** InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount);
	void GetOverallOutputFrames(class UMoviePipeline** InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount);
	void GetMoviePipelineEngineChangelistLabel(class UMoviePipeline** InMoviePipeline, class FText* ReturnValue);
	void GetMasterTimecode(class UMoviePipeline** InMoviePipeline, struct FTimecode* ReturnValue);
	void GetMasterFrameNumber(class UMoviePipeline** InMoviePipeline, struct FFrameNumber* ReturnValue);
	void GetMapPackageName(class UMoviePipelineExecutorJob** InJob, class FString* ReturnValue);
	void GetJobName(class UMoviePipeline** InMoviePipeline, class FText* ReturnValue);
	void GetJobInitializationTime(class UMoviePipeline** InMoviePipeline, struct FDateTime* ReturnValue);
	void GetJobAuthor(class UMoviePipeline** InMoviePipeline, class FText* ReturnValue);
	void GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate, bool* ReturnValue);
	void GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig** InPrimaryConfig, class UMoviePipelineExecutorShot** InPipelineExecutorShot, struct FIntPoint* ReturnValue);
	void GetCurrentShotTimecode(class UMoviePipeline** InMoviePipeline, struct FTimecode* ReturnValue);
	void GetCurrentShotFrameNumber(class UMoviePipeline** InMoviePipeline, struct FFrameNumber* ReturnValue);
	void GetCurrentSequence(class UMoviePipeline** InMoviePipeline, class ULevelSequence** ReturnValue);
	void GetCurrentSegmentWorkMetrics(class UMoviePipeline** InMoviePipeline, struct FMoviePipelineSegmentWorkMetrics* ReturnValue);
	void GetCurrentSegmentState(class UMoviePipeline** InMoviePipeline, enum class EMovieRenderShotState* ReturnValue);
	void GetCurrentSegmentName(class UMoviePipeline** InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName);
	void GetCurrentFocusDistance(class UMoviePipeline** InMoviePipeline, float* ReturnValue);
	void GetCurrentFocalLength(class UMoviePipeline** InMoviePipeline, float* ReturnValue);
	void GetCurrentExecutorShot(class UMoviePipeline** InMoviePipeline, class UMoviePipelineExecutorShot** ReturnValue);
	void GetCurrentAperture(class UMoviePipeline** InMoviePipeline, float* ReturnValue);
	void GetCompletionPercentage(class UMoviePipeline* InPipeline, float* ReturnValue);
	void FindOrGetDefaultSettingForShot(class UClass** InSettingType, class UMoviePipelinePrimaryConfig** InPrimaryConfig, class UMoviePipelineExecutorShot** InShot, class UMoviePipelineSetting** ReturnValue);
	class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence** ReturnValue);
};

// 0xA8 (0xF0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineColorSetting
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
public:
	struct FOpenColorIODisplayConfiguration      OCIOConfiguration;                                 // 0x48(0xA0)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisableToneCurve;                                 // 0xE8(0x1)(Edit, BlueprintVisible, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_76[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineColorSetting* GetDefaultObj();

};

// 0x40 (0x88 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class EMoviePipelineEncodeQuality       Quality;                                           // 0x58(0x1)(Edit, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_77[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArgs;                         // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDeleteSourceFiles;                                // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSkipEncodeOnRenderCanceled;                       // 0x71(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bWriteEachFrameDuration;                           // 0x72(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_78[0x15];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
public:
	class FString                                ExecutablePath;                                    // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  CodecHelpText;                                     // 0x48(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                VideoCodec;                                        // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                AudioCodec;                                        // 0x70(0x10)(BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                OutputFileExtension;                               // 0x80(0x10)(Edit, BlueprintVisible, Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                CommandLineFormat;                                 // 0x90(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                VideoInputStringFormat;                            // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                AudioInputStringFormat;                            // 0xB0(0x10)(Edit, ConstParm, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Low;                                // 0xC0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Med;                                // 0xD0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_High;                               // 0xE0(0x10)(BlueprintVisible, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Epic;                               // 0xF0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoderSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineConfigBase
class UMoviePipelineConfigBase : public UObject
{
public:
	class FString                                DisplayName;                                       // 0x28(0x10)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
	TArray<class UMoviePipelineSetting*>         Settings;                                          // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineConfigBase> ConfigOrigin;                                      // 0x48(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7C[0x8];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineConfigBase* GetDefaultObj();

	class UMoviePipelineConfigBase* SetConfigOrigin();
	class UMoviePipelineSetting* RemoveSetting();
	void GetUserSettings(TArray<class UMoviePipelineSetting*>* ReturnValue);
	void GetConfigOrigin(class UMoviePipelineConfigBase** ReturnValue);
	bool FindSettingsByClass(class UClass* InClass, bool bExactMatch, TArray<class UMoviePipelineSetting*>* ReturnValue);
	bool FindSettingByClass(class UClass* InClass, bool bExactMatch, class UMoviePipelineSetting** ReturnValue);
	bool FindOrAddSettingByClass(class UClass* InClass, bool bExactMatch, class UMoviePipelineSetting** ReturnValue);
	class UMoviePipelineConfigBase* CopyFrom();
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
public:
	bool                                         bWriteAllSamples;                                  // 0x48(0x1)(ExportObject, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCaptureFramesWithRenderDoc;                       // 0x49(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D[0x2];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        CaptureFrame;                                      // 0x4C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCaptureUnrealInsightsTrace;                       // 0x50(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7E[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineDebugSettings* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
class UMoviePipelineExecutorBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnExecutorFinishedDelegate;                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_83[0x18];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExecutorErroredDelegate;                         // 0x50(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_84[0x20];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            SocketMessageRecievedDelegate;                     // 0x80(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            HTTPResponseRecievedDelegate;                      // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                DebugWidgetClass;                                  // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_85[0x10];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UserData;                                          // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UClass*                                TargetPipelineClass;                               // 0xC8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_86[0x48];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorBase* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	class FString SetStatusMessage();
	class UClass* SetMoviePipelineClass();
	class FString SendSocketMessage(bool* ReturnValue);
	TMap<class FString, class FString> SendHTTPRequest(int32* ReturnValue);
	void OnExecutorFinishedImpl();
	class FText OnExecutorErroredImpl();
	void OnBeginFrame();
	void IsSocketConnected(bool* ReturnValue);
	void IsRendering(bool* ReturnValue);
	void GetStatusProgress(float* ReturnValue);
	void GetStatusMessage(class FString* ReturnValue);
	class UMoviePipelineQueue* Execute();
	void DisconnectSocket();
	int32 ConnectSocket(bool* ReturnValue);
	void CancelCurrentJob();
	void CancelAllJobs();
};

// 0x38 (0x80 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_87[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                FileNameFormatOverride;                            // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class EFCPXMLExportDataSource           DataSource;                                        // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_88[0x1F];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineFCPXMLExporter* GetDefaultObj();

};

// 0xE8 (0x130 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
public:
	class UClass*                                GameModeOverride;                                  // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCinematicQualitySettings;                         // 0x50(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;                                  // 0x51(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseLODZero;                                       // 0x52(0x1)(Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisableHLODs;                                     // 0x53(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseHighQualityShadows;                            // 0x54(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_89[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        ShadowDistanceScale;                               // 0x58(0x4)(Edit, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        ShadowRadiusThreshold;                             // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideViewDistanceScale;                        // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8A[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        ViewDistanceScale;                                 // 0x64(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFlushGrassStreaming;                              // 0x68(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFlushStreamingManagers;                           // 0x69(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideVirtualTextureFeedbackFactor;             // 0x6A(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8B[0x1];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualTextureFeedbackFactor;                      // 0x6C(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8C[0xC0];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineGameOverrideSetting* GetDefaultObj();

};

// 0x28 (0x140 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
public:
	class UMoviePipelineQueue*                   Queue;                                             // 0x118(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipeline*                        ActiveMoviePipeline;                               // 0x120(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8D[0x18];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineLinearExecutorBase* GetDefaultObj();

};

// 0x50 (0x190 - 0x140)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
public:
	bool                                         bUseCurrentLevel;                                  // 0x140(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8E[0x4F];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutor* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x48(0x10)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                FileNameFormat;                                    // 0x58(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FIntPoint                             OutputResolution;                                  // 0x68(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCustomFrameRate;                               // 0x70(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8F[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            OutputFrameRate;                                   // 0x74(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_90[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	bool                                         bOverrideExistingOutput;                           // 0x80(0x1)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_91[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        HandleFrameCount;                                  // 0x84(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutputFrameStep;                                   // 0x88(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCustomPlaybackRange;                           // 0x8C(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_92[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomStartFrame;                                  // 0x90(0x4)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        CustomEndFrame;                                    // 0x94(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        VersionNumber;                                     // 0x98(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoVersion;                                      // 0x9C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_93[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        ZeroPadFrameNumbers;                               // 0xA0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        FrameNumberOffset;                                 // 0xA4(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFlushDiskWritesPerShot;                           // 0xA8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_94[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineOutputSetting* GetDefaultObj();

};

// 0x18 (0x130 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
public:
	class UClass*                                ExecutorClass;                                     // 0x118(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   PipelineQueue;                                     // 0x120(0x8)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UWorld*                                LastLoadedWorld;                                   // 0x128(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelinePythonHostExecutor* GetDefaultObj();

	class UWorld* OnMapLoad();
	void GetLastLoadedWorld(class UWorld** ReturnValue);
	class UMoviePipelineQueue* ExecuteDelayed();
};

// 0x130 (0x158 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
class UMoviePipelineExecutorShot : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_96[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                OuterName;                                         // 0x30(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                InnerName;                                         // 0x40(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMoviePipelineSidecarCamera>   SidecarCameras;                                    // 0x50(0x10)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_97[0xA8];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Progress;                                          // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_98[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                StatusMessage;                                     // 0x110(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineShotConfig*              ShotOverrideConfig;                                // 0x120(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineShotConfig> ShotOverridePresetOrigin;                          // 0x128(0x30)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorShot* GetDefaultObj();

	void ShouldRender(bool* ReturnValue);
	void SetStatusProgress(float InProgress);
	class FString SetStatusMessage();
	class UMoviePipelineShotConfig* SetShotOverridePresetOrigin();
	class UMoviePipelineShotConfig* SetShotOverrideConfiguration();
	void GetStatusProgress(float* ReturnValue);
	void GetStatusMessage(class FString* ReturnValue);
	void GetShotOverridePresetOrigin(class UMoviePipelineShotConfig** ReturnValue);
	void GetShotOverrideConfiguration(class UMoviePipelineShotConfig** ReturnValue);
	int32 GetCameraName(class FString* ReturnValue);
	class UClass* AllocateNewShotOverrideConfig(class UMoviePipelineShotConfig** ReturnValue);
};

// 0xE8 (0x110 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
class UMoviePipelineExecutorJob : public UObject
{
public:
	class FString                                JobName;                                           // 0x28(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       Sequence;                                          // 0x38(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FSoftObjectPath                       Map;                                               // 0x58(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class FString                                Author;                                            // 0x78(0x10)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                Comment;                                           // 0x88(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMoviePipelineExecutorShot*>    ShotInfo;                                          // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                UserData;                                          // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FString                                StatusMessage;                                     // 0xB8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        StatusProgress;                                    // 0xC8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsConsumed;                                       // 0xCC(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_99[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelinePrimaryConfig*           Configuration;                                     // 0xD0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelinePrimaryConfig> PresetOrigin;                                      // 0xD8(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x108(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_9A[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorJob* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	class FString SetStatusMessage();
	struct FSoftObjectPath SetSequence();
	class UMoviePipelinePrimaryConfig* SetPresetOrigin();
	bool SetIsEnabled();
	bool SetConsumed();
	class UMoviePipelinePrimaryConfig* SetConfiguration();
	void OnDuplicated();
	void IsEnabled(bool* ReturnValue);
	void IsConsumed(bool* ReturnValue);
	void GetStatusProgress(float* ReturnValue);
	void GetStatusMessage(class FString* ReturnValue);
	void GetPresetOrigin(class UMoviePipelinePrimaryConfig** ReturnValue);
	void GetConfiguration(class UMoviePipelinePrimaryConfig** ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineQueue
class UMoviePipelineQueue : public UObject
{
public:
	TArray<class UMoviePipelineExecutorJob*>     Jobs;                                              // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineQueue>    QueueOrigin;                                       // 0x38(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C[0x8];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineQueue* GetDefaultObj();

	class UMoviePipelineQueue* SetQueueOrigin();
	int32 SetJobIndex(class UMoviePipelineExecutorJob** InJob);
	void GetQueueOrigin(class UMoviePipelineQueue** ReturnValue);
	void GetJobs(TArray<class UMoviePipelineExecutorJob*>* ReturnValue);
	void DuplicateJob(class UMoviePipelineExecutorJob** InJob, class UMoviePipelineExecutorJob** ReturnValue);
	void DeleteJob(class UMoviePipelineExecutorJob** InJob);
	void DeleteAllJobs();
	class UMoviePipelineQueue* CopyFrom();
	class UClass* AllocateNewJob(class UMoviePipelineExecutorJob** ReturnValue);
};

// 0x60 (0x90 - 0x30)
// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnRenderFinished;                                  // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorBase*            ActiveExecutor;                                    // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   CurrentQueue;                                      // 0x48(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E[0x40];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineQueueEngineSubsystem* GetDefaultObj();

	bool SetConfiguration();
	class UMoviePipelineExecutorBase* RenderQueueWithExecutorInstance();
	class UClass* RenderQueueWithExecutor(class UMoviePipelineExecutorBase** ReturnValue);
	void RenderJob(class UMoviePipelineExecutorJob** InJob);
	void IsRendering(bool* ReturnValue);
	void GetQueue(class UMoviePipelineQueue** ReturnValue);
	void GetActiveExecutor(class UMoviePipelineExecutorBase** ReturnValue);
	class ULevelSequence* AllocateJob(class UMoviePipelineExecutorJob** ReturnValue);
};

// 0x0 (0x48 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineRenderPass
class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineRenderPass* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class MovieRenderPipelineCore.MoviePipelineShotConfig
class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
public:

	static class UClass* StaticClass();
	static class UMoviePipelineShotConfig* GetDefaultObj();

};

// 0x48 (0x90 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_9F[0x48];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineVideoOutputBase* GetDefaultObj();

};

// 0x68 (0xE8 - 0x80)
// Class MovieRenderPipelineCore.MoviePipelinePrimaryConfig
class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
{
public:
	TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;                              // 0x80(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineOutputSetting*           OutputSetting;                                     // 0xD0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMoviePipelineSetting*>         TransientSettings;                                 // 0xD8(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelinePrimaryConfig* GetDefaultObj();

	void InitializeTransientSettings();
	void GetTransientSettings(TArray<class UMoviePipelineSetting*>* ReturnValue);
	class ULevelSequence* GetEffectiveFrameRate(struct FFrameRate* ReturnValue);
	bool GetAllSettings(TArray<class UMoviePipelineSetting*>* ReturnValue);
};

}


