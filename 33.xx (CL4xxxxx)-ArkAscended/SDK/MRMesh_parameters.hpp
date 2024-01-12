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
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_2995[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	TArray<struct FVector>                       Normals;                                           // 0x28(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                Confidence;                                        // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
struct UMockDataMeshTrackerComponent_DisconnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
struct UMockDataMeshTrackerComponent_ConnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MRMeshComponent.SetWireframeMaterial
struct UMRMeshComponent_SetWireframeMaterial_Params
{
public:
	class UMaterialInterface*                    InMaterial;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MRMesh.MRMeshComponent.SetWireframeColor
struct UMRMeshComponent_SetWireframeColor_Params
{
public:
	struct FLinearColor                          InColor;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.SetUseWireframe
struct UMRMeshComponent_SetUseWireframe_Params
{
public:
	bool                                         bUseWireframe;                                     // 0x0(0x1)(Edit, BlueprintReadOnly, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
struct UMRMeshComponent_SetEnableMeshOcclusion_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.IsConnected
struct UMRMeshComponent_IsConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MRMesh.MRMeshComponent.GetWireframeColor
struct UMRMeshComponent_GetWireframeColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.GetUseWireframe
struct UMRMeshComponent_GetUseWireframe_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
struct UMRMeshComponent_GetEnableMeshOcclusion_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct UMeshReconstructorBase_IsReconstructionStarted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct UMeshReconstructorBase_IsReconstructionPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct UMeshReconstructorBase_ConnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      Mesh;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


