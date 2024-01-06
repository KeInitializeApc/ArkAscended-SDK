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

// 0x28 (0x28 - 0x0)
// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty
struct UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Params
{
public:
	struct FPCGAttributePropertySelector         Selector;                                          // 0x0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGPointProperties               InPointProperty;                                   // 0x20(0x1)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x21(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_11E0[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName
struct UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Params
{
public:
	struct FPCGAttributePropertySelector         Selector;                                          // 0x0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  InAttributeName;                                   // 0x20(0x8)(Edit, ConstParm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_11E6[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName
struct UPCGAttributePropertySelectorBlueprintHelpers_GetName_Params
{
public:
	struct FPCGAttributePropertySelector         Selector;                                          // 0x0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGSpatialData.UnionWith
struct UPCGSpatialData_UnionWith_Params
{
public:
	class UPCGSpatialData*                       InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGUnionData*                         ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGSpatialData.ToPointDataWithContext
struct UPCGSpatialData_ToPointDataWithContext_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGPointData*                         ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGSpatialData.ToPointData
struct UPCGSpatialData_ToPointData_Params
{
public:
	class UPCGPointData*                         ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGSpatialData.Subtract
struct UPCGSpatialData_Subtract_Params
{
public:
	class UPCGSpatialData*                       InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGDifferenceData*                    ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x180 (0x180 - 0x0)
// Function PCG.PCGSpatialData.SamplePoint
struct UPCGSpatialData_SamplePoint_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FBox                                  Bounds;                                            // 0x60(0x38)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_120C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             OutPoint;                                          // 0xA0(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          OutMetadata;                                       // 0x170(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x178(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_120E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1A0 (0x1A0 - 0x0)
// Function PCG.PCGSpatialData.ProjectPoint
struct UPCGSpatialData_ProjectPoint_Params
{
public:
	struct FTransform                            InTransform;                                       // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FBox                                  InBounds;                                          // 0x60(0x38)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGProjectionParams                  InParams;                                          // 0x98(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1218[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             OutPoint;                                          // 0xC0(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          OutMetadata;                                       // 0x190(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x198(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_121B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGSpatialData.ProjectOn
struct UPCGSpatialData_ProjectOn_Params
{
public:
	class UPCGSpatialData*                       InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGProjectionParams                  InParams;                                          // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UPCGSpatialData*                       ReturnValue;                                       // 0x28(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGSpatialData.MutableMetadata
struct UPCGSpatialData_MutableMetadata_Params
{
public:
	class UPCGMetadata*                          ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGSpatialData.IntersectWith
struct UPCGSpatialData_IntersectWith_Params
{
public:
	class UPCGSpatialData*                       InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGIntersectionData*                  ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGSpatialData.InitializeFromData
struct UPCGSpatialData_InitializeFromData_Params
{
public:
	class UPCGSpatialData*                       InSource;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          InMetadataParentOverride;                          // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInheritMetadata;                                  // 0x10(0x1)(ConstParm, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bInheritAttributes;                                // 0x11(0x1)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_122E[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function PCG.PCGSpatialData.HasNonTrivialTransform
struct UPCGSpatialData_HasNonTrivialTransform_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function PCG.PCGSpatialData.GetStrictBounds
struct UPCGSpatialData_GetStrictBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGSpatialData.GetNormal
struct UPCGSpatialData_GetNormal_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function PCG.PCGSpatialData.GetDimension
struct UPCGSpatialData_GetDimension_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGSpatialData.GetDensityAtPosition
struct UPCGSpatialData_GetDensityAtPosition_Params
{
public:
	struct FVector                               InPosition;                                        // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1238[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function PCG.PCGSpatialData.GetBounds
struct UPCGSpatialData_GetBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGSpatialData.CreateEmptyMetadata
struct UPCGSpatialData_CreateEmptyMetadata_Params
{
public:
	class UPCGMetadata*                          ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGSpatialData.ConstMetadata
struct UPCGSpatialData_ConstMetadata_Params
{
public:
	class UPCGMetadata*                          ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function PCG.PCGDifferenceData.SetDensityFunction
struct UPCGDifferenceData_SetDensityFunction_Params
{
public:
	enum class EPCGDifferenceDensityFunction     InDensityFunction;                                 // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGDifferenceData.Initialize
struct UPCGDifferenceData_Initialize_Params
{
public:
	class UPCGSpatialData*                       InData;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGDifferenceData.AddDifference
struct UPCGDifferenceData_AddDifference_Params
{
public:
	class UPCGSpatialData*                       InDifference;                                      // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGIntersectionData.Initialize
struct UPCGIntersectionData_Initialize_Params
{
public:
	class UPCGSpatialData*                       InA;                                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	class UPCGSpatialData*                       InB;                                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGPointData.SetPoints
struct UPCGPointData_SetPoints_Params
{
public:
	TArray<struct FPCGPoint>                     InPoints;                                          // 0x0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGPointData.GetPoints
struct UPCGPointData_GetPoints_Params
{
public:
	TArray<struct FPCGPoint>                     ReturnValue;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// Function PCG.PCGPointData.GetPoint
struct UPCGPointData_GetPoint_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_12A7[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             ReturnValue;                                       // 0x10(0xD0)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGPointData.CopyPointsFrom
struct UPCGPointData_CopyPointsFrom_Params
{
public:
	class UPCGPointData*                         InData;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                InDataIndices;                                     // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function PCG.PCGRenderTargetData.Initialize
struct UPCGRenderTargetData_Initialize_Params
{
public:
	class UTextureRenderTarget2D*                InRenderTarget;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12E8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function PCG.PCGTextureData.Initialize
struct UPCGTextureData_Initialize_Params
{
public:
	class UTexture2D*                            InTexture;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_12F7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InTransform;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGUnionData.Initialize
struct UPCGUnionData_Initialize_Params
{
public:
	class UPCGSpatialData*                       InA;                                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	class UPCGSpatialData*                       InB;                                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGUnionData.AddData
struct UPCGUnionData_AddData_Params
{
public:
	class UPCGSpatialData*                       InData;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x190 (0x190 - 0x0)
// Function PCG.PCGBlueprintElement.VariableLoopBody
struct UPCGBlueprintElement_VariableLoopBody_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGPointData*                         InData;                                            // 0x98(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FPCGPoint                             InPoint;                                           // 0xA0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          OutMetadata;                                       // 0x170(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGPoint>                     ReturnValue;                                       // 0x178(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_13AF[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// Function PCG.PCGBlueprintElement.VariableLoop
struct UPCGBlueprintElement_VariableLoop_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGPointData*                         InData;                                            // 0x98(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPCGPointData*                         OutData;                                           // 0xA0(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPCGPointData*                         OptionalOutData;                                   // 0xA8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x250 (0x250 - 0x0)
// Function PCG.PCGBlueprintElement.PointLoopBody
struct UPCGBlueprintElement_PointLoopBody_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGPointData*                         InData;                                            // 0x98(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FPCGPoint                             InPoint;                                           // 0xA0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGPoint                             OutPoint;                                          // 0x170(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          OutMetadata;                                       // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x248(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_13C0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// Function PCG.PCGBlueprintElement.PointLoop
struct UPCGBlueprintElement_PointLoop_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGPointData*                         InData;                                            // 0x98(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPCGPointData*                         OutData;                                           // 0xA0(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPCGPointData*                         OptionalOutData;                                   // 0xA8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function PCG.PCGBlueprintElement.OutputLabels
struct UPCGBlueprintElement_OutputLabels_Params
{
public:
	TSet<class FName>                            ReturnValue;                                       // 0x0(0x50)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function PCG.PCGBlueprintElement.NodeTypeOverride
struct UPCGBlueprintElement_NodeTypeOverride_Params
{
public:
	enum class EPCGSettingsType                  ReturnValue;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGBlueprintElement.NodeTitleOverride
struct UPCGBlueprintElement_NodeTitleOverride_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGBlueprintElement.NodeColorOverride
struct UPCGBlueprintElement_NodeColorOverride_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x330 (0x330 - 0x0)
// Function PCG.PCGBlueprintElement.NestedLoopBody
struct UPCGBlueprintElement_NestedLoopBody_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGPointData*                         InOuterData;                                       // 0x98(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class UPCGPointData*                         InInnerData;                                       // 0xA0(0x8)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_13D2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             InOuterPoint;                                      // 0xB0(0xD0)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FPCGPoint                             InInnerPoint;                                      // 0x180(0xD0)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	struct FPCGPoint                             OutPoint;                                          // 0x250(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          OutMetadata;                                       // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x328(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_13D5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB8 (0xB8 - 0x0)
// Function PCG.PCGBlueprintElement.NestedLoop
struct UPCGBlueprintElement_NestedLoop_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGPointData*                         InOuterData;                                       // 0x98(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class UPCGPointData*                         InInnerData;                                       // 0xA0(0x8)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class UPCGPointData*                         OutData;                                           // 0xA8(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPCGPointData*                         OptionalOutData;                                   // 0xB0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x190 (0x190 - 0x0)
// Function PCG.PCGBlueprintElement.IterationLoopBody
struct UPCGBlueprintElement_IterationLoopBody_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        Iteration;                                         // 0x98(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGSpatialData*                       InA;                                               // 0xA0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	class UPCGSpatialData*                       InB;                                               // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FPCGPoint                             OutPoint;                                          // 0xB0(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          OutMetadata;                                       // 0x180(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x188(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_13DE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// Function PCG.PCGBlueprintElement.IterationLoop
struct UPCGBlueprintElement_IterationLoop_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        NumIterations;                                     // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPCGPointData*                         OutData;                                           // 0xA0(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UPCGSpatialData*                       OptionalA;                                         // 0xA8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class UPCGSpatialData*                       OptionalB;                                         // 0xB0(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class UPCGPointData*                         OptionalOutData;                                   // 0xB8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function PCG.PCGBlueprintElement.InputLabels
struct UPCGBlueprintElement_InputLabels_Params
{
public:
	TSet<class FName>                            ReturnValue;                                       // 0x0(0x50)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGBlueprintElement.GetSeed
struct UPCGBlueprintElement_GetSeed_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x98(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_13EC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGBlueprintElement.GetRandomStream
struct UPCGBlueprintElement_GetRandomStream_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FRandomStream                         ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xD8 (0xD8 - 0x0)
// Function PCG.PCGBlueprintElement.ExecuteWithContext
struct UPCGBlueprintElement_ExecuteWithContext_Params
{
public:
	struct FPCGContext                           InContext;                                         // 0x0(0x98)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGDataCollection                    Input;                                             // 0x98(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FPCGDataCollection                    Output;                                            // 0xB8(0x20)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGBlueprintElement.Execute
struct UPCGBlueprintElement_Execute_Params
{
public:
	struct FPCGDataCollection                    Input;                                             // 0x0(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	struct FPCGDataCollection                    Output;                                            // 0x20(0x20)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGBlueprintSettings.SetElementType
struct UPCGBlueprintSettings_SetElementType_Params
{
public:
	class UClass*                                InElementType;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGBlueprintElement*                  ElementInstance;                                   // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGBlueprintSettings.GetElementType
struct UPCGBlueprintSettings_GetElementType_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType
struct UPCGPointMatchAndSetSettings_SetMatchAndSetType_Params
{
public:
	class UClass*                                InMatchAndSetType;                                 // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGNode.RemoveEdgeTo
struct UPCGNode_RemoveEdgeTo_Params
{
public:
	class FName                                  FromPinLable;                                      // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              To;                                                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ToPinLabel;                                        // 0x10(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1454[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGNode.GetSettings
struct UPCGNode_GetSettings_Params
{
public:
	class UPCGSettings*                          ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGNode.GetGraph
struct UPCGNode_GetGraph_Params
{
public:
	class UPCGGraph*                             ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGNode.AddEdgeTo
struct UPCGNode_AddEdgeTo_Params
{
public:
	class FName                                  FromPinLabel;                                      // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              To;                                                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ToPinLabel;                                        // 0x10(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType
struct UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Params
{
public:
	class UClass*                                InMeshSelectorType;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType
struct UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Params
{
public:
	class UClass*                                InInstancePackerType;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGPartitionActor.GetOriginalComponent
struct APCGPartitionActor_GetOriginalComponent_Params
{
public:
	class UPCGComponent*                         LocalComponent;                                    // 0x0(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGComponent*                         ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGPartitionActor.GetLocalComponent
struct APCGPartitionActor_GetLocalComponent_Params
{
public:
	class UPCGComponent*                         OriginalComponent;                                 // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGComponent*                         ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function PCG.PCGBlueprintHelpers.SetSeedFromPosition
struct UPCGBlueprintHelpers_SetSeedFromPosition_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGBlueprintHelpers.SetLocalCenter
struct UPCGBlueprintHelpers_SetLocalCenter_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               InLocalCenter;                                     // 0xD0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14CE[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGBlueprintHelpers.SetExtents
struct UPCGBlueprintHelpers_SetExtents_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               InExtents;                                         // 0xD0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_14D1[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x110 (0x110 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetTransformedBounds
struct UPCGBlueprintHelpers_GetTransformedBounds_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FBox                                  ReturnValue;                                       // 0xD0(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_14D6[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetTaskId
struct UPCGBlueprintHelpers_GetTaskId_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	int64                                        ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetSettings
struct UPCGBlueprintHelpers_GetSettings_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGSettings*                          ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetRandomStream
struct UPCGBlueprintHelpers_GetRandomStream_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGSettings*                          OptionalSettings;                                  // 0xD0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGComponent*                         OptionalComponent;                                 // 0xD8(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FRandomStream                         ReturnValue;                                       // 0xE0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_157A[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetOriginalComponent
struct UPCGBlueprintHelpers_GetOriginalComponent_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGComponent*                         ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetLocalCenter
struct UPCGBlueprintHelpers_GetLocalCenter_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0xD0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15C8[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights
struct UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	TArray<struct FPCGLandscapeLayerWeight>      ReturnValue;                                       // 0x20(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetInputData
struct UPCGBlueprintHelpers_GetInputData_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGData*                              ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetExtents
struct UPCGBlueprintHelpers_GetExtents_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0xD0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15D3[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetComponent
struct UPCGBlueprintHelpers_GetComponent_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGComponent*                         ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG
struct UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIgnorePCGCreatedComponents;                       // 0x8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  ReturnValue;                                       // 0x10(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetActorData
struct UPCGBlueprintHelpers_GetActorData_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGData*                              ReturnValue;                                       // 0x98(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function PCG.PCGBlueprintHelpers.GetActorBoundsPCG
struct UPCGBlueprintHelpers_GetActorBoundsPCG_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIgnorePCGCreatedComponents;                       // 0x8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15E3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  ReturnValue;                                       // 0x10(0x38)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGBlueprintHelpers.CreatePCGDataFromActor
struct UPCGBlueprintHelpers_CreatePCGDataFromActor_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bParseActor;                                       // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15EB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPCGData*                              ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGBlueprintHelpers.ComputeSeedFromPosition
struct UPCGBlueprintHelpers_ComputeSeedFromPosition_Params
{
public:
	struct FVector                               InPosition;                                        // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_15F0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x2C0 (0x2C0 - 0x0)
// Function PCG.PCGInstancePackerBase.PackInstances
struct UPCGInstancePackerBase_PackInstances_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGSpatialData*                       InSpatialData;                                     // 0x98(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGMeshInstanceList                  InstanceList;                                      // 0xA0(0x208)(Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGPackedCustomData                  OutPackedCustomData;                               // 0x2A8(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x238 (0x238 - 0x0)
// Function PCG.PCGInstancePackerBase.PackCustomDataFromAttributes
struct UPCGInstancePackerBase_PackCustomDataFromAttributes_Params
{
public:
	struct FPCGMeshInstanceList                  InstanceList;                                      // 0x0(0x208)(Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          MetaData;                                          // 0x208(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	TArray<class FName>                          AttributeNames;                                    // 0x210(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGPackedCustomData                  OutPackedCustomData;                               // 0x220(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGInstancePackerBase.AddTypeToPacking
struct UPCGInstancePackerBase_AddTypeToPacking_Params
{
public:
	int32                                        TypeId;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_160B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPackedCustomData                  OutPackedCustomData;                               // 0x8(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_160C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGMatchAndSetBase.ValidatePreconditions
struct UPCGMatchAndSetBase_ValidatePreconditions_Params
{
public:
	class UPCGPointData*                         InPointData;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1614[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// Function PCG.PCGMatchAndSetBase.MatchAndSet
struct UPCGMatchAndSetBase_MatchAndSet_Params
{
public:
	struct FPCGContext                           Context;                                           // 0x0(0x98)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UPCGPointMatchAndSetSettings*          InSettings;                                        // 0x98(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPCGPointData*                         InPointData;                                       // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGPointData*                         OutPointData;                                      // 0xA8(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1B0 (0x1B0 - 0x0)
// Function PCG.PCGMetadata.SetPointAttributes
struct UPCGMetadata_SetPointAttributes_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	uint8                                        Pad_1656[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             OutPoint;                                          // 0xE0(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadata.SetAttributesByKey
struct UPCGMetadata_SetAttributesByKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          InMetaData;                                        // 0x8(0x8)(BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	int64                                        TargetKey;                                         // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        OutKey;                                            // 0x18(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGMetadata.ResetWeightedAttributesByKey
struct UPCGMetadata_ResetWeightedAttributesByKey_Params
{
public:
	int64                                        TargetKey;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        OutKey;                                            // 0x8(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function PCG.PCGMetadata.ResetPointWeightedAttributes
struct UPCGMetadata_ResetPointWeightedAttributes_Params
{
public:
	struct FPCGPoint                             OutPoint;                                          // 0x0(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function PCG.PCGMetadata.RenameAttribute
struct UPCGMetadata_RenameAttribute_Params
{
public:
	class FName                                  AttributeToRename;                                 // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  NewAttributeName;                                  // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_166C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x2A0 (0x2A0 - 0x0)
// Function PCG.PCGMetadata.MergePointAttributes
struct UPCGMetadata_MergePointAttributes_Params
{
public:
	struct FPCGPoint                             PointA;                                            // 0x0(0xD0)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          MetadataA;                                         // 0xD0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_167F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             PointB;                                            // 0xE0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          MetadataB;                                         // 0x1B0(0x8)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1681[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             TargetPoint;                                       // 0x1C0(0xD0)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	enum class EPCGMetadataOp                    Op;                                                // 0x290(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1684[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function PCG.PCGMetadata.MergeAttributesByKey
struct UPCGMetadata_MergeAttributesByKey_Params
{
public:
	int64                                        KeyA;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          MetadataA;                                         // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        KeyB;                                              // 0x10(0x8)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          MetadataB;                                         // 0x18(0x8)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        TargetKey;                                         // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataOp                    Op;                                                // 0x28(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1696[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        OutKey;                                            // 0x30(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function PCG.PCGMetadata.InitializeWithAttributeFilter
struct UPCGMetadata_InitializeWithAttributeFilter_Params
{
public:
	class UPCGMetadata*                          InParent;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TSet<class FName>                            InFilteredAttributes;                              // 0x8(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataFilterMode            InFilterMode;                                      // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_169D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function PCG.PCGMetadata.InitializeAsCopyWithAttributeFilter
struct UPCGMetadata_InitializeAsCopyWithAttributeFilter_Params
{
public:
	class UPCGMetadata*                          InMetadataToCopy;                                  // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TSet<class FName>                            InFilteredAttributes;                              // 0x8(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataFilterMode            InFilterMode;                                      // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16A2[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGMetadata.InitializeAsCopy
struct UPCGMetadata_InitializeAsCopy_Params
{
public:
	class UPCGMetadata*                          InMetadataToCopy;                                  // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGMetadata.Initialize
struct UPCGMetadata_Initialize_Params
{
public:
	class UPCGMetadata*                          InParent;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGMetadata.HasCommonAttributes
struct UPCGMetadata_HasCommonAttributes_Params
{
public:
	class UPCGMetadata*                          InMetaData;                                        // 0x0(0x8)(BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_16AF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function PCG.PCGMetadata.HasAttribute
struct UPCGMetadata_HasAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_16B4[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadata.GetAttributes
struct UPCGMetadata_GetAttributes_Params
{
public:
	TArray<class FName>                          AttributeNames;                                    // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<enum class EPCGMetadataTypes>         AttributeTypes;                                    // 0x10(0x10)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGMetadata.DeleteAttribute
struct UPCGMetadata_DeleteAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGMetadata.CreateVectorAttribute
struct UPCGMetadata_CreateVectorAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector                               DefaultValue;                                      // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x20(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16BC[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGMetadata.CreateVector4Attribute
struct UPCGMetadata_CreateVector4Attribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C0[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              DefaultValue;                                      // 0x10(0x20)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x30(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C2[0xE];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadata.CreateVector2Attribute
struct UPCGMetadata_CreateVector2Attribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector2D                             DefaultValue;                                      // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x18(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C7[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function PCG.PCGMetadata.CreateTransformAttribute
struct UPCGMetadata_CreateTransformAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_16CB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            DefaultValue;                                      // 0x10(0x60)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x70(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x71(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16CC[0xE];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadata.CreateStringAttribute
struct UPCGMetadata_CreateStringAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FString                                DefaultValue;                                      // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x18(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16D3[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGMetadata.CreateRotatorAttribute
struct UPCGMetadata_CreateRotatorAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FRotator                              DefaultValue;                                      // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x20(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16DA[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGMetadata.CreateQuatAttribute
struct UPCGMetadata_CreateQuatAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_16DE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 DefaultValue;                                      // 0x10(0x20)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x30(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16DF[0xE];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGMetadata.CreateInteger64Attribute
struct UPCGMetadata_CreateInteger64Attribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int64                                        DefaultValue;                                      // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x10(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x11(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16E7[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGMetadata.CreateInteger32Attribute
struct UPCGMetadata_CreateInteger32Attribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        DefaultValue;                                      // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0xC(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0xD(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16EF[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGMetadata.CreateFloatAttribute
struct UPCGMetadata_CreateFloatAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        DefaultValue;                                      // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0xC(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0xD(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_16FB[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGMetadata.CreateDoubleAttribute
struct UPCGMetadata_CreateDoubleAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	double                                       DefaultValue;                                      // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x10(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0x11(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1703[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function PCG.PCGMetadata.CreateBoolAttribute
struct UPCGMetadata_CreateBoolAttribute_Params
{
public:
	class FName                                  AttributeName;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         DefaultValue;                                      // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsInterpolation;                              // 0x9(0x1)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOverrideParent;                                   // 0xA(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_170B[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// Function PCG.PCGMetadata.CopyExistingAttribute
struct UPCGMetadata_CopyExistingAttribute_Params
{
public:
	class FName                                  AttributeToCopy;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  NewAttributeName;                                  // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bKeepParent;                                       // 0x10(0x1)(Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1714[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGMetadata.CopyAttributes
struct UPCGMetadata_CopyAttributes_Params
{
public:
	class UPCGMetadata*                          InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGMetadata.CopyAttribute
struct UPCGMetadata_CopyAttribute_Params
{
public:
	class UPCGMetadata*                          InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  AttributeToCopy;                                   // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  NewAttributeName;                                  // 0x10(0x8)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGMetadata.ClearAttribute
struct UPCGMetadata_ClearAttribute_Params
{
public:
	class FName                                  AttributeToClear;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGMetadata.AddEntry
struct UPCGMetadata_AddEntry_Params
{
public:
	int64                                        ParentEntryKey;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function PCG.PCGMetadata.AddAttributesFiltered
struct UPCGMetadata_AddAttributesFiltered_Params
{
public:
	class UPCGMetadata*                          InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TSet<class FName>                            InFilteredAttributes;                              // 0x8(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EPCGMetadataFilterMode            InFilterMode;                                      // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_172E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGMetadata.AddAttributes
struct UPCGMetadata_AddAttributes_Params
{
public:
	class UPCGMetadata*                          InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGMetadata.AddAttribute
struct UPCGMetadata_AddAttribute_Params
{
public:
	class UPCGMetadata*                          InOther;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGMetadata.AccumulateWeightedAttributesByKey
struct UPCGMetadata_AccumulateWeightedAttributesByKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	float                                        Weight;                                            // 0x10(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bSetNonInterpolableAttributes;                     // 0x14(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1734[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        TargetKey;                                         // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int64                                        OutKey;                                            // 0x20(0x8)(ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1B0 (0x1B0 - 0x0)
// Function PCG.PCGMetadata.AccumulatePointWeightedAttributes
struct UPCGMetadata_AccumulatePointWeightedAttributes_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          InMetaData;                                        // 0xD0(0x8)(BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	float                                        Weight;                                            // 0xD8(0x4)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         bSetNonInterpolableAttributes;                     // 0xDC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_173C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             OutPoint;                                          // 0xE0(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector                               Value;                                             // 0x18(0x18)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x100 (0x100 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetVectorAttribute
struct UPCGMetadataAccessorHelpers_SetVectorAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector                               Value;                                             // 0xE0(0x18)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_1762[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_176C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Value;                                             // 0x20(0x20)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x100 (0x100 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetVector4Attribute
struct UPCGMetadataAccessorHelpers_SetVector4Attribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector4                              Value;                                             // 0xE0(0x20)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector2D                             Value;                                             // 0x18(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetVector2Attribute
struct UPCGMetadataAccessorHelpers_SetVector2Attribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector2D                             Value;                                             // 0xE0(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x80 (0x80 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_178D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Value;                                             // 0x20(0x60)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x140 (0x140 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetTransformAttribute
struct UPCGMetadataAccessorHelpers_SetTransformAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FTransform                            Value;                                             // 0xE0(0x60)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FString                                Value;                                             // 0x18(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetStringAttribute
struct UPCGMetadataAccessorHelpers_SetStringAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FString                                Value;                                             // 0xE0(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FRotator                              Value;                                             // 0x18(0x18)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x100 (0x100 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute
struct UPCGMetadataAccessorHelpers_SetRotatorAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FRotator                              Value;                                             // 0xE0(0x18)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_17B3[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_17BE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Value;                                             // 0x20(0x20)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x100 (0x100 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetQuatAttribute
struct UPCGMetadataAccessorHelpers_SetQuatAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FQuat                                 Value;                                             // 0xE0(0x20)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int64                                        Value;                                             // 0x18(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute
struct UPCGMetadataAccessorHelpers_SetInteger64Attribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int64                                        Value;                                             // 0xE0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_17E4[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Value;                                             // 0x18(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_17EE[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute
struct UPCGMetadataAccessorHelpers_SetInteger32Attribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        Value;                                             // 0xE0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_17F6[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        Value;                                             // 0x18(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_17FC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetFloatAttribute
struct UPCGMetadataAccessorHelpers_SetFloatAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        Value;                                             // 0xE0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_1806[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	double                                       Value;                                             // 0x18(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute
struct UPCGMetadataAccessorHelpers_SetDoubleAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	double                                       Value;                                             // 0xE0(0x8)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_181E[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         Value;                                             // 0x18(0x1)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_1829[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetBoolAttribute
struct UPCGMetadataAccessorHelpers_SetBoolAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         Value;                                             // 0xE0(0x1)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
	uint8                                        Pad_1836[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey
struct UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class UObject*                               Object;                                            // 0x18(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FName                                  PropertyName;                                      // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1846[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C0 (0x1C0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.InitializeMetadata
struct UPCGMetadataAccessorHelpers_InitializeMetadata_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	uint8                                        Pad_185B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPCGPoint                             ParentPoint;                                       // 0xE0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          ParentMetadata;                                    // 0x1B0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_185C[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey
struct UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_186B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.HasAttributeSet
struct UPCGMetadataAccessorHelpers_HasAttributeSet_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1879[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetVectorAttribute
struct UPCGMetadataAccessorHelpers_GetVectorAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector                               ReturnValue;                                       // 0xE0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1891[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1899[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              ReturnValue;                                       // 0x20(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetVector4Attribute
struct UPCGMetadataAccessorHelpers_GetVector4Attribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector4                              ReturnValue;                                       // 0xE0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetVector2Attribute
struct UPCGMetadataAccessorHelpers_GetVector2Attribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FVector2D                             ReturnValue;                                       // 0xE0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_18AC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x20(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x140 (0x140 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetTransformAttribute
struct UPCGMetadataAccessorHelpers_GetTransformAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FTransform                            ReturnValue;                                       // 0xE0(0x60)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x18(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetStringAttribute
struct UPCGMetadataAccessorHelpers_GetStringAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0xE0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FRotator                              ReturnValue;                                       // 0x18(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute
struct UPCGMetadataAccessorHelpers_GetRotatorAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FRotator                              ReturnValue;                                       // 0xE0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18CF[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_18D6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 ReturnValue;                                       // 0x20(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetQuatAttribute
struct UPCGMetadataAccessorHelpers_GetQuatAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	struct FQuat                                 ReturnValue;                                       // 0xE0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int64                                        ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute
struct UPCGMetadataAccessorHelpers_GetInteger64Attribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int64                                        ReturnValue;                                       // 0xE0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18E7[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18EC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute
struct UPCGMetadataAccessorHelpers_GetInteger32Attribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0xE0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18F0[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x18(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18F5[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetFloatAttribute
struct UPCGMetadataAccessorHelpers_GetFloatAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0xE0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_18FA[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	double                                       ReturnValue;                                       // 0x18(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute
struct UPCGMetadataAccessorHelpers_GetDoubleAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	double                                       ReturnValue;                                       // 0xE0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1904[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey
struct UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Params
{
public:
	int64                                        Key;                                               // 0x0(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	class UPCGMetadata*                          MetaData;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1908[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.GetBoolAttribute
struct UPCGMetadataAccessorHelpers_GetBoolAttribute_Params
{
public:
	struct FPCGPoint                             Point;                                             // 0x0(0xD0)(ConstParm, Parm, ReturnParm)
	class UPCGMetadata*                          MetaData;                                          // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FName                                  AttributeName;                                     // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_190B[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C0 (0x1C0 - 0x0)
// Function PCG.PCGMetadataAccessorHelpers.CopyPoint
struct UPCGMetadataAccessorHelpers_CopyPoint_Params
{
public:
	struct FPCGPoint                             InPoint;                                           // 0x0(0xD0)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPCGPoint                             OutPoint;                                          // 0xD0(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bCopyMetadata;                                     // 0x1A0(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1914[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPCGMetadata*                          InMetaData;                                        // 0x1A8(0x8)(BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UPCGMetadata*                          OutMetadata;                                       // 0x1B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1916[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGComponent.SetGraph
struct UPCGComponent_SetGraph_Params
{
public:
	class UPCGGraphInterface*                    InGraph;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function PCG.PCGComponent.GetGeneratedGraphOutput
struct UPCGComponent_GetGeneratedGraphOutput_Params
{
public:
	struct FPCGDataCollection                    ReturnValue;                                       // 0x0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function PCG.PCGComponent.GenerateLocal
struct UPCGComponent_GenerateLocal_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function PCG.PCGComponent.Generate
struct UPCGComponent_Generate_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGComponent.ClearPCGLink
struct UPCGComponent_ClearPCGLink_Params
{
public:
	class UClass*                                TemplateActor;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function PCG.PCGComponent.CleanupLocal
struct UPCGComponent_CleanupLocal_Params
{
public:
	bool                                         bRemoveComponents;                                 // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSave;                                             // 0x1(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function PCG.PCGComponent.Cleanup
struct UPCGComponent_Cleanup_Params
{
public:
	bool                                         bRemoveComponents;                                 // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bSave;                                             // 0x1(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGComponent.AddToManagedResources
struct UPCGComponent_AddToManagedResources_Params
{
public:
	class UPCGManagedResource*                   InResource;                                        // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGDataFunctionLibrary.GetTaggedParams
struct UPCGDataFunctionLibrary_GetTaggedParams_Params
{
public:
	struct FPCGDataCollection                    InCollection;                                      // 0x0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                InTag;                                             // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FPCGTaggedData>                ReturnValue;                                       // 0x30(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function PCG.PCGDataFunctionLibrary.GetTaggedInputs
struct UPCGDataFunctionLibrary_GetTaggedInputs_Params
{
public:
	struct FPCGDataCollection                    InCollection;                                      // 0x0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FString                                InTag;                                             // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FPCGTaggedData>                ReturnValue;                                       // 0x30(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function PCG.PCGDataFunctionLibrary.GetParamsByPin
struct UPCGDataFunctionLibrary_GetParamsByPin_Params
{
public:
	struct FPCGDataCollection                    InCollection;                                      // 0x0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  InPinLabel;                                        // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGTaggedData>                ReturnValue;                                       // 0x28(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGDataFunctionLibrary.GetParams
struct UPCGDataFunctionLibrary_GetParams_Params
{
public:
	struct FPCGDataCollection                    InCollection;                                      // 0x0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGTaggedData>                ReturnValue;                                       // 0x20(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function PCG.PCGDataFunctionLibrary.GetInputsByPin
struct UPCGDataFunctionLibrary_GetInputsByPin_Params
{
public:
	struct FPCGDataCollection                    InCollection;                                      // 0x0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  InPinLabel;                                        // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGTaggedData>                ReturnValue;                                       // 0x28(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGDataFunctionLibrary.GetInputs
struct UPCGDataFunctionLibrary_GetInputs_Params
{
public:
	struct FPCGDataCollection                    InCollection;                                      // 0x0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGTaggedData>                ReturnValue;                                       // 0x20(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function PCG.PCGDataFunctionLibrary.GetAllSettings
struct UPCGDataFunctionLibrary_GetAllSettings_Params
{
public:
	struct FPCGDataCollection                    InCollection;                                      // 0x0(0x20)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPCGTaggedData>                ReturnValue;                                       // 0x20(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGGraphInterface.GetMutablePCGGraph
struct UPCGGraphInterface_GetMutablePCGGraph_Params
{
public:
	class UPCGGraph*                             ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGGraphInterface.GetConstPCGGraph
struct UPCGGraphInterface_GetConstPCGGraph_Params
{
public:
	class UPCGGraph*                             ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGGraph.RemoveNode
struct UPCGGraph_RemoveNode_Params
{
public:
	class UPCGNode*                              InNode;                                            // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGGraph.RemoveEdge
struct UPCGGraph_RemoveEdge_Params
{
public:
	class UPCGNode*                              From;                                              // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  FromLabel;                                         // 0x8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              To;                                                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ToLabel;                                           // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_197C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGGraph.GetOutputNode
struct UPCGGraph_GetOutputNode_Params
{
public:
	class UPCGNode*                              ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGGraph.GetInputNode
struct UPCGGraph_GetInputNode_Params
{
public:
	class UPCGNode*                              ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGGraph.AddNodeOfType
struct UPCGGraph_AddNodeOfType_Params
{
public:
	class UClass*                                InSettingsClass;                                   // 0x0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGSettings*                          DefaultNodeSettings;                               // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGGraph.AddNodeInstance
struct UPCGGraph_AddNodeInstance_Params
{
public:
	class UPCGSettings*                          InSettings;                                        // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPCGNode*                              ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGGraph.AddNodeCopy
struct UPCGGraph_AddNodeCopy_Params
{
public:
	class UPCGSettings*                          InSettings;                                        // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPCGSettings*                          DefaultNodeSettings;                               // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              ReturnValue;                                       // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function PCG.PCGGraph.AddEdge
struct UPCGGraph_AddEdge_Params
{
public:
	class UPCGNode*                              From;                                              // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  FromPinLabel;                                      // 0x8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              To;                                                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class FName                                  ToPinLabel;                                        // 0x18(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UPCGNode*                              ReturnValue;                                       // 0x20(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGParamData.MutableMetadata
struct UPCGParamData_MutableMetadata_Params
{
public:
	class UPCGMetadata*                          ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGParamData.FindOrAddMetadataKey
struct UPCGParamData_FindOrAddMetadataKey_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int64                                        ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGParamData.FindMetadataKey
struct UPCGParamData_FindMetadataKey_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int64                                        ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGParamData.FilterParamsByName
struct UPCGParamData_FilterParamsByName_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPCGParamData*                         ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function PCG.PCGParamData.FilterParamsByKey
struct UPCGParamData_FilterParamsByKey_Params
{
public:
	int64                                        InKey;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPCGParamData*                         ReturnValue;                                       // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function PCG.PCGParamData.ConstMetadata
struct UPCGParamData_ConstMetadata_Params
{
public:
	class UPCGMetadata*                          ReturnValue;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGPin.SetToolTip
struct UPCGPin_SetToolTip_Params
{
public:
	class FText                                  InTooltip;                                         // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function PCG.PCGPin.GetTooltip
struct UPCGPin_GetTooltip_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function PCG.PCGDeterminismTestBlueprintBase.ExecuteTest
struct UPCGDeterminismTestBlueprintBase_ExecuteTest_Params
{
public:
	class UPCGNode*                              InPCGNode;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FDeterminismTestResult                InOutTestResult;                                   // 0x8(0x88)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

}
}


