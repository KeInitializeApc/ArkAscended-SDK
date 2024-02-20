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
	TWeakObjectPtr<class UMoviePipeline>         CachedPipeline;                                    // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_48B[0x17];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineSetting* GetDefaultObj();

	void SetIsEnabled(bool bInEnabled);
	void IsEnabled(bool ReturnValue);
	TArray<class FString> BuildNewProcessCommandLineArgs();
	class FString BuildNewProcessCommandLine();
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
public:
	enum class EMoviePipelineShutterTiming       ShutterTiming;                                     // 0x48(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_491[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OverscanPercentage;                                // 0x4C(0x4)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bRenderAllCameras;                                 // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_492[0x7];                                      // Fixing Size Of Struct > TateDumper <

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
	int32                                        TileCount;                                         // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	float                                        TextureSharpnessBias;                              // 0x4C(0x4)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	float                                        OverlapRatio;                                      // 0x50(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bOverrideSubSurfaceScattering;                     // 0x54(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_498[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BurleySampleCount;                                 // 0x58(0x4)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bAllocateHistoryPerTile;                           // 0x5C(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_49A[0xB];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineHighResSetting* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
public:
	bool                                         bCloseEditor;                                      // 0x38(0x1)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_49E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArguments;                    // 0x40(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class FString                                InheritedCommandLineArguments;                     // 0x50(0x10)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        InitialDelayFrameCount;                            // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_49F[0x4];                                      // Fixing Size Of Struct > TateDumper <

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
	class FText                                  CategoryText;                                      // 0x48(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bIsValidOnPrimary;                                 // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bIsValidOnShots;                                   // 0x61(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bCanBeDisabled;                                    // 0x62(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4A8[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineSetting_BlueprintBase* GetDefaultObj();

	class UMoviePipeline* ReceiveTeardownForPipelineImpl();
	class UMoviePipeline* ReceiveSetupForPipelineImpl();
	struct FMoviePipelineFormatArgs ReceiveGetFormatArguments(const struct FMoviePipelineFormatArgs& ReturnValue);
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

	class UMoviePipeline* OnInitializedForPipeline();
};

