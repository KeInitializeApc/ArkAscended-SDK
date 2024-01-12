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
	uint8                                        Pad_113F[0x2C8];                                   // Fixing Size Of Struct > TateDumper <

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
	void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);
	void ReserveNewEdges(int32 NumberOfNewEdges);
	bool IsVertexValid();
	bool IsVertexOrphaned();
	bool IsVertexInstanceValid();
	bool IsTriangleValid();
	bool IsTrianglePartOfNgon();
	bool IsPolygonValid();
	bool IsPolygonGroupValid();
	bool IsEmpty();
	bool IsEdgeValid();
	bool IsEdgeInternalToPolygon();
	bool IsEdgeInternal();
	struct FVertexID GetVertexVertexInstances(const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	struct FVector GetVertexPosition();
	struct FEdgeID GetVertexPairEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	struct FVertexID GetVertexInstanceVertex();
	struct FEdgeID GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1);
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex();
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex();
	int32 GetVertexInstanceCount();
	struct FVertexInstanceID GetVertexInstanceConnectedTriangles(const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	struct FVertexInstanceID GetVertexInstanceConnectedPolygons(const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	int32 GetVertexCount();
	struct FVertexID GetVertexConnectedTriangles(const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	struct FVertexID GetVertexConnectedPolygons(const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	struct FVertexID GetVertexConnectedEdges(const TArray<struct FEdgeID>& OutEdgeIDs);
	struct FVertexID GetVertexAdjacentVertices(const TArray<struct FVertexID>& OutAdjacentVertexIDs);
	struct FTriangleID GetTriangleVertices(const TArray<struct FVertexID>& OutVertexIDs);
	struct FTriangleID GetTriangleVertexInstances(const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	struct FVertexInstanceID GetTriangleVertexInstance();
	struct FPolygonGroupID GetTrianglePolygonGroup();
	struct FPolygonID GetTrianglePolygon();
	struct FTriangleID GetTriangleEdges(const TArray<struct FEdgeID>& OutEdgeIDs);
	int32 GetTriangleCount();
	struct FTriangleID GetTriangleAdjacentTriangles(const TArray<struct FTriangleID>& OutTriangleIDs);
	struct FPolygonID GetPolygonVertices(const TArray<struct FVertexID>& OutVertexIDs);
	struct FPolygonID GetPolygonVertexInstances(const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	struct FPolygonID GetPolygonTriangles(const TArray<struct FTriangleID>& OutTriangleIDs);
	struct FPolygonGroupID GetPolygonPolygonGroup();
	struct FPolygonID GetPolygonPerimeterEdges(const TArray<struct FEdgeID>& OutEdgeIDs);
	struct FPolygonID GetPolygonInternalEdges(const TArray<struct FEdgeID>& OutEdgeIDs);
	struct FPolygonGroupID GetPolygonGroupPolygons(const TArray<struct FPolygonID>& OutPolygonIDs);
	int32 GetPolygonGroupCount();
	int32 GetPolygonCount();
	struct FPolygonID GetPolygonAdjacentPolygons(const TArray<struct FPolygonID>& OutPolygonIDs);
	int32 GetNumVertexVertexInstances();
	int32 GetNumVertexInstanceConnectedTriangles();
	int32 GetNumVertexInstanceConnectedPolygons();
	int32 GetNumVertexConnectedTriangles();
	int32 GetNumVertexConnectedPolygons();
	int32 GetNumVertexConnectedEdges();
	int32 GetNumPolygonVertices();
	int32 GetNumPolygonTriangles();
	int32 GetNumPolygonInternalEdges();
	int32 GetNumPolygonGroupPolygons();
	int32 GetNumEdgeConnectedTriangles();
	int32 GetNumEdgeConnectedPolygons();
	struct FEdgeID GetEdgeVertices(const TArray<struct FVertexID>& OutVertexIDs);
	struct FVertexID GetEdgeVertex(int32 VertexNumber);
	int32 GetEdgeCount();
	struct FEdgeID GetEdgeConnectedTriangles(const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	struct FEdgeID GetEdgeConnectedPolygons(const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	void Empty();
	struct FVertexInstanceID DeleteVertexInstance(TArray<struct FVertexID>* OrphanedVertices);
	struct FVertexID DeleteVertex();
	struct FTriangleID DeleteTriangle(TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr);
	struct FPolygonGroupID DeletePolygonGroup();
	struct FPolygonID DeletePolygon(TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);
	struct FEdgeID DeleteEdge(TArray<struct FVertexID>* OrphanedVertices);
	struct FVertexID CreateVertexWithID();
	struct FVertexID CreateVertexInstanceWithID();
	struct FVertexInstanceID CreateVertexInstance();
	struct FVertexID CreateVertex();
	struct FPolygonGroupID CreateTriangleWithID(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FTriangleID CreateTriangle(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FPolygonGroupID CreatePolygonWithID(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FPolygonGroupID CreatePolygonGroupWithID();
	struct FPolygonGroupID CreatePolygonGroup();
	struct FPolygonID CreatePolygon(TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FEdgeID CreateEdgeWithID(struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	struct FEdgeID CreateEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1);
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


