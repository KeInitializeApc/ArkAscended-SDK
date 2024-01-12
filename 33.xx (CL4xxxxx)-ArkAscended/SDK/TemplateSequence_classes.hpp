#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xF0 - 0x68)
// Class TemplateSequence.TemplateSequence
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	TSoftClassPtr<class AActor>                  BoundActorClass;                                   // 0x70(0x30)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	TMap<struct FGuid, class FName>              BoundActorComponents;                              // 0xA0(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTemplateSequence* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class TemplateSequence.CameraAnimationSequence
class UCameraAnimationSequence : public UTemplateSequence
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationSequence* GetDefaultObj();

};

// 0x8A8 (0x8D0 - 0x28)
// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
class UCameraAnimationSequenceCameraStandIn : public UObject
{
public:
	float                                        FieldOfView;                                       // 0x28(0x4)(BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x2C(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_199 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_22B6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AspectRatio;                                       // 0x30(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_22B8[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x40(0x770)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	float                                        PostProcessBlendWeight;                            // 0x7B0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               Filmback;                                          // 0x7B4(0xC)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0x7C0(0x1C)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_22BB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCameraFocusSettings                  FocusSettings;                                     // 0x7E0(0x68)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0x848(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config)
	float                                        CurrentAperture;                                   // 0x84C(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Config)
	float                                        CurrentFocusDistance;                              // 0x850(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22BC[0x7C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationSequenceCameraStandIn* GetDefaultObj();

};

// 0x368 (0x390 - 0x28)
// Class TemplateSequence.CameraAnimationSequencePlayer
class UCameraAnimationSequencePlayer : public UObject
{
public:
	uint8                                        Pad_22BE[0x270];                                   // Fixing Size After Last Property  > TateDumper <
	class UObject*                               BoundObjectOverride;                               // 0x298(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UMovieSceneSequence*                   Sequence;                                          // 0x2A0(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2A8(0x88)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22BF[0x60];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationSequencePlayer* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class TemplateSequence.CameraAnimationSpawnableSystem
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationSpawnableSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationBoundObjectInstantiator* GetDefaultObj();

};

// 0x0 (0x6F8 - 0x6F8)
// Class TemplateSequence.CameraAnimationEntitySystemLinker
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationEntitySystemLinker* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class TemplateSequence.CameraAnimationSequenceSubsystem
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x30(0x8)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22C2[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationSequenceSubsystem* GetDefaultObj();

};

// 0x10 (0x148 - 0x138)
// Class TemplateSequence.TemplateSequenceSection
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:
	TArray<struct FTemplateSectionPropertyScale> PropertyScales;                                    // 0x138(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTemplateSequenceSection* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class TemplateSequence.SequenceCameraShakePattern
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x28(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        PlayRate;                                          // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Scale;                                             // 0x34(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        BlendInTime;                                       // 0x38(0x4)(Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendOutTime;                                      // 0x3C(0x4)(Edit, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandomSegmentDuration;                             // 0x40(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRandomSegment;                                    // 0x44(0x1)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22C7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnimationSequencePlayer*        Player;                                            // 0x48(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                                     // 0x50(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USequenceCameraShakePattern* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class TemplateSequence.TemplateSequenceSystem
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_22C9[0x70];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTemplateSequenceSystem* GetDefaultObj();

};

// 0x58 (0x98 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_22CC[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingInstantiatorSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_22CD[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingEvaluatorSystem* GetDefaultObj();

};

// 0x60 (0x528 - 0x4C8)
// Class TemplateSequence.TemplateSequenceActor
class ATemplateSequenceActor : public AActor
{
public:
	uint8                                        Pad_22DF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x4D0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UTemplateSequencePlayer*               SequencePlayer;                                    // 0x4F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       TemplateSequence;                                  // 0x4F8(0x20)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FTemplateSequenceBindingOverrideData  BindingOverride;                                   // 0x518(0xC)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_22E3[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ATemplateSequenceActor* GetDefaultObj();

	class UTemplateSequence* SetSequence();
	void SetBinding(class AActor** Actor, bool* bOverridesDefault);
	class UTemplateSequence* LoadSequence();
	class UTemplateSequencePlayer* GetSequencePlayer();
	class UTemplateSequence* GetSequence();
};

// 0x8 (0x4D8 - 0x4D0)
// Class TemplateSequence.TemplateSequencePlayer
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	uint8                                        Pad_22EB[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTemplateSequencePlayer* GetDefaultObj();

	class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UTemplateSequence** TemplateSequence, struct FMovieSceneSequencePlaybackSettings* Settings, class ATemplateSequenceActor** OutActor);
};

// 0x0 (0x28 - 0x28)
// Class TemplateSequence.SequenceCameraShakeTestUtil
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceCameraShakeTestUtil* GetDefaultObj();

	bool GetPostProcessBlendCache(class APlayerController** PlayerController, int32* PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight);
	struct FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController** PlayerController);
	struct FMinimalViewInfo GetCameraCachePOV(class APlayerController** PlayerController);
};

// 0x0 (0xA8 - 0xA8)
// Class TemplateSequence.TemplateSequenceTrack
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass();
	static class UTemplateSequenceTrack* GetDefaultObj();

};

}


