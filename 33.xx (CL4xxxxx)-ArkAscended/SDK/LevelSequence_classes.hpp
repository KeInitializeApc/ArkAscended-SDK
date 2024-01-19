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
	uint8                                        Pad_4A6[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieScene*                           MovieScene;                                        // 0x70(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x78(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0xC8(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x1B8(0x50)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                DirectorClass;                                     // 0x208(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x210(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequence* GetDefaultObj();

	void RemoveMetaDataByClass(class UClass* InClass);
	void FindOrAddMetaDataByClass(class UClass* InClass, class UObject* ReturnValue);
	void FindMetaDataByClass(class UClass* InClass, class UObject* ReturnValue);
	class UObject* CopyMetaData(class UObject* ReturnValue);
};

// 0x78 (0xA0 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_4AA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                TransformOriginActor;                              // 0x30(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4AB[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TransformOrigin;                                   // 0x40(0x60)(Edit, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	struct FGuid                                 SkelTrackGuid;                                     // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       PathToLevelSequence;                               // 0x38(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x20)(ConstParm, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x50(0x8)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInOptions* GetDefaultObj();

	struct FSoftClassPath SetBurnIn();
};

// 0x78 (0x540 - 0x4C8)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_4E6[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x4D8(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x4F8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	class ULevelSequence*                        LevelSequenceAsset;                                // 0x500(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	struct FLevelSequenceCameraSettings          CameraSettings;                                    // 0x508(0x2)(ConstParm, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4E8[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x510(0x8)(ExportObject, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x518(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x520(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x520(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x520(0x1)(Edit, ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_36 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_4EC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               DefaultInstanceData;                               // 0x528(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x530(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowBurnin;                                       // 0x538(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_4EE[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALevelSequenceActor* GetDefaultObj();

	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	bool SetReplicatePlayback();
	bool SetBindingByTag(const TArray<class AActor*>& Actors);
	bool SetBinding(const TArray<class AActor*>& Actors);
	void ResetBindings();
	struct FMovieSceneObjectBindingID ResetBinding();
	class FName RemoveBindingByTag(class AActor** Actor);
	struct FMovieSceneObjectBindingID RemoveBinding(class AActor** Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	void LoadSequence(class ULevelSequence* ReturnValue);
	void HideBurnin();
	void GetSequencePlayer(class ULevelSequencePlayer* ReturnValue);
	void GetSequence(class ULevelSequence* ReturnValue);
	class FName FindNamedBindings(const TArray<struct FMovieSceneObjectBindingID>& ReturnValue);
	class FName FindNamedBinding(const struct FMovieSceneObjectBindingID& ReturnValue);
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
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj();

};

// 0xD8 (0x3F8 - 0x320)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x320(0xD0)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x3F0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnIn* GetDefaultObj();

	void SetSettings(class UObject* InSettings);
	void GetSettingsClass(class UClass* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	int32                                        SubSequenceID;                                     // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MovieScenePlayerIndex;                             // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceDirector* GetDefaultObj();

	void OnCreated();
	void GetSequence(class UMovieSceneSequence* ReturnValue);
	void GetRootSequenceTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetMasterSequenceTime(const struct FQualifiedFrameTime& ReturnValue);
	void GetCurrentTime(const struct FQualifiedFrameTime& ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundObjects(const TArray<class UObject*>& ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundObject(class UObject* ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundActors(const TArray<class AActor*>& ReturnValue);
	struct FMovieSceneObjectBindingID GetBoundActor(class AActor* ReturnValue);
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
	FMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x4D0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_517[0x120];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelSequencePlayer* GetDefaultObj();

	void GetActiveCameraComponent(class UCameraComponent* ReturnValue);
	class ALevelSequenceActor* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequencePlayer* ReturnValue);
};

// 0x30 (0x68 - 0x38)
// Class LevelSequence.LevelSequenceProjectSettings
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                         bDefaultLockEngineToDisplayRate;                   // 0x38(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_51F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                DefaultDisplayRate;                                // 0x40(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DefaultTickResolution;                             // 0x50(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EUpdateClockSource                DefaultClockSource;                                // 0x60(0x1)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_521[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelSequenceProjectSettings* GetDefaultObj();

};

// 0x28 (0x4F0 - 0x4C8)
// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public AActor
{
public:
	uint8                                        Pad_529[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class ALevelSequenceActor*                   Sequence;                                          // 0x4D0(0x8)(BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	class UMediaComponent*                       MediaComponent;                                    // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        ServerStartTimeSeconds;                            // 0x4E0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_52B[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALevelSequenceMediaController* GetDefaultObj();

	float SynchronizeToServer();
	void Play();
	void OnRep_ServerStartTimeSeconds();
	void GetSequence(class ALevelSequenceActor* ReturnValue);
	void GetMediaComponent(class UMediaComponent* ReturnValue);
};

}