// 0x3E8 (0x410 - 0x28)
// Class MovieRenderPipelineCore.MoviePipeline
class UMoviePipeline : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnMoviePipelineFinishedDelegate;                   // 0x28(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoviePipelineWorkFinishedDelegate;               // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoviePipelineShotWorkFinishedDelegate;           // 0x48(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UMoviePipelineCustomTimeStep*          CustomTimeStep;                                    // 0x58(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C4[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UEngineCustomTimeStep*                 CachedPrevCustomTimeStep;                          // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class ULevelSequence*                        TargetSequence;                                    // 0x78(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x80(0x8)(Edit, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UMovieRenderDebugWidget*               DebugWidget;                                       // 0x88(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UTexture*                              PreviewTexture;                                    // 0x90(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C8[0x288];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DebugWidgetClass;                                  // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             CurrentJob;                                        // 0x328(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C9[0xE0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipeline* GetDefaultObj();

	bool Shutdown();
	struct FDateTime SetInitializationTime();
	bool RequestShutdown();
	void OnMoviePipelineFinishedImpl();
	void IsShutdownRequested(bool ReturnValue);
	void Initialize(class UMoviePipelineExecutorJob* InJob);
	void GetPreviewTexture(class UTexture* ReturnValue);
	void GetPipelinePrimaryConfig(class UMoviePipelinePrimaryConfig* ReturnValue);
	void GetPipelineMasterConfig(class UMoviePipelinePrimaryConfig* ReturnValue);
	void GetInitializationTime(const struct FDateTime& ReturnValue);
	void GetCurrentJob(class UMoviePipelineExecutorJob* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
public:
	uint8                                        Pad_4CA[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
public:
	int32                                        SpatialSampleCount;                                // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	int32                                        TemporalSampleCount;                               // 0x4C(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bOverrideAntiAliasing;                             // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	enum class EAntiAliasingMethod               AntiAliasingMethod;                                // 0x51(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4CC[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        RenderWarmUpCount;                                 // 0x54(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bUseCameraCutForWarmUp;                            // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4CD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        EngineWarmUpCount;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bRenderWarmUpFrames;                               // 0x60(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_4CE[0x7];                                      // Fixing Size Of Struct > TateDumper <

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

	void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool bShotsChanged);
	void ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams, bool bGetNextVersion, int32 ReturnValue);
	void ResolveFilenameFormatArguments(const class FString& InFormatString, const struct FMoviePipelineFilenameResolveParams& InParams, const class FString& OutFinalPath, const struct FMoviePipelineFormatArgs& OutMergedFormatArgs);
	void LoadManifestFileFromString(const class FString& InManifestFilePath, class UMoviePipelineQueue* ReturnValue);
	class UMoviePipeline* GetRootTimecode(const struct FTimecode& ReturnValue);
	class UMoviePipeline* GetRootFrameNumber(const struct FFrameNumber& ReturnValue);
	class UMoviePipeline* GetPipelineState(enum class EMovieRenderPipelineState ReturnValue);
	class UMoviePipeline* GetOverallSegmentCounts(int32 OutCurrentIndex, int32 OutTotalCount);
	class UMoviePipeline* GetOverallOutputFrames(int32 OutCurrentIndex, int32 OutTotalCount);
	class UMoviePipeline* GetMoviePipelineEngineChangelistLabel(class FText ReturnValue);
	class UMoviePipeline* GetMasterTimecode(const struct FTimecode& ReturnValue);
	class UMoviePipeline* GetMasterFrameNumber(const struct FFrameNumber& ReturnValue);
	void GetMapPackageName(class UMoviePipelineExecutorJob* InJob, const class FString& ReturnValue);
	class UMoviePipeline* GetJobName(class FText ReturnValue);
	class UMoviePipeline* GetJobInitializationTime(const struct FDateTime& ReturnValue);
	class UMoviePipeline* GetJobAuthor(class FText ReturnValue);
	class UMoviePipeline* GetEstimatedTimeRemaining(const struct FTimespan& OutEstimate, bool ReturnValue);
	class UMoviePipelinePrimaryConfig* GetEffectiveOutputResolution(class UMoviePipelineExecutorShot* InPipelineExecutorShot, const struct FIntPoint& ReturnValue);
	class UMoviePipeline* GetCurrentShotTimecode(const struct FTimecode& ReturnValue);
	class UMoviePipeline* GetCurrentShotFrameNumber(const struct FFrameNumber& ReturnValue);
	class UMoviePipeline* GetCurrentSequence(class ULevelSequence* ReturnValue);
	class UMoviePipeline* GetCurrentSegmentWorkMetrics(const struct FMoviePipelineSegmentWorkMetrics& ReturnValue);
	class UMoviePipeline* GetCurrentSegmentState(enum class EMovieRenderShotState ReturnValue);
	class FText GetCurrentSegmentName();
	class UMoviePipeline* GetCurrentFocusDistance(float ReturnValue);
	class UMoviePipeline* GetCurrentFocalLength(float ReturnValue);
	class UMoviePipeline* GetCurrentExecutorShot(class UMoviePipelineExecutorShot* ReturnValue);
	class UMoviePipeline* GetCurrentAperture(float ReturnValue);
	class UMoviePipeline* GetCompletionPercentage(float ReturnValue);
	class UMoviePipelineExecutorShot* FindOrGetDefaultSettingForShot(class UMoviePipelineSetting* ReturnValue);
	void DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence, class UMovieSceneSequence* ReturnValue);
};

// 0xA8 (0xF0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineColorSetting
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
public:
	struct FOpenColorIODisplayConfiguration      OCIOConfiguration;                                 // 0x48(0xA0)(BlueprintVisible, ExportObject, Net, EditFixedSize, InstancedReference, SubobjectReference)
	bool                                         bDisableToneCurve;                                 // 0xE8(0x1)(ConstParm, Net, EditFixedSize, InstancedReference, SubobjectReference)
	uint8                                        Pad_54A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineColorSetting* GetDefaultObj();

};

// 0x40 (0x88 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(ConstParm, ExportObject, Net, Parm, InstancedReference, SubobjectReference)
	enum class EMoviePipelineEncodeQuality       Quality;                                           // 0x58(0x1)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_54E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArgs;                         // 0x60(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)
	bool                                         bDeleteSourceFiles;                                // 0x70(0x1)(ConstParm, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)
	bool                                         bSkipEncodeOnRenderCanceled;                       // 0x71(0x1)(Edit, ConstParm, Parm, InstancedReference, SubobjectReference)
	bool                                         bWriteEachFrameDuration;                           // 0x72(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
	uint8                                        Pad_551[0x15];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
