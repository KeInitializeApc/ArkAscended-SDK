#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public UObject
{
public:
	uint8                                        Pad_1BD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 Signature;                                         // 0x2C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BF[0x1C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSignedObject* GetDefaultObj();

};

// 0x98 (0xF0 - 0x58)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions         EvalOptions;                                       // 0x58(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D8[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneEasingSettings             Easing;                                            // 0x60(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FMovieSceneFrameRange                 SectionRange;                                      // 0x98(0x10)(BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          PreRollFrames;                                     // 0xA8(0x4)(ExportObject, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          PostRollFrames;                                    // 0xAC(0x4)(Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	int32                                        RowIndex;                                          // 0xB0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	int32                                        OverlapPriority;                                   // 0xB4(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10xB8(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_F : 6;                                      // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1D9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartTime;                                         // 0xBC(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0xC0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PrerollTime;                                       // 0xC4(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PostrollTime;                                      // 0xC8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x1, PropSize: 0x10xCC(0x1)(Edit, BlueprintVisible, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_10 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1DB[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bSupportsInfiniteRange;                            // 0xD0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	struct FOptionalMovieSceneBlendType          BlendType;                                         // 0xD1(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1DC[0x1D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSection* GetDefaultObj();

	void SetRowIndex(int32* NewRowIndex);
	void SetPreRollFrames(int32* InPreRollFrames);
	void SetPostRollFrames(int32* InPostRollFrames);
	int32 SetOverlapPriority();
	void SetIsLocked(bool* bInIsLocked);
	void SetIsActive(bool* bInIsActive);
	void SetCompletionMode(enum class EMovieSceneCompletionMode* InCompletionMode);
	void SetColorTint(struct FColor* InColorTint);
	void SetBlendType(enum class EMovieSceneBlendType* InBlendType);
	bool IsLocked();
	bool IsActive();
	int32 GetRowIndex();
	int32 GetPreRollFrames();
	int32 GetPostRollFrames();
	int32 GetOverlapPriority();
	enum class EMovieSceneCompletionMode GetCompletionMode();
	struct FColor GetColorTint();
	struct FOptionalMovieSceneBlendType GetBlendType();
};

// 0x40 (0x98 - 0x58)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions           EvalOptions;                                       // 0x58(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DF[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsEvalDisabled;                                   // 0x5D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E0[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                RowsDisabled;                                      // 0x60(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E1[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 EvaluationFieldGuid;                               // 0x74(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E2[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneTrackEvaluationField       EvaluationField;                                   // 0x88(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneTrack* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class MovieScene.MovieSceneNameableTrack
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNameableTrack* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*               CompiledData;                                      // 0x58(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EMovieSceneCompletionMode         DefaultCompletionMode;                             // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	bool                                         bParentContextsAreSignificant;                     // 0x61(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bPlayableDirectly;                                 // 0x62(0x1)(Edit, ExportObject, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMovieSceneSequenceFlags          SequenceFlags;                                     // 0x63(0x1)(Edit, EditFixedSize, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E9[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSequence* GetDefaultObj();

	struct FMovieSceneTimecodeSource GetEarliestTimecodeSource();
	TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(class FName InBindingName);
	struct FMovieSceneObjectBindingID FindBindingByTag(class FName InBindingName);
};

// 0x18 (0x40 - 0x28)
// Class MovieScene.MovieSceneEntitySystem
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x28(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneEntitySystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneEntityInstantiatorSystem
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEntityInstantiatorSystem* GetDefaultObj();

};

// 0x6D0 (0x6F8 - 0x28)
// Class MovieScene.MovieSceneEntitySystemLinker
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	uint8                                        Pad_1ED[0x278];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneEntitySystemGraph          SystemGraph;                                       // 0x2A0(0x150)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EE[0x308];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneEntitySystemLinker* GetDefaultObj();

};

