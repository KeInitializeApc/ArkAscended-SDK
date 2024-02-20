#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieSceneKeyInterpolation : uint8
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

enum class EMovieSceneCompletionMode : uint8
{
	KeepState                      = 0,
	RestoreState                   = 1,
	ProjectDefault                 = 2,
	EMovieSceneCompletionMode_MAX  = 3,
};

enum class EMovieScenePlayerStatus : uint8
{
	Stopped                        = 0,
	Playing                        = 1,
	Scrubbing                      = 2,
	Jumping                        = 3,
	Stepping                       = 4,
	Paused                         = 5,
	MAX                            = 6,
};

enum class EMovieSceneEvaluationType : uint8
{
	FrameLocked                    = 0,
	WithSubFrames                  = 1,
	EMovieSceneEvaluationType_MAX  = 2,
};

enum class EUpdateClockSource : uint8
{
	Tick                           = 0,
	Platform                       = 1,
	Audio                          = 2,
	RelativeTimecode               = 3,
	Timecode                       = 4,
	PlayEveryFrame                 = 5,
	Custom                         = 6,
	EUpdateClockSource_MAX         = 7,
};

enum class EMovieSceneSequenceFlags : uint8
{
	None                           = 0,
	Volatile                       = 1,
	BlockingEvaluation             = 2,
	DynamicWeighting               = 4,
	InheritedFlags                 = 1,
	EMovieSceneSequenceFlags_MAX   = 5,
};

enum class EMovieSceneServerClientMask : uint8
{
	None                           = 0,
	Server                         = 1,
	Client                         = 2,
	All                            = 3,
	EMovieSceneServerClientMask_MAX = 4,
};

enum class ESectionEvaluationFlags : uint8
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3,
};

enum class EMovieSceneBlendType : uint8
{
	Invalid                        = 0,
	Absolute                       = 1,
	Additive                       = 2,
	Relative                       = 4,
	AdditiveFromBase               = 8,
	EMovieSceneBlendType_MAX       = 9,
};

enum class EEvaluationMethod : uint8
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2,
};

enum class EMovieSceneBuiltInEasing : uint8
{
	Linear                         = 0,
	SinIn                          = 1,
	SinOut                         = 2,
	SinInOut                       = 3,
	QuadIn                         = 4,
	QuadOut                        = 5,
	QuadInOut                      = 6,
	Cubic                          = 7,
	CubicIn                        = 8,
	CubicOut                       = 9,
	CubicInOut                     = 10,
	HermiteCubicInOut              = 11,
	QuartIn                        = 12,
	QuartOut                       = 13,
	QuartInOut                     = 14,
	QuintIn                        = 15,
	QuintOut                       = 16,
	QuintInOut                     = 17,
	ExpoIn                         = 18,
	ExpoOut                        = 19,
	ExpoInOut                      = 20,
	CircIn                         = 21,
	CircOut                        = 22,
	CircInOut                      = 23,
	Custom                         = 24,
	EMovieSceneBuiltInEasing_MAX   = 25,
};

enum class EMovieSceneObjectBindingSpace : uint8
{
	Local                          = 0,
	Root                           = 1,
	Unused                         = 2,
	EMovieSceneObjectBindingSpace_MAX = 3,
};

enum class EUpdatePositionMethod : uint8
{
	Play                           = 0,
	Jump                           = 1,
	Scrub                          = 2,
	EUpdatePositionMethod_MAX      = 3,
};

enum class EMovieScenePositionType : uint8
{
	Frame                          = 0,
	Time                           = 1,
	MarkedFrame                    = 2,
	EMovieScenePositionType_MAX    = 3,
};