public:
	class FString                                ExecutablePath;                                    // 0x38(0x10)(BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  CodecHelpText;                                     // 0x48(0x18)(Edit, ExportObject, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
	class FString                                VideoCodec;                                        // 0x60(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)
	class FString                                AudioCodec;                                        // 0x70(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, InstancedReference, SubobjectReference)
	class FString                                OutputFileExtension;                               // 0x80(0x10)(ConstParm, OutParm, InstancedReference, SubobjectReference)
	class FString                                CommandLineFormat;                                 // 0x90(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class FString                                VideoInputStringFormat;                            // 0xA0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class FString                                AudioInputStringFormat;                            // 0xB0(0x10)(Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Low;                                // 0xC0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Med;                                // 0xD0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_High;                               // 0xE0(0x10)(Edit, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Epic;                               // 0xF0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoderSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineConfigBase
class UMoviePipelineConfigBase : public UObject
{
public:
	class FString                                DisplayName;                                       // 0x28(0x10)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient)
	TArray<class UMoviePipelineSetting*>         Settings;                                          // 0x38(0x10)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineConfigBase> ConfigOrigin;                                      // 0x48(0x30)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_56D[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineConfigBase* GetDefaultObj();

	void SetConfigOrigin(class UMoviePipelineConfigBase** InConfig);
	void RemoveSetting(class UMoviePipelineSetting** InSetting);
	void GetUserSettings(const TArray<class UMoviePipelineSetting*>& ReturnValue);
	void GetConfigOrigin(class UMoviePipelineConfigBase* ReturnValue);
	class UClass* FindSettingsByClass(bool* bIncludeDisabledSettings, bool* bExactMatch, const TArray<class UMoviePipelineSetting*>& ReturnValue);
	class UClass* FindSettingByClass(bool* bIncludeDisabledSettings, bool* bExactMatch, class UMoviePipelineSetting* ReturnValue);
	class UClass* FindOrAddSettingByClass(bool* bIncludeDisabledSettings, bool* bExactMatch, class UMoviePipelineSetting* ReturnValue);
	void CopyFrom(class UMoviePipelineConfigBase** InConfig);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
public:
	bool                                         bWriteAllSamples;                                  // 0x48(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bCaptureFramesWithRenderDoc;                       // 0x49(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_57F[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CaptureFrame;                                      // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	bool                                         bCaptureUnrealInsightsTrace;                       // 0x50(0x1)(EditFixedSize, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_581[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineDebugSettings* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
class UMoviePipelineExecutorBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnExecutorFinishedDelegate;                        // 0x28(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B5[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExecutorErroredDelegate;                         // 0x50(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_5B8[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            SocketMessageRecievedDelegate;                     // 0x80(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            HTTPResponseRecievedDelegate;                      // 0x90(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	class UClass*                                DebugWidgetClass;                                  // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_5BB[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                UserData;                                          // 0xB8(0x10)(Edit, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                TargetPipelineClass;                               // 0xC8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_5BC[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorBase* GetDefaultObj();

	float SetStatusProgress();
	void SetStatusMessage(class FString* InStatus);
	void SetMoviePipelineClass(class UClass** InPipelineClass);
	void SendSocketMessage(class FString* InMessage, bool ReturnValue);
	void SendHTTPRequest(class FString* InURL, class FString* InVerb, class FString* InMessage, TMap<class FString, class FString>* InHeaders, int32 ReturnValue);
	void OnExecutorFinishedImpl();
	void OnExecutorErroredImpl(class UMoviePipeline** ErroredPipeline, bool* bFatal, class FText* ErrorReason);
	void OnBeginFrame();
	void IsSocketConnected(bool ReturnValue);
	void IsRendering(bool ReturnValue);
	void GetStatusProgress(float ReturnValue);
	void GetStatusMessage(const class FString& ReturnValue);
	void Execute(class UMoviePipelineQueue** InPipelineQueue);
	void DisconnectSocket();
	void ConnectSocket(class FString* InHostName, int32* InPort, bool ReturnValue);
	void CancelCurrentJob();
	void CancelAllJobs();
};

// 0x38 (0x80 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_5BE[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                FileNameFormatOverride;                            // 0x50(0x10)(ConstParm, ExportObject, Net, Parm, InstancedReference, SubobjectReference)
	enum class EFCPXMLExportDataSource           DataSource;                                        // 0x60(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5C0[0x1F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineFCPXMLExporter* GetDefaultObj();

};