// 0x48 (0x138 - 0xF0)
// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1F3[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSectionParameters          Parameters;                                        // 0xF8(0x24)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartOffset;                                       // 0x11C(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeScale;                                         // 0x120(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        PrerollTime;                                       // 0x124(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        NetworkMask;                                       // 0x128(0x1)(ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneSequence*                   SubSequence;                                       // 0x130(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneSubSection* GetDefaultObj();

	void SetSequence(class UMovieSceneSequence** Sequence);
	class UMovieSceneSequence* GetSequence();
};

// 0x4A8 (0x4D0 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_23F[0x200];                                    // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IMovieSceneSequencePlayerObserver> Observer;                                          // 0x228(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlay;                                            // 0x238(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlayReverse;                                     // 0x248(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnStop;                                            // 0x258(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPause;                                           // 0x268(0x10)(ConstParm, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x278(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieScenePlayerStatus           Status;                                            // 0x288(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_240[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bReversePlayback : 1;                              // Mask: 0x1, PropSize: 0x10x28C(0x1)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_12 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_241[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneSequence*                   Sequence;                                          // 0x290(0x8)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FFrameNumber                          StartTime;                                         // 0x298(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DurationFrames;                                    // 0x29C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        DurationSubFrames;                                 // 0x2A0(0x4)(BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        CurrentNumLoops;                                   // 0x2A4(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x2A8(0x20)(Edit, ExportObject, OutParm, InstancedReference, SubobjectReference)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2C8(0x88)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_242[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequenceReplProperties     NetSyncProps;                                      // 0x3E0(0x10)(Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                                    // 0x3F0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMovieSceneSequenceTickManager*        TickManager;                                       // 0x400(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_243[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSequencePlayer* GetDefaultObj();

	void StopAtCurrentTime();
	void Stop();
	void SetWeight(double InWeight);
	float SetTimeRange(float StartTime);
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	struct FFrameRate SetFrameRate();
	int32 SetFrameRange(float SubFrames);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame();
	struct FFrameTime ScrubToFrame();
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_OnFinishPlaybackEvent(const struct FFrameTime& StoppedTime);
	enum class EUpdatePositionMethod RPC_ExplicitServerUpdateEvent(const struct FFrameTime& RelevantTime);
	void RestoreState();
	void RemoveWeight();
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame();
	struct FFrameTime PlayToFrame();
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams, const struct FMovieSceneSequencePlayToParams& PlayToParams);
	void PlayReverse();
	int32 PlayLooping();
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	bool JumpToMarkedFrame();
	struct FFrameTime JumpToFrame();
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	class FString GetSequenceName(bool bAddClientInfo);
	class UMovieSceneSequence* GetSequence();
	float GetPlayRate();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	struct FFrameRate GetFrameRate();
	int32 GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects();
	void ChangePlaybackDirection();
};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneSubTrack* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBlenderSystemSupport
class IMovieSceneBlenderSystemSupport : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneBlenderSystemSupport* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneChannelOverrideProvider
class IMovieSceneChannelOverrideProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneChannelOverrideProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneDeterminismSource
class IMovieSceneDeterminismSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneDeterminismSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEvaluationHook
class IMovieSceneEvaluationHook : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEvaluationHook* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePlaybackClient
class IMovieScenePlaybackClient : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieScenePlaybackClient* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneSequencePlayerObserver
class IMovieSceneSequencePlayerObserver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneSequencePlayerObserver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOwnerInterface
class IMovieSceneBindingOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneBindingOwnerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneCachedTrack
class IMovieSceneCachedTrack : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCachedTrack* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEasingFunction
class IMovieSceneEasingFunction : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEasingFunction* GetDefaultObj();

	float OnEvaluate(float Interp);
};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneKeyProxy
class IMovieSceneKeyProxy : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneKeyProxy* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManagerClient
class IMovieSceneSequenceTickManagerClient : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneSequenceTickManagerClient* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieScene.MovieSceneChannelOverrideContainer
class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneChannelOverrideContainer* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
class UMovieSceneSectionChannelOverrideRegistry : public UObject
{
public:
	TMap<class FName, class UMovieSceneChannelOverrideContainer*> Overrides;                                         // 0x28(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UMovieSceneSectionChannelOverrideRegistry* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneTrackTemplateProducer
class IMovieSceneTrackTemplateProducer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneTrackTemplateProducer* GetDefaultObj();

};

