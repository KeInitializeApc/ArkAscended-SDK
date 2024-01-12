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
	TWeakObjectPtr<class UMoviePipeline>         CachedPipeline;                                    // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_1E[0x17];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineSetting* GetDefaultObj();

	void SetIsEnabled(bool bInEnabled);
	bool IsEnabled();
	TArray<class FString> BuildNewProcessCommandLineArgs();
	class FString BuildNewProcessCommandLine();
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
public:
	enum class EMoviePipelineShutterTiming       ShutterTiming;                                     // 0x48(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	float                                        OverscanPercentage;                                // 0x4C(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRenderAllCameras;                                 // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20[0x7];                                       // Fixing Size Of Struct > TateDumper <

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
	int32                                        TileCount;                                         // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference)
	float                                        TextureSharpnessBias;                              // 0x4C(0x4)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        OverlapRatio;                                      // 0x50(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideSubSurfaceScattering;                     // 0x54(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_23[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        BurleySampleCount;                                 // 0x58(0x4)(Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllocateHistoryPerTile;                           // 0x5C(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_24[0xB];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineHighResSetting* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
public:
	bool                                         bCloseEditor;                                      // 0x38(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_26[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArguments;                    // 0x40(0x10)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                InheritedCommandLineArguments;                     // 0x50(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        InitialDelayFrameCount;                            // 0x60(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_27[0x4];                                       // Fixing Size Of Struct > TateDumper <

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
	class FText                                  CategoryText;                                      // 0x48(0x18)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsValidOnPrimary;                                 // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsValidOnShots;                                   // 0x61(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCanBeDisabled;                                    // 0x62(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A[0x5];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineSetting_BlueprintBase* GetDefaultObj();

	class UMoviePipeline* ReceiveTeardownForPipelineImpl();
	class UMoviePipeline* ReceiveSetupForPipelineImpl();
	struct FMoviePipelineFormatArgs ReceiveGetFormatArguments();
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
	FMulticastInlineDelegateProperty_            OnMoviePipelineFinishedDelegate;                   // 0x28(0x10)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoviePipelineWorkFinishedDelegate;               // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoviePipelineShotWorkFinishedDelegate;           // 0x48(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineCustomTimeStep*          CustomTimeStep;                                    // 0x58(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_38[0x10];                                      // Fixing Size After Last Property  > TateDumper <
	class UEngineCustomTimeStep*                 CachedPrevCustomTimeStep;                          // 0x70(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class ULevelSequence*                        TargetSequence;                                    // 0x78(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x80(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMovieRenderDebugWidget*               DebugWidget;                                       // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UTexture*                              PreviewTexture;                                    // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B[0x288];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DebugWidgetClass;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             CurrentJob;                                        // 0x328(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3C[0xE0];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipeline* GetDefaultObj();

	bool Shutdown();
	struct FDateTime SetInitializationTime();
	bool RequestShutdown();
	void OnMoviePipelineFinishedImpl();
	bool IsShutdownRequested();
	class UMoviePipelineExecutorJob* Initialize();
	class UTexture* GetPreviewTexture();
	class UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig();
	class UMoviePipelinePrimaryConfig* GetPipelineMasterConfig();
	struct FDateTime GetInitializationTime();
	class UMoviePipelineExecutorJob* GetCurrentJob();
};

