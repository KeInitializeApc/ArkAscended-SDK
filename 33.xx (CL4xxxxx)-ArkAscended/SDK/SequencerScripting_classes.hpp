#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class SequencerScripting.MovieSceneScriptingKey
class UMovieSceneScriptingKey : public UObject
{
public:
	uint8                                        Pad_676[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_686[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceKey* GetDefaultObj();

	struct FMovieSceneObjectBindingID SetValue();
	enum class ESequenceTimeUnit SetTime();
	struct FMovieSceneObjectBindingID GetValue();
	struct FFrameTime GetTime();
};

// 0x8 (0x30 - 0x28)
// Class SequencerScripting.MovieSceneScriptingChannel
class UMovieSceneScriptingChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneScriptingChannel* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_6A4[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceChannel* GetDefaultObj();

	struct FMovieSceneObjectBindingID SetDefault();
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	struct FMovieSceneObjectBindingID GetDefault();
	class UMovieSceneScriptingActorReferenceKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingBoolKey
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_6AB[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolKey* GetDefaultObj();

	bool SetValue();
	enum class ESequenceTimeUnit SetTime();
	bool GetValue();
	struct FFrameTime GetTime();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingBoolChannel
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_6BC[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolChannel* GetDefaultObj();

	bool SetDefault();
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	bool GetDefault();
	TArray<bool> EvaluateKeys(const struct FSequencerScriptingRange& Range);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingBoolKey* AddKey(const struct FFrameNumber& InTime, bool NewValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingByteKey
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_6C5[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteKey* GetDefaultObj();

	uint8 SetValue();
	enum class ESequenceTimeUnit SetTime();
	uint8 GetValue();
	struct FFrameTime GetTime();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingByteChannel
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_6CB[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteChannel* GetDefaultObj();

	uint8 SetDefault();
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	uint8 GetDefault();
	class UMovieSceneScriptingByteKey* AddKey(const struct FFrameNumber& InTime, uint8 NewValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleKey
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_6DD[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleKey* GetDefaultObj();

	double SetValue();
	enum class ESequenceTimeUnit SetTime();
	enum class ERichCurveTangentWeightMode SetTangentWeightMode();
	enum class ERichCurveTangentMode SetTangentMode();
	float SetLeaveTangentWeight();
	float SetLeaveTangent();
	enum class ERichCurveInterpMode SetInterpolationMode();
	float SetArriveTangentWeight();
	float SetArriveTangent();
	double GetValue();
	struct FFrameTime GetTime();
	enum class ERichCurveTangentWeightMode GetTangentWeightMode();
	enum class ERichCurveTangentMode GetTangentMode();
	float GetLeaveTangentWeight();
	float GetLeaveTangent();
	enum class ERichCurveInterpMode GetInterpolationMode();
	float GetArriveTangentWeight();
	float GetArriveTangent();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingDoubleChannel
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_6EB[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleChannel* GetDefaultObj();

	enum class ERichCurveExtrapolation SetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation SetPostInfinityExtrapolation();
	double SetDefault();
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	double GetDefault();
	TArray<double> EvaluateKeys(const struct FSequencerScriptingRange& Range);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingDoubleKey* AddKey(const struct FFrameNumber& InTime, double NewValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingEventKey
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_6F4[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventKey* GetDefaultObj();

	struct FMovieSceneEvent SetValue();
	enum class ESequenceTimeUnit SetTime();
	struct FMovieSceneEvent GetValue();
	struct FFrameTime GetTime();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingEventChannel
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_6FB[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventChannel* GetDefaultObj();

	void RemoveKey(class UMovieSceneScriptingKey* Key);
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class UMovieSceneScriptingEventKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue);
};

// 0x0 (0x40 - 0x40)
// Class SequencerScripting.MovieSceneScriptingFloatKey
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatKey* GetDefaultObj();

	float SetValue();
	enum class ESequenceTimeUnit SetTime();
	enum class ERichCurveTangentWeightMode SetTangentWeightMode();
	enum class ERichCurveTangentMode SetTangentMode();
	float SetLeaveTangentWeight();
	float SetLeaveTangent();
	enum class ERichCurveInterpMode SetInterpolationMode();
	float SetArriveTangentWeight();
	float SetArriveTangent();
	float GetValue();
	struct FFrameTime GetTime();
	enum class ERichCurveTangentWeightMode GetTangentWeightMode();
	enum class ERichCurveTangentMode GetTangentMode();
	float GetLeaveTangentWeight();
	float GetLeaveTangent();
	enum class ERichCurveInterpMode GetInterpolationMode();
	float GetArriveTangentWeight();
	float GetArriveTangent();
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActualFloatKey
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_71C[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActualFloatKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_720[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleAsFloatKey* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class SequencerScripting.MovieSceneScriptingFloatChannel
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_73A[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatChannel* GetDefaultObj();

	enum class ERichCurveExtrapolation SetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation SetPostInfinityExtrapolation();
	float SetDefault();
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	float GetDefault();
	TArray<float> EvaluateKeys(const struct FSequencerScriptingRange& Range);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingFloatKey* AddKey(const struct FFrameNumber& InTime, float NewValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingIntegerKey
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_745[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerKey* GetDefaultObj();

	int32 SetValue();
	enum class ESequenceTimeUnit SetTime();
	int32 GetValue();
	struct FFrameTime GetTime();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingIntegerChannel
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_752[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerChannel* GetDefaultObj();

	int32 SetDefault();
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	int32 GetDefault();
	class UMovieSceneScriptingIntegerKey* AddKey(const struct FFrameNumber& InTime, int32 NewValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingObjectPathKey
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_75E[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathKey* GetDefaultObj();

	class UObject* SetValue();
	enum class ESequenceTimeUnit SetTime();
	class UObject* GetValue();
	struct FFrameTime GetTime();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_766[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathChannel* GetDefaultObj();

	class UObject* SetDefault();
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class UObject* GetDefault();
	class UMovieSceneScriptingObjectPathKey* AddKey(const struct FFrameNumber& InTime, class UObject* NewValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingStringKey
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_76D[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringKey* GetDefaultObj();

	class FString SetValue();
	enum class ESequenceTimeUnit SetTime();
	class FString GetValue();
	struct FFrameTime GetTime();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingStringChannel
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_784[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringChannel* GetDefaultObj();

	class FString SetDefault();
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class FString GetDefault();
	class UMovieSceneScriptingStringKey* AddKey(const struct FFrameNumber& InTime, const class FString& NewValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneBindingExtensions
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBindingExtensions* GetDefaultObj();

	struct FMovieSceneObjectBindingID SetSpawnableBindingID();
	int32 SetSortingOrder();
	struct FMovieSceneBindingProxy SetParent();
	class FString SetName();
	class FText SetDisplayName();
	class UMovieSceneTrack* RemoveTrack();
	struct FMovieSceneBindingProxy Remove();
	struct FMovieSceneBindingProxy MoveBindingContents();
	bool IsValid();
	TArray<class UMovieSceneTrack*> GetTracks();
	int32 GetSortingOrder();
	class UClass* GetPossessedObjectClass();
	struct FMovieSceneBindingProxy GetParent();
	class UObject* GetObjectTemplate();
	class FString GetName();
	struct FGuid GetId();
	class FText GetDisplayName();
	TArray<struct FMovieSceneBindingProxy> GetChildPossessables();
	TArray<class UMovieSceneTrack*> FindTracksByType();
	TArray<class UMovieSceneTrack*> FindTracksByExactType();
	class UMovieSceneTrack* AddTrack();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneEventTrackExtensions
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEventTrackExtensions* GetDefaultObj();

	class UClass* GetBoundObjectPropertyClass();
	class UMovieSceneEventTriggerSection* AddEventTriggerSection();
	class UMovieSceneEventRepeaterSection* AddEventRepeaterSection();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFolderExtensions
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFolderExtensions* GetDefaultObj();

	bool SetFolderName();
	bool SetFolderColor();
	bool RemoveChildTrack();
	bool RemoveChildObjectBinding();
	bool RemoveChildMasterTrack();
	bool RemoveChildFolder();
	class FName GetFolderName();
	struct FColor GetFolderColor();
	TArray<class UMovieSceneTrack*> GetChildTracks();
	TArray<struct FMovieSceneBindingProxy> GetChildObjectBindings();
	TArray<class UMovieSceneTrack*> GetChildMasterTracks();
	TArray<class UMovieSceneFolder*> GetChildFolders();
	bool AddChildTrack();
	bool AddChildObjectBinding();
	bool AddChildMasterTrack();
	bool AddChildFolder();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneMaterialTrackExtensions
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMaterialTrackExtensions* GetDefaultObj();

	int32 SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track);
	int32 GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialTrackExtensions* GetDefaultObj();

	int32 SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track);
	int32 GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePropertyTrackExtensions
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePropertyTrackExtensions* GetDefaultObj();

	class FString SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track);
	class UClass* SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);
	class UEnum* SetByteTrackEnum(class UMovieSceneByteTrack* Track);
	class FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);
	class FString GetPropertyPath(class UMovieScenePropertyTrack* Track);
	class FName GetPropertyName(class UMovieScenePropertyTrack* Track);
	class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);
	class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSectionExtensions
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSectionExtensions* GetDefaultObj();

	class UMovieSceneSection* SetStartFrameSeconds(float StartTime);
	bool SetStartFrameBounded();
	class UMovieSceneSection* SetStartFrame(int32 StartFrame);
	class UMovieSceneSection* SetRangeSeconds(float StartTime, float EndTime);
	class UMovieSceneSection* SetRange(int32 StartFrame, int32 EndFrame);
	class UMovieSceneSection* SetEndFrameSeconds(float EndTime);
	bool SetEndFrameBounded();
	class UMovieSceneSection* SetEndFrame(int32 EndFrame);
	bool HasStartFrame();
	bool HasEndFrame();
	float GetStartFrameSeconds();
	int32 GetStartFrame();
	int32 GetParentSequenceFrame();
	float GetEndFrameSeconds();
	int32 GetEndFrame();
	TArray<class UMovieSceneScriptingChannel*> GetChannelsByType();
	TArray<class UMovieSceneScriptingChannel*> GetChannels();
	float GetAutoSizeStartFrameSeconds();
	int32 GetAutoSizeStartFrame();
	bool GetAutoSizeHasStartFrame();
	bool GetAutoSizeHasEndFrame();
	float GetAutoSizeEndFrameSeconds();
	int32 GetAutoSizeEndFrame();
	TArray<class UMovieSceneScriptingChannel*> GetAllChannels();
	TArray<class UMovieSceneScriptingChannel*> FindChannelsByType();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSequenceExtensions
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSequenceExtensions* GetDefaultObj();

	class UMovieSceneSequence* SortMarkedFrames();
	class UMovieSceneSequence* SetWorkRangeStart(float StartTimeInSeconds);
	class UMovieSceneSequence* SetWorkRangeEnd(float EndTimeInSeconds);
	class UMovieSceneSequence* SetViewRangeStart(float StartTimeInSeconds);
	class UMovieSceneSequence* SetViewRangeEnd(float EndTimeInSeconds);
	class UMovieSceneSequence* SetTickResolutionDirectly(const struct FFrameRate& TickResolution);
	class UMovieSceneSequence* SetTickResolution(const struct FFrameRate& TickResolution);
	class UMovieSceneSequence* SetReadOnly(bool bInReadOnly);
	class UMovieSceneSequence* SetPlaybackStartSeconds(float StartTime);
	class UMovieSceneSequence* SetPlaybackStart(int32 StartFrame);
	class UMovieSceneSequence* SetPlaybackEndSeconds(float EndTime);
	class UMovieSceneSequence* SetPlaybackEnd(int32 EndFrame);
	class UMovieSceneSequence* SetMarkedFrame(int32 InMarkIndex, const struct FFrameNumber& InFrameNumber);
	class UMovieSceneSequence* SetEvaluationType(enum class EMovieSceneEvaluationType InEvaluationType);
	class UMovieSceneSequence* SetDisplayRate(const struct FFrameRate& DisplayRate);
	class UMovieSceneSequence* SetClockSource(enum class EUpdateClockSource InClockSource);
	struct FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence* RootSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID);
	bool RemoveTrack(class UMovieSceneTrack* Track);
	class UMovieSceneFolder* RemoveRootFolderFromSequence();
	bool RemoveMasterTrack(class UMovieSceneTrack* Track);
	struct FSequencerScriptingRange MakeRangeSeconds(float StartTime);
	struct FSequencerScriptingRange MakeRange(int32 StartFrame);
	struct FMovieSceneObjectBindingID MakeBindingID();
	TArray<class UObject*> LocateBoundObjects();
	bool IsReadOnly();
	float GetWorkRangeStart();
	float GetWorkRangeEnd();
	float GetViewRangeStart();
	float GetViewRangeEnd();
	TArray<class UMovieSceneTrack*> GetTracks();
	struct FTimecode GetTimecodeSource();
	struct FFrameRate GetTickResolution();
	TArray<struct FMovieSceneBindingProxy> GetSpawnables();
	TArray<class UMovieSceneFolder*> GetRootFoldersInSequence();
	TArray<struct FMovieSceneBindingProxy> GetPossessables();
	struct FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence);
	float GetPlaybackStartSeconds();
	int32 GetPlaybackStart();
	struct FSequencerScriptingRange GetPlaybackRange();
	float GetPlaybackEndSeconds();
	int32 GetPlaybackEnd();
	class UMovieScene* GetMovieScene();
	TArray<class UMovieSceneTrack*> GetMasterTracks();
	TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames();
	enum class EMovieSceneEvaluationType GetEvaluationType();
	struct FFrameRate GetDisplayRate();
	enum class EUpdateClockSource GetClockSource();
	TArray<struct FMovieSceneBindingProxy> GetBindings();
	struct FMovieSceneObjectBindingID GetBindingID();
	TArray<class UMovieSceneTrack*> FindTracksByType();
	TArray<class UMovieSceneTrack*> FindTracksByExactType();
	int32 FindNextMarkedFrame(const struct FFrameNumber& InFrameNumber, bool bForward);
	TArray<class UMovieSceneTrack*> FindMasterTracksByType();
	TArray<class UMovieSceneTrack*> FindMasterTracksByExactType();
	int32 FindMarkedFrameByLabel(const class FString& InLabel);
	int32 FindMarkedFrameByFrameNumber(const struct FFrameNumber& InFrameNumber);
	struct FMovieSceneBindingProxy FindBindingByName(class FString* Name);
	struct FMovieSceneBindingProxy FindBindingById();
	class UMovieSceneSequence* DeleteMarkedFrames();
	class UMovieSceneSequence* DeleteMarkedFrame(int32 DeleteIndex);
	class UMovieSceneTrack* AddTrack();
	struct FMovieSceneBindingProxy AddSpawnableFromInstance();
	struct FMovieSceneBindingProxy AddSpawnableFromClass();
	class UMovieSceneFolder* AddRootFolderToSequence();
	struct FMovieSceneBindingProxy AddPossessable();
	class UMovieSceneTrack* AddMasterTrack();
	int32 AddMarkedFrame();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneTrackExtensions
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTrackExtensions* GetDefaultObj();

	int32 SetTrackRowDisplayName(class UMovieSceneTrack* Track);
	int32 SetSortingOrder(class UMovieSceneTrack* Track);
	class UMovieSceneSection* SetSectionToKey(class UMovieSceneTrack* Track);
	class FText SetDisplayName(class UMovieSceneTrack* Track);
	void SetColorTint(class UMovieSceneTrack* Track, const struct FColor& ColorTint);
	class UMovieSceneSection* RemoveSection(class UMovieSceneTrack* Track);
	class FText GetTrackRowDisplayName(class UMovieSceneTrack* Track);
	int32 GetSortingOrder(class UMovieSceneTrack* Track);
	class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);
	TArray<class UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);
	class FText GetDisplayName(class UMovieSceneTrack* Track);
	struct FColor GetColorTint(class UMovieSceneTrack* Track);
	class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorTrackExtensions* GetDefaultObj();

	void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32 InNumChannelsUsed);
	int32 GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorTrackExtensions* GetDefaultObj();

	void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32 InNumChannelsUsed);
	int32 GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.SequencerScriptingRangeExtensions
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencerScriptingRangeExtensions* GetDefaultObj();

	void SetStartSeconds(const struct FSequencerScriptingRange& Range, float* Start);
	void SetStartFrame(const struct FSequencerScriptingRange& Range, int32* Start);
	void SetEndSeconds(const struct FSequencerScriptingRange& Range, float End);
	void SetEndFrame(const struct FSequencerScriptingRange& Range, int32 End);
	void RemoveStart(const struct FSequencerScriptingRange& Range);
	void RemoveEnd(const struct FSequencerScriptingRange& Range);
	bool HasStart(const struct FSequencerScriptingRange& Range);
	bool HasEnd(const struct FSequencerScriptingRange& Range);
	float GetStartSeconds(const struct FSequencerScriptingRange& Range);
	int32 GetStartFrame(const struct FSequencerScriptingRange& Range);
	float GetEndSeconds(const struct FSequencerScriptingRange& Range);
	int32 GetEndFrame(const struct FSequencerScriptingRange& Range);
};

}


