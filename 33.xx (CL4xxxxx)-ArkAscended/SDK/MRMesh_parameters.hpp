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

// 0x48 (0x48 - 0x0)
// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
struct UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_1CDC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x28(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<float>                                Confidence;                                        // 0x38(0x10)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
struct UMockDataMeshTrackerComponent_DisconnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
struct UMockDataMeshTrackerComponent_ConnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MRMeshComponent.SetWireframeMaterial
struct UMRMeshComponent_SetWireframeMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MRMesh.MRMeshComponent.SetWireframeColor
struct UMRMeshComponent_SetWireframeColor_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.SetUseWireframe
struct UMRMeshComponent_SetUseWireframe_Params
{
public:
	bool                                         bUseWireframe;                                     // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
struct UMRMeshComponent_SetEnableMeshOcclusion_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.IsConnected
struct UMRMeshComponent_IsConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MRMesh.MRMeshComponent.GetWireframeColor
struct UMRMeshComponent_GetWireframeColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.GetUseWireframe
struct UMRMeshComponent_GetUseWireframe_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
struct UMRMeshComponent_GetEnableMeshOcclusion_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct UMeshReconstructorBase_IsReconstructionStarted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct UMeshReconstructorBase_IsReconstructionPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct UMeshReconstructorBase_ConnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      Mesh;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
};

}
}