// 0x10 (0x38 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
public:
	uint8                                        Pad_3F[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
public:
	int32                                        SpatialSampleCount;                                // 0x48(0x4)(ConstParm, BlueprintVisible, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        TemporalSampleCount;                               // 0x4C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideAntiAliasing;                             // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	enum class EAntiAliasingMethod               AntiAliasingMethod;                                // 0x51(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_43[0x2];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        RenderWarmUpCount;                                 // 0x54(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCameraCutForWarmUp;                            // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_44[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        EngineWarmUpCount;                                 // 0x5C(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRenderWarmUpFrames;                               // 0x60(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_45[0x7];                                       // Fixing Size Of Struct > TateDumper <

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

	class UMoviePipelineExecutorJob* UpdateJobShotListFromSequence(bool bShotsChanged);
	int32 ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams, bool bGetNextVersion);
	void ResolveFilenameFormatArguments(const class FString& InFormatString, const struct FMoviePipelineFilenameResolveParams& InParams, const class FString& OutFinalPath, const struct FMoviePipelineFormatArgs& OutMergedFormatArgs);
	class UMoviePipelineQueue* LoadManifestFileFromString(const class FString& InManifestFilePath);
	struct FTimecode GetRootTimecode(class UMoviePipeline* InMoviePipeline);
	struct FFrameNumber GetRootFrameNumber(class UMoviePipeline* InMoviePipeline);
	enum class EMovieRenderPipelineState GetPipelineState();
	void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32 OutCurrentIndex, int32 OutTotalCount);
	void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32 OutCurrentIndex, int32 OutTotalCount);
	class FText GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline);
	struct FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);
	struct FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);
	class FString GetMapPackageName();
	class FText GetJobName(class UMoviePipeline* InMoviePipeline);
	struct FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);
	class FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);
	bool GetEstimatedTimeRemaining(const struct FTimespan& OutEstimate);
	struct FIntPoint GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot);
	struct FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);
	struct FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);
	class ULevelSequence* GetCurrentSequence(class UMoviePipeline* InMoviePipeline);
	struct FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);
	enum class EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
	void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText OutOuterName, class FText OutInnerName);
	float GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline);
	float GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline);
	class UMoviePipelineExecutorShot* GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline);
	float GetCurrentAperture(class UMoviePipeline* InMoviePipeline);
	float GetCompletionPercentage();
	class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(class UClass* InSettingType, class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InShot);
	class UMovieSceneSequence* DuplicateSequence(class UObject* Outer);
};

// 0xA8 (0xF0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineColorSetting
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
public:
	struct FOpenColorIODisplayConfiguration      OCIOConfiguration;                                 // 0x48(0xA0)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisableToneCurve;                                 // 0xE8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_76[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineColorSetting* GetDefaultObj();

};

// 0x40 (0x88 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EMoviePipelineEncodeQuality       Quality;                                           // 0x58(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_77[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArgs;                         // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDeleteSourceFiles;                                // 0x70(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSkipEncodeOnRenderCanceled;                       // 0x71(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bWriteEachFrameDuration;                           // 0x72(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_78[0x15];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
public:
	class FString                                ExecutablePath;                                    // 0x38(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  CodecHelpText;                                     // 0x48(0x18)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                VideoCodec;                                        // 0x60(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                AudioCodec;                                        // 0x70(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                OutputFileExtension;                               // 0x80(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                CommandLineFormat;                                 // 0x90(0x10)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                VideoInputStringFormat;                            // 0xA0(0x10)(BlueprintVisible, Net, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                AudioInputStringFormat;                            // 0xB0(0x10)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Low;                                // 0xC0(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Med;                                // 0xD0(0x10)(BlueprintVisible, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_High;                               // 0xE0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Epic;                               // 0xF0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoderSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineConfigBase
class UMoviePipelineConfigBase : public UObject
{
public:
	class FString                                DisplayName;                                       // 0x28(0x10)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
	TArray<class UMoviePipelineSetting*>         Settings;                                          // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineConfigBase> ConfigOrigin;                                      // 0x48(0x30)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7C[0x8];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineConfigBase* GetDefaultObj();

	void SetConfigOrigin(class UMoviePipelineConfigBase** InConfig);
	void RemoveSetting(class UMoviePipelineSetting** InSetting);
	TArray<class UMoviePipelineSetting*> GetUserSettings();
	class UMoviePipelineConfigBase* GetConfigOrigin();
	TArray<class UMoviePipelineSetting*> FindSettingsByClass(bool* bIncludeDisabledSettings);
	class UMoviePipelineSetting* FindSettingByClass(bool* bIncludeDisabledSettings);
	class UMoviePipelineSetting* FindOrAddSettingByClass(bool* bIncludeDisabledSettings);
	void CopyFrom(class UMoviePipelineConfigBase** InConfig);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
public:
	bool                                         bWriteAllSamples;                                  // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCaptureFramesWithRenderDoc;                       // 0x49(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7D[0x2];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        CaptureFrame;                                      // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCaptureUnrealInsightsTrace;                       // 0x50(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7E[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineDebugSettings* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
class UMoviePipelineExecutorBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnExecutorFinishedDelegate;                        // 0x28(0x10)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_83[0x18];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExecutorErroredDelegate;                         // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_84[0x20];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            SocketMessageRecievedDelegate;                     // 0x80(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            HTTPResponseRecievedDelegate;                      // 0x90(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                DebugWidgetClass;                                  // 0xA0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_85[0x10];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                UserData;                                          // 0xB8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                TargetPipelineClass;                               // 0xC8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_86[0x48];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorBase* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	void SetStatusMessage(class FString* InStatus);
	void SetMoviePipelineClass(class UClass** InPipelineClass);
	bool SendSocketMessage(class FString* InMessage);
	int32 SendHTTPRequest(class FString* InURL, class FString* InVerb, class FString* InMessage, TMap<class FString, class FString>* InHeaders);
	void OnExecutorFinishedImpl();
	void OnExecutorErroredImpl(class UMoviePipeline** ErroredPipeline, bool* bFatal, class FText* ErrorReason);
	void OnBeginFrame();
	bool IsSocketConnected();
	bool IsRendering();
	float GetStatusProgress();
	class FString GetStatusMessage();
	void Execute(class UMoviePipelineQueue** InPipelineQueue);
	void DisconnectSocket();
	bool ConnectSocket(class FString* InHostName, int32* InPort);
	void CancelCurrentJob();
	void CancelAllJobs();
};

