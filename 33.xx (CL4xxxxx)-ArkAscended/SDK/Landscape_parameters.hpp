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
	enum class ERuntimeVirtualTextureMainPassType InType;                                            // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          Value;                                             // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UTexture*                              Value;                                             // 0x8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0xC (0xC - 0x0)
// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	float                                        Value;                                             // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
struct ALandscapeProxy_LandscapeExportHeightmapToRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                InRenderTarget;                                    // 0x0(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	bool                                         InExportHeightIntoRGChannel;                       // 0x8(0x1)(ConstParm, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         InExportLandscapeProxies;                          // 0x9(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xA(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1EA3[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function Landscape.LandscapeProxy.GetLandscapeActor
struct ALandscapeProxy_GetLandscapeActor_Params
{
public:
	class ALandscape*                            ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct ALandscapeProxy_EditorSetLandscapeMaterial_Params
{
public:
	class UMaterialInterface*                    NewLandscapeMaterial;                              // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscapeProxy_EditorApplySpline_Params
{
public:
	class USplineComponent*                      InSplineComponent;                                 // 0x0(0x8)(ExportObject, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        StartWidth;                                        // 0x8(0x4)(ConstParm, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        EndWidth;                                          // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        StartSideFalloff;                                  // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        EndSideFalloff;                                    // 0x14(0x4)(BlueprintVisible, ExportObject, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        StartRoll;                                         // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndRoll;                                           // 0x1C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumSubdivisions;                                   // 0x20(0x4)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bRaiseHeights;                                     // 0x24(0x1)(BlueprintVisible, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLowerHeights;                                     // 0x25(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F07[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class ULandscapeLayerInfoObject*             PaintLayer;                                        // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  EditLayerName;                                     // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
public:
	float                                        InLODDistanceFactor;                               // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
{
public:
	float                                        InComponentScreenSizeToUseSubSections;             // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function Landscape.Landscape.RenderHeightmap
struct ALandscape_RenderHeightmap_Params
{
public:
	struct FTransform                            InWorldTransform;                                  // 0x0(0x60)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FBox2D                                InExtents;                                         // 0x60(0x28)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                OutRenderTarget;                                   // 0x88(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Landscape.LandscapeComponent.SetLODBias
struct ULandscapeComponent_SetLODBias_Params
{
public:
	int32                                        InLODBias;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Landscape.LandscapeComponent.SetForcedLOD
struct ULandscapeComponent_SetForcedLOD_Params
{
public:
	int32                                        InForcedLOD;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F94[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0x18)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class FName                                  InPaintLayerName;                                  // 0x18(0x8)(Edit, ConstParm, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x20(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FAB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
struct ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Params
{
public:
	struct FVector                               InLocation;                                        // 0x0(0x18)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class ULandscapeLayerInfoObject*             PaintLayer;                                        // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x20(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1FB4[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
struct ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Params
{
public:
	class ULandscapeComponent*                   ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
{
public:
	TArray<class USplineMeshComponent*>          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
struct ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params
{
public:
	bool                                         bInUserTriggered;                                  // 0x0(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Landscape.LandscapeBlueprintBrushBase.Render
struct ALandscapeBlueprintBrushBase_Render_Params
{
public:
	bool                                         InIsHeightmap;                                     // 0x0(0x1)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20F4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget2D*                InCombinedResult;                                  // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FName                                  InWeightmapLayerName;                              // 0x10(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function Landscape.LandscapeBlueprintBrushBase.Initialize
struct ALandscapeBlueprintBrushBase_Initialize_Params
{
public:
	struct FTransform                            InLandscapeTransform;                              // 0x0(0x60)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FIntPoint                             InLandscapeSize;                                   // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FIntPoint                             InLandscapeRenderTargetSize;                       // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
struct ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Params
{
public:
	TArray<class UObject*>                       OutStreamableAssets;                               // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


