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
	uint8                                        Pad_1FF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 Signature;                                         // 0x2C(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_200[0x1C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSignedObject* GetDefaultObj();

};

// 0x98 (0xF0 - 0x58)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions         EvalOptions;                                       // 0x58(0x2)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_21D[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneEasingSettings             Easing;                                            // 0x60(0x38)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FMovieSceneFrameRange                 SectionRange;                                      // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FFrameNumber                          PreRollFrames;                                     // 0xA8(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FFrameNumber                          PostRollFrames;                                    // 0xAC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	int32                                        RowIndex;                                          // 0xB0(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	int32                                        OverlapPriority;                                   // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10xB8(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        BitPad_16 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_21E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartTime;                                         // 0xBC(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0xC0(0x4)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PrerollTime;                                       // 0xC4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PostrollTime;                                      // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x1, PropSize: 0x10xCC(0x1)(ConstParm, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        BitPad_17 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_220[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bSupportsInfiniteRange;                            // 0xD0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FOptionalMovieSceneBlendType          BlendType;                                         // 0xD1(0x2)(BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_221[0x1D];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSection* GetDefaultObj();

	void SetRowIndex(int32* NewRowIndex);
	void SetPreRollFrames(int32* InPreRollFrames);
	void SetPostRollFrames(int32 InPostRollFrames);
	void SetOverlapPriority(int32* NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode);
	void SetColorTint(const struct FColor& InColorTint);
	void SetBlendType(enum class EMovieSceneBlendType InBlendType);
	void IsLocked(bool ReturnValue);
	void IsActive(bool ReturnValue);
	void GetRowIndex(int32 ReturnValue);
	void GetPreRollFrames(int32 ReturnValue);
	void GetPostRollFrames(int32 ReturnValue);
	void GetOverlapPriority(int32 ReturnValue);
	void GetCompletionMode(enum class EMovieSceneCompletionMode ReturnValue);
	void GetColorTint(const struct FColor& ReturnValue);
	void GetBlendType(const struct FOptionalMovieSceneBlendType& ReturnValue);
};

// 0x40 (0x98 - 0x58)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions           EvalOptions;                                       // 0x58(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_228[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bIsEvalDisabled;                                   // 0x5D(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_229[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                RowsDisabled;                                      // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 EvaluationFieldGuid;                               // 0x74(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_22B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneTrackEvaluationField       EvaluationField;                                   // 0x88(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)

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
	class UMovieSceneCompiledData*               CompiledData;                                      // 0x58(0x8)(ExportObject, BlueprintReadOnly, Transient, InstancedReference, SubobjectReference)
	enum class EMovieSceneCompletionMode         DefaultCompletionMode;                             // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bParentContextsAreSignificant;                     // 0x61(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	bool                                         bPlayableDirectly;                                 // 0x62(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	enum class EMovieSceneSequenceFlags          SequenceFlags;                                     // 0x63(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_232[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSequence* GetDefaultObj();

	void GetEarliestTimecodeSource(const struct FMovieSceneTimecodeSource& ReturnValue);
	void FindBindingsByTag(class FName* InBindingName, const TArray<struct FMovieSceneObjectBindingID>& ReturnValue);
	void FindBindingByTag(class FName* InBindingName, const struct FMovieSceneObjectBindingID& ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class MovieScene.MovieSceneEntitySystem
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_233[0x10];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_235[0x278];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneEntitySystemGraph          SystemGraph;                                       // 0x2A0(0x150)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_236[0x308];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneEntitySystemLinker* GetDefaultObj();

};

// 0x48 (0x138 - 0xF0)
// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_239[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSectionParameters          Parameters;                                        // 0xF8(0x24)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartOffset;                                       // 0x11C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeScale;                                         // 0x120(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        PrerollTime;                                       // 0x124(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        NetworkMask;                                       // 0x128(0x1)(Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_23A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneSequence*                   SubSequence;                                       // 0x130(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneSubSection* GetDefaultObj();

	void SetSequence(class UMovieSceneSequence* Sequence);
	void GetSequence(class UMovieSceneSequence* ReturnValue);
};