// 0x3D0 (0x3F8 - 0x28)
// Class MovieScene.MovieSceneCompiledData
class UMovieSceneCompiledData : public UObject
{
public:
	struct FMovieSceneEvaluationTemplate         EvaluationTemplate;                                // 0x28(0x160)(Edit, BlueprintVisible, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneSequenceHierarchy          Hierarchy;                                         // 0x188(0x118)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	struct FMovieSceneEntityComponentField       EntityComponentField;                              // 0x2A0(0xF0)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneEvaluationField            TrackTemplateField;                                // 0x390(0x30)(BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FFrameTime>                    DeterminismFences;                                 // 0x3C0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 CompiledSignature;                                 // 0x3D0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 CompilerVersion;                                   // 0x3E0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;                                   // 0x3F0(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask;                                     // 0x3F1(0x1)(ConstParm, EditFixedSize, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EMovieSceneSequenceFlags          AccumulatedFlags;                                  // 0x3F2(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_263[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCompiledData* GetDefaultObj();

};

// 0x208 (0x230 - 0x28)
// Class MovieScene.MovieSceneCompiledDataManager
class UMovieSceneCompiledDataManager : public UObject
{
public:
	uint8                                        Pad_268[0xB0];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<int32, struct FMovieSceneSequenceHierarchy> Hierarchies;                                       // 0xD8(0x50)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<int32, struct FMovieSceneEvaluationTemplate> TrackTemplates;                                    // 0x128(0x50)(Edit, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<int32, struct FMovieSceneEvaluationField> TrackTemplateFields;                               // 0x178(0x50)(Edit, ExportObject, Net, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<int32, struct FMovieSceneEntityComponentField> EntityComponentFields;                             // 0x1C8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_26B[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCompiledDataManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEntityProvider
class IMovieSceneEntityProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEntityProvider* GetDefaultObj();

};

