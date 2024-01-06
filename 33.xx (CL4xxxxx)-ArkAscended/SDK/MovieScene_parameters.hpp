#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetRowIndex
struct UMovieSceneSection_SetRowIndex_Params
{
public:
	int32                                        NewRowIndex;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetPreRollFrames
struct UMovieSceneSection_SetPreRollFrames_Params
{
public:
	int32                                        InPreRollFrames;                                   // 0x0(0x4)(BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetPostRollFrames
struct UMovieSceneSection_SetPostRollFrames_Params
{
public:
	int32                                        InPostRollFrames;                                  // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetOverlapPriority
struct UMovieSceneSection_SetOverlapPriority_Params
{
public:
	int32                                        NewPriority;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.SetIsLocked
struct UMovieSceneSection_SetIsLocked_Params
{
public:
	bool                                         bInIsLocked;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.SetIsActive
struct UMovieSceneSection_SetIsActive_Params
{
public:
	bool                                         bInIsActive;                                       // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.SetCompletionMode
struct UMovieSceneSection_SetCompletionMode_Params
{
public:
	enum class EMovieSceneCompletionMode         InCompletionMode;                                  // 0x0(0x1)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.SetColorTint
struct UMovieSceneSection_SetColorTint_Params
{
public:
	struct FColor                                InColorTint;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.SetBlendType
struct UMovieSceneSection_SetBlendType_Params
{
public:
	enum class EMovieSceneBlendType              InBlendType;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.IsLocked
struct UMovieSceneSection_IsLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.IsActive
struct UMovieSceneSection_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetRowIndex
struct UMovieSceneSection_GetRowIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetPreRollFrames
struct UMovieSceneSection_GetPreRollFrames_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetPostRollFrames
struct UMovieSceneSection_GetPostRollFrames_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetOverlapPriority
struct UMovieSceneSection_GetOverlapPriority_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSection.GetCompletionMode
struct UMovieSceneSection_GetCompletionMode_Params
{
public:
	enum class EMovieSceneCompletionMode         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSection.GetColorTint
struct UMovieSceneSection_GetColorTint_Params
{
public:
	struct FColor                                ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function MovieScene.MovieSceneSection.GetBlendType
struct UMovieSceneSection_GetBlendType_Params
{
public:
	struct FOptionalMovieSceneBlendType          ReturnValue;                                       // 0x0(0x2)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
struct UMovieSceneSequence_GetEarliestTimecodeSource_Params
{
public:
	struct FMovieSceneTimecodeSource             ReturnValue;                                       // 0x0(0x14)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequence.FindBindingsByTag
struct UMovieSceneSequence_FindBindingsByTag_Params
{
public:
	class FName                                  InBindingName;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneObjectBindingID>    ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieScene.MovieSceneSequence.FindBindingByTag
struct UMovieSceneSequence_FindBindingByTag_Params
{
public:
	class FName                                  InBindingName;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSubSection.SetSequence
struct UMovieSceneSubSection_SetSequence_Params
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSubSection.GetSequence
struct UMovieSceneSubSection_GetSequence_Params
{
public:
	class UMovieSceneSequence*                   ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetWeight
struct UMovieSceneSequencePlayer_SetWeight_Params
{
public:
	double                                       InWeight;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
struct UMovieSceneSequencePlayer_SetTimeRange_Params
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Duration;                                          // 0x4(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
struct UMovieSceneSequencePlayer_SetPlayRate_Params
{
public:
	float                                        PlayRate;                                          // 0x0(0x4)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
{
public:
	struct FMovieSceneSequencePlaybackParams     PlaybackParams;                                    // 0x0(0x28)(ExportObject, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
struct UMovieSceneSequencePlayer_SetFrameRate_Params
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
};

// 0xC (0xC - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
struct UMovieSceneSequencePlayer_SetFrameRange_Params
{
public:
	int32                                        StartFrame;                                        // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Duration;                                          // 0x4(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
	float                                        SubFrames;                                         // 0x8(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
struct UMovieSceneSequencePlayer_SetDisableCameraCuts_Params
{
public:
	bool                                         bInDisableCameraCuts;                              // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
struct UMovieSceneSequencePlayer_ScrubToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
struct UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params
{
public:
	class FString                                InLabel;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_296[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
struct UMovieSceneSequencePlayer_ScrubToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
struct UMovieSceneSequencePlayer_RPC_OnStopEvent_Params
{
public:
	struct FFrameTime                            StoppedTime;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
struct UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Params
{
public:
	struct FFrameTime                            StoppedTime;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
struct UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params
{
public:
	enum class EUpdatePositionMethod             Method;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_29D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FFrameTime                            RelevantTime;                                      // 0x4(0x8)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
struct UMovieSceneSequencePlayer_PlayToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
struct UMovieSceneSequencePlayer_PlayToMarkedFrame_Params
{
public:
	class FString                                InLabel;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A3[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
struct UMovieSceneSequencePlayer_PlayToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayTo
struct UMovieSceneSequencePlayer_PlayTo_Params
{
public:
	struct FMovieSceneSequencePlaybackParams     PlaybackParams;                                    // 0x0(0x28)(ExportObject, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FMovieSceneSequencePlayToParams       PlayToParams;                                      // 0x28(0x1)(Edit, Net, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AA[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
struct UMovieSceneSequencePlayer_PlayLooping_Params
{
public:
	int32                                        NumLoops;                                          // 0x0(0x4)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
struct UMovieSceneSequencePlayer_JumpToSeconds_Params
{
public:
	float                                        TimeInSeconds;                                     // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
struct UMovieSceneSequencePlayer_JumpToMarkedFrame_Params
{
public:
	class FString                                InLabel;                                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B4[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
struct UMovieSceneSequencePlayer_JumpToFrame_Params
{
public:
	struct FFrameTime                            NewPosition;                                       // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.IsReversed
struct UMovieSceneSequencePlayer_IsReversed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
struct UMovieSceneSequencePlayer_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.IsPaused
struct UMovieSceneSequencePlayer_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
struct UMovieSceneSequencePlayer_GetStartTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetSequenceName
struct UMovieSceneSequencePlayer_GetSequenceName_Params
{
public:
	bool                                         bAddClientInfo;                                    // 0x0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C3[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetSequence
struct UMovieSceneSequencePlayer_GetSequence_Params
{
public:
	class UMovieSceneSequence*                   ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
struct UMovieSceneSequencePlayer_GetPlayRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
struct UMovieSceneSequencePlayer_GetObjectBindings_Params
{
public:
	class UObject*                               InObject;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneObjectBindingID>    ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
struct UMovieSceneSequencePlayer_GetFrameRate_Params
{
public:
	struct FFrameRate                            ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
struct UMovieSceneSequencePlayer_GetFrameDuration_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
struct UMovieSceneSequencePlayer_GetEndTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetDuration
struct UMovieSceneSequencePlayer_GetDuration_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
struct UMovieSceneSequencePlayer_GetDisableCameraCuts_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
struct UMovieSceneSequencePlayer_GetCurrentTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
struct UMovieSceneSequencePlayer_GetBoundObjects_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       ReturnValue;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
struct IMovieSceneEasingFunction_OnEvaluate_Params
{
public:
	float                                        Interp;                                            // 0x0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieScene.MovieSceneCustomClockSource.OnTick
struct IMovieSceneCustomClockSource_OnTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        InPlayRate;                                        // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
struct IMovieSceneCustomClockSource_OnStopPlaying_Params
{
public:
	struct FQualifiedFrameTime                   InStopTime;                                        // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
struct IMovieSceneCustomClockSource_OnStartPlaying_Params
{
public:
	struct FQualifiedFrameTime                   InStartTime;                                       // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
struct IMovieSceneCustomClockSource_OnRequestCurrentTime_Params
{
public:
	struct FQualifiedFrameTime                   InCurrentTime;                                     // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        InPlayRate;                                        // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	struct FFrameTime                            ReturnValue;                                       // 0x14(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