enum class ESpawnOwnership : uint8
{
	InnerSequence                  = 0,
	RootSequence                   = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
struct FMovieSceneEvalTemplateBase
{
public:
	uint8                                        Pad_34B[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x20 - 0x10)
// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
public:
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class UMovieSceneSection>     SourceSectionPtr;                                  // 0x14(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_34D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x10 - 0x10)
// ScriptStruct MovieScene.MovieSceneTrackImplementation
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
public:
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.MovieSceneChannel
struct FMovieSceneChannel
{
public:
	uint8                                        Pad_34E[0x50];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x0 (0x88 - 0x88)
// ScriptStruct MovieScene.MovieSceneKeyHandleMap
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{
public:
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct MovieScene.MovieSceneBoolChannel
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DefaultValue;                                      // 0x60(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasDefaultValue;                                  // 0x61(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_351[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<bool>                                 Values;                                            // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x78(0x88)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneTangentData
struct FMovieSceneTangentData
{
public:
	float                                        ArriveTangent;                                     // 0x0(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        LeaveTangent;                                      // 0x4(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	float                                        ArriveTangentWeight;                               // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LeaveTangentWeight;                                // 0xC(0x4)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_352[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneFloatValue
struct FMovieSceneFloatValue
{
public:
	float                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	struct FMovieSceneTangentData                Tangent;                                           // 0x4(0x14)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x18(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x19(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        PaddingByte;                                       // 0x1A(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_355[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct MovieScene.MovieSceneFloatChannel
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x50(0x1)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x51(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_357[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneFloatValue>         Values;                                            // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	float                                        DefaultValue;                                      // 0x78(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasDefaultValue;                                  // 0x7C(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_358[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x80(0x88)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameRate                            TickResolution;                                    // 0x108(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct MovieScene.MovieSceneIntegerChannel
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DefaultValue;                                      // 0x60(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasDefaultValue;                                  // 0x64(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                Values;                                            // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x78(0x88)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
struct FMovieSceneSequenceInstanceData
{
public:
	uint8                                        Pad_35B[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct FMovieSceneEvaluationOperand
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB8 (0x108 - 0x50)
// ScriptStruct MovieScene.MovieSceneByteChannel
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        DefaultValue;                                      // 0x60(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasDefaultValue;                                  // 0x61(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_35D[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                Values;                                            // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	class UEnum*                                 Enum;                                              // 0x78(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x80(0x88)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                PropertyPath;                                      // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertyBinding
struct FMovieScenePropertyBinding
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FName                                  PropertyPath;                                      // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst)
	bool                                         bCanUseClassLookup;                                // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_364[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingID
struct FMovieSceneObjectBindingID
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance)
	int32                                        SequenceID;                                        // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ResolveParentIndex;                                // 0x14(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.ActorForWorldTransforms
struct FActorForWorldTransforms
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class FName                                  SocketName;                                        // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneDeterminismData
struct FMovieSceneDeterminismData
{
public:
	TArray<struct FFrameTime>                    Fences;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bParentSequenceRequiresLowerFence;                 // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bParentSequenceRequiresUpperFence;                 // 0x11(0x1)(Edit, ConstParm, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_367[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneEmptyStruct
struct FMovieSceneEmptyStruct
{
public:
	uint8                                        Pad_369[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationKey
struct FMovieSceneEvaluationKey
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       SectionIndex;                                      // 0x8(0x4)(Edit, Net, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneKeyStruct
struct FMovieSceneKeyStruct
{
public:
	uint8                                        Pad_36E[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
struct FGeneratedMovieSceneKeyStruct
{
public:
	uint8                                        Pad_36F[0x50];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_372[0x1C];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters
{
public:
	struct FFrameNumber                          StartFrameOffset;                                  // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCanLoop;                                          // 0x4(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_376[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          EndFrameOffset;                                    // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeScale;                                         // 0x10(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        HierarchicalBias;                                  // 0x14(0x4)(ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartOffset;                                       // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PrerollTime;                                       // 0x1C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PostrollTime;                                      // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct FMovieSceneSegmentIdentifier
{
public:
	int32                                        IdentifierIndex;                                   // 0x0(0x4)(BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData
{
public:
	int32                                        ImplIndex;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          ForcedTime;                                        // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x8(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_37C[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegment
struct FMovieSceneSegment
{
public:
	uint8                                        Pad_37F[0x58];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
struct FMovieSceneSequenceLoopCount
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTickInterval
struct FMovieSceneSequenceTickInterval
{
public:
	float                                        TickIntervalSeconds;                               // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EvaluationBudgetMicroseconds;                      // 0x4(0x4)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTickWhenPaused;                                   // 0x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowRounding;                                    // 0x9(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_381[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct FMovieSceneSequencePlaybackSettings
{
public:
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	uint8                                        BitPad_22 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_385[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequenceLoopCount          LoopCount;                                         // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneSequenceTickInterval       TickInterval;                                      // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	float                                        StartTime;                                         // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRandomStartTime : 1;                              // Mask: 0x1, PropSize: 0x10x1C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRestoreState : 1;                                 // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        bDisableMovementInput : 1;                         // Mask: 0x4, PropSize: 0x10x1C(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableLookAtInput : 1;                           // Mask: 0x8, PropSize: 0x10x1C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHidePlayer : 1;                                   // Mask: 0x10, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHideHud : 1;                                      // Mask: 0x20, PropSize: 0x10x1C(0x1)(BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableCameraCuts : 1;                            // Mask: 0x40, PropSize: 0x10x1C(0x1)(ConstParm, BlueprintVisible, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPauseAtEnd : 1;                                   // Mask: 0x80, PropSize: 0x10x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bInheritTickIntervalFromOwner : 1;                 // Mask: 0x1, PropSize: 0x10x1D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDynamicWeighting : 1;                             // Mask: 0x2, PropSize: 0x10x1D(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38A[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneTimeTransform
struct FMovieSceneTimeTransform
{
public:
	float                                        TimeScale;                                         // 0x0(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FFrameTime                            Offset;                                            // 0x4(0x8)(Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieScene.MovieSceneAudioTriggerChannel
struct FMovieSceneAudioTriggerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 Values;                                            // 0x60(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneDoubleValue
struct FMovieSceneDoubleValue
{
public:
	double                                       Value;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	struct FMovieSceneTangentData                Tangent;                                           // 0x8(0x14)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x1C(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x1D(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        PaddingByte;                                       // 0x1E(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38E[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC8 (0x118 - 0x50)
// ScriptStruct MovieScene.MovieSceneDoubleChannel
struct FMovieSceneDoubleChannel : public FMovieSceneChannel
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x50(0x1)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x51(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_38F[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneDoubleValue>        Values;                                            // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	double                                       DefaultValue;                                      // 0x78(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasDefaultValue;                                  // 0x80(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_390[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x88(0x88)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameRate                            TickResolution;                                    // 0x110(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
struct FMovieSceneObjectPathChannelKeyValue
{
public:
	TSoftObjectPtr<class UObject>                SoftPtr;                                           // 0x0(0x30)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               HardPtr;                                           // 0x30(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xE8 (0x138 - 0x50)
// ScriptStruct MovieScene.MovieSceneObjectPathChannel
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
public:
	class UClass*                                PropertyClass;                                     // 0x50(0x8)(BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;                                            // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FMovieSceneObjectPathChannelKeyValue  DefaultValue;                                      // 0x78(0x38)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0xB0(0x88)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
struct FMovieSceneSequenceCompilerMaskStruct
{
public:
	uint8                                        bHierarchy : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluationTemplate : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluationTemplateField : 1;                      // Mask: 0x4, PropSize: 0x10x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEntityComponentField : 1;                         // Mask: 0x8, PropSize: 0x10x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct
struct FMovieSceneCompiledSequenceFlagStruct
{
public:
	uint8                                        bParentSequenceRequiresLowerFence : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bParentSequenceRequiresUpperFence : 1;             // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.EasingComponentData
struct FEasingComponentData
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
struct FMovieSceneTrackInstanceComponent
{
public:
	class UMovieSceneSection*                    Owner;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	class UClass*                                TrackInstanceClass;                                // 0x8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookComponent
struct FMovieSceneEvaluationHookComponent
{
public:
	TScriptInterface<class IMovieSceneEvaluationHook> Interface;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	uint8                                        Pad_396[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.TrackInstanceInputComponent
struct FTrackInstanceInputComponent
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	int32                                        OutputIndex;                                       // 0x8(0x4)(Edit, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_397[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
struct FMovieSceneEntitySystemGraphNode
{
public:
	uint8                                        Pad_398[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneEntitySystem*               System;                                            // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
struct FMovieSceneEntitySystemGraphNodes
{
public:
	uint8                                        Pad_399[0x38];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x150 (0x150 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
struct FMovieSceneEntitySystemGraph
{
public:
	uint8                                        Pad_39A[0x80];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneEntitySystemGraphNodes     Nodes;                                             // 0x80(0x38)(Edit, ConstParm, BlueprintVisible, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_39B[0x98];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookEvent
struct FMovieSceneEvaluationHookEvent
{
public:
	struct FMovieSceneEvaluationHookComponent    Hook;                                              // 0x0(0x20)(ConstParm, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_39C[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer
struct FMovieSceneEvaluationHookEventContainer
{
public:
	TArray<struct FMovieSceneEvaluationHookEvent> Events;                                            // 0x0(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey
struct FMovieSceneEvaluationInstanceKey
{
public:
	uint8                                        Pad_39D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
struct FMovieSceneTrackInstanceInput
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_39F[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
struct FMovieSceneTrackInstanceEntry
{
public:
	class UObject*                               BoundObject;                                       // 0x0(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMovieSceneTrackInstance*              TrackInstance;                                     // 0x8(0x8)(Edit, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct FOptionalMovieSceneBlendType
{
public:
	enum class EMovieSceneBlendType              BlendType;                                         // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsValid;                                          // 0x1(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
struct FMovieSceneEvalTemplatePtr
{
public:
	uint8                                        Pad_3A2[0x88];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
struct FMovieSceneEvaluationFieldEntityKey
{
public:
	TWeakObjectPtr<class UObject>                EntityOwner;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       EntityID;                                          // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
struct FMovieSceneEvaluationFieldEntity
{
public:
	struct FMovieSceneEvaluationFieldEntityKey   Key;                                               // 0x0(0xC)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	int32                                        SharedMetaDataIndex;                               // 0xC(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
struct FMovieSceneEvaluationFieldEntityMetaData
{
public:
	class FString                                OverrideBoundPropertyPath;                         // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          ForcedTime;                                        // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x14(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        bEvaluateInSequencePreRoll : 1;                    // Mask: 0x1, PropSize: 0x10x15(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateInSequencePostRoll : 1;                   // Mask: 0x2, PropSize: 0x10x15(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3A8[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
struct FMovieSceneEvaluationFieldEntityTree
{
public:
	uint8                                        Pad_3A9[0x60];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntityComponentField
struct FMovieSceneEntityComponentField
{
public:
	struct FMovieSceneEvaluationFieldEntityTree  PersistentEntityTree;                              // 0x0(0x60)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneEvaluationFieldEntityTree  OneShotEntityTree;                                 // 0x60(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneEvaluationFieldEntity> Entities;                                          // 0xC0(0x10)(ConstParm, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;                                    // 0xD0(0x10)(ConstParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                    // 0xE0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0xC - 0x8)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSegmentIdentifier          SegmentID;                                         // 0x8(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
struct FMovieSceneFieldEntry_EvaluationTrack
{
public:
	struct FMovieSceneEvaluationFieldTrackPtr    TrackPtr;                                          // 0x0(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       NumChildren;                                       // 0x8(0x2)(ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3AF[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
struct FMovieSceneFieldEntry_ChildTemplate
{
public:
	uint16                                       ChildIndex;                                        // 0x0(0x2)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x2(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_3B2[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          ForcedTime;                                        // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex
{
public:
	int32                                        NumInitPtrs;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumEvalPtrs;                                       // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup
{
public:
	TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;                                          // 0x10(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT;                                        // 0x20(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
struct FMovieSceneOrderedEvaluationKey
{
public:
	struct FMovieSceneEvaluationKey              Key;                                               // 0x0(0xC)(BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint16                                       SetupIndex;                                        // 0xC(0x2)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       TearDownIndex;                                     // 0xE(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData
{
public:
	TArray<struct FMovieSceneSequenceID>         ActiveSequences;                                   // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities;                                    // 0x10(0x10)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneFrameRange
struct FMovieSceneFrameRange
{
public:
	uint8                                        Pad_3D3[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField
{
public:
	TArray<struct FMovieSceneFrameRange>         Ranges;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneEvaluationGroup>    Groups;                                            // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	TArray<struct FMovieSceneEvaluationMetaData> MetaData;                                          // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct FMovieSceneTemplateGenerationLedger
{
public:
	struct FMovieSceneTrackIdentifier            LastTrackIdentifier;                               // 0x0(0x4)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                   // 0x8(0x50)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges;                                  // 0x58(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSectionData
struct FMovieSceneSubSectionData
{
public:
	TWeakObjectPtr<class UMovieSceneSubSection>  Section;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	struct FGuid                                 ObjectBindingID;                                   // 0x8(0x10)(Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x18(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_3DA[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
struct FMovieSceneEvaluationTemplateSerialNumber
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
struct FMovieSceneTrackImplementationPtr
{
public:
	uint8                                        Pad_3DB[0x38];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x78 (0x78 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       EvaluationPriority;                                // 0x10(0x2)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EEvaluationMethod                 EvaluationMethod;                                  // 0x12(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3DD[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class UMovieSceneTrack>       SourceTrack;                                       // 0x14(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3DE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMovieSceneEvalTemplatePtr>    ChildTemplates;                                    // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneTrackImplementationPtr     TrackTemplate;                                     // 0x30(0x38)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EvaluationGroup;                                   // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x2, PropSize: 0x10x70(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTearDownPriority : 1;                             // Mask: 0x4, PropSize: 0x10x70(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3E0[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate
{
public:
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                            // 0x0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3E2[0x50];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 SequenceSignature;                                 // 0xA0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;                              // 0xB0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3E5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneTemplateGenerationLedger   TemplateLedger;                                    // 0xB8(0xA8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance
{
public:
	TWeakObjectPtr<class UMovieSceneSequence>    WeakRootSequence;                                  // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMovieSceneCompiledDataManager*        CompiledDataManager;                               // 0x8(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3E6[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneEntitySystemLinker*         EntitySystemLinker;                                // 0x28(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances;                                 // 0x30(0x50)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3E8[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
struct FMovieSceneSequenceInstanceDataPtr
{
public:
	uint8                                        Pad_3E9[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTimeWarping
struct FMovieSceneTimeWarping
{
public:
	struct FFrameNumber                          Start;                                             // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	struct FFrameNumber                          End;                                               // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
struct FMovieSceneNestedSequenceTransform
{
public:
	struct FMovieSceneTimeTransform              LinearTransform;                                   // 0x0(0xC)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneTimeWarping                Warping;                                           // 0xC(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform
{
public:
	struct FMovieSceneTimeTransform              LinearTransform;                                   // 0x0(0xC)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3EE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms;                                  // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData
{
public:
	struct FSoftObjectPath                       Sequence;                                          // 0x0(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FMovieSceneSequenceTransform          OuterToInnerTransform;                             // 0x20(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneSequenceTransform          RootToSequenceTransform;                           // 0x40(0x20)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameRate                            TickResolution;                                    // 0x60(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FMovieSceneSequenceID                 DeterministicSequenceID;                           // 0x68(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFrameRange                 ParentPlayRange;                                   // 0x6C(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          ParentStartFrameOffset;                            // 0x7C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          ParentEndFrameOffset;                              // 0x80(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          ParentFirstLoopStartFrameOffset;                   // 0x84(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCanLoop;                                          // 0x88(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneFrameRange                 PlayRange;                                         // 0x8C(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFrameRange                 FullPlayRange;                                     // 0x9C(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFrameRange                 UnwarpedPlayRange;                                 // 0xAC(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFrameRange                 PreRollRange;                                      // 0xBC(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFrameRange                 PostRollRange;                                     // 0xCC(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int16                                        HierarchicalBias;                                  // 0xDC(0x2)(ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F8[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneSequenceInstanceDataPtr    InstanceData;                                      // 0xE0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3F9[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 SubSectionSignature;                               // 0x100(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode
{
public:
	struct FMovieSceneSequenceID                 ParentID;                                          // 0x0(0x4)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3FA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FMovieSceneSequenceID>         Children;                                          // 0x8(0x10)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
struct FMovieSceneSubSequenceTreeEntry
{
public:
	uint8                                        Pad_3FC[0x18];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceTree
struct FMovieSceneSubSequenceTree
{
public:
	uint8                                        Pad_3FD[0x60];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy
{
public:
	struct FMovieSceneSequenceHierarchyNode      RootNode;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneSubSequenceTree            Tree;                                              // 0x18(0x60)(ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                      // 0x78(0x50)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                         // 0xC8(0x50)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneWarpCounter
struct FMovieSceneWarpCounter
{
public:
	TArray<uint32>                               WarpCounts;                                        // 0x0(0x10)(BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneMarkedFrame
struct FMovieSceneMarkedFrame
{
public:
	struct FFrameNumber                          FrameNumber;                                       // 0x0(0x4)(Edit, Net, Parm, Transient, DisableEditOnInstance)
	uint8                                        Pad_400[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Label;                                             // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsDeterminismFence;                               // 0x18(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_401[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData
{
public:
	TMap<class FString, struct FMovieSceneExpansionState> ExpansionStates;                                   // 0x0(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        PinnedNodes;                                       // 0x50(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       ViewStart;                                         // 0x60(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       ViewEnd;                                           // 0x68(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       WorkStart;                                         // 0x70(0x8)(Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       WorkEnd;                                           // 0x78(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSet<struct FFrameNumber>                    MarkedFrames;                                      // 0x80(0x50)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatRange                           WorkingRange;                                      // 0xD0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatRange                           ViewRange;                                         // 0xE0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
struct FMovieSceneObjectBindingIDs
{
public:
	TArray<struct FMovieSceneObjectBindingID>    IDs;                                               // 0x0(0x10)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionGroup
struct FMovieSceneSectionGroup
{
public:
	TArray<TWeakObjectPtr<class UMovieSceneSection>> Sections;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding
{
public:
	struct FGuid                                 ObjectGuid;                                        // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                BindingName;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct FMovieSceneBindingOverrideData
{
public:
	struct FMovieSceneObjectBindingID            ObjectBindingID;                                   // 0x0(0x18)(Edit, ConstParm, Net, Parm, OutParm, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UObject>                Object;                                            // 0x18(0x30)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	bool                                         bOverridesDefault;                                 // 0x48(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_408[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingProxy
struct FMovieSceneBindingProxy
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMovieSceneSequence*                   Sequence;                                          // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable
{
public:
	TArray<class FName>                          Tags;                                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)
	struct FGuid                                 Guid;                                              // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance)
	class FString                                Name;                                              // 0x20(0x10)(ConstParm, Net, OutParm)
	struct FGuid                                 ParentGuid;                                        // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FMovieSceneObjectBindingID            SpawnableObjectBindingID;                          // 0x40(0x18)(Edit, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct FMovieSceneSectionEvalOptions
{
public:
	bool                                         bCanEditCompletionMode;                            // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEasingSettings
struct FMovieSceneEasingSettings
{
public:
	int32                                        AutoEaseInDuration;                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AutoEaseOutDuration;                               // 0x4(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TScriptInterface<class IMovieSceneEasingFunction> EaseIn;                                            // 0x8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bManualEaseIn;                                     // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_40F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ManualEaseInDuration;                              // 0x1C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TScriptInterface<class IMovieSceneEasingFunction> EaseOut;                                           // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bManualEaseOut;                                    // 0x30(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_411[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ManualEaseOutDuration;                             // 0x34(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneTimecodeSource
struct FMovieSceneTimecodeSource
{
public:
	struct FTimecode                             Timecode;                                          // 0x0(0x14)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
struct FMovieSceneSequenceReplProperties
{
public:
	struct FFrameTime                            LastKnownPosition;                                 // 0x0(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieScenePlayerStatus           LastKnownStatus;                                   // 0x8(0x1)(Edit, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_414[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        LastKnownNumLoops;                                 // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
struct FMovieSceneSequencePlaybackParams
{
public:
	struct FFrameTime                            Frame;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Time;                                              // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_416[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                MarkedFrame;                                       // 0x10(0x10)(BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMovieScenePositionType           PositionType;                                      // 0x20(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EUpdatePositionMethod             UpdateMethod;                                      // 0x21(0x1)(ConstParm, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasJumped;                                        // 0x22(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_419[0x5];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlayToParams
struct FMovieSceneSequencePlayToParams
{
public:
	bool                                         bExclusive;                                        // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable
{
public:
	struct FTransform                            SpawnTransform;                                    // 0x0(0x60)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          Tags;                                              // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)
	bool                                         bContinuouslyRespawn;                              // 0x70(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNetAddressableName;                               // 0x71(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEvaluateTracksWhenNotSpawned;                     // 0x72(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_41B[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 Guid;                                              // 0x74(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance)
	uint8                                        Pad_41C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x88(0x10)(ConstParm, Net, OutParm)
	class UObject*                               ObjectTemplate;                                    // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FGuid>                         ChildPossessables;                                 // 0xA0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESpawnOwnership                   Ownership;                                         // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_41F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  LevelName;                                         // 0xB4(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_420[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions
{
public:
	uint8                                        bCanEvaluateNearestSection : 1;                    // Mask: 0x1, PropSize: 0x10x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvalNearestSection : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x8, PropSize: 0x10x0(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bEvaluateNearestSection : 1;                       // Mask: 0x10, PropSize: 0x10x0(0x1)(ConstParm, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_424[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
struct FMovieSceneTrackDisplayOptions
{
public:
	uint8                                        bShowVerticalFrames : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_425[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
struct FMovieSceneTrackEvaluationFieldEntry
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	struct FFrameNumberRange                     Range;                                             // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          ForcedTime;                                        // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x1C(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_427[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int16                                        LegacySortOrder;                                   // 0x1E(0x2)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
struct FMovieSceneTrackEvaluationField
{
public:
	TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries;                                           // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
public:
};

}