// 0xE8 (0x130 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
public:
	class UClass*                                GameModeOverride;                                  // 0x48(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCinematicQualitySettings;                         // 0x50(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;                                  // 0x51(0x1)(BlueprintVisible, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bUseLODZero;                                       // 0x52(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bDisableHLODs;                                     // 0x53(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bUseHighQualityShadows;                            // 0x54(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ShadowDistanceScale;                               // 0x58(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        ShadowRadiusThreshold;                             // 0x5C(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bOverrideViewDistanceScale;                        // 0x60(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5CB[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ViewDistanceScale;                                 // 0x64(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bFlushGrassStreaming;                              // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bFlushStreamingManagers;                           // 0x69(0x1)(ConstParm, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bOverrideVirtualTextureFeedbackFactor;             // 0x6A(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D3[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualTextureFeedbackFactor;                      // 0x6C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D5[0xC0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineGameOverrideSetting* GetDefaultObj();

};

// 0x28 (0x140 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
public:
	class UMoviePipelineQueue*                   Queue;                                             // 0x118(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UMoviePipeline*                        ActiveMoviePipeline;                               // 0x120(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5D8[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineLinearExecutorBase* GetDefaultObj();

};

// 0x50 (0x190 - 0x140)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
public:
	bool                                         bUseCurrentLevel;                                  // 0x140(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5DD[0x4F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutor* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                FileNameFormat;                                    // 0x58(0x10)(ExportObject, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FIntPoint                             OutputResolution;                                  // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bUseCustomFrameRate;                               // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5E2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            OutputFrameRate;                                   // 0x74(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bOverrideExistingOutput;                           // 0x80(0x1)(Edit, ExportObject, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        HandleFrameCount;                                  // 0x84(0x4)(OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        OutputFrameStep;                                   // 0x88(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bUseCustomPlaybackRange;                           // 0x8C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomStartFrame;                                  // 0x90(0x4)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        CustomEndFrame;                                    // 0x94(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        VersionNumber;                                     // 0x98(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bAutoVersion;                                      // 0x9C(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ZeroPadFrameNumbers;                               // 0xA0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameNumberOffset;                                 // 0xA4(0x4)(EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bFlushDiskWritesPerShot;                           // 0xA8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E9[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineOutputSetting* GetDefaultObj();

};

// 0x68 (0xE8 - 0x80)
// Class MovieRenderPipelineCore.MoviePipelinePrimaryConfig
class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
{
public:
	TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;                              // 0x80(0x50)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UMoviePipelineOutputSetting*           OutputSetting;                                     // 0xD0(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<class UMoviePipelineSetting*>         TransientSettings;                                 // 0xD8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelinePrimaryConfig* GetDefaultObj();

	void InitializeTransientSettings();
	void GetTransientSettings(const TArray<class UMoviePipelineSetting*>& ReturnValue);
	void GetEffectiveFrameRate(class ULevelSequence* InSequence, const struct FFrameRate& ReturnValue);
	void GetAllSettings(bool* bIncludeDisabledSettings, bool* bIncludeTransientSettings, const TArray<class UMoviePipelineSetting*>& ReturnValue);
};

// 0x18 (0x130 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
public:
	class UClass*                                ExecutorClass;                                     // 0x118(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   PipelineQueue;                                     // 0x120(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UWorld*                                LastLoadedWorld;                                   // 0x128(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelinePythonHostExecutor* GetDefaultObj();

	void OnMapLoad(class UWorld** InWorld);
	void GetLastLoadedWorld(class UWorld* ReturnValue);
	void ExecuteDelayed(class UMoviePipelineQueue** InPipelineQueue);
};

// 0x130 (0x158 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
class UMoviePipelineExecutorShot : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_63A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OuterName;                                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                InnerName;                                         // 0x40(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TArray<struct FMoviePipelineSidecarCamera>   SidecarCameras;                                    // 0x50(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_63E[0xA8];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Progress;                                          // 0x108(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        Pad_641[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                StatusMessage;                                     // 0x110(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class UMoviePipelineShotConfig*              ShotOverrideConfig;                                // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineShotConfig> ShotOverridePresetOrigin;                          // 0x128(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorShot* GetDefaultObj();

	void ShouldRender(bool ReturnValue);
	float SetStatusProgress();
	void SetStatusMessage(class FString* InStatus);
	void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig** InPreset);
	void SetShotOverrideConfiguration(class UMoviePipelineShotConfig** InPreset);
	void GetStatusProgress(float ReturnValue);
	void GetStatusMessage(const class FString& ReturnValue);
	void GetShotOverridePresetOrigin(class UMoviePipelineShotConfig* ReturnValue);
	void GetShotOverrideConfiguration(class UMoviePipelineShotConfig* ReturnValue);
	void GetCameraName(int32* InCameraIndex, const class FString& ReturnValue);
	void AllocateNewShotOverrideConfig(class UClass** InConfigType, class UMoviePipelineShotConfig* ReturnValue);
};

