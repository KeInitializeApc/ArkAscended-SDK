#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieScene3DPathSection_Axis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6,
};

enum class ELevelVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2,
};

enum class EParticleKey : uint8
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};

enum class EFireEventsAtPosition : uint8
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x228 (0x228 - 0x0)
// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
struct FVector2DParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FMovieSceneFloatChannel               XCurve;                                            // 0x8(0x110)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               YCurve;                                            // 0x118(0x110)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct FScalarParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FMovieSceneFloatChannel               ParameterCurve;                                    // 0x8(0x110)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
struct FBoolParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FMovieSceneBoolChannel                ParameterCurve;                                    // 0x8(0x100)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x338 (0x338 - 0x0)
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct FVectorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FMovieSceneFloatChannel               XCurve;                                            // 0x8(0x110)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               YCurve;                                            // 0x118(0x110)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               ZCurve;                                            // 0x228(0x110)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x448 (0x448 - 0x0)
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct FColorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FMovieSceneFloatChannel               RedCurve;                                          // 0x8(0x110)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               GreenCurve;                                        // 0x118(0x110)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               BlueCurve;                                         // 0x228(0x110)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               AlphaCurve;                                        // 0x338(0x110)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x998 (0x998 - 0x0)
// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
struct FTransformParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FMovieSceneFloatChannel               Translation[0x3];                                  // 0x8(0x330)(ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FMovieSceneFloatChannel               Rotation[0x3];                                     // 0x338(0x330)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FMovieSceneFloatChannel               Scale[0x3];                                        // 0x668(0x330)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
};

// 0x60 (0x80 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FScalarParameterNameAndCurve>  Scalars;                                           // 0x20(0x10)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBoolParameterNameAndCurve>    Bools;                                             // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2DParameterNameAndCurves> Vector2Ds;                                         // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVectorParameterNameAndCurves> Vectors;                                           // 0x50(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FColorParameterNameAndCurves>  Colors;                                            // 0x60(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransformParameterNameAndCurves> Transforms;                                        // 0x70(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Values;                                            // 0x60(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
	class FString                                DefaultValue;                                      // 0x70(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasDefaultValue;                                  // 0x80(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1283[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x88(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