// 0x38 (0x80 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_87[0x8];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                FileNameFormatOverride;                            // 0x50(0x10)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EFCPXMLExportDataSource           DataSource;                                        // 0x60(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_88[0x1F];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineFCPXMLExporter* GetDefaultObj();

};

// 0xE8 (0x130 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
public:
	class UClass*                                GameModeOverride;                                  // 0x48(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCinematicQualitySettings;                         // 0x50(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;                                  // 0x51(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseLODZero;                                       // 0x52(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisableHLODs;                                     // 0x53(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseHighQualityShadows;                            // 0x54(0x1)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_89[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        ShadowDistanceScale;                               // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        ShadowRadiusThreshold;                             // 0x5C(0x4)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideViewDistanceScale;                        // 0x60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8A[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        ViewDistanceScale;                                 // 0x64(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFlushGrassStreaming;                              // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFlushStreamingManagers;                           // 0x69(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideVirtualTextureFeedbackFactor;             // 0x6A(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8B[0x1];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualTextureFeedbackFactor;                      // 0x6C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8C[0xC0];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineGameOverrideSetting* GetDefaultObj();

};

// 0x28 (0x140 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
public:
	class UMoviePipelineQueue*                   Queue;                                             // 0x118(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipeline*                        ActiveMoviePipeline;                               // 0x120(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8D[0x18];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineLinearExecutorBase* GetDefaultObj();

};

// 0x50 (0x190 - 0x140)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
public:
	bool                                         bUseCurrentLevel;                                  // 0x140(0x1)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8E[0x4F];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutor* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                FileNameFormat;                                    // 0x58(0x10)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FIntPoint                             OutputResolution;                                  // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCustomFrameRate;                               // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8F[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            OutputFrameRate;                                   // 0x74(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_90[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	bool                                         bOverrideExistingOutput;                           // 0x80(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_91[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        HandleFrameCount;                                  // 0x84(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        OutputFrameStep;                                   // 0x88(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCustomPlaybackRange;                           // 0x8C(0x1)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_92[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomStartFrame;                                  // 0x90(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        CustomEndFrame;                                    // 0x94(0x4)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	int32                                        VersionNumber;                                     // 0x98(0x4)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAutoVersion;                                      // 0x9C(0x1)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_93[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	int32                                        ZeroPadFrameNumbers;                               // 0xA0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        FrameNumberOffset;                                 // 0xA4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFlushDiskWritesPerShot;                           // 0xA8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_94[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineOutputSetting* GetDefaultObj();

};

// 0x18 (0x130 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
public:
	class UClass*                                ExecutorClass;                                     // 0x118(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   PipelineQueue;                                     // 0x120(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UWorld*                                LastLoadedWorld;                                   // 0x128(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelinePythonHostExecutor* GetDefaultObj();

	void OnMapLoad(class UWorld** InWorld);
	class UWorld* GetLastLoadedWorld();
	void ExecuteDelayed(class UMoviePipelineQueue** InPipelineQueue);
};

