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
// Function USDStage.UsdStageActor.SetTime
struct AUsdStageActor_SetTime_Params
{
public:
	float                                        InTime;                                            // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetRootMotionHandling
struct AUsdStageActor_SetRootMotionHandling_Params
{
public:
	enum class EUsdRootMotionHandling            NewHandlingStrategy;                               // 0x0(0x4)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDStage.UsdStageActor.SetRootLayer
struct AUsdStageActor_SetRootLayer_Params
{
public:
	class FString                                RootFilePath;                                      // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function USDStage.UsdStageActor.SetRenderContext
struct AUsdStageActor_SetRenderContext_Params
{
public:
	class FName                                  NewRenderContext;                                  // 0x0(0x8)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetPurposesToLoad
struct AUsdStageActor_SetPurposesToLoad_Params
{
public:
	int32                                        NewPurposesToLoad;                                 // 0x0(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetNaniteTriangleThreshold
struct AUsdStageActor_SetNaniteTriangleThreshold_Params
{
public:
	int32                                        NewNaniteTriangleThreshold;                        // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function USDStage.UsdStageActor.SetMergeIdenticalMaterialSlots
struct AUsdStageActor_SetMergeIdenticalMaterialSlots_Params
{
public:
	bool                                         bMerge;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function USDStage.UsdStageActor.SetMaterialPurpose
struct AUsdStageActor_SetMaterialPurpose_Params
{
public:
	class FName                                  NewMaterialPurpose;                                // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetKindsToCollapse
struct AUsdStageActor_SetKindsToCollapse_Params
{
public:
	int32                                        NewKindsToCollapse;                                // 0x0(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDStage.UsdStageActor.SetIsolatedRootLayer
struct AUsdStageActor_SetIsolatedRootLayer_Params
{
public:
	class FString                                IsolatedStageRootLayer;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function USDStage.UsdStageActor.SetInterpolationType
struct AUsdStageActor_SetInterpolationType_Params
{
public:
	enum class EUsdInterpolationType             NewType;                                           // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function USDStage.UsdStageActor.SetInitialLoadSet
struct AUsdStageActor_SetInitialLoadSet_Params
{
public:
	enum class EUsdInitialLoadSet                NewLoadSet;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function USDStage.UsdStageActor.SetCollapseTopLevelPointInstancers
struct AUsdStageActor_SetCollapseTopLevelPointInstancers_Params
{
public:
	bool                                         bCollapse;                                         // 0x0(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function USDStage.UsdStageActor.SetAssetCache
struct AUsdStageActor_SetAssetCache_Params
{
public:
	class UUsdAssetCache2*                       NewCache;                                          // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.GetTime
struct AUsdStageActor_GetTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDStage.UsdStageActor.GetSourcePrimPath
struct AUsdStageActor_GetSourcePrimPath_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FString                                ReturnValue;                                       // 0x8(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function USDStage.UsdStageActor.GetLevelSequence
struct AUsdStageActor_GetLevelSequence_Params
{
public:
	class ULevelSequence*                        ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function USDStage.UsdStageActor.GetIsolatedRootLayer
struct AUsdStageActor_GetIsolatedRootLayer_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function USDStage.UsdStageActor.GetGeneratedComponent
struct AUsdStageActor_GetGeneratedComponent_Params
{
public:
	class FString                                PrimPath;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USceneComponent*                       ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function USDStage.UsdStageActor.GetGeneratedAssets
struct AUsdStageActor_GetGeneratedAssets_Params
{
public:
	class FString                                PrimPath;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UObject*>                       ReturnValue;                                       // 0x10(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


