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
	uint8                                        Pad_4B8[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_4C6[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceKey* GetDefaultObj();

	struct FMovieSceneObjectBindingID SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	void GetValue(const struct FMovieSceneObjectBindingID& ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
};

// 0x8 (0x30 - 0x28)
// Class SequencerScripting.MovieSceneScriptingChannel
class UMovieSceneScriptingChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneScriptingChannel* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_4D5[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceChannel* GetDefaultObj();

	struct FMovieSceneObjectBindingID SetDefault();
	class UMovieSceneScriptingKey* RemoveKey();
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(const struct FMovieSceneObjectBindingID& ReturnValue);
	enum class ESequenceTimeUnit AddKey(struct FMovieSceneObjectBindingID* NewValue, float* SubFrame, class UMovieSceneScriptingActorReferenceKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingBoolKey
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_4E4[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolKey* GetDefaultObj();

	bool SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	void GetValue(bool ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingBoolChannel
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_504[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolChannel* GetDefaultObj();

	bool SetDefault();
	class UMovieSceneScriptingKey* RemoveKey();
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetNumKeys(int32 ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(bool ReturnValue);
	struct FFrameRate EvaluateKeys(const TArray<bool>& ReturnValue);
	void ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue);
	enum class ESequenceTimeUnit AddKey(bool* NewValue, float* SubFrame, class UMovieSceneScriptingBoolKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingByteKey
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_513[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteKey* GetDefaultObj();

	uint8 SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	void GetValue(uint8 ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingByteChannel
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_521[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteChannel* GetDefaultObj();

	uint8 SetDefault();
	class UMovieSceneScriptingKey* RemoveKey();
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(uint8 ReturnValue);
	enum class EMovieSceneKeyInterpolation AddKey(uint8* NewValue, float* SubFrame, class UMovieSceneScriptingByteKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleKey
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_547[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleKey* GetDefaultObj();

	double SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	enum class ERichCurveTangentWeightMode SetTangentWeightMode();
	enum class ERichCurveTangentMode SetTangentMode();
	float SetLeaveTangentWeight();
	float SetLeaveTangent();
	enum class ERichCurveInterpMode SetInterpolationMode();
	float SetArriveTangentWeight();
	float SetArriveTangent();
	void GetValue(double ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
	void GetTangentWeightMode(enum class ERichCurveTangentWeightMode ReturnValue);
	void GetTangentMode(enum class ERichCurveTangentMode ReturnValue);
	void GetLeaveTangentWeight(float ReturnValue);
	void GetLeaveTangent(float ReturnValue);
	void GetInterpolationMode(enum class ERichCurveInterpMode ReturnValue);
	void GetArriveTangentWeight(float ReturnValue);
	void GetArriveTangent(float ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingDoubleChannel
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_573[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleChannel* GetDefaultObj();

	enum class ERichCurveExtrapolation SetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation SetPostInfinityExtrapolation();
	double SetDefault();
	class UMovieSceneScriptingKey* RemoveKey();
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetPreInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue);
	void GetPostInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue);
	void GetNumKeys(int32 ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(double ReturnValue);
	struct FFrameRate EvaluateKeys(const TArray<double>& ReturnValue);
	void ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue);
	enum class EMovieSceneKeyInterpolation AddKey(double* NewValue, float* SubFrame, class UMovieSceneScriptingDoubleKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingEventKey
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_587[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventKey* GetDefaultObj();

	struct FMovieSceneEvent SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	void GetValue(const struct FMovieSceneEvent& ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingEventChannel
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_597[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventChannel* GetDefaultObj();

	class UMovieSceneScriptingKey* RemoveKey();
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	enum class ESequenceTimeUnit AddKey(struct FMovieSceneEvent* NewValue, float* SubFrame, class UMovieSceneScriptingEventKey* ReturnValue);
};

// 0x0 (0x40 - 0x40)
// Class SequencerScripting.MovieSceneScriptingFloatKey
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatKey* GetDefaultObj();

	float SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	enum class ERichCurveTangentWeightMode SetTangentWeightMode();
	enum class ERichCurveTangentMode SetTangentMode();
	float SetLeaveTangentWeight();
	float SetLeaveTangent();
	enum class ERichCurveInterpMode SetInterpolationMode();
	float SetArriveTangentWeight();
	float SetArriveTangent();
	void GetValue(float ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
	void GetTangentWeightMode(enum class ERichCurveTangentWeightMode ReturnValue);
	void GetTangentMode(enum class ERichCurveTangentMode ReturnValue);
	void GetLeaveTangentWeight(float ReturnValue);
	void GetLeaveTangent(float ReturnValue);
	void GetInterpolationMode(enum class ERichCurveInterpMode ReturnValue);
	void GetArriveTangentWeight(float ReturnValue);
	void GetArriveTangent(float ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActualFloatKey
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_5D1[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActualFloatKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_5D6[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleAsFloatKey* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class SequencerScripting.MovieSceneScriptingFloatChannel
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_613[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatChannel* GetDefaultObj();

	enum class ERichCurveExtrapolation SetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation SetPostInfinityExtrapolation();
	float SetDefault();
	class UMovieSceneScriptingKey* RemoveKey();
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetPreInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue);
	void GetPostInfinityExtrapolation(enum class ERichCurveExtrapolation ReturnValue);
	void GetNumKeys(int32 ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(float ReturnValue);
	struct FFrameRate EvaluateKeys(const TArray<float>& ReturnValue);
	void ComputeEffectiveRange(const struct FSequencerScriptingRange& ReturnValue);
	enum class EMovieSceneKeyInterpolation AddKey(float* NewValue, float* SubFrame, class UMovieSceneScriptingFloatKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingIntegerKey
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_626[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerKey* GetDefaultObj();

	int32 SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	void GetValue(int32 ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingIntegerChannel
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_64A[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerChannel* GetDefaultObj();

	int32 SetDefault();
	class UMovieSceneScriptingKey* RemoveKey();
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(int32 ReturnValue);
	enum class ESequenceTimeUnit AddKey(int32* NewValue, float* SubFrame, class UMovieSceneScriptingIntegerKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingObjectPathKey
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_666[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathKey* GetDefaultObj();

	class UObject* SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	void GetValue(class UObject* ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_68E[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathChannel* GetDefaultObj();

	class UObject* SetDefault();
	class UMovieSceneScriptingKey* RemoveKey();
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(class UObject* ReturnValue);
	enum class ESequenceTimeUnit AddKey(class UObject** NewValue, float* SubFrame, class UMovieSceneScriptingObjectPathKey* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingStringKey
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_6A0[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringKey* GetDefaultObj();

	class FString SetValue();
	enum class ESequenceTimeUnit SetTime(float* SubFrame);
	void GetValue(const class FString& ReturnValue);
	enum class ESequenceTimeUnit GetTime(const struct FFrameTime& ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingStringChannel
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_6B3[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringChannel* GetDefaultObj();

	class FString SetDefault();
	class UMovieSceneScriptingKey* RemoveKey();
	void RemoveDefault();
	void HasDefault(bool ReturnValue);
	void GetKeys(const TArray<class UMovieSceneScriptingKey*>& ReturnValue);
	void GetDefault(const class FString& ReturnValue);
	enum class ESequenceTimeUnit AddKey(class FString* NewValue, float* SubFrame, class UMovieSceneScriptingStringKey* ReturnValue);
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
	struct FMovieSceneBindingProxy IsValid(bool ReturnValue);
	struct FMovieSceneBindingProxy GetTracks(const TArray<class UMovieSceneTrack*>& ReturnValue);
	struct FMovieSceneBindingProxy GetSortingOrder(int32 ReturnValue);
	struct FMovieSceneBindingProxy GetPossessedObjectClass(class UClass* ReturnValue);
	struct FMovieSceneBindingProxy GetParent(const struct FMovieSceneBindingProxy& ReturnValue);
	struct FMovieSceneBindingProxy GetObjectTemplate(class UObject* ReturnValue);
	struct FMovieSceneBindingProxy GetName(const class FString& ReturnValue);
	struct FMovieSceneBindingProxy GetId(const struct FGuid& ReturnValue);
	struct FMovieSceneBindingProxy GetDisplayName(class FText ReturnValue);
	struct FMovieSceneBindingProxy GetChildPossessables(const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	class UClass* FindTracksByType(const TArray<class UMovieSceneTrack*>& ReturnValue);
	class UClass* FindTracksByExactType(const TArray<class UMovieSceneTrack*>& ReturnValue);
	class UClass* AddTrack(class UMovieSceneTrack* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneEventTrackExtensions
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEventTrackExtensions* GetDefaultObj();

	struct FMovieSceneEvent GetBoundObjectPropertyClass(class UClass* ReturnValue);
	class UMovieSceneEventTrack* AddEventTriggerSection(class UMovieSceneEventTriggerSection* ReturnValue);
	class UMovieSceneEventTrack* AddEventRepeaterSection(class UMovieSceneEventRepeaterSection* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFolderExtensions
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFolderExtensions* GetDefaultObj();

	class FName SetFolderName(bool ReturnValue);
	struct FColor SetFolderColor(bool ReturnValue);
	class UMovieSceneTrack* RemoveChildTrack(bool ReturnValue);
	struct FMovieSceneBindingProxy RemoveChildObjectBinding(bool ReturnValue);
	class UMovieSceneTrack* RemoveChildMasterTrack(bool ReturnValue);
	class UMovieSceneFolder* RemoveChildFolder(bool ReturnValue);
	class UMovieSceneFolder* GetFolderName(class FName ReturnValue);
	class UMovieSceneFolder* GetFolderColor(const struct FColor& ReturnValue);
	class UMovieSceneFolder* GetChildTracks(const TArray<class UMovieSceneTrack*>& ReturnValue);
	class UMovieSceneFolder* GetChildObjectBindings(const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	class UMovieSceneFolder* GetChildMasterTracks(const TArray<class UMovieSceneTrack*>& ReturnValue);
	class UMovieSceneFolder* GetChildFolders(const TArray<class UMovieSceneFolder*>& ReturnValue);
	class UMovieSceneTrack* AddChildTrack(bool ReturnValue);
	struct FMovieSceneBindingProxy AddChildObjectBinding(bool ReturnValue);
	class UMovieSceneTrack* AddChildMasterTrack(bool ReturnValue);
	class UMovieSceneFolder* AddChildFolder(bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneMaterialTrackExtensions
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMaterialTrackExtensions* GetDefaultObj();

	class UMovieSceneComponentMaterialTrack* SetMaterialIndex(int32 MaterialIndex);
	class UMovieSceneComponentMaterialTrack* GetMaterialIndex(int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialTrackExtensions* GetDefaultObj();

	class UMovieScenePrimitiveMaterialTrack* SetMaterialIndex(int32 MaterialIndex);
	class UMovieScenePrimitiveMaterialTrack* GetMaterialIndex(int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePropertyTrackExtensions
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePropertyTrackExtensions* GetDefaultObj();

	class FString SetPropertyNameAndPath();
	class UMovieSceneObjectPropertyTrack* SetObjectPropertyClass(class UClass* PropertyClass);
	class UEnum* SetByteTrackEnum();
	class UMovieScenePropertyTrack* GetUniqueTrackName(class FName ReturnValue);
	class UMovieScenePropertyTrack* GetPropertyPath(const class FString& ReturnValue);
	class UMovieScenePropertyTrack* GetPropertyName(class FName ReturnValue);
	class UMovieSceneObjectPropertyTrack* GetObjectPropertyClass(class UClass* ReturnValue);
	class UMovieSceneByteTrack* GetByteTrackEnum(class UEnum* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSectionExtensions
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSectionExtensions* GetDefaultObj();

	float SetStartFrameSeconds();
	bool SetStartFrameBounded();
	int32 SetStartFrame();
	float SetRangeSeconds();
	int32 SetRange();
	float SetEndFrameSeconds();
	bool SetEndFrameBounded();
	int32 SetEndFrame();
	class UMovieSceneSection* HasStartFrame(bool ReturnValue);
	class UMovieSceneSection* HasEndFrame(bool ReturnValue);
	class UMovieSceneSection* GetStartFrameSeconds(float ReturnValue);
	class UMovieSceneSection* GetStartFrame(int32 ReturnValue);
	class UMovieSceneSequence* GetParentSequenceFrame(int32 ReturnValue);
	class UMovieSceneSection* GetEndFrameSeconds(float ReturnValue);
	class UMovieSceneSection* GetEndFrame(int32 ReturnValue);
	class UClass* GetChannelsByType(const TArray<class UMovieSceneScriptingChannel*>& ReturnValue);
	class UMovieSceneSection* GetChannels(const TArray<class UMovieSceneScriptingChannel*>& ReturnValue);
	class UMovieSceneSection* GetAutoSizeStartFrameSeconds(float ReturnValue);
	class UMovieSceneSection* GetAutoSizeStartFrame(int32 ReturnValue);
	class UMovieSceneSection* GetAutoSizeHasStartFrame(bool ReturnValue);
	class UMovieSceneSection* GetAutoSizeHasEndFrame(bool ReturnValue);
	class UMovieSceneSection* GetAutoSizeEndFrameSeconds(float ReturnValue);
	class UMovieSceneSection* GetAutoSizeEndFrame(int32 ReturnValue);
	class UMovieSceneSection* GetAllChannels(const TArray<class UMovieSceneScriptingChannel*>& ReturnValue);
	class UClass* FindChannelsByType(const TArray<class UMovieSceneScriptingChannel*>& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSequenceExtensions
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSequenceExtensions* GetDefaultObj();

	void SortMarkedFrames(class UMovieSceneSequence* Sequence);
	float SetWorkRangeStart(class UMovieSceneSequence* InSequence);
	float SetWorkRangeEnd(class UMovieSceneSequence* InSequence);
	float SetViewRangeStart(class UMovieSceneSequence* InSequence);
	float SetViewRangeEnd(class UMovieSceneSequence* InSequence);
	void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, struct FFrameRate* TickResolution);
	void SetTickResolution(class UMovieSceneSequence* Sequence, struct FFrameRate* TickResolution);
	bool SetReadOnly(class UMovieSceneSequence* Sequence);
	float SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);
	int32 SetPlaybackStart(class UMovieSceneSequence* Sequence);
	float SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);
	int32 SetPlaybackEnd(class UMovieSceneSequence* Sequence);
	struct FFrameNumber SetMarkedFrame(class UMovieSceneSequence* Sequence);
	enum class EMovieSceneEvaluationType SetEvaluationType(class UMovieSceneSequence* InSequence);
	void SetDisplayRate(class UMovieSceneSequence* Sequence, struct FFrameRate* DisplayRate);
	enum class EUpdateClockSource SetClockSource(class UMovieSceneSequence* InSequence);
	struct FMovieSceneObjectBindingID ResolveBindingID(const struct FMovieSceneBindingProxy& ReturnValue);
	class UMovieSceneTrack* RemoveTrack(class UMovieSceneSequence* Sequence, bool ReturnValue);
	class UMovieSceneFolder* RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneTrack* RemoveMasterTrack(class UMovieSceneSequence* Sequence, bool ReturnValue);
	float MakeRangeSeconds(class UMovieSceneSequence* Sequence, const struct FSequencerScriptingRange& ReturnValue);
	int32 MakeRange(class UMovieSceneSequence* Sequence, const struct FSequencerScriptingRange& ReturnValue);
	struct FMovieSceneBindingProxy MakeBindingID(class UMovieSceneSequence* Sequence, enum class EMovieSceneObjectBindingSpace Space, const struct FMovieSceneObjectBindingID& ReturnValue);
	struct FMovieSceneBindingProxy LocateBoundObjects(class UMovieSceneSequence* Sequence, class UObject** Context, const TArray<class UObject*>& ReturnValue);
	void IsReadOnly(class UMovieSceneSequence* Sequence, bool ReturnValue);
	void GetWorkRangeStart(class UMovieSceneSequence* InSequence, float ReturnValue);
	void GetWorkRangeEnd(class UMovieSceneSequence* InSequence, float ReturnValue);
	void GetViewRangeStart(class UMovieSceneSequence* InSequence, float ReturnValue);
	void GetViewRangeEnd(class UMovieSceneSequence* InSequence, float ReturnValue);
	void GetTracks(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void GetTimecodeSource(class UMovieSceneSequence* Sequence, const struct FTimecode& ReturnValue);
	void GetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& ReturnValue);
	void GetSpawnables(class UMovieSceneSequence* Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	void GetRootFoldersInSequence(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneFolder*>& ReturnValue);
	void GetPossessables(class UMovieSceneSequence* Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	struct FMovieSceneBindingProxy GetPortableBindingID(const struct FMovieSceneObjectBindingID& ReturnValue);
	void GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float ReturnValue);
	void GetPlaybackStart(class UMovieSceneSequence* Sequence, int32 ReturnValue);
	void GetPlaybackRange(class UMovieSceneSequence* Sequence, const struct FSequencerScriptingRange& ReturnValue);
	void GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float ReturnValue);
	void GetPlaybackEnd(class UMovieSceneSequence* Sequence, int32 ReturnValue);
	void GetMovieScene(class UMovieSceneSequence* Sequence, class UMovieScene* ReturnValue);
	void GetMasterTracks(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue);
	void GetMarkedFrames(class UMovieSceneSequence* Sequence, const TArray<struct FMovieSceneMarkedFrame>& ReturnValue);
	void GetEvaluationType(class UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType ReturnValue);
	void GetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& ReturnValue);
	void GetClockSource(class UMovieSceneSequence* InSequence, enum class EUpdateClockSource ReturnValue);
	void GetBindings(class UMovieSceneSequence* Sequence, const TArray<struct FMovieSceneBindingProxy>& ReturnValue);
	struct FMovieSceneBindingProxy GetBindingID(const struct FMovieSceneObjectBindingID& ReturnValue);
	class UClass* FindTracksByType(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue);
	class UClass* FindTracksByExactType(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue);
	bool FindNextMarkedFrame(class UMovieSceneSequence* Sequence, int32 ReturnValue);
	class UClass* FindMasterTracksByType(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue);
	class UClass* FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, const TArray<class UMovieSceneTrack*>& ReturnValue);
	class FString FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, int32 ReturnValue);
	struct FFrameNumber FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, int32 ReturnValue);
	void FindBindingByName(class UMovieSceneSequence* Sequence, class FString* Name, const struct FMovieSceneBindingProxy& ReturnValue);
	void FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingId, const struct FMovieSceneBindingProxy& ReturnValue);
	void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);
	int32 DeleteMarkedFrame(class UMovieSceneSequence* Sequence);
	class UClass* AddTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* ReturnValue);
	class UObject* AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& ReturnValue);
	class UClass* AddSpawnableFromClass(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& ReturnValue);
	class FString AddRootFolderToSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* ReturnValue);
	class UObject* AddPossessable(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& ReturnValue);
	class UClass* AddMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* ReturnValue);
	struct FMovieSceneMarkedFrame AddMarkedFrame(class UMovieSceneSequence* Sequence, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneTrackExtensions
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTrackExtensions* GetDefaultObj();

	class FText SetTrackRowDisplayName(int32* RowIndex);
	int32 SetSortingOrder();
	class UMovieSceneSection* SetSectionToKey();
	class FText SetDisplayName();
	struct FColor SetColorTint();
	class UMovieSceneSection* RemoveSection();
	class UMovieSceneTrack* GetTrackRowDisplayName(int32* RowIndex, class FText ReturnValue);
	class UMovieSceneTrack* GetSortingOrder(int32 ReturnValue);
	class UMovieSceneTrack* GetSectionToKey(class UMovieSceneSection* ReturnValue);
	class UMovieSceneTrack* GetSections(const TArray<class UMovieSceneSection*>& ReturnValue);
	class UMovieSceneTrack* GetDisplayName(class FText ReturnValue);
	class UMovieSceneTrack* GetColorTint(const struct FColor& ReturnValue);
	class UMovieSceneTrack* AddSection(class UMovieSceneSection* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorTrackExtensions* GetDefaultObj();

	int32 SetNumChannelsUsed();
	class UMovieSceneFloatVectorTrack* GetNumChannelsUsed(int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorTrackExtensions* GetDefaultObj();

	int32 SetNumChannelsUsed();
	class UMovieSceneDoubleVectorTrack* GetNumChannelsUsed(int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.SequencerScriptingRangeExtensions
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencerScriptingRangeExtensions* GetDefaultObj();

	float SetStartSeconds();
	int32 SetStartFrame();
	float SetEndSeconds();
	int32 SetEndFrame();
	struct FSequencerScriptingRange RemoveStart();
	struct FSequencerScriptingRange RemoveEnd();
	struct FSequencerScriptingRange HasStart(bool ReturnValue);
	struct FSequencerScriptingRange HasEnd(bool ReturnValue);
	struct FSequencerScriptingRange GetStartSeconds(float ReturnValue);
	struct FSequencerScriptingRange GetStartFrame(int32 ReturnValue);
	struct FSequencerScriptingRange GetEndSeconds(float ReturnValue);
	struct FSequencerScriptingRange GetEndFrame(int32 ReturnValue);
};

}


