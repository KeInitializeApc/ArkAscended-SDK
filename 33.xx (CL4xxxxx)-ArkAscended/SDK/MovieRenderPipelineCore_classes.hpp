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
	TWeakObjectPtr<class UMoviePipeline>         CachedPipeline;                                    // 0x28(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_1EF[0x17];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineSetting* GetDefaultObj();

	bool SetIsEnabled();
	bool IsEnabled();
	void BuildNewProcessCommandLineArgs(TArray<class FString>* InOutUnrealURLParams, TArray<class FString>* InOutCommandLineArgs, TArray<class FString>* InOutDeviceProfileCvars, TArray<class FString>* InOutExecCmds);
	void BuildNewProcessCommandLine(class FString* InOutUnrealURLParams, class FString* InOutCommandLineArgs);
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
public:
	enum class EMoviePipelineShutterTiming       ShutterTiming;                                     // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OverscanPercentage;                                // 0x4C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRenderAllCameras;                                 // 0x50(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F5[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCameraSetting* GetDefaultObj();

};

// 0x0 (0x560 - 0x560)
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
	int32                                        TileCount;                                         // 0x48(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference)
	float                                        TextureSharpnessBias;                              // 0x4C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        OverlapRatio;                                      // 0x50(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideSubSurfaceScattering;                     // 0x54(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BurleySampleCount;                                 // 0x58(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAllocateHistoryPerTile;                           // 0x5C(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F8[0xB];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineHighResSetting* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
public:
	bool                                         bCloseEditor;                                      // 0x38(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F9[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArguments;                    // 0x40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                InheritedCommandLineArguments;                     // 0x50(0x10)(ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        InitialDelayFrameCount;                            // 0x60(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FA[0x4];                                      // Fixing Size Of Struct > TateDumper <

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
	class FText                                  CategoryText;                                      // 0x48(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidOnPrimary;                                 // 0x60(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsValidOnShots;                                   // 0x61(0x1)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCanBeDisabled;                                    // 0x62(0x1)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_203[0x5];                                      // Fixing Size Of Struct > TateDumper <

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
	FMulticastInlineDelegateProperty_            OnMoviePipelineFinishedDelegate;                   // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoviePipelineWorkFinishedDelegate;               // 0x38(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMoviePipelineShotWorkFinishedDelegate;           // 0x48(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineCustomTimeStep*          CustomTimeStep;                                    // 0x58(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_224[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UEngineCustomTimeStep*                 CachedPrevCustomTimeStep;                          // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULevelSequence*                        TargetSequence;                                    // 0x78(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x80(0x8)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMovieRenderDebugWidget*               DebugWidget;                                       // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture*                              PreviewTexture;                                    // 0x90(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_226[0x288];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DebugWidgetClass;                                  // 0x320(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorJob*             CurrentJob;                                        // 0x328(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_227[0xE0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipeline* GetDefaultObj();

	bool Shutdown();
	struct FDateTime SetInitializationTime();
	bool RequestShutdown();
	void OnMoviePipelineFinishedImpl();
	bool IsShutdownRequested();
	void Initialize(class UMoviePipelineExecutorJob* InJob);
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
	uint8                                        Pad_22B[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
public:
	int32                                        SpatialSampleCount;                                // 0x48(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        TemporalSampleCount;                               // 0x4C(0x4)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideAntiAliasing;                             // 0x50(0x1)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EAntiAliasingMethod               AntiAliasingMethod;                                // 0x51(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_22C[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        RenderWarmUpCount;                                 // 0x54(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseCameraCutForWarmUp;                            // 0x58(0x1)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_22D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        EngineWarmUpCount;                                 // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRenderWarmUpFrames;                               // 0x60(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_22E[0x7];                                      // Fixing Size Of Struct > TateDumper <

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

	bool UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob);
	int32 ResolveVersionNumber();
	struct FMoviePipelineFormatArgs ResolveFilenameFormatArguments();
	class UMoviePipelineQueue* LoadManifestFileFromString();
	struct FTimecode GetRootTimecode();
	struct FFrameNumber GetRootFrameNumber();
	enum class EMovieRenderPipelineState GetPipelineState();
	int32 GetOverallSegmentCounts();
	int32 GetOverallOutputFrames();
	class FText GetMoviePipelineEngineChangelistLabel();
	struct FTimecode GetMasterTimecode();
	struct FFrameNumber GetMasterFrameNumber();
	class FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
	class FText GetJobName();
	struct FDateTime GetJobInitializationTime();
	class FText GetJobAuthor();
	bool GetEstimatedTimeRemaining();
	struct FIntPoint GetEffectiveOutputResolution();
	struct FTimecode GetCurrentShotTimecode();
	struct FFrameNumber GetCurrentShotFrameNumber();
	class ULevelSequence* GetCurrentSequence();
	struct FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics();
	enum class EMovieRenderShotState GetCurrentSegmentState();
	class FText GetCurrentSegmentName();
	float GetCurrentFocusDistance();
	float GetCurrentFocalLength();
	class UMoviePipelineExecutorShot* GetCurrentExecutorShot();
	float GetCurrentAperture();
	float GetCompletionPercentage();
	class UMoviePipelineSetting* FindOrGetDefaultSettingForShot();
	class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
};

