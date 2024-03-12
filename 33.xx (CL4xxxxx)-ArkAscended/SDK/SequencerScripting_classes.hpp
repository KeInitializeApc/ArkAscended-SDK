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
	uint8                                        Pad_304[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_31A[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceKey* GetDefaultObj();

	void SetValue(struct FMovieSceneObjectBindingID* InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	struct FMovieSceneObjectBindingID GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
};

// 0x8 (0x30 - 0x28)
// Class SequencerScripting.MovieSceneScriptingChannel
class UMovieSceneScriptingChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneScriptingChannel* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_342[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceChannel* GetDefaultObj();

	void SetDefault(struct FMovieSceneObjectBindingID* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	struct FMovieSceneObjectBindingID GetDefault();
	class UMovieSceneScriptingActorReferenceKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue, enum class ESequenceTimeUnit* TimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingBoolKey
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_358[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolKey* GetDefaultObj();

	void SetValue(bool* InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	bool GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingBoolChannel
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_38B[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolChannel* GetDefaultObj();

	void SetDefault(bool* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	bool GetDefault();
	TArray<bool> EvaluateKeys();
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingBoolKey* AddKey(const struct FFrameNumber& InTime, bool NewValue, enum class ESequenceTimeUnit* TimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingByteKey
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_3A1[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteKey* GetDefaultObj();

	void SetValue(uint8* InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	uint8 GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingByteChannel
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_3BD[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteChannel* GetDefaultObj();

	void SetDefault(uint8* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	uint8 GetDefault();
	class UMovieSceneScriptingByteKey* AddKey(const struct FFrameNumber& InTime, uint8 NewValue, enum class ESequenceTimeUnit* TimeUnit, enum class EMovieSceneKeyInterpolation* InInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleKey
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_40E[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleKey* GetDefaultObj();

	void SetValue(double* InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode* InNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode* InNewValue);
	void SetLeaveTangentWeight(float* InNewValue);
	void SetLeaveTangent(float* InNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode* InNewValue);
	void SetArriveTangentWeight(float* InNewValue);
	void SetArriveTangent(float* InNewValue);
	double GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
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
	uint8                                        Pad_44B[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleChannel* GetDefaultObj();

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation* InExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation* InExtrapolation);
	void SetDefault(double* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	double GetDefault();
	TArray<double> EvaluateKeys();
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingDoubleKey* AddKey(const struct FFrameNumber& InTime, double NewValue, enum class ESequenceTimeUnit* TimeUnit, enum class EMovieSceneKeyInterpolation* InInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingEventKey
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_467[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventKey* GetDefaultObj();

	void SetValue(struct FMovieSceneEvent* InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	struct FMovieSceneEvent GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingEventChannel
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_481[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventChannel* GetDefaultObj();

	void RemoveKey(class UMovieSceneScriptingKey* Key);
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class UMovieSceneScriptingEventKey* AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, enum class ESequenceTimeUnit* TimeUnit);
};

// 0x0 (0x40 - 0x40)
// Class SequencerScripting.MovieSceneScriptingFloatKey
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatKey* GetDefaultObj();

	void SetValue(float* InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode* InNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode* InNewValue);
	void SetLeaveTangentWeight(float* InNewValue);
	void SetLeaveTangent(float* InNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode* InNewValue);
	void SetArriveTangentWeight(float* InNewValue);
	void SetArriveTangent(float* InNewValue);
	float GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
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
	uint8                                        Pad_4D2[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActualFloatKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_4D4[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleAsFloatKey* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class SequencerScripting.MovieSceneScriptingFloatChannel
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_511[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatChannel* GetDefaultObj();

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation* InExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation* InExtrapolation);
	void SetDefault(float* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	float GetDefault();
	TArray<float> EvaluateKeys();
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingFloatKey* AddKey(const struct FFrameNumber& InTime, float NewValue, enum class ESequenceTimeUnit* TimeUnit, enum class EMovieSceneKeyInterpolation* InInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingIntegerKey
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_528[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerKey* GetDefaultObj();

	void SetValue(int32* InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	int32 GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingIntegerChannel
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_539[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerChannel* GetDefaultObj();

	void SetDefault(int32* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	int32 GetDefault();
	class UMovieSceneScriptingIntegerKey* AddKey(const struct FFrameNumber& InTime, int32 NewValue, enum class ESequenceTimeUnit* TimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingObjectPathKey
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_546[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathKey* GetDefaultObj();

	void SetValue(class UObject** InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	class UObject* GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_560[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathChannel* GetDefaultObj();

	void SetDefault(class UObject** InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class UObject* GetDefault();
	class UMovieSceneScriptingObjectPathKey* AddKey(const struct FFrameNumber& InTime, class UObject* NewValue, enum class ESequenceTimeUnit* TimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingStringKey
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_56F[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringKey* GetDefaultObj();

	void SetValue(class FString* InNewValue);
	float SetTime(struct FFrameNumber* NewFrameNumber, enum class ESequenceTimeUnit* TimeUnit);
	class FString GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit* TimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingStringChannel
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_584[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringChannel* GetDefaultObj();

	void SetDefault(class FString* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class FString GetDefault();
	class UMovieSceneScriptingStringKey* AddKey(const struct FFrameNumber& InTime, const class FString& NewValue, enum class ESequenceTimeUnit* TimeUnit);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneBindingExtensions
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBindingExtensions* GetDefaultObj();

	void SetSpawnableBindingID(struct FMovieSceneBindingProxy* InBinding, struct FMovieSceneObjectBindingID* SpawnableBindingID);
	void SetSortingOrder(struct FMovieSceneBindingProxy* InBinding, int32* SortingOrder);
	void SetParent(struct FMovieSceneBindingProxy* InBinding, struct FMovieSceneBindingProxy* InParentBinding);
	void SetName(struct FMovieSceneBindingProxy* InBinding, class FString* InName);
	void SetDisplayName(struct FMovieSceneBindingProxy* InBinding, class FText* InDisplayName);
	void RemoveTrack(struct FMovieSceneBindingProxy* InBinding, class UMovieSceneTrack** TrackToRemove);
	void Remove(struct FMovieSceneBindingProxy* InBinding);
	void MoveBindingContents(struct FMovieSceneBindingProxy* SourceBindingId, struct FMovieSceneBindingProxy* DestinationBindingId);
	bool IsValid(struct FMovieSceneBindingProxy* InBinding);
	TArray<class UMovieSceneTrack*> GetTracks(struct FMovieSceneBindingProxy* InBinding);
	int32 GetSortingOrder(struct FMovieSceneBindingProxy* InBinding);
	class UClass* GetPossessedObjectClass(struct FMovieSceneBindingProxy* InBinding);
	struct FMovieSceneBindingProxy GetParent(struct FMovieSceneBindingProxy* InBinding);
	class UObject* GetObjectTemplate(struct FMovieSceneBindingProxy* InBinding);
	class FString GetName(struct FMovieSceneBindingProxy* InBinding);
	struct FGuid GetId(struct FMovieSceneBindingProxy* InBinding);
	class FText GetDisplayName(struct FMovieSceneBindingProxy* InBinding);
	TArray<struct FMovieSceneBindingProxy> GetChildPossessables(struct FMovieSceneBindingProxy* InBinding);
	TArray<class UMovieSceneTrack*> FindTracksByType(struct FMovieSceneBindingProxy* InBinding, class UClass* TrackType);
	TArray<class UMovieSceneTrack*> FindTracksByExactType(struct FMovieSceneBindingProxy* InBinding, class UClass* TrackType);
	class UMovieSceneTrack* AddTrack(struct FMovieSceneBindingProxy* InBinding, class UClass* TrackType);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneEventTrackExtensions
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEventTrackExtensions* GetDefaultObj();

	class UClass* GetBoundObjectPropertyClass(struct FMovieSceneEvent* EventKey);
	class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack** InTrack);
	class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack** InTrack);
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
	bool RemoveChildTrack(class UMovieSceneTrack** InTrack);
	bool RemoveChildObjectBinding();
	bool RemoveChildMasterTrack(class UMovieSceneTrack** InTrack);
	bool RemoveChildFolder();
	class FName GetFolderName();
	struct FColor GetFolderColor();
	TArray<class UMovieSceneTrack*> GetChildTracks();
	TArray<struct FMovieSceneBindingProxy> GetChildObjectBindings();
	TArray<class UMovieSceneTrack*> GetChildMasterTracks();
	TArray<class UMovieSceneFolder*> GetChildFolders();
	bool AddChildTrack(class UMovieSceneTrack** InTrack);
	bool AddChildObjectBinding();
	bool AddChildMasterTrack(class UMovieSceneTrack** InTrack);
	bool AddChildFolder();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneMaterialTrackExtensions
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMaterialTrackExtensions* GetDefaultObj();

	int32 SetMaterialIndex();
	int32 GetMaterialIndex();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialTrackExtensions* GetDefaultObj();

	int32 SetMaterialIndex();
	int32 GetMaterialIndex();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePropertyTrackExtensions
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePropertyTrackExtensions* GetDefaultObj();

	class FString SetPropertyNameAndPath();
	class UClass* SetObjectPropertyClass();
	class UEnum* SetByteTrackEnum();
	class FName GetUniqueTrackName();
	class FString GetPropertyPath();
	class FName GetPropertyName();
	class UClass* GetObjectPropertyClass();
	class UEnum* GetByteTrackEnum();
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
	int32 SetStartFrame();
	class UMovieSceneSection* SetRangeSeconds(float StartTime, float EndTime);
	int32 SetRange();
	class UMovieSceneSection* SetEndFrameSeconds(float EndTime);
	bool SetEndFrameBounded();
	int32 SetEndFrame();
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

	void SortMarkedFrames(class UMovieSceneSequence** Sequence);
	float SetWorkRangeStart(class UMovieSceneSequence* InSequence);
	float SetWorkRangeEnd(class UMovieSceneSequence* InSequence);
	float SetViewRangeStart(class UMovieSceneSequence* InSequence);
	float SetViewRangeEnd(class UMovieSceneSequence* InSequence);
	void SetTickResolutionDirectly(class UMovieSceneSequence** Sequence, const struct FFrameRate& TickResolution);
	void SetTickResolution(class UMovieSceneSequence** Sequence, const struct FFrameRate& TickResolution);
	bool SetReadOnly(class UMovieSceneSequence** Sequence);
	void SetPlaybackStartSeconds(class UMovieSceneSequence** Sequence, float StartTime);
	int32 SetPlaybackStart(class UMovieSceneSequence** Sequence);
	void SetPlaybackEndSeconds(class UMovieSceneSequence** Sequence, float EndTime);
	int32 SetPlaybackEnd(class UMovieSceneSequence** Sequence);
	struct FFrameNumber SetMarkedFrame(class UMovieSceneSequence** Sequence);
	enum class EMovieSceneEvaluationType SetEvaluationType(class UMovieSceneSequence* InSequence);
	void SetDisplayRate(class UMovieSceneSequence** Sequence, const struct FFrameRate& DisplayRate);
	enum class EUpdateClockSource SetClockSource(class UMovieSceneSequence* InSequence);
	struct FMovieSceneBindingProxy ResolveBindingID();
	bool RemoveTrack(class UMovieSceneSequence** Sequence);
	class UMovieSceneFolder* RemoveRootFolderFromSequence(class UMovieSceneSequence** Sequence);
	bool RemoveMasterTrack(class UMovieSceneSequence** Sequence);
	struct FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence** Sequence, float StartTime);
	struct FSequencerScriptingRange MakeRange(class UMovieSceneSequence** Sequence);
	struct FMovieSceneObjectBindingID MakeBindingID(class UMovieSceneSequence** Sequence, struct FMovieSceneBindingProxy* InBinding, enum class EMovieSceneObjectBindingSpace Space);
	TArray<class UObject*> LocateBoundObjects(class UMovieSceneSequence** Sequence, struct FMovieSceneBindingProxy* InBinding, class UObject** Context);
	bool IsReadOnly(class UMovieSceneSequence** Sequence);
	float GetWorkRangeStart(class UMovieSceneSequence* InSequence);
	float GetWorkRangeEnd(class UMovieSceneSequence* InSequence);
	float GetViewRangeStart(class UMovieSceneSequence* InSequence);
	float GetViewRangeEnd(class UMovieSceneSequence* InSequence);
	TArray<class UMovieSceneTrack*> GetTracks(class UMovieSceneSequence** Sequence);
	struct FTimecode GetTimecodeSource(class UMovieSceneSequence** Sequence);
	struct FFrameRate GetTickResolution(class UMovieSceneSequence** Sequence);
	TArray<struct FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence** Sequence);
	TArray<class UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence** Sequence);
	TArray<struct FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence** Sequence);
	struct FMovieSceneObjectBindingID GetPortableBindingID(struct FMovieSceneBindingProxy* InBinding);
	float GetPlaybackStartSeconds(class UMovieSceneSequence** Sequence);
	int32 GetPlaybackStart(class UMovieSceneSequence** Sequence);
	struct FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence** Sequence);
	float GetPlaybackEndSeconds(class UMovieSceneSequence** Sequence);
	int32 GetPlaybackEnd(class UMovieSceneSequence** Sequence);
	class UMovieScene* GetMovieScene(class UMovieSceneSequence** Sequence);
	TArray<class UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence** Sequence);
	TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence** Sequence);
	enum class EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);
	struct FFrameRate GetDisplayRate(class UMovieSceneSequence** Sequence);
	enum class EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);
	TArray<struct FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence** Sequence);
	struct FMovieSceneObjectBindingID GetBindingID(struct FMovieSceneBindingProxy* InBinding);
	TArray<class UMovieSceneTrack*> FindTracksByType(class UMovieSceneSequence** Sequence, class UClass* TrackType);
	TArray<class UMovieSceneTrack*> FindTracksByExactType(class UMovieSceneSequence** Sequence, class UClass* TrackType);
	int32 FindNextMarkedFrame(class UMovieSceneSequence** Sequence);
	TArray<class UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence** Sequence, class UClass* TrackType);
	TArray<class UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence** Sequence, class UClass* TrackType);
	int32 FindMarkedFrameByLabel(class UMovieSceneSequence** Sequence);
	int32 FindMarkedFrameByFrameNumber(class UMovieSceneSequence** Sequence);
	struct FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence** Sequence, class FString* Name);
	struct FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence** Sequence);
	void DeleteMarkedFrames(class UMovieSceneSequence** Sequence);
	int32 DeleteMarkedFrame(class UMovieSceneSequence** Sequence);
	class UMovieSceneTrack* AddTrack(class UMovieSceneSequence** Sequence, class UClass* TrackType);
	struct FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence** Sequence);
	struct FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence** Sequence);
	class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence** Sequence);
	struct FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence** Sequence);
	class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence** Sequence, class UClass* TrackType);
	int32 AddMarkedFrame(class UMovieSceneSequence** Sequence);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneTrackExtensions
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTrackExtensions* GetDefaultObj();

	class UMovieSceneTrack* SetTrackRowDisplayName(class FText* InName, int32* RowIndex);
	class UMovieSceneTrack* SetSortingOrder(int32* SortingOrder);
	class UMovieSceneSection* SetSectionToKey();
	class UMovieSceneTrack* SetDisplayName(class FText* InName);
	struct FColor SetColorTint();
	class UMovieSceneSection* RemoveSection();
	class FText GetTrackRowDisplayName(int32* RowIndex);
	int32 GetSortingOrder();
	class UMovieSceneSection* GetSectionToKey();
	TArray<class UMovieSceneSection*> GetSections();
	class FText GetDisplayName();
	struct FColor GetColorTint();
	class UMovieSceneSection* AddSection();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorTrackExtensions* GetDefaultObj();

	int32 SetNumChannelsUsed();
	int32 GetNumChannelsUsed();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorTrackExtensions* GetDefaultObj();

	int32 SetNumChannelsUsed();
	int32 GetNumChannelsUsed();
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.SequencerScriptingRangeExtensions
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencerScriptingRangeExtensions* GetDefaultObj();

	struct FSequencerScriptingRange SetStartSeconds(float* Start);
	struct FSequencerScriptingRange SetStartFrame(int32* Start);
	struct FSequencerScriptingRange SetEndSeconds(float* End);
	struct FSequencerScriptingRange SetEndFrame(int32* End);
	struct FSequencerScriptingRange RemoveStart();
	struct FSequencerScriptingRange RemoveEnd();
	bool HasStart();
	bool HasEnd();
	float GetStartSeconds();
	int32 GetStartFrame();
	float GetEndSeconds();
	int32 GetEndFrame();
};

}


