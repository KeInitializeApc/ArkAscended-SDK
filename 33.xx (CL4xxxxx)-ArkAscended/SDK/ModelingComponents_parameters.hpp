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
	class UDynamicMesh*                          NewMesh;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetPointSetVisibility
struct UPreviewGeometry_SetPointSetVisibility_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bVisible;                                          // 0x10(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_795[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetPointSetMaterial
struct UPreviewGeometry_SetPointSetMaterial_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_79C[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
struct UPreviewGeometry_SetLineSetVisibility_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bVisible;                                          // 0x10(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7A7[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
struct UPreviewGeometry_SetLineSetMaterial_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7B1[0x7];                                      // Fixing Size Of Struct > TateDumper <
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
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDestroy;                                          // 0x10(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7C8[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveLineSet
struct UPreviewGeometry_RemoveLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDestroy;                                          // 0x10(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x11(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_7CE[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveAllPointSets
struct UPreviewGeometry_RemoveAllPointSets_Params
{
public:
	bool                                         bDestroy;                                          // 0x0(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
struct UPreviewGeometry_RemoveAllLineSets_Params
{
public:
	bool                                         bDestroy;                                          // 0x0(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.GetActor
struct UPreviewGeometry_GetActor_Params
{
public:
	class APreviewGeometryActor*                 ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.FindPointSet
struct UPreviewGeometry_FindPointSet_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPointSetComponent*                    ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.FindLineSet
struct UPreviewGeometry_FindLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function ModelingComponents.PreviewGeometry.CreateInWorld
struct UPreviewGeometry_CreateInWorld_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_7EF[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WithTransform;                                     // 0x10(0x60)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.AddPointSet
struct UPreviewGeometry_AddPointSet_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPointSetComponent*                    ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.AddLineSet
struct UPreviewGeometry_AddLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class ULineSetComponent*                     ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
struct UModelingObjectsCreationAPI_CreateTextureObject_Params
{
public:
	struct FCreateTextureObjectParams            CreateTexParams;                                   // 0x0(0x30)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FCreateTextureObjectResult            ReturnValue;                                       // 0x30(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x620 (0x620 - 0x0)
// Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
struct UModelingObjectsCreationAPI_CreateMeshObject_Params
{
public:
	struct FCreateMeshObjectParams               CreateMeshParams;                                  // 0x0(0x600)(ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FCreateMeshObjectResult               ReturnValue;                                       // 0x600(0x20)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
struct UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
struct UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
struct UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Params
{
public:
	enum class ECreateObjectTypeHint             ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
struct UPolygroupLayersProperties_GetGroupLayersFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
struct UWeightMapSetProperties_GetWeightMapsFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


