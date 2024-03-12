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

// 0x1 (0x1 - 0x0)
// Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
struct ALandscapeProxy_SetVirtualTextureRenderPassType_Params
{
public:
	enum class ERuntimeVirtualTextureMainPassType InType;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FLinearColor                          Value;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UTexture*                              Value;                                             // 0x8(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0xC (0xC - 0x0)
// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        Value;                                             // 0x8(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
struct ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                InRenderTarget;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         InExportHeightIntoRGChannel;                       // 0x8(0x1)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         InExportLandscapeProxies;                          // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_13DF[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function Landscape.LandscapeProxy.GetLandscapeActor
struct ALandscapeProxy_GetLandscapeActor_Params
{
public:
	class ALandscape*                            ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct ALandscapeProxy_EditorSetLandscapeMaterial_Params
{
public:
	class UMaterialInterface*                    NewLandscapeMaterial;                              // 0x0(0x8)(ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscapeProxy_EditorApplySpline_Params
{
public:
	class USplineComponent*                      InSplineComponent;                                 // 0x0(0x8)(ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StartWidth;                                        // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        EndWidth;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StartSideFalloff;                                  // 0x10(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        EndSideFalloff;                                    // 0x14(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StartRoll;                                         // 0x18(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        EndRoll;                                           // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumSubdivisions;                                   // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRaiseHeights;                                     // 0x24(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLowerHeights;                                     // 0x25(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_13F1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class ULandscapeLayerInfoObject*             PaintLayer;                                        // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  EditLayerName;                                     // 0x30(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
public:
	float                                        InLODDistanceFactor;                               // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
{
public:
	float                                        InComponentScreenSizeToUseSubSections;             // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function Landscape.Landscape.RenderHeightmap
struct ALandscape_RenderHeightmap_Params
{
public:
	struct FTransform                            InWorldTransform;                                  // 0x0(0x60)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBox2D                                InExtents;                                         // 0x60(0x28)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                OutRenderTarget;                                   // 0x88(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Landscape.LandscapeComponent.SetLODBias
struct ULandscapeComponent_SetLODBias_Params
{
public:
	int32                                        InLODBias;                                         // 0x0(0x4)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Landscape.LandscapeComponent.SetForcedLOD
struct ULandscapeComponent_SetForcedLOD_Params
{
public:
	int32                                        InForcedLOD;                                       // 0x0(0x4)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1438[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class FName                                  InPaintLayerName;                                  // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_143F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	class ULandscapeLayerInfoObject*             PaintLayer;                                        // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x20(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1446[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
struct ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params
{
public:
	class ULandscapeComponent*                   ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
{
public:
	TArray<class USplineMeshComponent*>          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
struct ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params
{
public:
	bool                                         bInUserTriggered;                                  // 0x0(0x1)(BlueprintVisible, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Landscape.LandscapeBlueprintBrushBase.Render
struct ALandscapeBlueprintBrushBase_Render_Params
{
public:
	bool                                         InIsHeightmap;                                     // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1503[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                InCombinedResult;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  InWeightmapLayerName;                              // 0x10(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function Landscape.LandscapeBlueprintBrushBase.Initialize
struct ALandscapeBlueprintBrushBase_Initialize_Params
{
public:
	struct FTransform                            InLandscapeTransform;                              // 0x0(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FIntPoint                             InLandscapeSize;                                   // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FIntPoint                             InLandscapeRenderTargetSize;                       // 0x68(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
struct ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params
{
public:
	TArray<class UObject*>                       OutStreamableAssets;                               // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


