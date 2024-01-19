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
	uint8                                        Pad_10D1[0x2C8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshDescriptionBase* GetDefaultObj();

	struct FVertexID SetVertexPosition(const struct FVector& Position);
	struct FPolygonID SetPolygonVertexInstances(TArray<struct FVertexInstanceID>* VertexInstanceIDs);
	struct FPolygonGroupID SetPolygonPolygonGroup();
	struct FPolygonID ReversePolygonFacing();
	void ReserveNewVertices(int32 NumberOfNewVertices);
	void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);
	void ReserveNewTriangles(int32 NumberOfNewTriangles);
	void ReserveNewPolygons(int32 NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int32* NumberOfNewPolygonGroups);
	void ReserveNewEdges(int32* NumberOfNewEdges);
	struct FVertexID IsVertexValid(bool ReturnValue);
	struct FVertexID IsVertexOrphaned(bool ReturnValue);
	struct FVertexInstanceID IsVertexInstanceValid(bool ReturnValue);
	struct FTriangleID IsTriangleValid(bool ReturnValue);
	struct FTriangleID IsTrianglePartOfNgon(bool ReturnValue);
	struct FPolygonID IsPolygonValid(bool ReturnValue);
	struct FPolygonGroupID IsPolygonGroupValid(bool ReturnValue);
	void IsEmpty(bool ReturnValue);
	struct FEdgeID IsEdgeValid(bool ReturnValue);
	struct FPolygonID IsEdgeInternalToPolygon(bool ReturnValue);
	struct FEdgeID IsEdgeInternal(bool ReturnValue);
	struct FVertexID GetVertexVertexInstances(TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	struct FVertexID GetVertexPosition(const struct FVector& ReturnValue);
	void GetVertexPairEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1, const struct FEdgeID& ReturnValue);
	struct FVertexInstanceID GetVertexInstanceVertex(const struct FVertexID& ReturnValue);
	void GetVertexInstancePairEdge(struct FVertexInstanceID* VertexInstanceID0, struct FVertexInstanceID* VertexInstanceID1, const struct FEdgeID& ReturnValue);
	struct FVertexID GetVertexInstanceForTriangleVertex(const struct FVertexInstanceID& ReturnValue);
	struct FVertexID GetVertexInstanceForPolygonVertex(const struct FVertexInstanceID& ReturnValue);
	void GetVertexInstanceCount(int32 ReturnValue);
	struct FVertexInstanceID GetVertexInstanceConnectedTriangles(TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	struct FVertexInstanceID GetVertexInstanceConnectedPolygons(TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void GetVertexCount(int32 ReturnValue);
	struct FVertexID GetVertexConnectedTriangles(TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	struct FVertexID GetVertexConnectedPolygons(TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	struct FVertexID GetVertexConnectedEdges(TArray<struct FEdgeID>* OutEdgeIDs);
	struct FVertexID GetVertexAdjacentVertices(TArray<struct FVertexID>* OutAdjacentVertexIDs);
	struct FTriangleID GetTriangleVertices(TArray<struct FVertexID>* OutVertexIDs);
	struct FTriangleID GetTriangleVertexInstances(TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	int32 GetTriangleVertexInstance(const struct FVertexInstanceID& ReturnValue);
	struct FTriangleID GetTrianglePolygonGroup(const struct FPolygonGroupID& ReturnValue);
	struct FTriangleID GetTrianglePolygon(const struct FPolygonID& ReturnValue);
	struct FTriangleID GetTriangleEdges(TArray<struct FEdgeID>* OutEdgeIDs);
	void GetTriangleCount(int32 ReturnValue);
	struct FTriangleID GetTriangleAdjacentTriangles(TArray<struct FTriangleID>* OutTriangleIDs);
	struct FPolygonID GetPolygonVertices(TArray<struct FVertexID>* OutVertexIDs);
	struct FPolygonID GetPolygonVertexInstances(TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	struct FPolygonID GetPolygonTriangles(TArray<struct FTriangleID>* OutTriangleIDs);
	struct FPolygonID GetPolygonPolygonGroup(const struct FPolygonGroupID& ReturnValue);
	struct FPolygonID GetPolygonPerimeterEdges(TArray<struct FEdgeID>* OutEdgeIDs);
	struct FPolygonID GetPolygonInternalEdges(TArray<struct FEdgeID>* OutEdgeIDs);
	struct FPolygonGroupID GetPolygonGroupPolygons(TArray<struct FPolygonID>* OutPolygonIDs);
	void GetPolygonGroupCount(int32 ReturnValue);
	void GetPolygonCount(int32 ReturnValue);
	struct FPolygonID GetPolygonAdjacentPolygons(TArray<struct FPolygonID>* OutPolygonIDs);
	struct FVertexID GetNumVertexVertexInstances(int32 ReturnValue);
	struct FVertexInstanceID GetNumVertexInstanceConnectedTriangles(int32 ReturnValue);
	struct FVertexInstanceID GetNumVertexInstanceConnectedPolygons(int32 ReturnValue);
	struct FVertexID GetNumVertexConnectedTriangles(int32 ReturnValue);
	struct FVertexID GetNumVertexConnectedPolygons(int32 ReturnValue);
	struct FVertexID GetNumVertexConnectedEdges(int32 ReturnValue);
	struct FPolygonID GetNumPolygonVertices(int32 ReturnValue);
	struct FPolygonID GetNumPolygonTriangles(int32 ReturnValue);
	struct FPolygonID GetNumPolygonInternalEdges(int32 ReturnValue);
	struct FPolygonGroupID GetNumPolygonGroupPolygons(int32 ReturnValue);
	struct FEdgeID GetNumEdgeConnectedTriangles(int32 ReturnValue);
	struct FEdgeID GetNumEdgeConnectedPolygons(int32 ReturnValue);
	struct FEdgeID GetEdgeVertices(TArray<struct FVertexID>* OutVertexIDs);
	struct FEdgeID GetEdgeVertex(int32* VertexNumber, const struct FVertexID& ReturnValue);
	void GetEdgeCount(int32 ReturnValue);
	struct FEdgeID GetEdgeConnectedTriangles(TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	struct FEdgeID GetEdgeConnectedPolygons(TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void Empty();
	struct FVertexInstanceID DeleteVertexInstance(TArray<struct FVertexID>* OrphanedVertices);
	struct FVertexID DeleteVertex();
	struct FTriangleID DeleteTriangle(TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr);
	struct FPolygonGroupID DeletePolygonGroup();
	struct FPolygonID DeletePolygon(TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);
	struct FEdgeID DeleteEdge(TArray<struct FVertexID>* OrphanedVertices);
	struct FVertexID CreateVertexWithID();
	struct FVertexID CreateVertexInstanceWithID();
	struct FVertexID CreateVertexInstance(const struct FVertexInstanceID& ReturnValue);
	void CreateVertex(const struct FVertexID& ReturnValue);
	struct FPolygonGroupID CreateTriangleWithID(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FPolygonGroupID CreateTriangle(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs, const struct FTriangleID& ReturnValue);
	struct FPolygonGroupID CreatePolygonWithID(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FPolygonGroupID CreatePolygonGroupWithID();
	void CreatePolygonGroup(const struct FPolygonGroupID& ReturnValue);
	struct FPolygonGroupID CreatePolygon(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs, const struct FPolygonID& ReturnValue);
	struct FEdgeID CreateEdgeWithID(struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	void CreateEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1, const struct FEdgeID& ReturnValue);
	struct FPolygonID ComputePolygonTriangulation();
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


