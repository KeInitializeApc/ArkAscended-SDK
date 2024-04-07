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

// 0x20 (0x20 - 0x0)
// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
struct UMeshDescriptionBase_SetVertexPosition_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2349[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
struct UMeshDescriptionBase_SetPolygonVertexInstances_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_234E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
struct UMeshDescriptionBase_SetPolygonPolygonGroup_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
struct UMeshDescriptionBase_ReversePolygonFacing_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
struct UMeshDescriptionBase_ReserveNewVertices_Params
{
public:
	int32                                        NumberOfNewVertices;                               // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
struct UMeshDescriptionBase_ReserveNewVertexInstances_Params
{
public:
	int32                                        NumberOfNewVertexInstances;                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
struct UMeshDescriptionBase_ReserveNewTriangles_Params
{
public:
	int32                                        NumberOfNewTriangles;                              // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
struct UMeshDescriptionBase_ReserveNewPolygons_Params
{
public:
	int32                                        NumberOfNewPolygons;                               // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
struct UMeshDescriptionBase_ReserveNewPolygonGroups_Params
{
public:
	int32                                        NumberOfNewPolygonGroups;                          // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
struct UMeshDescriptionBase_ReserveNewEdges_Params
{
public:
	int32                                        NumberOfNewEdges;                                  // 0x0(0x4)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsVertexValid
struct UMeshDescriptionBase_IsVertexValid_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2362[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
struct UMeshDescriptionBase_IsVertexOrphaned_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2367[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
struct UMeshDescriptionBase_IsVertexInstanceValid_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_236E[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
struct UMeshDescriptionBase_IsTriangleValid_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2372[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
struct UMeshDescriptionBase_IsTrianglePartOfNgon_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2377[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
struct UMeshDescriptionBase_IsPolygonValid_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_237A[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
struct UMeshDescriptionBase_IsPolygonGroupValid_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2382[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsEmpty
struct UMeshDescriptionBase_IsEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
struct UMeshDescriptionBase_IsEdgeValid_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2387[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
struct UMeshDescriptionBase_IsEdgeInternalToPolygon_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonID                            PolygonID;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2390[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
struct UMeshDescriptionBase_IsEdgeInternal_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2397[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
struct UMeshDescriptionBase_GetVertexVertexInstances_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_239B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             OutVertexInstanceIDs;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
struct UMeshDescriptionBase_GetVertexPosition_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23A1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
struct UMeshDescriptionBase_GetVertexPairEdge_Params
{
public:
	struct FVertexID                             VertexID0;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVertexID                             VertexID1;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEdgeID                               ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
struct UMeshDescriptionBase_GetVertexInstanceVertex_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
struct UMeshDescriptionBase_GetVertexInstancePairEdge_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID0;                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVertexInstanceID                     VertexInstanceID1;                                 // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEdgeID                               ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
struct UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             VertexID;                                          // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
struct UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             VertexID;                                          // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
struct UMeshDescriptionBase_GetVertexInstanceCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
struct UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23BE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutConnectedTriangleIDs;                           // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
struct UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23C7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexCount
struct UMeshDescriptionBase_GetVertexCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
struct UMeshDescriptionBase_GetVertexConnectedTriangles_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23CE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutConnectedTriangleIDs;                           // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
struct UMeshDescriptionBase_GetVertexConnectedPolygons_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23D0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
struct UMeshDescriptionBase_GetVertexConnectedEdges_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23D7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OutEdgeIDs;                                        // 0x8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
struct UMeshDescriptionBase_GetVertexAdjacentVertices_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23E0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OutAdjacentVertexIDs;                              // 0x8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
struct UMeshDescriptionBase_GetTriangleVertices_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OutVertexIDs;                                      // 0x8(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
struct UMeshDescriptionBase_GetTriangleVertexInstances_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23E6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             OutVertexInstanceIDs;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
struct UMeshDescriptionBase_GetTriangleVertexInstance_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        Index;                                             // 0x4(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
struct UMeshDescriptionBase_GetTrianglePolygonGroup_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
struct UMeshDescriptionBase_GetTrianglePolygon_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonID                            ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
struct UMeshDescriptionBase_GetTriangleEdges_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23F3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OutEdgeIDs;                                        // 0x8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleCount
struct UMeshDescriptionBase_GetTriangleCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
struct UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_23FD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutTriangleIDs;                                    // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
struct UMeshDescriptionBase_GetPolygonVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2405[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OutVertexIDs;                                      // 0x8(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
struct UMeshDescriptionBase_GetPolygonVertexInstances_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2409[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             OutVertexInstanceIDs;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
struct UMeshDescriptionBase_GetPolygonTriangles_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_240F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutTriangleIDs;                                    // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
struct UMeshDescriptionBase_GetPolygonPolygonGroup_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
struct UMeshDescriptionBase_GetPolygonPerimeterEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_241D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OutEdgeIDs;                                        // 0x8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
struct UMeshDescriptionBase_GetPolygonInternalEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2426[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OutEdgeIDs;                                        // 0x8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
struct UMeshDescriptionBase_GetPolygonGroupPolygons_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_242E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutPolygonIDs;                                     // 0x8(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
struct UMeshDescriptionBase_GetPolygonGroupCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonCount
struct UMeshDescriptionBase_GetPolygonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
struct UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2437[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutPolygonIDs;                                     // 0x8(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
struct UMeshDescriptionBase_GetNumVertexVertexInstances_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
struct UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
struct UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
struct UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
struct UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
struct UMeshDescriptionBase_GetNumVertexConnectedEdges_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
struct UMeshDescriptionBase_GetNumPolygonVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
struct UMeshDescriptionBase_GetNumPolygonTriangles_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
struct UMeshDescriptionBase_GetNumPolygonInternalEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
struct UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
struct UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
struct UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
struct UMeshDescriptionBase_GetEdgeVertices_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2464[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OutVertexIDs;                                      // 0x8(0x10)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
struct UMeshDescriptionBase_GetEdgeVertex_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        VertexNumber;                                      // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVertexID                             ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeCount
struct UMeshDescriptionBase_GetEdgeCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
struct UMeshDescriptionBase_GetEdgeConnectedTriangles_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_246F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutConnectedTriangleIDs;                           // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
struct UMeshDescriptionBase_GetEdgeConnectedPolygons_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2476[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
struct UMeshDescriptionBase_DeleteVertexInstance_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_247B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OrphanedVertices;                                  // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeleteVertex
struct UMeshDescriptionBase_DeleteVertex_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
struct UMeshDescriptionBase_DeleteTriangle_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2486[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OrphanedEdges;                                     // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FVertexInstanceID>             OrphanedVertexInstances;                           // 0x18(0x10)(ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FPolygonGroupID>               OrphanedPolygonGroupsPtr;                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
struct UMeshDescriptionBase_DeletePolygonGroup_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeletePolygon
struct UMeshDescriptionBase_DeletePolygon_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_2494[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OrphanedEdges;                                     // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FVertexInstanceID>             OrphanedVertexInstances;                           // 0x18(0x10)(ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FPolygonGroupID>               OrphanedPolygonGroups;                             // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeleteEdge
struct UMeshDescriptionBase_DeleteEdge_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_249D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OrphanedVertices;                                  // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
struct UMeshDescriptionBase_CreateVertexWithID_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
struct UMeshDescriptionBase_CreateVertexInstanceWithID_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             VertexID;                                          // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
struct UMeshDescriptionBase_CreateVertexInstance_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateVertex
struct UMeshDescriptionBase_CreateVertex_Params
{
public:
	struct FVertexID                             ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
struct UMeshDescriptionBase_CreateTriangleWithID_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FEdgeID>                       NewEdgeIDs;                                        // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateTriangle
struct UMeshDescriptionBase_CreateTriangle_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_24C1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FEdgeID>                       NewEdgeIDs;                                        // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTriangleID                           ReturnValue;                                       // 0x28(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24C2[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
struct UMeshDescriptionBase_CreatePolygonWithID_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FEdgeID>                       NewEdgeIDs;                                        // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
struct UMeshDescriptionBase_CreatePolygonGroupWithID_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
struct UMeshDescriptionBase_CreatePolygonGroup_Params
{
public:
	struct FPolygonGroupID                       ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreatePolygon
struct UMeshDescriptionBase_CreatePolygon_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_24D0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FEdgeID>                       NewEdgeIDs;                                        // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FPolygonID                            ReturnValue;                                       // 0x28(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_24D2[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
struct UMeshDescriptionBase_CreateEdgeWithID_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             VertexID0;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVertexID                             VertexID1;                                         // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateEdge
struct UMeshDescriptionBase_CreateEdge_Params
{
public:
	struct FVertexID                             VertexID0;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVertexID                             VertexID1;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FEdgeID                               ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
struct UMeshDescriptionBase_ComputePolygonTriangulation_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

}
}