// 0xA8 (0xF0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineColorSetting
class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
public:
	struct FOpenColorIODisplayConfiguration      OCIOConfiguration;                                 // 0x48(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDisableToneCurve;                                 // 0xE8(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_27B[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineColorSetting* GetDefaultObj();

};

// 0x40 (0x88 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
public:
	class FString                                FileNameFormatOverride;                            // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMoviePipelineEncodeQuality       Quality;                                           // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_27D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArgs;                         // 0x60(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDeleteSourceFiles;                                // 0x70(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bSkipEncodeOnRenderCanceled;                       // 0x71(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWriteEachFrameDuration;                           // 0x72(0x1)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_280[0x15];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
public:
	class FString                                ExecutablePath;                                    // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	class FText                                  CodecHelpText;                                     // 0x48(0x18)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                VideoCodec;                                        // 0x60(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                AudioCodec;                                        // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                OutputFileExtension;                               // 0x80(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                CommandLineFormat;                                 // 0x90(0x10)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                VideoInputStringFormat;                            // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                AudioInputStringFormat;                            // 0xB0(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Low;                                // 0xC0(0x10)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Med;                                // 0xD0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_High;                               // 0xE0(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                EncodeSettings_Epic;                               // 0xF0(0x10)(Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineCommandLineEncoderSettings* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineConfigBase
class UMoviePipelineConfigBase : public UObject
{
public:
	class FString                                DisplayName;                                       // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
	TArray<class UMoviePipelineSetting*>         Settings;                                          // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineConfigBase> ConfigOrigin;                                      // 0x48(0x30)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A1[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineConfigBase* GetDefaultObj();

	class UMoviePipelineConfigBase* SetConfigOrigin();
	class UMoviePipelineSetting* RemoveSetting();
	TArray<class UMoviePipelineSetting*> GetUserSettings();
	class UMoviePipelineConfigBase* GetConfigOrigin();
	TArray<class UMoviePipelineSetting*> FindSettingsByClass(class UClass** InClass);
	class UMoviePipelineSetting* FindSettingByClass(class UClass** InClass);
	class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass** InClass);
	class UMoviePipelineConfigBase* CopyFrom();
};

// 0x10 (0x58 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
public:
	bool                                         bWriteAllSamples;                                  // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCaptureFramesWithRenderDoc;                       // 0x49(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A8[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CaptureFrame;                                      // 0x4C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCaptureUnrealInsightsTrace;                       // 0x50(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AB[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineDebugSettings* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
class UMoviePipelineExecutorBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnExecutorFinishedDelegate;                        // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D4[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExecutorErroredDelegate;                         // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D5[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            SocketMessageRecievedDelegate;                     // 0x80(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            HTTPResponseRecievedDelegate;                      // 0x90(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                DebugWidgetClass;                                  // 0xA0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D7[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                UserData;                                          // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                TargetPipelineClass;                               // 0xC8(0x8)(Edit, ConstParm, Net, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D9[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorBase* GetDefaultObj();

	void SetStatusProgress(float* InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetMoviePipelineClass(class UClass* InPipelineClass);
	bool SendSocketMessage(class FString* InMessage);
	int32 SendHTTPRequest(const class FString& InURL, const class FString& InVerb, class FString* InMessage);
	void OnExecutorFinishedImpl();
	class FText OnExecutorErroredImpl();
	void OnBeginFrame();
	bool IsSocketConnected();
	bool IsRendering();
	float GetStatusProgress();
	class FString GetStatusMessage();
	class UMoviePipelineQueue* Execute();
	void DisconnectSocket();
	bool ConnectSocket();
	void CancelCurrentJob();
	void CancelAllJobs();
};

// 0x38 (0x80 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
public:
	uint8                                        Pad_2DF[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                FileNameFormatOverride;                            // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EFCPXMLExportDataSource           DataSource;                                        // 0x60(0x1)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E0[0x1F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineFCPXMLExporter* GetDefaultObj();

};

// 0xE8 (0x130 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
public:
	class UClass*                                GameModeOverride;                                  // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         bCinematicQualitySettings;                         // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMoviePipelineTextureStreamingMethod TextureStreaming;                                  // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseLODZero;                                       // 0x52(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDisableHLODs;                                     // 0x53(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseHighQualityShadows;                            // 0x54(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ShadowDistanceScale;                               // 0x58(0x4)(ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ShadowRadiusThreshold;                             // 0x5C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideViewDistanceScale;                        // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ViewDistanceScale;                                 // 0x64(0x4)(BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFlushGrassStreaming;                              // 0x68(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFlushStreamingManagers;                           // 0x69(0x1)(BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bOverrideVirtualTextureFeedbackFactor;             // 0x6A(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E9[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualTextureFeedbackFactor;                      // 0x6C(0x4)(Edit, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EA[0xC0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineGameOverrideSetting* GetDefaultObj();

};

// 0x28 (0x140 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
public:
	class UMoviePipelineQueue*                   Queue;                                             // 0x118(0x8)(BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipeline*                        ActiveMoviePipeline;                               // 0x120(0x8)(Edit, BlueprintVisible, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2ED[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineLinearExecutorBase* GetDefaultObj();

};

// 0x50 (0x190 - 0x140)
// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
public:
	bool                                         bUseCurrentLevel;                                  // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EF[0x4F];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineInProcessExecutor* GetDefaultObj();

};

// 0x68 (0xB0 - 0x48)
// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x48(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	class FString                                FileNameFormat;                                    // 0x58(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FIntPoint                             OutputResolution;                                  // 0x68(0x8)(Edit, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseCustomFrameRate;                               // 0x70(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            OutputFrameRate;                                   // 0x74(0x8)(Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bOverrideExistingOutput;                           // 0x80(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        HandleFrameCount;                                  // 0x84(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        OutputFrameStep;                                   // 0x88(0x4)(Edit, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseCustomPlaybackRange;                           // 0x8C(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomStartFrame;                                  // 0x90(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        CustomEndFrame;                                    // 0x94(0x4)(Edit, ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        VersionNumber;                                     // 0x98(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAutoVersion;                                      // 0x9C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ZeroPadFrameNumbers;                               // 0xA0(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	int32                                        FrameNumberOffset;                                 // 0xA4(0x4)(ConstParm, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bFlushDiskWritesPerShot;                           // 0xA8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F8[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineOutputSetting* GetDefaultObj();

};

// 0x68 (0xE8 - 0x80)
// Class MovieRenderPipelineCore.MoviePipelinePrimaryConfig
class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
{
public:
	TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;                              // 0x80(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineOutputSetting*           OutputSetting;                                     // 0xD0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UMoviePipelineSetting*>         TransientSettings;                                 // 0xD8(0x10)(ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelinePrimaryConfig* GetDefaultObj();

