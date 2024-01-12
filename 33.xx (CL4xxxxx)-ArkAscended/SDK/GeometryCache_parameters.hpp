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

// 0x8 (0x8 - 0x0)
// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
struct AGeometryCacheActor_GetGeometryCacheComponent_Params
{
public:
	class UGeometryCacheComponent*               ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
struct UGeometryCacheComponent_TickAtThisTime_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         bInIsRunning;                                      // 0x4(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInBackwards;                                      // 0x5(0x1)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bInIsLooping;                                      // 0x6(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B4E[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
struct UGeometryCacheComponent_SetWireframeOverrideColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
struct UGeometryCacheComponent_SetStartTimeOffset_Params
{
public:
	float                                        NewStartTimeOffset;                                // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
struct UGeometryCacheComponent_SetPlaybackSpeed_Params
{
public:
	float                                        NewPlaybackSpeed;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
struct UGeometryCacheComponent_SetOverrideWireframeColor_Params
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
struct UGeometryCacheComponent_SetMotionVectorScale_Params
{
public:
	float                                        NewMotionVectorScale;                              // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetLooping
struct UGeometryCacheComponent_SetLooping_Params
{
public:
	bool                                         bNewLooping;                                       // 0x0(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
struct UGeometryCacheComponent_SetGeometryCache_Params
{
public:
	class UGeometryCache*                        NewGeomCache;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B58[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
struct UGeometryCacheComponent_SetExtrapolateFrames_Params
{
public:
	bool                                         bNewExtrapolating;                                 // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
struct UGeometryCacheComponent_IsPlayingReversed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.IsPlaying
struct UGeometryCacheComponent_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.IsLooping
struct UGeometryCacheComponent_IsLooping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
struct UGeometryCacheComponent_IsExtrapolatingFrames_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
struct UGeometryCacheComponent_GetWireframeOverrideColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
struct UGeometryCacheComponent_GetStartTimeOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
struct UGeometryCacheComponent_GetPlaybackSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
struct UGeometryCacheComponent_GetPlaybackDirection_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
struct UGeometryCacheComponent_GetOverrideWireframeColor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
struct UGeometryCacheComponent_GetNumberOfFrames_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
struct UGeometryCacheComponent_GetMotionVectorScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetDuration
struct UGeometryCacheComponent_GetDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
struct UGeometryCacheComponent_GetAnimationTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
struct UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params
{
public:
	struct FGeometryCacheMeshData                MeshData;                                          // 0x0(0xC8)(Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        SampleTime;                                        // 0xC8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_B74[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC8 (0xC8 - 0x0)
// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
struct UGeometryCacheTrack_TransformAnimation_SetMesh_Params
{
public:
	struct FGeometryCacheMeshData                NewMeshData;                                       // 0x0(0xC8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xC8 (0xC8 - 0x0)
// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
struct UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params
{
public:
	struct FGeometryCacheMeshData                NewMeshData;                                       // 0x0(0xC8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


