#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x158 - 0xF0)
// Class MovieSceneTracks.MovieSceneParameterSection
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_EDE[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FBoolParameterNameAndCurve>    BoolParameterNamesAndCurves;                       // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FScalarParameterNameAndCurve>  ScalarParameterNamesAndCurves;                     // 0x108(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;                   // 0x118(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;                     // 0x128(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FColorParameterNameAndCurves>  ColorParameterNamesAndCurves;                      // 0x138(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;                  // 0x148(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneParameterSection* GetDefaultObj();

	bool RemoveVectorParameter(class FName InParameterName);
	bool RemoveVector2DParameter(class FName InParameterName);
	bool RemoveTransformParameter(class FName InParameterName);
	bool RemoveScalarParameter(class FName InParameterName);
	bool RemoveColorParameter(class FName InParameterName);
	bool RemoveBoolParameter(class FName InParameterName);
	TSet<class FName> GetParameterNames();
	struct FVector AddVectorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime);
	struct FVector2D AddVector2DParameterKey(class FName InParameterName, const struct FFrameNumber& InTime);
	struct FTransform AddTransformParameterKey(class FName InParameterName, const struct FFrameNumber& InTime);
	float AddScalarParameterKey(class FName InParameterName, const struct FFrameNumber& InTime);
	struct FLinearColor AddColorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime);
	bool AddBoolParameterKey(class FName InParameterName, const struct FFrameNumber& InTime);
};

// 0x30 (0xC8 - 0x98)
// Class MovieSceneTracks.MovieScenePropertyTrack
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class UMovieSceneSection*                    SectionToKey;                                      // 0x98(0x8)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FMovieScenePropertyBinding            PropertyBinding;                                   // 0xA0(0x14)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_EED[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB8(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScenePropertyTrack* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
class UMovieSceneCameraShakeEvaluator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeEvaluator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneTransformOrigin
class IMovieSceneTransformOrigin : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneTransformOrigin* GetDefaultObj();

	struct FTransform BP_GetTransformOrigin();
};

// 0x40 (0x130 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraAnimSection
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData      AnimData;                                          // 0xF0(0x20)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UCameraAnim*                           CameraAnim;                                        // 0x110(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	float                                        PlayRate;                                          // 0x118(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        PlayScale;                                         // 0x11C(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendInTime;                                       // 0x120(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendOutTime;                                      // 0x124(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLooping;                                          // 0x128(0x1)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_F07[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCameraAnimSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraAnimTrack
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_F0B[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            CameraAnimSections;                                // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCameraAnimTrack* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneConsoleVariableTrackInterface
class IMovieSceneConsoleVariableTrackInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneConsoleVariableTrackInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MovieSceneTracks.MovieSceneDecomposerTestObject
class UMovieSceneDecomposerTestObject : public UObject
{
public:
	float                                        FloatProperty;                                     // 0x28(0x4)(ExportObject, BlueprintReadOnly)
	uint8                                        Pad_F24[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneDecomposerTestObject* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class MovieSceneTracks.MovieSceneTestSequence
class UMovieSceneTestSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	TArray<class UObject*>                       BoundObjects;                                      // 0x70(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FGuid>                         BindingGuids;                                      // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneTestSequence* GetDefaultObj();

};

// 0x68 (0xC0 - 0x58)
// Class MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{
public:
	struct FMovieSceneDoublePerlinNoiseChannel   PerlinNoiseChannel;                                // 0x58(0x68)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneDoublePerlinNoiseChannelContainer* GetDefaultObj();

};

// 0x68 (0xC0 - 0x58)
// Class MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
class UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{
public:
	struct FMovieSceneFloatPerlinNoiseChannel    PerlinNoiseChannel;                                // 0x58(0x68)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneFloatPerlinNoiseChannelContainer* GetDefaultObj();

};

// 0x1B0 (0x1F0 - 0x40)
// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_F3D[0x1B0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneInterrogatedPropertyInstantiatorSystem* GetDefaultObj();

};

// 0x28 (0x118 - 0xF0)
// Class MovieSceneTracks.MovieScene3DConstraintSection
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                 ConstraintId;                                      // 0xF0(0x10)(Edit, ConstParm, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneObjectBindingID            ConstraintBindingID;                               // 0x100(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScene3DConstraintSection* GetDefaultObj();

	struct FMovieSceneObjectBindingID SetConstraintBindingID();
	struct FMovieSceneObjectBindingID GetConstraintBindingID();
};