// 0x4A8 (0x4D0 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_2B2[0x200];                                    // Fixing Size After Last Property  > TateDumper <
	TScriptInterface<class IMovieSceneSequencePlayerObserver> Observer;                                          // 0x228(0x10)(ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlay;                                            // 0x238(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlayReverse;                                     // 0x248(0x10)(Edit, ExportObject, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnStop;                                            // 0x258(0x10)(Edit, BlueprintVisible, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPause;                                           // 0x268(0x10)(OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x278(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieScenePlayerStatus           Status;                                            // 0x288(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2B7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bReversePlayback : 1;                              // Mask: 0x1, PropSize: 0x10x28C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_18 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2B9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneSequence*                   Sequence;                                          // 0x290(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FFrameNumber                          StartTime;                                         // 0x298(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DurationFrames;                                    // 0x29C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        DurationSubFrames;                                 // 0x2A0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        CurrentNumLoops;                                   // 0x2A4(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x2A8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2C8(0x88)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BE[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequenceReplProperties     NetSyncProps;                                      // 0x3E0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                                    // 0x3F0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UMovieSceneSequenceTickManager*        TickManager;                                       // 0x400(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C1[0xC8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSequencePlayer* GetDefaultObj();

	void StopAtCurrentTime();
	void Stop();
	double SetWeight();
	float SetTimeRange();
	void SetPlayRate(float* PlayRate);
	void SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams);
	struct FFrameRate SetFrameRate();
	int32 SetFrameRange(float SubFrames);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	class FString ScrubToMarkedFrame(bool ReturnValue);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_OnFinishPlaybackEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void RestoreState();
	void RemoveWeight();
	void PlayToSeconds(float TimeInSeconds);
	class FString PlayToMarkedFrame(bool ReturnValue);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams, const struct FMovieSceneSequencePlayToParams& PlayToParams);
	void PlayReverse();
	int32 PlayLooping();
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	class FString JumpToMarkedFrame(bool ReturnValue);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	void IsReversed(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsPaused(bool ReturnValue);
	void GoToEndAndStop();
	void GetStartTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetSequenceName(bool bAddClientInfo, const class FString& ReturnValue);
	void GetSequence(class UMovieSceneSequence* ReturnValue);
	void GetPlayRate(float ReturnValue);
	void GetObjectBindings(class UObject* InObject, const TArray<struct FMovieSceneObjectBindingID>& ReturnValue);
	void GetFrameRate(const struct FFrameRate& ReturnValue);
	void GetFrameDuration(int32 ReturnValue);
	void GetEndTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetDuration(const struct FQualifiedFrameTime& ReturnValue);
	void GetDisableCameraCuts(bool ReturnValue);
	void GetCurrentTime(const struct FQualifiedFrameTime& ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundObjects(const TArray<class UObject*>& ReturnValue);
	void ChangePlaybackDirection();
};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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

	float OnEvaluate(float ReturnValue);
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
	TMap<class FName, class UMovieSceneChannelOverrideContainer*> Overrides;                                         // 0x28(0x50)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

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
	struct FMovieSceneEvaluationTemplate         EvaluationTemplate;                                // 0x28(0x160)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneSequenceHierarchy          Hierarchy;                                         // 0x188(0x118)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FMovieSceneEntityComponentField       EntityComponentField;                              // 0x2A0(0xF0)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneEvaluationField            TrackTemplateField;                                // 0x390(0x30)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FFrameTime>                    DeterminismFences;                                 // 0x3C0(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 CompiledSignature;                                 // 0x3D0(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FGuid                                 CompilerVersion;                                   // 0x3E0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;                                   // 0x3F0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask;                                     // 0x3F1(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EMovieSceneSequenceFlags          AccumulatedFlags;                                  // 0x3F2(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EA[0x5];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCompiledData* GetDefaultObj();

};

