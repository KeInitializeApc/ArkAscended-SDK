#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C8 (0x2F0 - 0x28)
// Class MeshDescription.MeshDescriptionBase
class UMeshDescriptionBase : public UObject
{
public:
	uint8                                        Pad_1F02[0x2C8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshDescriptionBase* GetDefaultObj();

	void SetVertexPosition(struct FVertexID* VertexID, struct FVector* Position);
	void SetPolygonVertexInstances(struct FPolygonID* PolygonID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs);
	void SetPolygonPolygonGroup(struct FPolygonID* PolygonID, struct FPolygonGroupID* PolygonGroupID);
	void ReversePolygonFacing(struct FPolygonID* PolygonID);
	void ReserveNewVertices(int32 NumberOfNewVertices);
	void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);
	void ReserveNewTriangles(int32 NumberOfNewTriangles);
	void ReserveNewPolygons(int32 NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);
	void ReserveNewEdges(int32 NumberOfNewEdges);
	void IsVertexValid(struct FVertexID* VertexID, bool ReturnValue);
	void IsVertexOrphaned(struct FVertexID* VertexID, bool ReturnValue);
	void IsVertexInstanceValid(struct FVertexInstanceID* VertexInstanceID, bool ReturnValue);
	void IsTriangleValid(struct FTriangleID* TriangleID, bool ReturnValue);
	void IsTrianglePartOfNgon(struct FTriangleID* TriangleID, bool ReturnValue);
	void IsPolygonValid(struct FPolygonID* PolygonID, bool ReturnValue);
	void IsPolygonGroupValid(struct FPolygonGroupID* PolygonGroupID, bool ReturnValue);
	void IsEmpty(bool ReturnValue);
	void IsEdgeValid(struct FEdgeID* EdgeID, bool ReturnValue);
	void IsEdgeInternalToPolygon(struct FEdgeID* EdgeID, struct FPolygonID* PolygonID, bool ReturnValue);
	void IsEdgeInternal(struct FEdgeID* EdgeID, bool ReturnValue);
	void GetVertexVertexInstances(struct FVertexID* VertexID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	void GetVertexPosition(struct FVertexID* VertexID, const struct FVector& ReturnValue);
	void GetVertexPairEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1, const struct FEdgeID& ReturnValue);
	void GetVertexInstanceVertex(struct FVertexInstanceID* VertexInstanceID, const struct FVertexID& ReturnValue);
	void GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1, const struct FEdgeID& ReturnValue);
	void GetVertexInstanceForTriangleVertex(struct FTriangleID* TriangleID, struct FVertexID* VertexID, const struct FVertexInstanceID& ReturnValue);
	void GetVertexInstanceForPolygonVertex(struct FPolygonID* PolygonID, struct FVertexID* VertexID, const struct FVertexInstanceID& ReturnValue);
	void GetVertexInstanceCount(int32 ReturnValue);
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID* VertexInstanceID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	void GetVertexCount(int32 ReturnValue);
	void GetVertexConnectedTriangles(struct FVertexID* VertexID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(struct FVertexID* VertexID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(struct FVertexID* VertexID, const TArray<struct FEdgeID>& OutEdgeIDs);
	void GetVertexAdjacentVertices(struct FVertexID* VertexID, const TArray<struct FVertexID>& OutAdjacentVertexIDs);
	void GetTriangleVertices(struct FTriangleID* TriangleID, const TArray<struct FVertexID>& OutVertexIDs);
	void GetTriangleVertexInstances(struct FTriangleID* TriangleID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	void GetTriangleVertexInstance(struct FTriangleID* TriangleID, int32* Index, const struct FVertexInstanceID& ReturnValue);
	void GetTrianglePolygonGroup(struct FTriangleID* TriangleID, const struct FPolygonGroupID& ReturnValue);
	void GetTrianglePolygon(struct FTriangleID* TriangleID, const struct FPolygonID& ReturnValue);
	void GetTriangleEdges(struct FTriangleID* TriangleID, const TArray<struct FEdgeID>& OutEdgeIDs);
	void GetTriangleCount(int32 ReturnValue);
	void GetTriangleAdjacentTriangles(struct FTriangleID* TriangleID, const TArray<struct FTriangleID>& OutTriangleIDs);
	void GetPolygonVertices(struct FPolygonID* PolygonID, const TArray<struct FVertexID>& OutVertexIDs);
	void GetPolygonVertexInstances(struct FPolygonID* PolygonID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	void GetPolygonTriangles(struct FPolygonID* PolygonID, const TArray<struct FTriangleID>& OutTriangleIDs);
	void GetPolygonPolygonGroup(struct FPolygonID* PolygonID, const struct FPolygonGroupID& ReturnValue);
	void GetPolygonPerimeterEdges(struct FPolygonID* PolygonID, const TArray<struct FEdgeID>& OutEdgeIDs);
	void GetPolygonInternalEdges(struct FPolygonID* PolygonID, const TArray<struct FEdgeID>& OutEdgeIDs);
	void GetPolygonGroupPolygons(struct FPolygonGroupID* PolygonGroupID, const TArray<struct FPolygonID>& OutPolygonIDs);
	void GetPolygonGroupCount(int32 ReturnValue);
	void GetPolygonCount(int32 ReturnValue);
	void GetPolygonAdjacentPolygons(struct FPolygonID* PolygonID, const TArray<struct FPolygonID>& OutPolygonIDs);
	void GetNumVertexVertexInstances(struct FVertexID* VertexID, int32 ReturnValue);
	void GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID* VertexInstanceID, int32 ReturnValue);
	void GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID, int32 ReturnValue);
	void GetNumVertexConnectedTriangles(struct FVertexID* VertexID, int32 ReturnValue);
	void GetNumVertexConnectedPolygons(struct FVertexID* VertexID, int32 ReturnValue);
	void GetNumVertexConnectedEdges(struct FVertexID* VertexID, int32 ReturnValue);
	void GetNumPolygonVertices(struct FPolygonID* PolygonID, int32 ReturnValue);
	void GetNumPolygonTriangles(struct FPolygonID* PolygonID, int32 ReturnValue);
	void GetNumPolygonInternalEdges(struct FPolygonID* PolygonID, int32 ReturnValue);
	void GetNumPolygonGroupPolygons(struct FPolygonGroupID* PolygonGroupID, int32 ReturnValue);
	void GetNumEdgeConnectedTriangles(struct FEdgeID* EdgeID, int32 ReturnValue);
	void GetNumEdgeConnectedPolygons(struct FEdgeID* EdgeID, int32 ReturnValue);
	void GetEdgeVertices(struct FEdgeID* EdgeID, const TArray<struct FVertexID>& OutVertexIDs);
	void GetEdgeVertex(struct FEdgeID* EdgeID, int32 VertexNumber, const struct FVertexID& ReturnValue);
	void GetEdgeCount(int32 ReturnValue);
	void GetEdgeConnectedTriangles(struct FEdgeID* EdgeID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(struct FEdgeID* EdgeID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(struct FVertexInstanceID* VertexInstanceID, const TArray<struct FVertexID>& OrphanedVertices);
	void DeleteVertex(struct FVertexID* VertexID);
	void DeleteTriangle(struct FTriangleID* TriangleID, const TArray<struct FEdgeID>& OrphanedEdges, const TArray<struct FVertexInstanceID>& OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(struct FPolygonGroupID* PolygonGroupID);
	void DeletePolygon(struct FPolygonID* PolygonID, const TArray<struct FEdgeID>& OrphanedEdges, const TArray<struct FVertexInstanceID>& OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroups);
	void DeleteEdge(struct FEdgeID* EdgeID, const TArray<struct FVertexID>& OrphanedVertices);
	void CreateVertexWithID(struct FVertexID* VertexID);
	void CreateVertexInstanceWithID(struct FVertexInstanceID* VertexInstanceID, struct FVertexID* VertexID);
	void CreateVertexInstance(struct FVertexID* VertexID, const struct FVertexInstanceID& ReturnValue);
	void CreateVertex(const struct FVertexID& ReturnValue);
	void CreateTriangleWithID(struct FTriangleID* TriangleID, struct FPolygonGroupID* PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs);
	void CreateTriangle(struct FPolygonGroupID* PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs, const struct FTriangleID& ReturnValue);
	void CreatePolygonWithID(struct FPolygonID* PolygonID, struct FPolygonGroupID* PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs);
	void CreatePolygonGroupWithID(struct FPolygonGroupID* PolygonGroupID);
	void CreatePolygonGroup(const struct FPolygonGroupID& ReturnValue);
	void CreatePolygon(struct FPolygonGroupID* PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs, const struct FPolygonID& ReturnValue);
	void CreateEdgeWithID(struct FEdgeID* EdgeID, struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	void CreateEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1, const struct FEdgeID& ReturnValue);
	void ComputePolygonTriangulation(struct FPolygonID* PolygonID);
};

// 0x0 (0x28 - 0x28)
// Class MeshDescription.MeshDescriptionBaseBulkData
class UMeshDescriptionBaseBulkData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMeshDescriptionBaseBulkData* GetDefaultObj();

};

}