// 0x20 (0x138 - 0x118)
// Class MovieSceneTracks.MovieScene3DAttachSection
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	uint8                                        Pad_F52[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  AttachSocketName;                                  // 0x120(0x8)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  AttachComponentName;                               // 0x128(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAttachmentRule                   AttachmentLocationRule;                            // 0x130(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAttachmentRule                   AttachmentRotationRule;                            // 0x131(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAttachmentRule                   AttachmentScaleRule;                               // 0x132(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDetachmentRule                   DetachmentLocationRule;                            // 0x133(0x1)(Edit, Net, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDetachmentRule                   DetachmentRotationRule;                            // 0x134(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDetachmentRule                   DetachmentScaleRule;                               // 0x135(0x1)(ConstParm, ExportObject, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_F5A[0x2];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScene3DAttachSection* GetDefaultObj();

};

// 0x118 (0x230 - 0x118)
// Class MovieSceneTracks.MovieScene3DPathSection
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FMovieSceneFloatChannel               TimingCurve;                                       // 0x118(0x110)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x228(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x229(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F64[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x22C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x22C(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x22C(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F67[0x3];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScene3DPathSection* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieSceneTracks.MovieScene3DTransformSectionConstraints
class UMovieScene3DTransformSectionConstraints : public UObject
{
public:
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScene3DTransformSectionConstraints* GetDefaultObj();

};

// 0xB48 (0xC38 - 0xF0)
// Class MovieSceneTracks.MovieScene3DTransformSection
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_F6E[0x40];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x130(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_F72[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneDoubleChannel              Translation[0x3];                                  // 0x138(0x348)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FMovieSceneDoubleChannel              Rotation[0x3];                                     // 0x480(0x348)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FMovieSceneDoubleChannel              Scale[0x3];                                        // 0x7C8(0x348)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FMovieSceneFloatChannel               ManualWeight;                                      // 0xB10(0x110)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;                                  // 0xC20(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UMovieScene3DTransformSectionConstraints* Constraints;                                       // 0xC28(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	bool                                         bUseQuaternionInterpolation;                       // 0xC30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_F79[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScene3DTransformSection* GetDefaultObj();

};

// 0x1B0 (0x2A0 - 0xF0)
// Class MovieSceneTracks.MovieSceneActorReferenceSection
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FMovieSceneActorReferenceData         ActorReferenceData;                                // 0xF0(0x120)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FIntegralCurve                        ActorGuidIndexCurve;                               // 0x210(0x80)(Edit, ConstParm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class FString>                        ActorGuidStrings;                                  // 0x290(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneActorReferenceSection* GetDefaultObj();

};

// 0x530 (0x620 - 0xF0)
// Class MovieSceneTracks.MovieSceneAudioSection
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                            Sound;                                             // 0xF0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, EditConst, SubobjectReference)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xF8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceNeverStopTrack;                              // 0xFC(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_F96[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartOffset;                                       // 0x100(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AudioStartTime;                                    // 0x104(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AudioDilationFactor;                               // 0x108(0x4)(Net, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AudioVolume;                                       // 0x10C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	struct FMovieSceneFloatChannel               SoundVolume;                                       // 0x110(0x110)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               PitchMultiplier;                                   // 0x220(0x110)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference)
	TMap<class FName, struct FMovieSceneFloatChannel> Inputs_Float;                                      // 0x330(0x50)(Edit, ExportObject, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class FName, struct FMovieSceneStringChannel> Inputs_String;                                     // 0x380(0x50)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class FName, struct FMovieSceneBoolChannel> Inputs_Bool;                                       // 0x3D0(0x50)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class FName, struct FMovieSceneIntegerChannel> Inputs_Int;                                        // 0x420(0x50)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class FName, struct FMovieSceneAudioTriggerChannel> Inputs_Trigger;                                    // 0x470(0x50)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneActorReferenceData         AttachActorData;                                   // 0x4C0(0x120)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLooping;                                          // 0x5E0(0x1)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	bool                                         bSuppressSubtitles;                                // 0x5E1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bOverrideAttenuation;                              // 0x5E2(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_FA3[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class USoundAttenuation*                     AttenuationSettings;                               // 0x5E8(0x8)(EditFixedSize, ReturnParm, EditConst, SubobjectReference)
	FDelegateProperty_                           OnQueueSubtitles;                                  // 0x5F0(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAudioFinished;                                   // 0x600(0x10)(ConstParm, Net, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAudioPlaybackPercent;                            // 0x610(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneAudioSection* GetDefaultObj();

	struct FFrameNumber SetStartOffset();
	class USoundBase* SetSound();
	struct FFrameNumber GetStartOffset();
	class USoundBase* GetSound();
};

