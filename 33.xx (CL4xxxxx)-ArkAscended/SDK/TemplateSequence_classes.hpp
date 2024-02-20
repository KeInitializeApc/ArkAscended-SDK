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
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	TSoftClassPtr<class AActor>                  BoundActorClass;                                   // 0x70(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TMap<struct FGuid, class FName>              BoundActorComponents;                              // 0xA0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)

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

// 0x8B8 (0x8E0 - 0x28)
// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
class UCameraAnimationSequenceCameraStandIn : public UObject
{
public:
	float                                        FieldOfView;                                       // 0x28(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_AC : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1358[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AspectRatio;                                       // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1359[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x40(0x780)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst)
	float                                        PostProcessBlendWeight;                            // 0x7C0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCameraFilmbackSettings               Filmback;                                          // 0x7C4(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0x7D0(0x1C)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst)
	uint8                                        Pad_135C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCameraFocusSettings                  FocusSettings;                                     // 0x7F0(0x68)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0x858(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Config)
	float                                        CurrentAperture;                                   // 0x85C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config)
	float                                        CurrentFocusDistance;                              // 0x860(0x4)(Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_135E[0x7C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationSequenceCameraStandIn* GetDefaultObj();

};

// 0x368 (0x390 - 0x28)
// Class TemplateSequence.CameraAnimationSequencePlayer
class UCameraAnimationSequencePlayer : public UObject
{
public:
	uint8                                        Pad_1364[0x270];                                   // Fixing Size After Last Property  > TateDumper <
	class UObject*                               BoundObjectOverride;                               // 0x298(0x8)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UMovieSceneSequence*                   Sequence;                                          // 0x2A0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2A8(0x88)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1367[0x60];                                    // Fixing Size Of Struct > TateDumper <

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
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_137B[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCameraAnimationSequenceSubsystem* GetDefaultObj();

};

// 0x10 (0x148 - 0x138)
// Class TemplateSequence.TemplateSequenceSection
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:
	TArray<struct FTemplateSectionPropertyScale> PropertyScales;                                    // 0x138(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTemplateSequenceSection* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class TemplateSequence.SequenceCameraShakePattern
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        PlayRate;                                          // 0x30(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	float                                        Scale;                                             // 0x34(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	float                                        BlendInTime;                                       // 0x38(0x4)(Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendOutTime;                                      // 0x3C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandomSegmentDuration;                             // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bRandomSegment;                                    // 0x44(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1382[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnimationSequencePlayer*        Player;                                            // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                                     // 0x50(0x8)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class USequenceCameraShakePattern* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class TemplateSequence.TemplateSequenceSystem
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1385[0x70];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTemplateSequenceSystem* GetDefaultObj();

};

// 0x58 (0x98 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1387[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingInstantiatorSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_138A[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingEvaluatorSystem* GetDefaultObj();

};

// 0x60 (0x528 - 0x4C8)
// Class TemplateSequence.TemplateSequenceActor
class ATemplateSequenceActor : public AActor
{
public:
	uint8                                        Pad_13D2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x4D0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTemplateSequencePlayer*               SequencePlayer;                                    // 0x4F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       TemplateSequence;                                  // 0x4F8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FTemplateSequenceBindingOverrideData  BindingOverride;                                   // 0x518(0xC)(Edit, ConstParm, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13D4[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ATemplateSequenceActor* GetDefaultObj();

	void SetSequence(class UTemplateSequence* InSequence);
	bool SetBinding(class AActor** Actor);
	void LoadSequence(class UTemplateSequence* ReturnValue);
	void GetSequencePlayer(class UTemplateSequencePlayer* ReturnValue);
	void GetSequence(class UTemplateSequence* ReturnValue);
};

// 0x8 (0x4D8 - 0x4D0)
// Class TemplateSequence.TemplateSequencePlayer
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	uint8                                        Pad_13E1[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTemplateSequencePlayer* GetDefaultObj();

	class UTemplateSequence* CreateTemplateSequencePlayer(const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor, class UTemplateSequencePlayer* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TemplateSequence.SequenceCameraShakeTestUtil
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceCameraShakeTestUtil* GetDefaultObj();

	void GetPostProcessBlendCache(class APlayerController** PlayerController, int32* PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight, bool ReturnValue);
	void GetLastFrameCameraCachePOV(class APlayerController** PlayerController, const struct FMinimalViewInfo& ReturnValue);
	void GetCameraCachePOV(class APlayerController** PlayerController, const struct FMinimalViewInfo& ReturnValue);
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