struct FMovieSceneCameraAnimSectionData
{
public:
	class UCameraAnim*                           CameraAnim;                                        // 0x0(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	float                                        PlayRate;                                          // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        PlayScale;                                         // 0xC(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendInTime;                                       // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        BlendOutTime;                                      // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLooping;                                          // 0x18(0x1)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1289[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x48 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraAnimSectionData      SourceData;                                        // 0x20(0x20)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionStartTime;                                  // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_128B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct FMovieSceneCameraShakeSectionData
{
public:
	class UClass*                                ShakeClass;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_128E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x20(0x28)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1291[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
struct FMovieScenePreAnimatedMaterialParameters
{
public:
	class UMaterialInterface*                    PreviousMaterial;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    PreviousParameterContainer;                        // 0x8(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
struct FMovieSceneCameraShakeSourceTrigger
{
public:
	class UClass*                                ShakeClass;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1295[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              UserDefinedPlaySpace;                              // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
struct FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues;                                         // 0x60(0x10)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.PerlinNoiseParams
struct FPerlinNoiseParams
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1297[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Amplitude;                                         // 0x8(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Offset;                                            // 0x10(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_129E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x68 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
struct FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel
{
public:
	struct FPerlinNoiseParams                    PerlinNoiseParams;                                 // 0x50(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
struct FMovieSceneEventPayloadVariable
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
struct FMovieSceneEventPtrs
{
public:
	class UFunction*                             Function;                                          // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor)
	FFieldPathProperty_                          BoundObjectProperty;                               // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEvent
struct FMovieSceneEvent
{
public:
	struct FMovieSceneEventPtrs                  Ptrs;                                              // 0x0(0x28)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneEvent>              KeyValues;                                         // 0x60(0x10)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x68 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
struct FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel
{
public:
	struct FPerlinNoiseParams                    PerlinNoiseParams;                                 // 0x50(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, EditConst)
};

// 0x130 (0x150 - 0x20)
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID            PathBindingID;                                     // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               TimingCurve;                                       // 0x38(0x110)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x148(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x149(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12AA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x14C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x14C(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x14C(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12AC[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct FMovieSceneActorReferenceKey
{
public:
	struct FMovieSceneObjectBindingID            Object;                                            // 0x0(0x18)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FName                                  ComponentName;                                     // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SocketName;                                        // 0x20(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0xD0 (0x120 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneActorReferenceKey          DefaultValue;                                      // 0x60(0x28)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneActorReferenceKey>  KeyValues;                                         // 0x88(0x10)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x98(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x138 (0x158 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneActorReferenceData         ActorReferenceData;                                // 0x38(0x120)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneAudioSection*               AudioSection;                                      // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
struct FMovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData     SourceData;                                        // 0x20(0x28)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FFrameNumber>                  TriggerTimes;                                      // 0x20(0x10)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues;                                     // 0x30(0x10)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x448 (0x480 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel               Curves[0x4];                                       // 0x38(0x440)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	enum class EMovieSceneBlendType              BlendType;                                         // 0x478(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12BA[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct FMovieSceneEventParameters
{
public:
	uint8                                        Pad_12BC[0x30];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieSceneTracks.EventPayload
struct FEventPayload
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FMovieSceneEventParameters            Parameters;                                        // 0x8(0x30)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FEventPayload>                 KeyValues;                                         // 0x60(0x10)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x120 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneEventSectionData           EventData;                                         // 0x20(0xF8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10x118(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10x118(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12C1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x138 (0x170 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneObjectPathChannel          ObjectChannel;                                     // 0x38(0x138)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{
public:
};

// 0x0 (0x108 - 0x108)
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{
public:
};

// 0x108 (0x128 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneParticleChannel            ParticleKeys;                                      // 0x20(0x108)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x138 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolCurve;                                         // 0x38(0x100)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x110 (0x148 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneStringChannel              StringCurve;                                       // 0x38(0x110)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
};

// 0x110 (0x130 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneFloatChannel               SlomoCurve;                                        // 0x20(0x110)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x0 (0x138 - 0x138)
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
struct FLevelVisibilityComponentData
{
public:
	class UMovieSceneLevelVisibilitySection*     Section;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneDataLayerComponentData
struct FMovieSceneDataLayerComponentData
{
public:
	class UMovieSceneDataLayerSection*           Section;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.ConstraintComponentData
struct FConstraintComponentData
{
public:
	class FName                                  ConstraintName;                                    // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12CC[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
struct FMovieSceneSkeletalAnimationComponentData
{
public:
	class UMovieSceneSkeletalAnimationSection*   Section;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FFrameNumber                          Time;                                              // 0x20(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_12D0[0x1C];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FRotator                              Rotation;                                          // 0x8(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FFrameNumber                          Time;                                              // 0x20(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_12D6[0x1C];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector3f                             Scale;                                             // 0x8(0xC)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FFrameNumber                          Time;                                              // 0x14(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_12D9[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x60 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector3f                             Scale;                                             // 0x38(0xC)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FFrameNumber                          Time;                                              // 0x44(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_12E6[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct FMovieSceneTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheParams
struct FMovieSceneBaseCacheParams
{
public:
	uint8                                        Pad_12EB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12EC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x38 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	struct FFrameNumber                          Time;                                              // 0x18(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_12F0[0x1C];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneConsoleVariableCollection
struct FMovieSceneConsoleVariableCollection
{
public:
	TScriptInterface<class IMovieSceneConsoleVariableTrackInterface> Interface;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	bool                                         bOnlyIncludeChecked;                               // 0x10(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12F3[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCVarOverrides
struct FMovieSceneCVarOverrides
{
public:
	TMap<class FString, class FString>           ValuesByCVar;                                      // 0x0(0x50)(InstancedReference, SubobjectReference)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct FMovieSceneSkeletalAnimationParams
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_8C : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_12F9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SlotName;                                          // 0x1C(0x8)(Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12FA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x30(0x110)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bSkipAnimNotifiers;                                // 0x140(0x1)(Net, InstancedReference, SubobjectReference)
	bool                                         bForceCustomMode;                                  // 0x141(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, InstancedReference, SubobjectReference)
	enum class ESwapRootBone                     SwapRootBone;                                      // 0x142(0x1)(BlueprintReadOnly, InstancedReference, SubobjectReference)
	uint8                                        Pad_12FC[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartOffset;                                       // 0x144(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndOffset;                                         // 0x148(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_12FD[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
struct FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1300[0x1C];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x30 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2fKeyStruct
struct FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	struct FVector2f                             Vector;                                            // 0x28(0x8)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector3fKeyStruct
struct FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	struct FVector3f                             Vector;                                            // 0x28(0xC)(Edit, BlueprintVisible, Net, OutParm)
	uint8                                        Pad_1303[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4fKeyStruct
struct FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{
public:
	uint8                                        Pad_1304[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4f                             Vector;                                            // 0x30(0x10)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1307[0x1C];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	struct FVector2D                             Vector;                                            // 0x28(0x10)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector3dKeyStruct
struct FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	struct FVector3d                             Vector;                                            // 0x28(0x18)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4dKeyStruct
struct FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	uint8                                        Pad_130D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4d                             Vector;                                            // 0x30(0x20)(Edit, BlueprintVisible, Net, OutParm)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
struct FMovieSceneEventTriggerData
{
public:
	struct FMovieSceneEventPtrs                  Ptrs;                                              // 0x0(0x28)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 ObjectBindingID;                                   // 0x28(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1310[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
struct FMovieSceneSkeletalAnimRootMotionTrackParams
{
public:
	uint8                                        Pad_1312[0x80];                                    // Fixing Size Of Struct > TateDumper <
};

}