// 0x8 (0xF8 - 0xF0)
// Class MovieSceneTracks.MovieSceneBaseCacheSection
class UMovieSceneBaseCacheSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_FA8[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneBaseCacheSection* GetDefaultObj();

};

// 0x110 (0x200 - 0xF0)
// Class MovieSceneTracks.MovieSceneByteSection
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_FAA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneByteChannel                ByteCurve;                                         // 0xF8(0x108)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneByteSection* GetDefaultObj();

};

// 0xB0 (0x1A0 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraCutSection
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_FB1[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bLockPreviousCamera;                               // 0xF8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_FB2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 CameraGuid;                                        // 0xFC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneObjectBindingID            CameraBindingID;                                   // 0x10C(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_FB5[0xC];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InitialCameraCutTransform;                         // 0x130(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHasInitialCameraCutTransform;                     // 0x190(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_FB6[0xF];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCameraCutSection* GetDefaultObj();

	struct FMovieSceneObjectBindingID SetCameraBindingID();
	struct FMovieSceneObjectBindingID GetCameraBindingID();
};

// 0x50 (0x140 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraShakeSection
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData     ShakeData;                                         // 0xF0(0x28)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ShakeClass;                                        // 0x118(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayScale;                                         // 0x120(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x124(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_FBB[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              UserDefinedPlaySpace;                              // 0x128(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSection* GetDefaultObj();

};

// 0x28 (0x118 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData     ShakeData;                                         // 0xF0(0x28)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSourceShakeSection* GetDefaultObj();

};

// 0xF8 (0x1E8 - 0xF0)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel;                                           // 0xF0(0xF8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSourceTriggerSection* GetDefaultObj();

};

// 0x28 (0x160 - 0x138)
// Class MovieSceneTracks.MovieSceneCinematicShotSection
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	class FString                                ShotDisplayName;                                   // 0x138(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FText                                  DisplayName;                                       // 0x148(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)

	static class UClass* StaticClass();
	static class UMovieSceneCinematicShotSection* GetDefaultObj();

	class FString SetShotDisplayName();
	class FString GetShotDisplayName();
};

// 0x448 (0x538 - 0xF0)
// Class MovieSceneTracks.MovieSceneColorSection
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_FCD[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               RedCurve;                                          // 0xF8(0x110)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               GreenCurve;                                        // 0x208(0x110)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               BlueCurve;                                         // 0x318(0x110)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               AlphaCurve;                                        // 0x428(0x110)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneColorSection* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneConstrainedSection
class IMovieSceneConstrainedSection : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneConstrainedSection* GetDefaultObj();

};

// 0x68 (0x158 - 0xF0)
// Class MovieSceneTracks.MovieSceneCVarSection
class UMovieSceneCVarSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_FE4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMovieSceneConsoleVariableCollection> ConsoleVariableCollections;                        // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneCVarOverrides              ConsoleVariables;                                  // 0x108(0x50)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCVarSection* GetDefaultObj();

	void SetFromString(class FString* InString);
	class FString GetString();
};

// 0x30 (0x120 - 0xF0)
// Class MovieSceneTracks.MovieSceneDataLayerSection
class UMovieSceneDataLayerSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_102B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FActorDataLayer>               DataLayers;                                        // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UDataLayerAsset*>               DataLayerAssets;                                   // 0x108(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDataLayerRuntimeState            DesiredState;                                      // 0x118(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EDataLayerRuntimeState            PrerollState;                                      // 0x119(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bFlushOnUnload;                                    // 0x11A(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1032[0x5];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneDataLayerSection* GetDefaultObj();

	enum class EDataLayerRuntimeState SetPrerollState();
	bool SetFlushOnUnload();
	enum class EDataLayerRuntimeState SetDesiredState();
	TArray<struct FActorDataLayer> SetDataLayers();
	TArray<class UDataLayerAsset*> SetDataLayerAssets();
	enum class EDataLayerRuntimeState GetPrerollState();
	bool GetFlushOnUnload();
	enum class EDataLayerRuntimeState GetDesiredState();
	TArray<struct FActorDataLayer> GetDataLayers();
	TArray<class UDataLayerAsset*> GetDataLayerAssets();
};

