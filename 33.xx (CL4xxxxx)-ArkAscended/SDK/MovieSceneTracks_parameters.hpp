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

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
struct UMovieSceneParameterSection_RemoveVectorParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C71[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
struct UMovieSceneParameterSection_RemoveVector2DParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C78[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
struct UMovieSceneParameterSection_RemoveTransformParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C81[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
struct UMovieSceneParameterSection_RemoveScalarParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C91[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
struct UMovieSceneParameterSection_RemoveColorParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C92[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
struct UMovieSceneParameterSection_RemoveBoolParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CA4[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
struct UMovieSceneParameterSection_GetParameterNames_Params
{
public:
	TSet<class FName>                            ParameterNames;                                    // 0x0(0x50)(DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
struct UMovieSceneParameterSection_AddVectorParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_CAF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               InValue;                                           // 0x10(0x18)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
struct UMovieSceneParameterSection_AddVector2DParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_CB8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             InValue;                                           // 0x10(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
struct UMovieSceneParameterSection_AddTransformParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_CBD[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InValue;                                           // 0x10(0x60)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
struct UMovieSceneParameterSection_AddScalarParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        InValue;                                           // 0xC(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
struct UMovieSceneParameterSection_AddColorParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          InValue;                                           // 0xC(0x10)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
struct UMovieSceneParameterSection_AddBoolParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         InValue;                                           // 0xC(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_CCD[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
struct IMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            InConstraintBindingID;                             // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct UMovieSceneAudioSection_SetStartOffset_Params
{
public:
	struct FFrameNumber                          InStartOffset;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct UMovieSceneAudioSection_SetSound_Params
{
public:
	class USoundBase*                            InSound;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct UMovieSceneAudioSection_GetStartOffset_Params
{
public:
	struct FFrameNumber                          ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct UMovieSceneAudioSection_GetSound_Params
{
public:
	class USoundBase*                            ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            InCameraBindingID;                                 // 0x0(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
{
public:
	class FString                                InShotDisplayName;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCVarSection.SetFromString
struct UMovieSceneCVarSection_SetFromString_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCVarSection.GetString
struct UMovieSceneCVarSection_GetString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
struct UMovieSceneDataLayerSection_SetPrerollState_Params
{
public:
	enum class EDataLayerRuntimeState            InPrerollState;                                    // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
struct UMovieSceneDataLayerSection_SetFlushOnUnload_Params
{
public:
	bool                                         bFlushOnUnload;                                    // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
struct UMovieSceneDataLayerSection_SetDesiredState_Params
{
public:
	enum class EDataLayerRuntimeState            InDesiredState;                                    // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
struct UMovieSceneDataLayerSection_SetDataLayers_Params
{
public:
	TArray<struct FActorDataLayer>               InDataLayers;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets
struct UMovieSceneDataLayerSection_SetDataLayerAssets_Params
{
public:
	TArray<class UDataLayerAsset*>               InDataLayerAssets;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
struct UMovieSceneDataLayerSection_GetPrerollState_Params
{
public:
	enum class EDataLayerRuntimeState            ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
struct UMovieSceneDataLayerSection_GetFlushOnUnload_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
struct UMovieSceneDataLayerSection_GetDesiredState_Params
{
public:
	enum class EDataLayerRuntimeState            ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
struct UMovieSceneDataLayerSection_GetDataLayers_Params
{
public:
	TArray<struct FActorDataLayer>               ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets
struct UMovieSceneDataLayerSection_GetDataLayerAssets_Params
{
public:
	TArray<class UDataLayerAsset*>               ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
{
public:
	enum class ELevelVisibility                  InVisibility;                                      // 0x0(0x1)(Parm, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
{
public:
	TArray<class FName>                          InLevelNames;                                      // 0x0(0x10)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
{
public:
	enum class ELevelVisibility                  ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
struct UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TimeInSeconds;                                     // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_EFF[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
struct UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFrameTime                            FrameTime;                                         // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
struct UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TimeInSeconds;                                     // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_F1F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
struct UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFrameTime                            FrameTime;                                         // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst)
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