// 0x28 (0x68 - 0x40)
// Class MovieScene.MovieSceneBlenderSystem
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_271[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneBlenderSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneGenericBoundObjectInstantiator* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBoundSceneComponentInstantiator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneValueDecomposer
class IMovieSceneValueDecomposer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneValueDecomposer* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class MovieScene.MovieSceneEvalTimeSystem
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_278[0x70];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneEvalTimeSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class MovieScene.MovieSceneEvaluationHookSystem
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
public:
	TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;                       // 0x40(0x50)(Edit, ConstParm, Net, EditFixedSize, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneEvaluationHookSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
class IMovieScenePreAnimatedStateSystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieScenePreAnimatedStateSystemInterface* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCachePreAnimatedStateSystem* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_282[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneRestorePreAnimatedStateSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneRootInstantiatorSystem
class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneRootInstantiatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneSpawnablesSystem
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSpawnablesSystem* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class MovieScene.MovieSceneTrackInstance
class UMovieSceneTrackInstance : public UObject
{
public:
	class UObject*                               AnimatedObject;                                    // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsRootTrackInstance;                              // 0x30(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_288[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneEntitySystemLinker*         PrivateLinker;                                     // 0x38(0x8)(Edit, ConstParm, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneTrackInstanceInput> Inputs;                                            // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstance* GetDefaultObj();

};

// 0xB0 (0xF0 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceInstantiator
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_28D[0xB0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstanceInstantiator* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceSystem
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*  Instantiator;                                      // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstanceSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneCustomClockSource
class IMovieSceneCustomClockSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCustomClockSource* GetDefaultObj();

	void OnTick(float* DeltaSeconds, float* InPlayRate);
	void OnStopPlaying(struct FQualifiedFrameTime* InStopTime);
	void OnStartPlaying(struct FQualifiedFrameTime* InStartTime);
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime* InCurrentTime, float* InPlayRate);
};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	uint8                                        Pad_2A6[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EMovieSceneBuiltInEasing          Type;                                              // 0x30(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_2A7[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneBuiltInEasingFunction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	uint8                                        Pad_2AD[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           Curve;                                             // 0x30(0x8)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config)

	static class UClass* StaticClass();
	static class UMovieSceneEasingExternalCurve* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.NodeAndChannelMappings
class INodeAndChannelMappings : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INodeAndChannelMappings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneNodeGroup
class UMovieSceneNodeGroup : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNodeGroup* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneNodeGroupCollection
class UMovieSceneNodeGroupCollection : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNodeGroupCollection* GetDefaultObj();

};

// 0x108 (0x160 - 0x58)
// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject
{
public:
	uint8                                        Pad_2B4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMovieSceneSpawnable>          Spawnables;                                        // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FMovieScenePossessable>        Possessables;                                      // 0x70(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneBinding>            ObjectBindings;                                    // 0x80(0x10)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                     // 0x90(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0xE0(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0xF0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	struct FMovieSceneFrameRange                 SelectionRange;                                    // 0xF8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneFrameRange                 PlaybackRange;                                     // 0x108(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFrameRate                            TickResolution;                                    // 0x118(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FFrameRate                            DisplayRate;                                       // 0x120(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	enum class EMovieSceneEvaluationType         EvaluationType;                                    // 0x128(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EUpdateClockSource                ClockSource;                                       // 0x129(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BB[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       CustomClockSourcePath;                             // 0x130(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneMarkedFrame>        MarkedFrames;                                      // 0x150(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScene* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C0[0x58];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneBindingOverrides* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	uint8                                        Pad_2C3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  FolderName;                                        // 0x2C(0x8)(ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x38(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneTrack*>              ChildTracks;                                       // 0x48(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x58(0x10)(BlueprintVisible, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C7[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneFolder* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManager
class UMovieSceneSequenceTickManager : public UObject
{
public:
	uint8                                        Pad_2CB[0x70];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSequenceTickManager* GetDefaultObj();

};

// 0x108 (0x1F8 - 0xF0)
// Class MovieScene.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                         DefaultValue;                                      // 0xF0(0x1)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2CD[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneBoolChannel                BoolCurve;                                         // 0xF8(0x100)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneBoolSection* GetDefaultObj();

};

// 0x18 (0x108 - 0xF0)
// Class MovieScene.MovieSceneHookSection
class UMovieSceneHookSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_2D2[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bRequiresRangedHook : 1;                           // Mask: 0x1, PropSize: 0x10x100(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bRequiresTriggerHooks : 1;                         // Mask: 0x2, PropSize: 0x10x100(0x1)(Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D3[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneHookSection* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class MovieScene.MovieSceneSpawnSection
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	uint8                                        Pad_2D8[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSpawnSection* GetDefaultObj();

};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.TestMovieSceneTrack
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_2DD[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bHighPassFilter;                                   // 0xA0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTestMovieSceneTrack* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MovieScene.TestMovieSceneSection
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass();
	static class UTestMovieSceneSection* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MovieScene.TestMovieSceneSequence
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UTestMovieSceneSequence* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieScene.TestMovieSceneSubTrack
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTestMovieSceneSubTrack* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MovieScene.TestMovieSceneSubSection
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:

	static class UClass* StaticClass();
	static class UTestMovieSceneSubSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.TestMovieSceneEvalHookTrack
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTestMovieSceneEvalHookTrack* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class MovieScene.TestMovieSceneEvalHookSection
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:
	uint8                                        Pad_2F5[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestMovieSceneEvalHookSection* GetDefaultObj();

};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 ObjectGuid;                                        // 0xA8(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneSpawnTrack* GetDefaultObj();

};

}