// 0x120 (0x210 - 0xF0)
// Class MovieSceneTracks.MovieSceneDoubleSection
class UMovieSceneDoubleSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_103D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneDoubleChannel              DoubleCurve;                                       // 0xF8(0x118)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneDoubleSection* GetDefaultObj();

};

// 0x110 (0x200 - 0xF0)
// Class MovieSceneTracks.MovieSceneEnumSection
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1043[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneByteChannel                EnumCurve;                                         // 0xF8(0x108)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneEnumSection* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MovieSceneTracks.MovieSceneEventSectionBase
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEventSectionBase* GetDefaultObj();

};

// 0x30 (0x120 - 0xF0)
// Class MovieSceneTracks.MovieSceneEventRepeaterSection
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:
	uint8                                        Pad_104A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneEvent                      Event;                                             // 0xF8(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneEventRepeaterSection* GetDefaultObj();

};

// 0x170 (0x260 - 0xF0)
// Class MovieSceneTracks.MovieSceneEventSection
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                            Events;                                            // 0xF0(0x78)(BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneEventSectionData           EventData;                                         // 0x168(0xF8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneEventSection* GetDefaultObj();

};

// 0x100 (0x1F0 - 0xF0)
// Class MovieSceneTracks.MovieSceneEventTriggerSection
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:
	uint8                                        Pad_1054[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneEventChannel               EventChannel;                                      // 0xF8(0xF8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneEventTriggerSection* GetDefaultObj();

};

// 0x130 (0x220 - 0xF0)
// Class MovieSceneTracks.MovieSceneFadeSection
class UMovieSceneFadeSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1058[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0xF8(0x110)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst)
	struct FLinearColor                          FadeColor;                                         // 0x208(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bFadeAudio : 1;                                    // Mask: 0x1, PropSize: 0x10x218(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_105C[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneFadeSection* GetDefaultObj();

};

// 0x128 (0x218 - 0xF0)
// Class MovieSceneTracks.MovieSceneFloatSection
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1064[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0x100(0x110)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst)
	class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;                                  // 0x210(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneFloatSection* GetDefaultObj();

};

// 0x108 (0x1F8 - 0xF0)
// Class MovieSceneTracks.MovieSceneIntegerSection
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1069[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneIntegerChannel             IntegerCurve;                                      // 0xF8(0x100)(Edit, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneIntegerSection* GetDefaultObj();

};

// 0x20 (0x110 - 0xF0)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	uint8                                        Pad_107B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ELevelVisibility                  Visibility;                                        // 0xF8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_107D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          LevelNames;                                        // 0x100(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneLevelVisibilitySection* GetDefaultObj();

	enum class ELevelVisibility SetVisibility();
	TArray<class FName> SetLevelNames();
	enum class ELevelVisibility GetVisibility();
	TArray<class FName> GetLevelNames();
};

// 0x138 (0x228 - 0xF0)
// Class MovieSceneTracks.MovieSceneObjectPropertySection
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel          ObjectChannel;                                     // 0xF0(0x138)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneObjectPropertySection* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneTracks.MovieSceneParameterSectionExtender
class IMovieSceneParameterSectionExtender : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneParameterSectionExtender* GetDefaultObj();

};

// 0x108 (0x1F8 - 0xF0)
// Class MovieSceneTracks.MovieSceneParticleSection
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FMovieSceneParticleChannel            ParticleKeys;                                      // 0xF0(0x108)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneParticleSection* GetDefaultObj();

};

// 0x140 (0x230 - 0xF0)
// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1088[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneObjectPathChannel          MaterialChannel;                                   // 0xF8(0x138)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialSection* GetDefaultObj();

};

