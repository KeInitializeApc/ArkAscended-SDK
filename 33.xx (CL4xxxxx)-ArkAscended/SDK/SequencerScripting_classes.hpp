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
	uint8                                        Pad_499[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_4AA[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceKey* GetDefaultObj();

	void SetValue(const struct FMovieSceneObjectBindingID& InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(struct FMovieSceneObjectBindingID* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
};

// 0x8 (0x30 - 0x28)
// Class SequencerScripting.MovieSceneScriptingChannel
class UMovieSceneScriptingChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneScriptingChannel* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_4BC[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActorReferenceChannel* GetDefaultObj();

	void SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool* ReturnValue);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	void GetDefault(struct FMovieSceneObjectBindingID* ReturnValue);
	struct FMovieSceneObjectBindingID AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingActorReferenceKey** ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingBoolKey
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_4DC[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolKey* GetDefaultObj();

	void SetValue(bool InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(bool* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingBoolChannel
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_4F9[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingBoolChannel* GetDefaultObj();

	void SetDefault(bool InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool* ReturnValue);
	void GetNumKeys(int32* ReturnValue);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	void GetDefault(bool* ReturnValue);
	struct FFrameRate EvaluateKeys(TArray<bool>* ReturnValue);
	void ComputeEffectiveRange(struct FSequencerScriptingRange* ReturnValue);
	bool AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingBoolKey** ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingByteKey
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_50C[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteKey* GetDefaultObj();

	void SetValue(uint8 InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(uint8* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingByteChannel
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_52D[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingByteChannel* GetDefaultObj();

	void SetDefault(uint8 InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool* ReturnValue);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	void GetDefault(uint8* ReturnValue);
	uint8 AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingByteKey** ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleKey
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_553[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleKey* GetDefaultObj();

	void SetValue(double InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue);
	void SetLeaveTangentWeight(float InNewValue);
	void SetLeaveTangent(float InNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue);
	void SetArriveTangentWeight(float InNewValue);
	void SetArriveTangent(float InNewValue);
	void GetValue(double* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
	void GetTangentWeightMode(enum class ERichCurveTangentWeightMode* ReturnValue);
	void GetTangentMode(enum class ERichCurveTangentMode* ReturnValue);
	void GetLeaveTangentWeight(float* ReturnValue);
	void GetLeaveTangent(float* ReturnValue);
	void GetInterpolationMode(enum class ERichCurveInterpMode* ReturnValue);
	void GetArriveTangentWeight(float* ReturnValue);
	void GetArriveTangent(float* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingDoubleChannel
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_57A[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleChannel* GetDefaultObj();

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetDefault(double InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool* ReturnValue);
	void GetPreInfinityExtrapolation(enum class ERichCurveExtrapolation* ReturnValue);
	void GetPostInfinityExtrapolation(enum class ERichCurveExtrapolation* ReturnValue);
	void GetNumKeys(int32* ReturnValue);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	void GetDefault(double* ReturnValue);
	struct FFrameRate EvaluateKeys(TArray<double>* ReturnValue);
	void ComputeEffectiveRange(struct FSequencerScriptingRange* ReturnValue);
	double AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingDoubleKey** ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingEventKey
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_58D[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventKey* GetDefaultObj();

	void SetValue(const struct FMovieSceneEvent& InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(struct FMovieSceneEvent* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingEventChannel
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_59C[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingEventChannel* GetDefaultObj();

	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	struct FMovieSceneEvent AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingEventKey** ReturnValue);
};

// 0x0 (0x40 - 0x40)
// Class SequencerScripting.MovieSceneScriptingFloatKey
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatKey* GetDefaultObj();

	void SetValue(float InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue);
	void SetLeaveTangentWeight(float InNewValue);
	void SetLeaveTangent(float InNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue);
	void SetArriveTangentWeight(float InNewValue);
	void SetArriveTangent(float InNewValue);
	void GetValue(float* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
	void GetTangentWeightMode(enum class ERichCurveTangentWeightMode* ReturnValue);
	void GetTangentMode(enum class ERichCurveTangentMode* ReturnValue);
	void GetLeaveTangentWeight(float* ReturnValue);
	void GetLeaveTangent(float* ReturnValue);
	void GetInterpolationMode(enum class ERichCurveInterpMode* ReturnValue);
	void GetArriveTangentWeight(float* ReturnValue);
	void GetArriveTangent(float* ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActualFloatKey
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_5C8[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingActualFloatKey* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_5CC[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingDoubleAsFloatKey* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class SequencerScripting.MovieSceneScriptingFloatChannel
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_608[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingFloatChannel* GetDefaultObj();

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation);
	void SetDefault(float InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool* ReturnValue);
	void GetPreInfinityExtrapolation(enum class ERichCurveExtrapolation* ReturnValue);
	void GetPostInfinityExtrapolation(enum class ERichCurveExtrapolation* ReturnValue);
	void GetNumKeys(int32* ReturnValue);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	void GetDefault(float* ReturnValue);
	struct FFrameRate EvaluateKeys(TArray<float>* ReturnValue);
	void ComputeEffectiveRange(struct FSequencerScriptingRange* ReturnValue);
	float AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation, class UMovieSceneScriptingFloatKey** ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingIntegerKey
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_61F[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerKey* GetDefaultObj();

	void SetValue(int32 InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(int32* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingIntegerChannel
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_644[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingIntegerChannel* GetDefaultObj();

	void SetDefault(int32 InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool* ReturnValue);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	void GetDefault(int32* ReturnValue);
	int32 AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingIntegerKey** ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingObjectPathKey
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_66E[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathKey* GetDefaultObj();

	void SetValue(class UObject* InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(class UObject** ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_684[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingObjectPathChannel* GetDefaultObj();

	void SetDefault(class UObject* InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool* ReturnValue);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	void GetDefault(class UObject** ReturnValue);
	class UObject* AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingObjectPathKey** ReturnValue);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingStringKey
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_702[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringKey* GetDefaultObj();

	void SetValue(const class FString& InNewValue);
	void SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit);
	void GetValue(class FString* ReturnValue);
	void GetTime(enum class ESequenceTimeUnit TimeUnit, struct FFrameTime* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingStringChannel
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_747[0x30];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneScriptingStringChannel* GetDefaultObj();

	void SetDefault(const class FString& InDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* Key);
	void RemoveDefault();
	void HasDefault(bool* ReturnValue);
	void GetKeys(TArray<class UMovieSceneScriptingKey*>* ReturnValue);
	void GetDefault(class FString* ReturnValue);
	class FString AddKey(float SubFrame, enum class ESequenceTimeUnit TimeUnit, class UMovieSceneScriptingStringKey** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneBindingExtensions
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBindingExtensions* GetDefaultObj();

	void SetSpawnableBindingID(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneObjectBindingID& SpawnableBindingID);
	void SetSortingOrder(const struct FMovieSceneBindingProxy& InBinding, int32 SortingOrder);
	void SetParent(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneBindingProxy& InParentBinding);
	void SetName(const struct FMovieSceneBindingProxy& InBinding, const class FString& InName);
	void SetDisplayName(const struct FMovieSceneBindingProxy& InBinding, class FText InDisplayName);
	void RemoveTrack(const struct FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);
	void Remove(const struct FMovieSceneBindingProxy& InBinding);
	void MoveBindingContents(const struct FMovieSceneBindingProxy& SourceBindingId, const struct FMovieSceneBindingProxy& DestinationBindingId);
	void IsValid(const struct FMovieSceneBindingProxy& InBinding, bool* ReturnValue);
	void GetTracks(const struct FMovieSceneBindingProxy& InBinding, TArray<class UMovieSceneTrack*>* ReturnValue);
	void GetSortingOrder(const struct FMovieSceneBindingProxy& InBinding, int32* ReturnValue);
	void GetPossessedObjectClass(const struct FMovieSceneBindingProxy& InBinding, class UClass** ReturnValue);
	void GetParent(const struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneBindingProxy* ReturnValue);
	void GetObjectTemplate(const struct FMovieSceneBindingProxy& InBinding, class UObject** ReturnValue);
	void GetName(const struct FMovieSceneBindingProxy& InBinding, class FString* ReturnValue);
	void GetId(const struct FMovieSceneBindingProxy& InBinding, struct FGuid* ReturnValue);
	void GetDisplayName(const struct FMovieSceneBindingProxy& InBinding, class FText* ReturnValue);
	void GetChildPossessables(const struct FMovieSceneBindingProxy& InBinding, TArray<struct FMovieSceneBindingProxy>* ReturnValue);
	void FindTracksByType(const struct FMovieSceneBindingProxy& InBinding, class UClass** TrackType, TArray<class UMovieSceneTrack*>* ReturnValue);
	void FindTracksByExactType(const struct FMovieSceneBindingProxy& InBinding, class UClass** TrackType, TArray<class UMovieSceneTrack*>* ReturnValue);
	void AddTrack(const struct FMovieSceneBindingProxy& InBinding, class UClass** TrackType, class UMovieSceneTrack** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneEventTrackExtensions
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEventTrackExtensions* GetDefaultObj();

	void GetBoundObjectPropertyClass(const struct FMovieSceneEvent& EventKey, class UClass** ReturnValue);
	void AddEventTriggerSection(class UMovieSceneEventTrack* InTrack, class UMovieSceneEventTriggerSection** ReturnValue);
	void AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack, class UMovieSceneEventRepeaterSection** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFolderExtensions
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFolderExtensions* GetDefaultObj();

	class UMovieSceneFolder* SetFolderName(class FName* InFolderName, bool* ReturnValue);
	class UMovieSceneFolder* SetFolderColor(struct FColor* InFolderColor, bool* ReturnValue);
	class UMovieSceneFolder* RemoveChildTrack(class UMovieSceneTrack* InTrack, bool* ReturnValue);
	class UMovieSceneFolder* RemoveChildObjectBinding(struct FMovieSceneBindingProxy* InObjectBinding, bool* ReturnValue);
	class UMovieSceneFolder* RemoveChildMasterTrack(class UMovieSceneTrack* InTrack, bool* ReturnValue);
	void RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder** FolderToRemove, bool* ReturnValue);
	class UMovieSceneFolder* GetFolderName(class FName* ReturnValue);
	class UMovieSceneFolder* GetFolderColor(struct FColor* ReturnValue);
	class UMovieSceneFolder* GetChildTracks(TArray<class UMovieSceneTrack*>* ReturnValue);
	class UMovieSceneFolder* GetChildObjectBindings(TArray<struct FMovieSceneBindingProxy>* ReturnValue);
	class UMovieSceneFolder* GetChildMasterTracks(TArray<class UMovieSceneTrack*>* ReturnValue);
	class UMovieSceneFolder* GetChildFolders(TArray<class UMovieSceneFolder*>* ReturnValue);
	class UMovieSceneFolder* AddChildTrack(class UMovieSceneTrack* InTrack, bool* ReturnValue);
	class UMovieSceneFolder* AddChildObjectBinding(struct FMovieSceneBindingProxy* InObjectBinding, bool* ReturnValue);
	class UMovieSceneFolder* AddChildMasterTrack(class UMovieSceneTrack* InTrack, bool* ReturnValue);
	void AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd, bool* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneMaterialTrackExtensions
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMaterialTrackExtensions* GetDefaultObj();

	void SetMaterialIndex(class UMovieSceneComponentMaterialTrack** Track, int32 MaterialIndex);
	void GetMaterialIndex(class UMovieSceneComponentMaterialTrack** Track, int32* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialTrackExtensions* GetDefaultObj();

	void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack** Track, int32 MaterialIndex);
	void GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack** Track, int32* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePropertyTrackExtensions
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePropertyTrackExtensions* GetDefaultObj();

	void SetPropertyNameAndPath(class UMovieScenePropertyTrack** Track, class FName* InPropertyName, class FString* InPropertyPath);
	void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack** Track, class UClass* PropertyClass);
	void SetByteTrackEnum(class UMovieSceneByteTrack** Track, class UEnum** InEnum);
	void GetUniqueTrackName(class UMovieScenePropertyTrack** Track, class FName* ReturnValue);
	void GetPropertyPath(class UMovieScenePropertyTrack** Track, class FString* ReturnValue);
	void GetPropertyName(class UMovieScenePropertyTrack** Track, class FName* ReturnValue);
	void GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack** Track, class UClass** ReturnValue);
	void GetByteTrackEnum(class UMovieSceneByteTrack** Track, class UEnum** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSectionExtensions
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSectionExtensions* GetDefaultObj();

	float SetStartFrameSeconds();
	class UMovieSceneSection* SetStartFrameBounded(bool* bIsBounded);
	int32 SetStartFrame();
	float SetRangeSeconds();
	int32 SetRange();
	float SetEndFrameSeconds();
	class UMovieSceneSection* SetEndFrameBounded(bool* bIsBounded);
	int32 SetEndFrame();
	class UMovieSceneSection* HasStartFrame(bool* ReturnValue);
	class UMovieSceneSection* HasEndFrame(bool* ReturnValue);
	class UMovieSceneSection* GetStartFrameSeconds(float* ReturnValue);
	class UMovieSceneSection* GetStartFrame(int32* ReturnValue);
	class UMovieSceneSubSection* GetParentSequenceFrame(int32* InFrame, class UMovieSceneSequence** ParentSequence, int32* ReturnValue);
	class UMovieSceneSection* GetEndFrameSeconds(float* ReturnValue);
	class UMovieSceneSection* GetEndFrame(int32* ReturnValue);
	class UMovieSceneSection* GetChannelsByType(class UClass** ChannelType, TArray<class UMovieSceneScriptingChannel*>* ReturnValue);
	class UMovieSceneSection* GetChannels(TArray<class UMovieSceneScriptingChannel*>* ReturnValue);
	class UMovieSceneSection* GetAutoSizeStartFrameSeconds(float* ReturnValue);
	class UMovieSceneSection* GetAutoSizeStartFrame(int32* ReturnValue);
	class UMovieSceneSection* GetAutoSizeHasStartFrame(bool* ReturnValue);
	class UMovieSceneSection* GetAutoSizeHasEndFrame(bool* ReturnValue);
	class UMovieSceneSection* GetAutoSizeEndFrameSeconds(float* ReturnValue);
	class UMovieSceneSection* GetAutoSizeEndFrame(int32* ReturnValue);
	class UMovieSceneSection* GetAllChannels(TArray<class UMovieSceneScriptingChannel*>* ReturnValue);
	class UMovieSceneSection* FindChannelsByType(class UClass** ChannelType, TArray<class UMovieSceneScriptingChannel*>* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSequenceExtensions
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSequenceExtensions* GetDefaultObj();

	void SortMarkedFrames(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* SetWorkRangeStart(float* StartTimeInSeconds);
	class UMovieSceneSequence* SetWorkRangeEnd(float* EndTimeInSeconds);
	class UMovieSceneSequence* SetViewRangeStart(float* StartTimeInSeconds);
	class UMovieSceneSequence* SetViewRangeEnd(float* EndTimeInSeconds);
	struct FFrameRate SetTickResolutionDirectly(class UMovieSceneSequence* Sequence);
	struct FFrameRate SetTickResolution(class UMovieSceneSequence* Sequence);
	void SetReadOnly(class UMovieSceneSequence* Sequence, bool* bInReadOnly);
	float SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);
	int32 SetPlaybackStart(class UMovieSceneSequence* Sequence);
	float SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);
	int32 SetPlaybackEnd(class UMovieSceneSequence* Sequence);
	void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32* InMarkIndex, struct FFrameNumber* InFrameNumber);
	class UMovieSceneSequence* SetEvaluationType(enum class EMovieSceneEvaluationType* InEvaluationType);
	struct FFrameRate SetDisplayRate(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* SetClockSource(enum class EUpdateClockSource* InClockSource);
	void ResolveBindingID(class UMovieSceneSequence** RootSequence, struct FMovieSceneObjectBindingID* InObjectBindingID, struct FMovieSceneBindingProxy* ReturnValue);
	void RemoveTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack** Track, bool* ReturnValue);
	class UMovieSceneFolder* RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence);
	void RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack** Track, bool* ReturnValue);
	float MakeRangeSeconds(class UMovieSceneSequence* Sequence, struct FSequencerScriptingRange* ReturnValue);
	int32 MakeRange(class UMovieSceneSequence* Sequence, struct FSequencerScriptingRange* ReturnValue);
	void MakeBindingID(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& InBinding, enum class EMovieSceneObjectBindingSpace Space, struct FMovieSceneObjectBindingID* ReturnValue);
	void LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& InBinding, class UObject* Context, TArray<class UObject*>* ReturnValue);
	void IsReadOnly(class UMovieSceneSequence* Sequence, bool* ReturnValue);
	class UMovieSceneSequence* GetWorkRangeStart(float* ReturnValue);
	class UMovieSceneSequence* GetWorkRangeEnd(float* ReturnValue);
	class UMovieSceneSequence* GetViewRangeStart(float* ReturnValue);
	class UMovieSceneSequence* GetViewRangeEnd(float* ReturnValue);
	void GetTracks(class UMovieSceneSequence* Sequence, TArray<class UMovieSceneTrack*>* ReturnValue);
	void GetTimecodeSource(class UMovieSceneSequence* Sequence, struct FTimecode* ReturnValue);
	void GetTickResolution(class UMovieSceneSequence* Sequence, struct FFrameRate* ReturnValue);
	void GetSpawnables(class UMovieSceneSequence* Sequence, TArray<struct FMovieSceneBindingProxy>* ReturnValue);
	void GetRootFoldersInSequence(class UMovieSceneSequence* Sequence, TArray<class UMovieSceneFolder*>* ReturnValue);
	void GetPossessables(class UMovieSceneSequence* Sequence, TArray<struct FMovieSceneBindingProxy>* ReturnValue);
	void GetPortableBindingID(class UMovieSceneSequence** RootSequence, class UMovieSceneSequence** DestinationSequence, const struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneObjectBindingID* ReturnValue);
	void GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float* ReturnValue);
	void GetPlaybackStart(class UMovieSceneSequence* Sequence, int32* ReturnValue);
	void GetPlaybackRange(class UMovieSceneSequence* Sequence, struct FSequencerScriptingRange* ReturnValue);
	void GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float* ReturnValue);
	void GetPlaybackEnd(class UMovieSceneSequence* Sequence, int32* ReturnValue);
	void GetMovieScene(class UMovieSceneSequence* Sequence, class UMovieScene** ReturnValue);
	void GetMasterTracks(class UMovieSceneSequence* Sequence, TArray<class UMovieSceneTrack*>* ReturnValue);
	void GetMarkedFrames(class UMovieSceneSequence* Sequence, TArray<struct FMovieSceneMarkedFrame>* ReturnValue);
	class UMovieSceneSequence* GetEvaluationType(enum class EMovieSceneEvaluationType* ReturnValue);
	void GetDisplayRate(class UMovieSceneSequence* Sequence, struct FFrameRate* ReturnValue);
	class UMovieSceneSequence* GetClockSource(enum class EUpdateClockSource* ReturnValue);
	void GetBindings(class UMovieSceneSequence* Sequence, TArray<struct FMovieSceneBindingProxy>* ReturnValue);
	void GetBindingID(const struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneObjectBindingID* ReturnValue);
	void FindTracksByType(class UMovieSceneSequence* Sequence, class UClass** TrackType, TArray<class UMovieSceneTrack*>* ReturnValue);
	void FindTracksByExactType(class UMovieSceneSequence* Sequence, class UClass** TrackType, TArray<class UMovieSceneTrack*>* ReturnValue);
	void FindNextMarkedFrame(class UMovieSceneSequence* Sequence, struct FFrameNumber* InFrameNumber, bool* bForward, int32* ReturnValue);
	void FindMasterTracksByType(class UMovieSceneSequence* Sequence, class UClass** TrackType, TArray<class UMovieSceneTrack*>* ReturnValue);
	void FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, class UClass** TrackType, TArray<class UMovieSceneTrack*>* ReturnValue);
	void FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, class FString* InLabel, int32* ReturnValue);
	void FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, struct FFrameNumber* InFrameNumber, int32* ReturnValue);
	void FindBindingByName(class UMovieSceneSequence* Sequence, class FString* Name, struct FMovieSceneBindingProxy* ReturnValue);
	void FindBindingById(class UMovieSceneSequence* Sequence, struct FGuid* BindingId, struct FMovieSceneBindingProxy* ReturnValue);
	void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);
	void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32* DeleteIndex);
	void AddTrack(class UMovieSceneSequence* Sequence, class UClass** TrackType, class UMovieSceneTrack** ReturnValue);
	void AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject** ObjectToSpawn, struct FMovieSceneBindingProxy* ReturnValue);
	void AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass** ClassToSpawn, struct FMovieSceneBindingProxy* ReturnValue);
	void AddRootFolderToSequence(class UMovieSceneSequence* Sequence, class FString* NewFolderName, class UMovieSceneFolder** ReturnValue);
	void AddPossessable(class UMovieSceneSequence* Sequence, class UObject** ObjectToPossess, struct FMovieSceneBindingProxy* ReturnValue);
	void AddMasterTrack(class UMovieSceneSequence* Sequence, class UClass** TrackType, class UMovieSceneTrack** ReturnValue);
	void AddMarkedFrame(class UMovieSceneSequence* Sequence, struct FMovieSceneMarkedFrame* InMarkedFrame, int32* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneTrackExtensions
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTrackExtensions* GetDefaultObj();

	void SetTrackRowDisplayName(class UMovieSceneTrack** Track, class FText InName, int32 RowIndex);
	void SetSortingOrder(class UMovieSceneTrack** Track, int32 SortingOrder);
	class UMovieSceneSection* SetSectionToKey(class UMovieSceneTrack** Track);
	void SetDisplayName(class UMovieSceneTrack** Track, class FText InName);
	void SetColorTint(class UMovieSceneTrack** Track, struct FColor* ColorTint);
	class UMovieSceneSection* RemoveSection(class UMovieSceneTrack** Track);
	void GetTrackRowDisplayName(class UMovieSceneTrack** Track, int32 RowIndex, class FText* ReturnValue);
	void GetSortingOrder(class UMovieSceneTrack** Track, int32* ReturnValue);
	void GetSectionToKey(class UMovieSceneTrack** Track, class UMovieSceneSection** ReturnValue);
	void GetSections(class UMovieSceneTrack** Track, TArray<class UMovieSceneSection*>* ReturnValue);
	void GetDisplayName(class UMovieSceneTrack** Track, class FText* ReturnValue);
	void GetColorTint(class UMovieSceneTrack** Track, struct FColor* ReturnValue);
	void AddSection(class UMovieSceneTrack** Track, class UMovieSceneSection** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorTrackExtensions* GetDefaultObj();

	void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack** Track, int32* InNumChannelsUsed);
	void GetNumChannelsUsed(class UMovieSceneFloatVectorTrack** Track, int32* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorTrackExtensions* GetDefaultObj();

	void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack** Track, int32* InNumChannelsUsed);
	void GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack** Track, int32* ReturnValue);
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
	struct FSequencerScriptingRange SetEndSeconds(float End);
	struct FSequencerScriptingRange SetEndFrame(int32 End);
	struct FSequencerScriptingRange RemoveStart();
	struct FSequencerScriptingRange RemoveEnd();
	struct FSequencerScriptingRange HasStart(bool* ReturnValue);
	struct FSequencerScriptingRange HasEnd(bool* ReturnValue);
	struct FSequencerScriptingRange GetStartSeconds(float* ReturnValue);
	struct FSequencerScriptingRange GetStartFrame(int32* ReturnValue);
	struct FSequencerScriptingRange GetEndSeconds(float* ReturnValue);
	struct FSequencerScriptingRange GetEndFrame(int32* ReturnValue);
};

}


