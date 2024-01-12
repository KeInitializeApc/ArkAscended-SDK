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
// Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
struct UOctreeDynamicMeshComponent_SetDynamicMesh_Params
{
public:
	class UDynamicMesh*                          NewMesh;                                           // 0x0(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetPointSetVisibility
struct UPreviewGeometry_SetPointSetVisibility_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bVisible;                                          // 0x10(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_AD2[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetPointSetMaterial
struct UPreviewGeometry_SetPointSetMaterial_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_AD7[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
struct UPreviewGeometry_SetLineSetVisibility_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bVisible;                                          // 0x10(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_AD9[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
struct UPreviewGeometry_SetLineSetMaterial_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_ADC[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
struct UPreviewGeometry_SetAllPointSetsMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
struct UPreviewGeometry_SetAllLineSetsMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemovePointSet
struct UPreviewGeometry_RemovePointSet_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDestroy;                                          // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_AE2[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveLineSet
struct UPreviewGeometry_RemoveLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDestroy;                                          // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_AE5[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveAllPointSets
struct UPreviewGeometry_RemoveAllPointSets_Params
{
public:
	bool                                         bDestroy;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
struct UPreviewGeometry_RemoveAllLineSets_Params
{
public:
	bool                                         bDestroy;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.GetActor
struct UPreviewGeometry_GetActor_Params
{
public:
	class APreviewGeometryActor*                 ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.FindPointSet
struct UPreviewGeometry_FindPointSet_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPointSetComponent*                    ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.FindLineSet
struct UPreviewGeometry_FindLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ModelingComponents.PreviewGeometry.CreateInWorld
struct UPreviewGeometry_CreateInWorld_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_AEE[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WithTransform;                                     // 0x10(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.AddPointSet
struct UPreviewGeometry_AddPointSet_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPointSetComponent*                    ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.AddLineSet
struct UPreviewGeometry_AddLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     ReturnValue;                                       // 0x10(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
struct UModelingObjectsCreationAPI_CreateTextureObject_Params
{
public:
	struct FCreateTextureObjectParams            CreateTexParams;                                   // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FCreateTextureObjectResult            ReturnValue;                                       // 0x30(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x620 (0x620 - 0x0)
// Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
struct UModelingObjectsCreationAPI_CreateMeshObject_Params
{
public:
	struct FCreateMeshObjectParams               CreateMeshParams;                                  // 0x0(0x600)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FCreateMeshObjectResult               ReturnValue;                                       // 0x600(0x20)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
struct UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
struct UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
struct UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Params
{
public:
	enum class ECreateObjectTypeHint             ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
struct UPolygroupLayersProperties_GetGroupLayersFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
struct UWeightMapSetProperties_GetWeightMapsFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