// 0x270 (0x360 - 0xF0)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_1093[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSkeletalAnimationParams    Params;                                            // 0xF8(0x150)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimSequence*                         AnimSequence;                                      // 0x248(0x8)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
	class UAnimSequenceBase*                     Animation;                                         // 0x250(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
	float                                        StartOffset;                                       // 0x258(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndOffset;                                         // 0x25C(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayRate;                                          // 0x260(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x264(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_7C : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_10A5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SlotName;                                          // 0x268(0x8)(Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               StartLocationOffset;                               // 0x270(0x18)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRotator                              StartRotationOffset;                               // 0x288(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMatchWithPrevious;                                // 0x2A0(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_10AA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  MatchedBoneName;                                   // 0x2A4(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_10AC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               MatchedLocationOffset;                             // 0x2B0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRotator                              MatchedRotationOffset;                             // 0x2C8(0x18)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMatchTranslation;                                 // 0x2E0(0x1)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMatchIncludeZHeight;                              // 0x2E1(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMatchRotationYaw;                                 // 0x2E2(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMatchRotationPitch;                               // 0x2E3(0x1)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMatchRotationRoll;                                // 0x2E4(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_10B1[0x7B];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSkeletalAnimationSection* GetDefaultObj();

};

// 0x110 (0x200 - 0xF0)
// Class MovieSceneTracks.MovieSceneSlomoSection
class UMovieSceneSlomoSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               FloatCurve;                                        // 0xF0(0x110)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst)

	static class UClass* StaticClass();
	static class UMovieSceneSlomoSection* GetDefaultObj();

};

// 0x110 (0x200 - 0xF0)
// Class MovieSceneTracks.MovieSceneStringSection
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FMovieSceneStringChannel              StringCurve;                                       // 0xF0(0x110)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

	static class UClass* StaticClass();
	static class UMovieSceneStringSection* GetDefaultObj();

};

// 0x450 (0x540 - 0xF0)
// Class MovieSceneTracks.MovieSceneFloatVectorSection
class UMovieSceneFloatVectorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_10C4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFloatChannel               Curves[0x4];                                       // 0xF8(0x440)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	int32                                        ChannelsUsed;                                      // 0x538(0x4)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10C5[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorSection* GetDefaultObj();

};

// 0x470 (0x560 - 0xF0)
// Class MovieSceneTracks.MovieSceneDoubleVectorSection
class UMovieSceneDoubleVectorSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_10CA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneDoubleChannel              Curves[0x4];                                       // 0xF8(0x460)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	int32                                        ChannelsUsed;                                      // 0x558(0x4)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_10CB[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorSection* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.BoolChannelEvaluatorSystem
class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UBoolChannelEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.ByteChannelEvaluatorSystem
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UByteChannelEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.DoubleChannelEvaluatorSystem
class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UDoubleChannelEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
class UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UDoublePerlinNoiseChannelEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.FloatChannelEvaluatorSystem
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UFloatChannelEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
class UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UFloatPerlinNoiseChannelEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UIntegerChannelEvaluatorSystem* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class MovieSceneTracks.MovieScenePropertySystem
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_10E4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;                                // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_10E5[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScenePropertySystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScene3DTransformPropertySystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBaseValueEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneBoolPropertySystem
class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBoolPropertySystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneBytePropertySystem
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBytePropertySystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneColorPropertySystem
class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneColorPropertySystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneComponentAttachmentInvalidatorSystem* GetDefaultObj();

};

// 0x190 (0x1D0 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_1108[0x190];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneComponentAttachmentSystem* GetDefaultObj();

};

// 0x160 (0x1A0 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentMaterialSystem
class UMovieSceneComponentMaterialSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1111[0x160];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneComponentMaterialSystem* GetDefaultObj();

};

// 0x1F0 (0x230 - 0x40)
// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_1114[0x1F0];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneComponentMobilitySystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneComponentTransformSystem
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneComponentTransformSystem* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MovieSceneTracks.MovieSceneConstraintSystem
class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_111B[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneConstraintSystem* GetDefaultObj();

};

