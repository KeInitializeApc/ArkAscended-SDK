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
	uint8                                        Pad_24EB[0x2C8];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshDescriptionBase* GetDefaultObj();

	struct FVector SetVertexPosition();
	struct FPolygonID SetPolygonVertexInstances(TArray<struct FVertexInstanceID>* VertexInstanceIDs);
	struct FPolygonGroupID SetPolygonPolygonGroup();
	struct FPolygonID ReversePolygonFacing();
	int32 ReserveNewVertices();
	int32 ReserveNewVertexInstances();
	int32 ReserveNewTriangles();
	int32 ReserveNewPolygons();
	int32 ReserveNewPolygonGroups();
	int32 ReserveNewEdges();
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
	TArray<struct FVertexInstanceID> GetVertexVertexInstances();
	struct FVector GetVertexPosition();
	struct FEdgeID GetVertexPairEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	struct FVertexID GetVertexInstanceVertex();
	struct FEdgeID GetVertexInstancePairEdge();
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex();
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex();
	int32 GetVertexInstanceCount();
	TArray<struct FTriangleID> GetVertexInstanceConnectedTriangles();
	TArray<struct FPolygonID> GetVertexInstanceConnectedPolygons();
	int32 GetVertexCount();
	TArray<struct FTriangleID> GetVertexConnectedTriangles();
	TArray<struct FPolygonID> GetVertexConnectedPolygons();
	TArray<struct FEdgeID> GetVertexConnectedEdges();
	TArray<struct FVertexID> GetVertexAdjacentVertices();
	TArray<struct FVertexID> GetTriangleVertices();
	TArray<struct FVertexInstanceID> GetTriangleVertexInstances();
	struct FVertexInstanceID GetTriangleVertexInstance();
	struct FPolygonGroupID GetTrianglePolygonGroup();
	struct FPolygonID GetTrianglePolygon();
	TArray<struct FEdgeID> GetTriangleEdges();
	int32 GetTriangleCount();
	TArray<struct FTriangleID> GetTriangleAdjacentTriangles();
	TArray<struct FVertexID> GetPolygonVertices();
	TArray<struct FVertexInstanceID> GetPolygonVertexInstances();
	TArray<struct FTriangleID> GetPolygonTriangles();
	struct FPolygonGroupID GetPolygonPolygonGroup();
	TArray<struct FEdgeID> GetPolygonPerimeterEdges();
	TArray<struct FEdgeID> GetPolygonInternalEdges();
	TArray<struct FPolygonID> GetPolygonGroupPolygons();
	int32 GetPolygonGroupCount();
	int32 GetPolygonCount();
	TArray<struct FPolygonID> GetPolygonAdjacentPolygons();
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
	TArray<struct FVertexID> GetEdgeVertices();
	struct FVertexID GetEdgeVertex();
	int32 GetEdgeCount();
	TArray<struct FTriangleID> GetEdgeConnectedTriangles();
	TArray<struct FPolygonID> GetEdgeConnectedPolygons();
	void Empty();
	struct FVertexInstanceID DeleteVertexInstance(TArray<struct FVertexID>* OrphanedVertices);
	struct FVertexID DeleteVertex();
	TArray<struct FPolygonGroupID> DeleteTriangle();
	struct FPolygonGroupID DeletePolygonGroup();
	TArray<struct FVertexInstanceID> DeletePolygon(TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);
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