// 0xE8 (0x110 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
class UMoviePipelineExecutorJob : public UObject
{
public:
	class FString                                JobName;                                           // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       Sequence;                                          // 0x38(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FSoftObjectPath                       Map;                                               // 0x58(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class FString                                Author;                                            // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                Comment;                                           // 0x88(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMoviePipelineExecutorShot*>    ShotInfo;                                          // 0x98(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                UserData;                                          // 0xA8(0x10)(Edit, BlueprintReadOnly, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                StatusMessage;                                     // 0xB8(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        StatusProgress;                                    // 0xC8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bIsConsumed;                                       // 0xCC(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_684[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelinePrimaryConfig*           Configuration;                                     // 0xD0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelinePrimaryConfig> PresetOrigin;                                      // 0xD8(0x30)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x108(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_689[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorJob* GetDefaultObj();

	float SetStatusProgress();
	void SetStatusMessage(class FString* InStatus);
	void SetSequence(const struct FSoftObjectPath& InSequence);
	void SetPresetOrigin(class UMoviePipelinePrimaryConfig** InPreset);
	void SetIsEnabled(bool bInEnabled);
	void SetConsumed(bool* bInConsumed);
	void SetConfiguration(class UMoviePipelinePrimaryConfig** InPreset);
	void OnDuplicated();
	void IsEnabled(bool ReturnValue);
	void IsConsumed(bool ReturnValue);
	void GetStatusProgress(float ReturnValue);
	void GetStatusMessage(const class FString& ReturnValue);
	void GetPresetOrigin(class UMoviePipelinePrimaryConfig* ReturnValue);
	void GetConfiguration(class UMoviePipelinePrimaryConfig* ReturnValue);
};

// 0x48 (0x70 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineQueue
class UMoviePipelineQueue : public UObject
{
public:
	TArray<class UMoviePipelineExecutorJob*>     Jobs;                                              // 0x28(0x10)(ConstParm, BlueprintReadOnly, ReturnParm, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineQueue>    QueueOrigin;                                       // 0x38(0x30)(Edit, ConstParm, ExportObject, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_6A4[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineQueue* GetDefaultObj();

	void SetQueueOrigin(class UMoviePipelineQueue** InConfig);
	void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32* Index);
	void GetQueueOrigin(class UMoviePipelineQueue* ReturnValue);
	void GetJobs(const TArray<class UMoviePipelineExecutorJob*>& ReturnValue);
	void DuplicateJob(class UMoviePipelineExecutorJob* InJob, class UMoviePipelineExecutorJob* ReturnValue);
	void DeleteJob(class UMoviePipelineExecutorJob* InJob);
	void DeleteAllJobs();
	class UMoviePipelineQueue* CopyFrom();
	class UClass* AllocateNewJob(class UMoviePipelineExecutorJob* ReturnValue);
};

// 0x60 (0x90 - 0x30)
// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnRenderFinished;                                  // 0x30(0x10)(ConstParm, ExportObject, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorBase*            ActiveExecutor;                                    // 0x40(0x8)(ConstParm, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   CurrentQueue;                                      // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_745[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineQueueEngineSubsystem* GetDefaultObj();

	bool SetConfiguration();
	class UMoviePipelineExecutorBase* RenderQueueWithExecutorInstance();
	class UClass* RenderQueueWithExecutor(class UMoviePipelineExecutorBase* ReturnValue);
	void RenderJob(class UMoviePipelineExecutorJob* InJob);
	void IsRendering(bool ReturnValue);
	void GetQueue(class UMoviePipelineQueue* ReturnValue);
	void GetActiveExecutor(class UMoviePipelineExecutorBase* ReturnValue);
	void AllocateJob(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* ReturnValue);
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
	uint8                                        Pad_75B[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineVideoOutputBase* GetDefaultObj();

};

}