// 0x208 (0x230 - 0x28)
// Class MovieScene.MovieSceneCompiledDataManager
class UMovieSceneCompiledDataManager : public UObject
{
public:
	uint8                                        Pad_2EC[0xB0];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<int32, struct FMovieSceneSequenceHierarchy> Hierarchies;                                       // 0xD8(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FMovieSceneEvaluationTemplate> TrackTemplates;                                    // 0x128(0x50)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FMovieSceneEvaluationField> TrackTemplateFields;                               // 0x178(0x50)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TMap<int32, struct FMovieSceneEntityComponentField> EntityComponentFields;                             // 0x1C8(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F0[0x18];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2F3[0x28];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2FD[0x70];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneEvalTimeSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class MovieScene.MovieSceneEvaluationHookSystem
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
public:
	TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;                       // 0x40(0x50)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_306[0x10];                                     // Fixing Size Of Struct > TateDumper <

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
	class UObject*                               AnimatedObject;                                    // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsRootTrackInstance;                              // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_30C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneEntitySystemLinker*         PrivateLinker;                                     // 0x38(0x8)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneTrackInstanceInput> Inputs;                                            // 0x40(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstance* GetDefaultObj();

};

// 0xB0 (0xF0 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceInstantiator
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_30E[0xB0];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstanceInstantiator* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceSystem
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*  Instantiator;                                      // 0x40(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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

	float OnTick();
	struct FQualifiedFrameTime OnStopPlaying();
	struct FQualifiedFrameTime OnStartPlaying();
	float OnRequestCurrentTime(const struct FFrameTime& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	uint8                                        Pad_31B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EMovieSceneBuiltInEasing          Type;                                              // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_31C[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneBuiltInEasingFunction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	uint8                                        Pad_31D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           Curve;                                             // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config)

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
	uint8                                        Pad_322[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMovieSceneSpawnable>          Spawnables;                                        // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMovieScenePossessable>        Possessables;                                      // 0x70(0x10)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneBinding>            ObjectBindings;                                    // 0x80(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TMap<class FName, struct FMovieSceneObjectBindingIDs> BindingGroups;                                     // 0x90(0x50)(ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0xF0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FMovieSceneFrameRange                 SelectionRange;                                    // 0xF8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneFrameRange                 PlaybackRange;                                     // 0x108(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFrameRate                            TickResolution;                                    // 0x118(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FFrameRate                            DisplayRate;                                       // 0x120(0x8)(ConstParm, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	enum class EMovieSceneEvaluationType         EvaluationType;                                    // 0x128(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EUpdateClockSource                ClockSource;                                       // 0x129(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_328[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       CustomClockSourcePath;                             // 0x130(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneMarkedFrame>        MarkedFrames;                                      // 0x150(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScene* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x28(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_329[0x58];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneBindingOverrides* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	uint8                                        Pad_32D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  FolderName;                                        // 0x2C(0x8)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_32E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x38(0x10)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneTrack*>              ChildTracks;                                       // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x58(0x10)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_331[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneFolder* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManager
class UMovieSceneSequenceTickManager : public UObject
{
public:
	uint8                                        Pad_332[0x70];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSequenceTickManager* GetDefaultObj();

};

// 0x108 (0x1F8 - 0xF0)
// Class MovieScene.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                         DefaultValue;                                      // 0xF0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_333[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneBoolChannel                BoolCurve;                                         // 0xF8(0x100)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneBoolSection* GetDefaultObj();

};

// 0x18 (0x108 - 0xF0)
// Class MovieScene.MovieSceneHookSection
class UMovieSceneHookSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_335[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bRequiresRangedHook : 1;                           // Mask: 0x1, PropSize: 0x10x100(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bRequiresTriggerHooks : 1;                         // Mask: 0x2, PropSize: 0x10x100(0x1)(ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_337[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneHookSection* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class MovieScene.MovieSceneSpawnSection
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	uint8                                        Pad_339[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSpawnSection* GetDefaultObj();

};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.TestMovieSceneTrack
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_33A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bHighPassFilter;                                   // 0xA0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_33B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UTestMovieSceneSequence* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieScene.TestMovieSceneSubTrack
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTestMovieSceneEvalHookTrack* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class MovieScene.TestMovieSceneEvalHookSection
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:
	uint8                                        Pad_342[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTestMovieSceneEvalHookSection* GetDefaultObj();

};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 ObjectGuid;                                        // 0xA8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneSpawnTrack* GetDefaultObj();

};

}