	void InitializeTransientSettings();
	TArray<class UMoviePipelineSetting*> GetTransientSettings();
	struct FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);
	TArray<class UMoviePipelineSetting*> GetAllSettings(bool* bIncludeTransientSettings);
};

// 0x18 (0x130 - 0x118)
// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
public:
	class UClass*                                ExecutorClass;                                     // 0x118(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   PipelineQueue;                                     // 0x120(0x8)(Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UWorld*                                LastLoadedWorld;                                   // 0x128(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelinePythonHostExecutor* GetDefaultObj();

	void OnMapLoad(class UWorld** InWorld);
	class UWorld* GetLastLoadedWorld();
	class UMoviePipelineQueue* ExecuteDelayed();
};

// 0x130 (0x158 - 0x28)
// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
class UMoviePipelineExecutorShot : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_347[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OuterName;                                         // 0x30(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                InnerName;                                         // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FMoviePipelineSidecarCamera>   SidecarCameras;                                    // 0x50(0x10)(Edit, ConstParm, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_349[0xA8];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Progress;                                          // 0x108(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_34C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                StatusMessage;                                     // 0x110(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineShotConfig*              ShotOverrideConfig;                                // 0x120(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineShotConfig> ShotOverridePresetOrigin;                          // 0x128(0x30)(BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorShot* GetDefaultObj();

	bool ShouldRender();
	void SetStatusProgress(float* InProgress);
	void SetStatusMessage(const class FString& InStatus);
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
	class FString                                JobName;                                           // 0x28(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       Sequence;                                          // 0x38(0x20)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FSoftObjectPath                       Map;                                               // 0x58(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class FString                                Author;                                            // 0x78(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                Comment;                                           // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class UMoviePipelineExecutorShot*>    ShotInfo;                                          // 0x98(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                UserData;                                          // 0xA8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                StatusMessage;                                     // 0xB8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        StatusProgress;                                    // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsConsumed;                                       // 0xCC(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_381[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UMoviePipelinePrimaryConfig*           Configuration;                                     // 0xD0(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelinePrimaryConfig> PresetOrigin;                                      // 0xD8(0x30)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x108(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_384[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineExecutorJob* GetDefaultObj();

	void SetStatusProgress(float* InProgress);
	void SetStatusMessage(const class FString& InStatus);
	void SetSequence(const struct FSoftObjectPath& InSequence);
	void SetPresetOrigin(class UMoviePipelinePrimaryConfig** InPreset);
	bool SetIsEnabled();
	void SetConsumed(bool bInConsumed);
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
	TArray<class UMoviePipelineExecutorJob*>     Jobs;                                              // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class UMoviePipelineQueue>    QueueOrigin;                                       // 0x38(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3AC[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineQueue* GetDefaultObj();

	class UMoviePipelineQueue* SetQueueOrigin();
	int32 SetJobIndex(class UMoviePipelineExecutorJob* InJob);
	class UMoviePipelineQueue* GetQueueOrigin();
	TArray<class UMoviePipelineExecutorJob*> GetJobs();
	class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
	void DeleteJob(class UMoviePipelineExecutorJob* InJob);
	void DeleteAllJobs();
	void CopyFrom(class UMoviePipelineQueue* InQueue);
	class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);
};

// 0x60 (0x90 - 0x30)
// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnRenderFinished;                                  // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineExecutorBase*            ActiveExecutor;                                    // 0x40(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMoviePipelineQueue*                   CurrentQueue;                                      // 0x48(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3D0[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineQueueEngineSubsystem* GetDefaultObj();

	void SetConfiguration(class UClass* InProgressWidgetClass, bool bRenderPlayerViewport);
	void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
	class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);
	void RenderJob(class UMoviePipelineExecutorJob* InJob);
	bool IsRendering();
	class UMoviePipelineQueue* GetQueue();
	class UMoviePipelineExecutorBase* GetActiveExecutor();
	class UMoviePipelineExecutorJob* AllocateJob(class ULevelSequence* InSequence);
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
	uint8                                        Pad_3DA[0x48];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineVideoOutputBase* GetDefaultObj();

};

}


