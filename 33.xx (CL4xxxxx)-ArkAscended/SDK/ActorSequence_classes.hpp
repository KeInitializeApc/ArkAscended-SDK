#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x90 - 0x68)
// Class ActorSequence.ActorSequence
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	struct FActorSequenceObjectReferenceMap      ObjectReferences;                                  // 0x70(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UActorSequence* GetDefaultObj();

};

// 0x30 (0xE8 - 0xB8)
// Class ActorSequence.ActorSequenceComponent
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0xB8(0x20)(Edit, ExportObject, OutParm, InstancedReference, SubobjectReference)
	class UActorSequence*                        Sequence;                                          // 0xD8(0x8)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UActorSequencePlayer*                  SequencePlayer;                                    // 0xE0(0x8)(Edit, OutParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UActorSequenceComponent* GetDefaultObj();

	void StopSequence();
	void PlaySequence();
	void PauseSequence();
};

// 0x0 (0x4D0 - 0x4D0)
// Class ActorSequence.ActorSequencePlayer
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static class UClass* StaticClass();
	static class UActorSequencePlayer* GetDefaultObj();

};

}