// 0x130 (0x158 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
class UMoviePipelineExecutorShot : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_96[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                OuterName;                                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                InnerName;                                         // 0x40(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMoviePipelineSidecarCamera>   SidecarCameras;                                    // 0x50(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_97[0xA8];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        Progress;                                          // 0x108(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_98[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	class FString                                StatusMessage;                                     // 0x110(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineShotConfig*              ShotOverrideConfig;                                // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineShotConfig> ShotOverridePresetOrigin;                          // 0x128(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorShot* GetDefaultObj();

	bool ShouldRender();
	void SetStatusProgress(float InProgress);
	void SetStatusMessage(class FString* InStatus);
	void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig** InPreset);
	void SetShotOverrideConfiguration(class UMoviePipelineShotConfig** InPreset);
	float GetStatusProgress();
	class FString GetStatusMessage();
	class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
	class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
	class FString GetCameraName(int32* InCameraIndex);
	class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass** InConfigType);
};

// 0xE8 (0x110 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
class UMoviePipelineExecutorJob : public UObject
{
public:
	class FString                                JobName;                                           // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       Sequence;                                          // 0x38(0x20)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FSoftObjectPath                       Map;                                               // 0x58(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class FString                                Author;                                            // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                Comment;                                           // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMoviePipelineExecutorShot*>    ShotInfo;                                          // 0x98(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class FString                                UserData;                                          // 0xA8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                StatusMessage;                                     // 0xB8(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	float                                        StatusProgress;                                    // 0xC8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsConsumed;                                       // 0xCC(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_99[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelinePrimaryConfig*           Configuration;                                     // 0xD0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelinePrimaryConfig> PresetOrigin;                                      // 0xD8(0x30)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x108(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_9A[0x7];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorJob* GetDefaultObj();

	void SetStatusProgress(float InProgress);
	void SetStatusMessage(class FString* InStatus);
	struct FSoftObjectPath SetSequence();
	void SetPresetOrigin(class UMoviePipelinePrimaryConfig** InPreset);
	void SetIsEnabled(bool bInEnabled);
	void SetConsumed(bool* bInConsumed);
	void SetConfiguration(class UMoviePipelinePrimaryConfig** InPreset);
	void OnDuplicated();
	bool IsEnabled();
	bool IsConsumed();
	float GetStatusProgress();
	class FString GetStatusMessage();
	class UMoviePipelinePrimaryConfig* GetPresetOrigin();
	class UMoviePipelinePrimaryConfig* GetConfiguration();
};

// 0x48 (0x70 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineQueue
class UMoviePipelineQueue : public UObject
{
public:
	TArray<class UMoviePipelineExecutorJob*>     Jobs;                                              // 0x28(0x10)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineQueue>    QueueOrigin;                                       // 0x38(0x30)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C[0x8];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineQueue* GetDefaultObj();

	void SetQueueOrigin(class UMoviePipelineQueue** InConfig);
	int32 SetJobIndex();
	class UMoviePipelineQueue* GetQueueOrigin();
	TArray<class UMoviePipelineExecutorJob*> GetJobs();
	class UMoviePipelineExecutorJob* DuplicateJob();
	class UMoviePipelineExecutorJob* DeleteJob();
	void DeleteAllJobs();
	class UMoviePipelineQueue* CopyFrom();
	class UMoviePipelineExecutorJob* AllocateNewJob();
};

// 0x60 (0x90 - 0x30)
// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnRenderFinished;                                  // 0x30(0x10)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorBase*            ActiveExecutor;                                    // 0x40(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   CurrentQueue;                                      // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E[0x40];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineQueueEngineSubsystem* GetDefaultObj();

	bool SetConfiguration();
	class UMoviePipelineExecutorBase* RenderQueueWithExecutorInstance();
	class UMoviePipelineExecutorBase* RenderQueueWithExecutor();
	class UMoviePipelineExecutorJob* RenderJob();
	bool IsRendering();
	class UMoviePipelineQueue* GetQueue();
	class UMoviePipelineExecutorBase* GetActiveExecutor();
	class UMoviePipelineExecutorJob* AllocateJob();
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
	TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;                              // 0x80(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UMoviePipelineOutputSetting*           OutputSetting;                                     // 0xD0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMoviePipelineSetting*>         TransientSettings;                                 // 0xD8(0x10)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelinePrimaryConfig* GetDefaultObj();

	void InitializeTransientSettings();
	TArray<class UMoviePipelineSetting*> GetTransientSettings();
	struct FFrameRate GetEffectiveFrameRate();
	TArray<class UMoviePipelineSetting*> GetAllSettings(bool* bIncludeDisabledSettings);
};

}