// 0x90 (0xD0 - 0x40)
// Class MovieSceneTracks.MovieSceneDataLayerSystem
class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_111D[0x90];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneDataLayerSystem* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_111F[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneDeferredComponentMovementSystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneDoublePropertySystem
class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoublePropertySystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneEnumPropertySystem
class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEnumPropertySystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEulerTransformPropertySystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class MovieSceneTracks.MovieSceneEventSystem
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_112F[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneEventSystem* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePreSpawnEventSystem* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePostSpawnEventSystem* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class MovieSceneTracks.MovieScenePostEvalEventSystem
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScenePostEvalEventSystem* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MovieSceneTracks.MovieSceneFadeSystem
class UMovieSceneFadeSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1146[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneFadeSystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneFloatPropertySystem
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatPropertySystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneHierarchicalBiasSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneInitialValueSystem
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneInitialValueSystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneIntegerPropertySystem* GetDefaultObj();

};

// 0x168 (0x1A8 - 0x40)
// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1159[0x168];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLevelVisibilitySystem* GetDefaultObj();

};

// 0x20 (0x60 - 0x40)
// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
class UMovieSceneMaterialParameterCollectionSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_115C[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneMaterialParameterCollectionSystem* GetDefaultObj();

};

// 0x318 (0x358 - 0x40)
// Class MovieSceneTracks.MovieSceneMaterialParameterSystem
class UMovieSceneMaterialParameterSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_115F[0x310];                                   // Fixing Size After Last Property  > TateDumper <
	class UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem;                               // 0x350(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneMaterialParameterSystem* GetDefaultObj();

};

// 0x58 (0x98 - 0x40)
// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_1167[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneMotionVectorSimulationSystem* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_1169[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScenePiecewiseBoolBlenderSystem* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_116D[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScenePiecewiseByteBlenderSystem* GetDefaultObj();

};

// 0xC8 (0x130 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_1171[0xC8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScenePiecewiseDoubleBlenderSystem* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_1174[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScenePiecewiseEnumBlenderSystem* GetDefaultObj();

};

// 0x48 (0xB0 - 0x68)
// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_1178[0x48];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScenePiecewiseIntegerBlenderSystem* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Result;                                            // 0x30(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
	FMulticastInlineDelegateProperty_            Failure;                                           // 0x40(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_119E[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneSequencePlayer*             SequencePlayer;                                    // 0x60(0x8)(Edit, OutParm, InstancedReference, SubobjectReference)
	class USceneComponent*                       SceneComponent;                                    // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	uint8                                        Pad_119F[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneAsyncAction_SequencePrediction* GetDefaultObj();

	class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(class UMovieSceneSequencePlayer** Player, float TimeInSeconds);
	class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer** Player);
	class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(class UMovieSceneSequencePlayer** Player, float TimeInSeconds);
	class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer** Player);
};

// 0xB0 (0xF0 - 0x40)
// Class MovieSceneTracks.MovieScenePredictionSystem
class UMovieScenePredictionSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_11A6[0x90];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;                                // 0xD0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;                             // 0xE0(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScenePredictionSystem* GetDefaultObj();

};

// 0x208 (0x248 - 0x40)
// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_11A8[0x208];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScenePropertyInstantiatorSystem* GetDefaultObj();

};

// 0x70 (0xD8 - 0x68)
// Class MovieSceneTracks.MovieSceneQuaternionBlenderSystem
class UMovieSceneQuaternionBlenderSystem : public UMovieSceneBlenderSystem
{
public:
	uint8                                        Pad_11AB[0x70];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneQuaternionBlenderSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneQuaternionInterpolationRotationSystem* GetDefaultObj();

};

// 0xA0 (0xE0 - 0x40)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationSystem
class UMovieSceneSkeletalAnimationSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_11B4[0xA0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSkeletalAnimationSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem
class UMovieSceneTransformOriginInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTransformOriginInstantiatorSystem* GetDefaultObj();

};

