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
	uint8                                        Pad_4D2[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieScene*                           MovieScene;                                        // 0x70(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x78(0x50)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0xC8(0xF0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x1B8(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                DirectorClass;                                     // 0x208(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x210(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class ULevelSequence* GetDefaultObj();

	class UClass* RemoveMetaDataByClass();
	class UObject* FindOrAddMetaDataByClass();
	class UObject* FindMetaDataByClass();
	class UObject* CopyMetaData(class UObject* InMetaData);
};

// 0x78 (0xA0 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_4D5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                TransformOriginActor;                              // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4D6[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TransformOrigin;                                   // 0x40(0x60)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	struct FGuid                                 SkelTrackGuid;                                     // 0x28(0x10)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       PathToLevelSequence;                               // 0x38(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

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
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4DC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x20)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInOptions* GetDefaultObj();

	struct FSoftClassPath SetBurnIn();
};

// 0x78 (0x540 - 0x4C8)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_522[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x4D8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x4F8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class ULevelSequence*                        LevelSequenceAsset;                                // 0x500(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FLevelSequenceCameraSettings          CameraSettings;                                    // 0x508(0x2)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_523[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x510(0x8)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x518(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x520(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x520(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x520(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_4D : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_527[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               DefaultInstanceData;                               // 0x528(0x8)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x530(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowBurnin;                                       // 0x538(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_528[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALevelSequenceActor* GetDefaultObj();

	void ShowBurnin();
	class ULevelSequence* SetSequence();
	bool SetReplicatePlayback();
	bool SetBindingByTag();
	bool SetBinding();
	void ResetBindings();
	struct FMovieSceneObjectBindingID ResetBinding();
	void RemoveBindingByTag(class FName* Tag, class AActor** Actor);
	struct FMovieSceneObjectBindingID RemoveBinding(class AActor** Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(class FName* Tag);
	struct FMovieSceneObjectBindingID FindNamedBinding(class FName* Tag);
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
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj();

};

// 0xD8 (0x3F8 - 0x320)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x320(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x3F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnIn* GetDefaultObj();

	class UObject* SetSettings();
	class UClass* GetSettingsClass();
};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	int32                                        SubSequenceID;                                     // 0x30(0x4)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MovieScenePlayerIndex;                             // 0x34(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceDirector* GetDefaultObj();

	void OnCreated();
	class UMovieSceneSequence* GetSequence();
	struct FQualifiedFrameTime GetRootSequenceTime();
	struct FQualifiedFrameTime GetMasterSequenceTime();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID* ObjectBinding);
	class UObject* GetBoundObject(struct FMovieSceneObjectBindingID* ObjectBinding);
	TArray<class AActor*> GetBoundActors(struct FMovieSceneObjectBindingID* ObjectBinding);
	class AActor* GetBoundActor(struct FMovieSceneObjectBindingID* ObjectBinding);
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
	FMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x4D0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_543[0x120];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelSequencePlayer* GetDefaultObj();

	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* CreateLevelSequencePlayer(struct FMovieSceneSequencePlaybackSettings* Settings, class ALevelSequenceActor** OutActor);
};

// 0x30 (0x68 - 0x38)
// Class LevelSequence.LevelSequenceProjectSettings
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                         bDefaultLockEngineToDisplayRate;                   // 0x38(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_548[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                DefaultDisplayRate;                                // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DefaultTickResolution;                             // 0x50(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EUpdateClockSource                DefaultClockSource;                                // 0x60(0x1)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_549[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelSequenceProjectSettings* GetDefaultObj();

};

// 0x28 (0x4F0 - 0x4C8)
// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public AActor
{
public:
	uint8                                        Pad_550[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class ALevelSequenceActor*                   Sequence;                                          // 0x4D0(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UMediaComponent*                       MediaComponent;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	float                                        ServerStartTimeSeconds;                            // 0x4E0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_553[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALevelSequenceMediaController* GetDefaultObj();

	float SynchronizeToServer();
	void Play();
	void OnRep_ServerStartTimeSeconds();
	class ALevelSequenceActor* GetSequence();
	class UMediaComponent* GetMediaComponent();
};

}


