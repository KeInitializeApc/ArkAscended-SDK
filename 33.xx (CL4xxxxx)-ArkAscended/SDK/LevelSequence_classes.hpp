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
	uint8                                        Pad_308[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieScene*                           MovieScene;                                        // 0x70(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x78(0x50)(Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0xC8(0xF0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, SubobjectReference)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x1B8(0x50)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, InstancedReference, SubobjectReference)
	class UClass*                                DirectorClass;                                     // 0x208(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x210(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class ULevelSequence* GetDefaultObj();

	class UClass* RemoveMetaDataByClass();
	class UClass* FindOrAddMetaDataByClass(class UObject* ReturnValue);
	class UClass* FindMetaDataByClass(class UObject* ReturnValue);
	void CopyMetaData(class UObject** InMetaData, class UObject* ReturnValue);
};

// 0x78 (0xA0 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_30A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                TransformOriginActor;                              // 0x30(0x8)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_30B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            TransformOrigin;                                   // 0x40(0x60)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

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
	struct FGuid                                 SkelTrackGuid;                                     // 0x28(0x10)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       PathToLevelSequence;                               // 0x38(0x20)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_314[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x20)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, InstancedReference, SubobjectReference)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x50(0x8)(Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInOptions* GetDefaultObj();

	struct FSoftClassPath SetBurnIn();
};

// 0x78 (0x540 - 0x4C8)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_371[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x4D8(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x4F8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class ULevelSequence*                        LevelSequenceAsset;                                // 0x500(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLevelSequenceCameraSettings          CameraSettings;                                    // 0x508(0x2)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_375[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x510(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x518(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x520(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x520(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x520(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_21 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_379[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UObject*                               DefaultInstanceData;                               // 0x528(0x8)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x530(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowBurnin;                                       // 0x538(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37B[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALevelSequenceActor* GetDefaultObj();

	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	TArray<class AActor*> SetBindingByTag(class FName BindingTag, bool* bAllowBindingsFromAsset);
	TArray<class AActor*> SetBinding(struct FMovieSceneObjectBindingID* Binding, bool* bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(struct FMovieSceneObjectBindingID* Binding);
	class FName RemoveBindingByTag(class AActor** Actor);
	void RemoveBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	void LoadSequence(class ULevelSequence* ReturnValue);
	void HideBurnin();
	void GetSequencePlayer(class ULevelSequencePlayer* ReturnValue);
	void GetSequence(class ULevelSequence* ReturnValue);
	class FName FindNamedBindings(const TArray<struct FMovieSceneObjectBindingID>& ReturnValue);
	class FName FindNamedBinding(const struct FMovieSceneObjectBindingID& ReturnValue);
	void AddBindingByTag(class FName BindingTag, class AActor** Actor, bool* bAllowBindingsFromAsset);
	void AddBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor, bool* bAllowBindingsFromAsset);
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
	TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x28(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj();

};

// 0xD8 (0x3F8 - 0x320)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x320(0xD0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x3F0(0x8)(Edit, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnIn* GetDefaultObj();

	class UObject* SetSettings();
	void GetSettingsClass(class UClass* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	int32                                        SubSequenceID;                                     // 0x30(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        MovieScenePlayerIndex;                             // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
	FMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x4D0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3F3[0x120];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelSequencePlayer* GetDefaultObj();

	void GetActiveCameraComponent(class UCameraComponent* ReturnValue);
	class UObject* CreateLevelSequencePlayer(class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor, class ULevelSequencePlayer* ReturnValue);
};

// 0x30 (0x68 - 0x38)
// Class LevelSequence.LevelSequenceProjectSettings
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                         bDefaultLockEngineToDisplayRate;                   // 0x38(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3FB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                DefaultDisplayRate;                                // 0x40(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                DefaultTickResolution;                             // 0x50(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EUpdateClockSource                DefaultClockSource;                                // 0x60(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_3FE[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelSequenceProjectSettings* GetDefaultObj();

};

// 0x28 (0x4F0 - 0x4C8)
// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public AActor
{
public:
	uint8                                        Pad_407[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class ALevelSequenceActor*                   Sequence;                                          // 0x4D0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UMediaComponent*                       MediaComponent;                                    // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	float                                        ServerStartTimeSeconds;                            // 0x4E0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_409[0xC];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALevelSequenceMediaController* GetDefaultObj();

	float SynchronizeToServer();
	void Play();
	void OnRep_ServerStartTimeSeconds();
	void GetSequence(class ALevelSequenceActor* ReturnValue);
	void GetMediaComponent(class UMediaComponent* ReturnValue);
};

}