// 0x38 (0x78 - 0x40)
// Class MovieSceneTracks.MovieSceneTransformOriginSystem
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_11BC[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneTransformOriginSystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem
class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorPropertySystem* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorPropertySystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieSceneTracks.ObjectPathChannelEvaluatorSystem
class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UObjectPathChannelEvaluatorSystem* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_11C7[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	class UWeightAndEasingEvaluatorSystem*       EvaluatorSystem;                                   // 0x78(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneHierarchicalEasingInstantiatorSystem* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_11CA[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWeightAndEasingEvaluatorSystem* GetDefaultObj();

};

// 0x78 (0xC8 - 0x50)
// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{
public:
	uint8                                        Pad_11D6[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCameraCutTrackInstance* GetDefaultObj();

};

// 0x50 (0xA0 - 0x50)
// Class MovieSceneTracks.MovieSceneCVarTrackInstance
class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance
{
public:
	uint8                                        Pad_11D7[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCVarTrackInstance* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieScene3DConstraintTrack
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            ConstraintSections;                                // 0x98(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScene3DConstraintTrack* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MovieSceneTracks.MovieScene3DAttachTrack
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieScene3DAttachTrack* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MovieSceneTracks.MovieScene3DPathTrack
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:
	uint8                                        Pad_11E3[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScene3DPathTrack* GetDefaultObj();

};

// 0x10 (0xD8 - 0xC8)
// Class MovieSceneTracks.MovieScene3DTransformTrack
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_11E7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                BlenderSystemClass;                                // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieScene3DTransformTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneActorReferenceTrack
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_11E9[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneActorReferenceTrack* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneAudioTrack
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_11ED[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            AudioSections;                                     // 0xA0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneAudioTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneBoolTrack
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_11EE[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneBoolTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneByteTrack
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xC8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneByteTrack* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraCutTrack
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	bool                                         bCanBlend;                                         // 0x98(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_11F5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xA0(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCameraCutTrack* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_11FA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            CameraShakeSections;                               // 0xA0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSourceShakeTrack* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_11FF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xA0(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeSourceTriggerTrack* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneCameraShakeTrack
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_1206[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            CameraShakeSections;                               // 0xA0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCameraShakeTrack* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MovieSceneTracks.MovieSceneCinematicShotTrack
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCinematicShotTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneColorTrack
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                         bIsSlateColor;                                     // 0xC8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_120B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneColorTrack* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieSceneCVarTrack
class UMovieSceneCVarTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneCVarTrack* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieSceneDataLayerTrack
class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneDataLayerTrack* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class MovieSceneTracks.MovieSceneDoubleTrack
class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneDoubleTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneEnumTrack
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                 Enum;                                              // 0xC8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UMovieSceneEnumTrack* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class MovieSceneTracks.MovieSceneEulerTransformTrack
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEulerTransformTrack* GetDefaultObj();

};

// 0x28 (0xC0 - 0x98)
// Class MovieSceneTracks.MovieSceneEventTrack
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_121B[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10xA8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10xA8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_85 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_121D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EFireEventsAtPosition             EventPosition;                                     // 0xAC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_121E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xB0(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneEventTrack* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class MovieSceneTracks.MovieSceneFloatTrack
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFloatTrack* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class MovieSceneTracks.MovieSceneFadeTrack
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneFadeTrack* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class MovieSceneTracks.MovieSceneIntegerTrack
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneIntegerTrack* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneLevelVisibilityTrack* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieSceneTracks.MovieSceneMaterialTrack
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneMaterialTrack* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_1233[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class UMaterialParameterCollection*          MPC;                                               // 0xB8(0x8)(ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneMaterialParameterCollectionTrack* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_1238[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        MaterialIndex;                                     // 0xB8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1239[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneComponentMaterialTrack* GetDefaultObj();

};

// 0x10 (0xD8 - 0xC8)
// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_1245[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                PropertyClass;                                     // 0xD0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneObjectPropertyTrack* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneParticleParameterTrack
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_1249[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xA0(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneParticleParameterTrack* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MovieSceneTracks.MovieSceneParticleTrack
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_124C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            ParticleSections;                                  // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneParticleTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        MaterialIndex;                                     // 0xC8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1253[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieScenePrimitiveMaterialTrack* GetDefaultObj();

};

// 0xA8 (0x140 - 0x98)
// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0x98(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseLegacySectionIndexBlend;                       // 0xA8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1258[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;                                  // 0xB0(0x80)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBlendFirstChildOfRoot;                            // 0x130(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_125A[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSkeletalAnimationTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneSlomoTrack
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:
	uint8                                        Pad_125E[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneSlomoTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneStringTrack
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_1262[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneStringTrack* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class MovieSceneTracks.MovieSceneTransformTrack
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneTransformTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneFloatVectorTrack
class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        NumChannelsUsed;                                   // 0xC8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1269[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneFloatVectorTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MovieSceneTracks.MovieSceneDoubleVectorTrack
class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack
{
public:
	int32                                        NumChannelsUsed;                                   // 0xC8(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_126C[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneDoubleVectorTrack* GetDefaultObj();

};

// 0x0 (0xD0 - 0xD0)
// Class MovieSceneTracks.MovieSceneVisibilityTrack
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneVisibilityTrack* GetDefaultObj();

};

}


