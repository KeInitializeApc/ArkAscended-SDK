#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x220 - 0x68)
// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence
{
public:
	uint8                                        Pad_3A5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieScene*                           MovieScene;                                        // 0x70(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x78(0x50)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0xC8(0xF0)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x1B8(0x50)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                DirectorClass;                                     // 0x208(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x210(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class ULevelSequence* GetDefaultObj();

	void RemoveMetaDataByClass(class UClass* InClass);
	void FindOrAddMetaDataByClass(class UClass* InClass, class UObject** ReturnValue);
	void FindMetaDataByClass(class UClass* InClass, class UObject** ReturnValue);
	class UObject* CopyMetaData(class UObject** ReturnValue);
};

// 0x78 (0xA0 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_3AB[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                TransformOriginActor;                              // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3AC[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TransformOrigin;                                   // 0x40(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDefaultLevelSequenceInstanceData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceMetaData
class ILevelSequenceMetaData : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILevelSequenceMetaData* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LevelSequence.AnimSequenceLevelSequenceLink
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x28(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       PathToLevelSequence;                               // 0x38(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimSequenceLevelSequenceLink* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceBurnInInitSettings
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInInitSettings* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3B3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInOptions* GetDefaultObj();

	void SetBurnIn(struct FSoftClassPath* InBurnInClass);
};

// 0x78 (0x540 - 0x4C8)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_3E2[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x4D8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x4F8(0x8)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULevelSequence*                        LevelSequenceAsset;                                // 0x500(0x8)(Edit, ConstParm, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLevelSequenceCameraSettings          CameraSettings;                                    // 0x508(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E4[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x510(0x8)(Edit, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x518(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x520(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x520(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x520(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_38 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_3E6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               DefaultInstanceData;                               // 0x528(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x530(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bShowBurnin;                                       // 0x538(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3E7[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALevelSequenceActor* GetDefaultObj();

	void ShowBurnin();
	class ULevelSequence* SetSequence();
	bool SetReplicatePlayback();
	bool SetBindingByTag(TArray<class AActor*>* Actors);
	bool SetBinding(TArray<class AActor*>* Actors);
	void ResetBindings();
	struct FMovieSceneObjectBindingID ResetBinding();
	class FName RemoveBindingByTag(class AActor** Actor);
	struct FMovieSceneObjectBindingID RemoveBinding(class AActor** Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	void LoadSequence(class ULevelSequence** ReturnValue);
	void HideBurnin();
	void GetSequencePlayer(class ULevelSequencePlayer** ReturnValue);
	void GetSequence(class ULevelSequence** ReturnValue);
	class FName FindNamedBindings(TArray<struct FMovieSceneObjectBindingID>* ReturnValue);
	class FName FindNamedBinding(struct FMovieSceneObjectBindingID* ReturnValue);
	bool AddBindingByTag(class AActor** Actor);
	bool AddBinding(class AActor** Actor);
};

// 0x0 (0x540 - 0x540)
// Class LevelSequence.ReplicatedLevelSequenceActor
class AReplicatedLevelSequenceActor : public ALevelSequenceActor
{
public:

	static class UClass* StaticClass();
	static class AReplicatedLevelSequenceActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceAnimSequenceLink
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
public:
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x28(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj();

};

// 0xD8 (0x3F8 - 0x320)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x320(0xD0)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x3F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnIn* GetDefaultObj();

	class UObject* SetSettings();
	void GetSettingsClass(class UClass** ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	int32                                        SubSequenceID;                                     // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MovieScenePlayerIndex;                             // 0x34(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceDirector* GetDefaultObj();

	void OnCreated();
	void GetSequence(class UMovieSceneSequence** ReturnValue);
	void GetRootSequenceTime(struct FQualifiedFrameTime* ReturnValue);
	void GetMasterSequenceTime(struct FQualifiedFrameTime* ReturnValue);
	void GetCurrentTime(struct FQualifiedFrameTime* ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundObjects(TArray<class UObject*>* ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundObject(class UObject** ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundActors(TArray<class AActor*>* ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundActor(class AActor** ReturnValue);
};

// 0x0 (0xA8 - 0xA8)
// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class ULegacyLevelSequenceDirectorBlueprint* GetDefaultObj();

};

// 0x130 (0x600 - 0x4D0)
// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	FMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x4D0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_41D[0x120];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelSequencePlayer* GetDefaultObj();

	void GetActiveCameraComponent(class UCameraComponent** ReturnValue);
	class ALevelSequenceActor* CreateLevelSequencePlayer(class ULevelSequencePlayer** ReturnValue);
};

// 0x30 (0x68 - 0x38)
// Class LevelSequence.LevelSequenceProjectSettings
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                         bDefaultLockEngineToDisplayRate;                   // 0x38(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_424[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                DefaultDisplayRate;                                // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DefaultTickResolution;                             // 0x50(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EUpdateClockSource                DefaultClockSource;                                // 0x60(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_426[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelSequenceProjectSettings* GetDefaultObj();

};

// 0x28 (0x4F0 - 0x4C8)
// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public AActor
{
public:
	uint8                                        Pad_42F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class ALevelSequenceActor*                   Sequence;                                          // 0x4D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMediaComponent*                       MediaComponent;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	float                                        ServerStartTimeSeconds;                            // 0x4E0(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_432[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALevelSequenceMediaController* GetDefaultObj();

	void SynchronizeToServer(float* DesyncThresholdSeconds);
	void Play();
	void OnRep_ServerStartTimeSeconds();
	void GetSequence(class ALevelSequenceActor** ReturnValue);
	void GetMediaComponent(class UMediaComponent** ReturnValue);
};

}


