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

// 0x18 (0x18 - 0x0)
// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
struct UHoudiniAssetBlueprintComponent_SetToggleValueAt_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	bool                                         Value;                                             // 0x10(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_98E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Index;                                             // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
struct UHoudiniAssetBlueprintComponent_SetFloatParameter_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        Value;                                             // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	int32                                        Index;                                             // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
struct UHoudiniAssetBlueprintComponent_HasParameter_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_990[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
struct UHoudiniStaticMesh_SetVertexPosition_Params
{
public:
	uint32                                       InVertexIndex;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector3f                             InPosition;                                        // 0x4(0xC)(Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
struct UHoudiniStaticMesh_SetTriangleVertexVTangent_Params
{
public:
	uint32                                       InTriangleIndex;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        InTriangleVertexIndex;                             // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B81[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector3f                             InVTangent;                                        // 0x8(0xC)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
struct UHoudiniStaticMesh_SetTriangleVertexUV_Params
{
public:
	uint32                                       InTriangleIndex;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        InTriangleVertexIndex;                             // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        InUVLayer;                                         // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B86[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2f                             InUV;                                              // 0x8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
struct UHoudiniStaticMesh_SetTriangleVertexUTangent_Params
{
public:
	uint32                                       InTriangleIndex;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        InTriangleVertexIndex;                             // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B92[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector3f                             InUTangent;                                        // 0x8(0xC)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
struct UHoudiniStaticMesh_SetTriangleVertexNormal_Params
{
public:
	uint32                                       InTriangleIndex;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        InTriangleVertexIndex;                             // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B98[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector3f                             InNormal;                                          // 0x8(0xC)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
struct UHoudiniStaticMesh_SetTriangleVertexIndices_Params
{
public:
	uint32                                       InTriangleIndex;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FIntVector                            InTriangleVertexIndices;                           // 0x4(0xC)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
struct UHoudiniStaticMesh_SetTriangleVertexColor_Params
{
public:
	uint32                                       InTriangleIndex;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        InTriangleVertexIndex;                             // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_BA8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                InColor;                                           // 0x8(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
struct UHoudiniStaticMesh_SetTriangleMaterialID_Params
{
public:
	uint32                                       InTriangleIndex;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        InMaterialID;                                      // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
struct UHoudiniStaticMesh_SetStaticMaterial_Params
{
public:
	uint32                                       InMaterialIndex;                                   // 0x0(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_BB4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FStaticMaterial                       InStaticMaterial;                                  // 0x8(0x30)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
struct UHoudiniStaticMesh_SetNumUVLayers_Params
{
public:
	uint32                                       InNumUVLayers;                                     // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
struct UHoudiniStaticMesh_SetNumStaticMaterials_Params
{
public:
	uint32                                       InNumStaticMaterials;                              // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
struct UHoudiniStaticMesh_SetHasTangents_Params
{
public:
	bool                                         bInHasTangents;                                    // 0x0(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
struct UHoudiniStaticMesh_SetHasPerFaceMaterials_Params
{
public:
	bool                                         bInHasPerFaceMaterials;                            // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
struct UHoudiniStaticMesh_SetHasNormals_Params
{
public:
	bool                                         bInHasNormals;                                     // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
struct UHoudiniStaticMesh_SetHasColors_Params
{
public:
	bool                                         bInHasColors;                                      // 0x0(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
struct UHoudiniStaticMesh_IsValid_Params
{
public:
	bool                                         bInSkipVertexIndicesCheck;                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
struct UHoudiniStaticMesh_Initialize_Params
{
public:
	uint32                                       InNumVertices;                                     // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       InNumTriangles;                                    // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       InNumUVLayers;                                     // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       InInitialNumStaticMaterials;                       // 0xC(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInHasNormals;                                     // 0x10(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInHasTangents;                                    // 0x11(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInHasColors;                                      // 0x12(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bInHasPerFaceMaterials;                            // 0x13(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
struct UHoudiniStaticMesh_HasTangents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
struct UHoudiniStaticMesh_HasPerFaceMaterials_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
struct UHoudiniStaticMesh_HasNormals_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
struct UHoudiniStaticMesh_HasColors_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
struct UHoudiniStaticMesh_GetVertexPositions_Params
{
public:
	TArray<struct FVector3f>                     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
struct UHoudiniStaticMesh_GetVertexInstanceVTangents_Params
{
public:
	TArray<struct FVector3f>                     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
struct UHoudiniStaticMesh_GetVertexInstanceUVs_Params
{
public:
	TArray<struct FVector2f>                     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
struct UHoudiniStaticMesh_GetVertexInstanceUTangents_Params
{
public:
	TArray<struct FVector3f>                     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
struct UHoudiniStaticMesh_GetVertexInstanceNormals_Params
{
public:
	TArray<struct FVector3f>                     ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
struct UHoudiniStaticMesh_GetVertexInstanceColors_Params
{
public:
	TArray<struct FColor>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
struct UHoudiniStaticMesh_GetTriangleIndices_Params
{
public:
	TArray<struct FIntVector>                    ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
struct UHoudiniStaticMesh_GetStaticMaterials_Params
{
public:
	TArray<struct FStaticMaterial>               ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
struct UHoudiniStaticMesh_GetNumVertices_Params
{
public:
	uint32                                       ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
struct UHoudiniStaticMesh_GetNumVertexInstances_Params
{
public:
	uint32                                       ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
struct UHoudiniStaticMesh_GetNumUVLayers_Params
{
public:
	uint32                                       ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
struct UHoudiniStaticMesh_GetNumTriangles_Params
{
public:
	uint32                                       ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
struct UHoudiniStaticMesh_GetNumStaticMaterials_Params
{
public:
	uint32                                       ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
struct UHoudiniStaticMesh_GetMaterialIndex_Params
{
public:
	class FName                                  InMaterialSlotName;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
struct UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Params
{
public:
	TArray<int32>                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
struct UHoudiniStaticMesh_GetMaterial_Params
{
public:
	int32                                        InMaterialIndex;                                   // 0x0(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C03[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
struct UHoudiniStaticMesh_CalculateTangents_Params
{
public:
	bool                                         bInComputeWeightedNormals;                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
struct UHoudiniStaticMesh_CalculateNormals_Params
{
public:
	bool                                         bInComputeWeightedNormals;                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
struct UHoudiniStaticMesh_CalcBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
struct UHoudiniStaticMesh_AddStaticMaterial_Params
{
public:
	struct FStaticMaterial                       InStaticMaterial;                                  // 0x0(0x30)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint32                                       ReturnValue;                                       // 0x30(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C09[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
struct UHoudiniStaticMeshComponent_SetMesh_Params
{
public:
	class UHoudiniStaticMesh*                    InMesh;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
struct UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Params
{
public:
	bool                                         bInHoudiniIconVisible;                             // 0x0(0x1)(Edit, ExportObject, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
struct UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
struct UHoudiniStaticMeshComponent_GetMesh_Params
{
public:
	class UHoudiniStaticMesh*                    ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function HoudiniEngineRuntime.HoudiniToolData.SaveToJSONFile
struct UHoudiniToolData_SaveToJSONFile_Params
{
public:
	class FString                                JsonFilePath;                                      // 0x0(0x10)(Edit, ExportObject, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C2B[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function HoudiniEngineRuntime.HoudiniToolData.PopulateFromJSONFile
struct UHoudiniToolData_PopulateFromJSONFile_Params
{
public:
	class FString                                JsonFilePath;                                      // 0x0(0x10)(Edit, ExportObject, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C2E[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function HoudiniEngineRuntime.HoudiniToolData.PopulateFromJSONData
struct UHoudiniToolData_PopulateFromJSONData_Params
{
public:
	class FString                                JSONData;                                          // 0x0(0x10)(BlueprintVisible, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C2F[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function HoudiniEngineRuntime.HoudiniToolData.ConvertToJSONData
struct UHoudiniToolData_ConvertToJSONData_Params
{
public:
	class FString                                JSONData;                                          // 0x0(0x10)(BlueprintVisible, Net, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C30[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


