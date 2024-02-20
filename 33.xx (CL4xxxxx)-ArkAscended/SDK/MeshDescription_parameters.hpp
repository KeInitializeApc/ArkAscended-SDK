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
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1D44[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
struct UMeshDescriptionBase_SetPolygonVertexInstances_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1D47[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
struct UMeshDescriptionBase_SetPolygonPolygonGroup_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x4(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
struct UMeshDescriptionBase_ReversePolygonFacing_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
struct UMeshDescriptionBase_ReserveNewVertices_Params
{
public:
	int32                                        NumberOfNewVertices;                               // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
struct UMeshDescriptionBase_ReserveNewVertexInstances_Params
{
public:
	int32                                        NumberOfNewVertexInstances;                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
struct UMeshDescriptionBase_ReserveNewTriangles_Params
{
public:
	int32                                        NumberOfNewTriangles;                              // 0x0(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
struct UMeshDescriptionBase_ReserveNewPolygons_Params
{
public:
	int32                                        NumberOfNewPolygons;                               // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
struct UMeshDescriptionBase_ReserveNewPolygonGroups_Params
{
public:
	int32                                        NumberOfNewPolygonGroups;                          // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
struct UMeshDescriptionBase_ReserveNewEdges_Params
{
public:
	int32                                        NumberOfNewEdges;                                  // 0x0(0x4)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsVertexValid
struct UMeshDescriptionBase_IsVertexValid_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D62[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
struct UMeshDescriptionBase_IsVertexOrphaned_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D65[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
struct UMeshDescriptionBase_IsVertexInstanceValid_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D67[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
struct UMeshDescriptionBase_IsTriangleValid_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D6C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
struct UMeshDescriptionBase_IsTrianglePartOfNgon_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D70[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
struct UMeshDescriptionBase_IsPolygonValid_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D76[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
struct UMeshDescriptionBase_IsPolygonGroupValid_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D7A[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsEmpty
struct UMeshDescriptionBase_IsEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
struct UMeshDescriptionBase_IsEdgeValid_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D81[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
struct UMeshDescriptionBase_IsEdgeInternalToPolygon_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonID                            PolygonID;                                         // 0x4(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D8A[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
struct UMeshDescriptionBase_IsEdgeInternal_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1D8F[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
struct UMeshDescriptionBase_GetVertexVertexInstances_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1D94[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             OutVertexInstanceIDs;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
struct UMeshDescriptionBase_GetVertexPosition_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1D99[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
struct UMeshDescriptionBase_GetVertexPairEdge_Params
{
public:
	struct FVertexID                             VertexID0;                                         // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVertexID                             VertexID1;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FEdgeID                               ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
struct UMeshDescriptionBase_GetVertexInstanceVertex_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
struct UMeshDescriptionBase_GetVertexInstancePairEdge_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID0;                                 // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVertexInstanceID                     VertexInstanceID1;                                 // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FEdgeID                               ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
struct UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             VertexID;                                          // 0x4(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
struct UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             VertexID;                                          // 0x4(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
struct UMeshDescriptionBase_GetVertexInstanceCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
struct UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DC3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutConnectedTriangleIDs;                           // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
struct UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DCA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexCount
struct UMeshDescriptionBase_GetVertexCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
struct UMeshDescriptionBase_GetVertexConnectedTriangles_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DDD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutConnectedTriangleIDs;                           // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
struct UMeshDescriptionBase_GetVertexConnectedPolygons_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DEA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
struct UMeshDescriptionBase_GetVertexConnectedEdges_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DF1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OutEdgeIDs;                                        // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
struct UMeshDescriptionBase_GetVertexAdjacentVertices_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1DFC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OutAdjacentVertexIDs;                              // 0x8(0x10)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
struct UMeshDescriptionBase_GetTriangleVertices_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E00[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OutVertexIDs;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
struct UMeshDescriptionBase_GetTriangleVertexInstances_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E08[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             OutVertexInstanceIDs;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
struct UMeshDescriptionBase_GetTriangleVertexInstance_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        Index;                                             // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
struct UMeshDescriptionBase_GetTrianglePolygonGroup_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
struct UMeshDescriptionBase_GetTrianglePolygon_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonID                            ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
struct UMeshDescriptionBase_GetTriangleEdges_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E12[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OutEdgeIDs;                                        // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleCount
struct UMeshDescriptionBase_GetTriangleCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
struct UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E15[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutTriangleIDs;                                    // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
struct UMeshDescriptionBase_GetPolygonVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E19[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OutVertexIDs;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
struct UMeshDescriptionBase_GetPolygonVertexInstances_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E1E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             OutVertexInstanceIDs;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
struct UMeshDescriptionBase_GetPolygonTriangles_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E20[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutTriangleIDs;                                    // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
struct UMeshDescriptionBase_GetPolygonPolygonGroup_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
struct UMeshDescriptionBase_GetPolygonPerimeterEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E27[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OutEdgeIDs;                                        // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
struct UMeshDescriptionBase_GetPolygonInternalEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E2D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OutEdgeIDs;                                        // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
struct UMeshDescriptionBase_GetPolygonGroupPolygons_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E32[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutPolygonIDs;                                     // 0x8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
struct UMeshDescriptionBase_GetPolygonGroupCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonCount
struct UMeshDescriptionBase_GetPolygonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
struct UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E3C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutPolygonIDs;                                     // 0x8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
struct UMeshDescriptionBase_GetNumVertexVertexInstances_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
struct UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
struct UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
struct UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
struct UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
struct UMeshDescriptionBase_GetNumVertexConnectedEdges_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
struct UMeshDescriptionBase_GetNumPolygonVertices_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
struct UMeshDescriptionBase_GetNumPolygonTriangles_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
struct UMeshDescriptionBase_GetNumPolygonInternalEdges_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
struct UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
struct UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
struct UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
struct UMeshDescriptionBase_GetEdgeVertices_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E6F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OutVertexIDs;                                      // 0x8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
struct UMeshDescriptionBase_GetEdgeVertex_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        VertexNumber;                                      // 0x4(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVertexID                             ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeCount
struct UMeshDescriptionBase_GetEdgeCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
struct UMeshDescriptionBase_GetEdgeConnectedTriangles_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E7C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTriangleID>                   OutConnectedTriangleIDs;                           // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
struct UMeshDescriptionBase_GetEdgeConnectedPolygons_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E82[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPolygonID>                    OutConnectedPolygonIDs;                            // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
struct UMeshDescriptionBase_DeleteVertexInstance_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E8C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OrphanedVertices;                                  // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeleteVertex
struct UMeshDescriptionBase_DeleteVertex_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
struct UMeshDescriptionBase_DeleteTriangle_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1E9C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OrphanedEdges;                                     // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FVertexInstanceID>             OrphanedVertexInstances;                           // 0x18(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPolygonGroupID>               OrphanedPolygonGroupsPtr;                          // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
struct UMeshDescriptionBase_DeletePolygonGroup_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x38 (0x38 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeletePolygon
struct UMeshDescriptionBase_DeletePolygon_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1EAA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FEdgeID>                       OrphanedEdges;                                     // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FVertexInstanceID>             OrphanedVertexInstances;                           // 0x18(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FPolygonGroupID>               OrphanedPolygonGroups;                             // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function MeshDescription.MeshDescriptionBase.DeleteEdge
struct UMeshDescriptionBase_DeleteEdge_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1EAF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexID>                     OrphanedVertices;                                  // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
struct UMeshDescriptionBase_CreateVertexWithID_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
struct UMeshDescriptionBase_CreateVertexInstanceWithID_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             VertexID;                                          // 0x4(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
struct UMeshDescriptionBase_CreateVertexInstance_Params
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexInstanceID                     ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateVertex
struct UMeshDescriptionBase_CreateVertex_Params
{
public:
	struct FVertexID                             ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
struct UMeshDescriptionBase_CreateTriangleWithID_Params
{
public:
	struct FTriangleID                           TriangleID;                                        // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x4(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FEdgeID>                       NewEdgeIDs;                                        // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateTriangle
struct UMeshDescriptionBase_CreateTriangle_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1EDB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FEdgeID>                       NewEdgeIDs;                                        // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTriangleID                           ReturnValue;                                       // 0x28(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1EDE[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
struct UMeshDescriptionBase_CreatePolygonWithID_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x4(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FEdgeID>                       NewEdgeIDs;                                        // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
struct UMeshDescriptionBase_CreatePolygonGroupWithID_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
struct UMeshDescriptionBase_CreatePolygonGroup_Params
{
public:
	struct FPolygonGroupID                       ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreatePolygon
struct UMeshDescriptionBase_CreatePolygon_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_1EED[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x8(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FEdgeID>                       NewEdgeIDs;                                        // 0x18(0x10)(Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FPolygonID                            ReturnValue;                                       // 0x28(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1EEE[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
struct UMeshDescriptionBase_CreateEdgeWithID_Params
{
public:
	struct FEdgeID                               EdgeID;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVertexID                             VertexID0;                                         // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVertexID                             VertexID1;                                         // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function MeshDescription.MeshDescriptionBase.CreateEdge
struct UMeshDescriptionBase_CreateEdge_Params
{
public:
	struct FVertexID                             VertexID0;                                         // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVertexID                             VertexID1;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FEdgeID                               ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
struct UMeshDescriptionBase_ComputePolygonTriangulation_Params
{
public:
	struct FPolygonID                            PolygonID;                                         // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

}
}


