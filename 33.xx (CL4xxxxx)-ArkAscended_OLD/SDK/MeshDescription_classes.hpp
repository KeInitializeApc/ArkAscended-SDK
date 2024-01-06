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
	uint8                                        Pad_DAC[0x2C8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMeshDescriptionBase* GetDefaultObj();

	struct FVertexID SetVertexPosition(const struct FVector& Position);
	TArray<struct FVertexInstanceID> SetPolygonVertexInstances();
	struct FPolygonGroupID SetPolygonPolygonGroup();
	struct FPolygonID ReversePolygonFacing();
	int32 ReserveNewVertices();
	int32 ReserveNewVertexInstances();
	int32 ReserveNewTriangles();
	int32 ReserveNewPolygons();
	int32 ReserveNewPolygonGroups();
	int32 ReserveNewEdges();
	struct FVertexID IsVertexValid(bool* ReturnValue);
	struct FVertexID IsVertexOrphaned(bool* ReturnValue);
	struct FVertexInstanceID IsVertexInstanceValid(bool* ReturnValue);
	struct FTriangleID IsTriangleValid(bool* ReturnValue);
	struct FTriangleID IsTrianglePartOfNgon(bool* ReturnValue);
	struct FPolygonID IsPolygonValid(bool* ReturnValue);
	struct FPolygonGroupID IsPolygonGroupValid(bool* ReturnValue);
	void IsEmpty(bool* ReturnValue);
	struct FEdgeID IsEdgeValid(bool* ReturnValue);
	struct FPolygonID IsEdgeInternalToPolygon(bool* ReturnValue);
	struct FEdgeID IsEdgeInternal(bool* ReturnValue);
	TArray<struct FVertexInstanceID> GetVertexVertexInstances();
	struct FVertexID GetVertexPosition(struct FVector* ReturnValue);
	struct FVertexID GetVertexPairEdge(struct FEdgeID* ReturnValue);
	struct FVertexInstanceID GetVertexInstanceVertex(struct FVertexID* ReturnValue);
	struct FVertexInstanceID GetVertexInstancePairEdge(struct FEdgeID* ReturnValue);
	struct FVertexID GetVertexInstanceForTriangleVertex(struct FVertexInstanceID* ReturnValue);
	struct FVertexID GetVertexInstanceForPolygonVertex(struct FVertexInstanceID* ReturnValue);
	void GetVertexInstanceCount(int32* ReturnValue);
	TArray<struct FTriangleID> GetVertexInstanceConnectedTriangles();
	TArray<struct FPolygonID> GetVertexInstanceConnectedPolygons();
	void GetVertexCount(int32* ReturnValue);
	TArray<struct FTriangleID> GetVertexConnectedTriangles();
	TArray<struct FPolygonID> GetVertexConnectedPolygons();
	TArray<struct FEdgeID> GetVertexConnectedEdges();
	TArray<struct FVertexID> GetVertexAdjacentVertices();
	TArray<struct FVertexID> GetTriangleVertices();
	TArray<struct FVertexInstanceID> GetTriangleVertexInstances();
	int32 GetTriangleVertexInstance(struct FVertexInstanceID* ReturnValue);
	struct FTriangleID GetTrianglePolygonGroup(struct FPolygonGroupID* ReturnValue);
	struct FTriangleID GetTrianglePolygon(struct FPolygonID* ReturnValue);
	TArray<struct FEdgeID> GetTriangleEdges();
	void GetTriangleCount(int32* ReturnValue);
	TArray<struct FTriangleID> GetTriangleAdjacentTriangles();
	TArray<struct FVertexID> GetPolygonVertices();
	TArray<struct FVertexInstanceID> GetPolygonVertexInstances();
	TArray<struct FTriangleID> GetPolygonTriangles();
	struct FPolygonID GetPolygonPolygonGroup(struct FPolygonGroupID* ReturnValue);
	TArray<struct FEdgeID> GetPolygonPerimeterEdges();
	TArray<struct FEdgeID> GetPolygonInternalEdges();
	TArray<struct FPolygonID> GetPolygonGroupPolygons();
	void GetPolygonGroupCount(int32* ReturnValue);
	void GetPolygonCount(int32* ReturnValue);
	TArray<struct FPolygonID> GetPolygonAdjacentPolygons();
	struct FVertexID GetNumVertexVertexInstances(int32* ReturnValue);
	struct FVertexInstanceID GetNumVertexInstanceConnectedTriangles(int32* ReturnValue);
	struct FVertexInstanceID GetNumVertexInstanceConnectedPolygons(int32* ReturnValue);
	struct FVertexID GetNumVertexConnectedTriangles(int32* ReturnValue);
	struct FVertexID GetNumVertexConnectedPolygons(int32* ReturnValue);
	struct FVertexID GetNumVertexConnectedEdges(int32* ReturnValue);
	struct FPolygonID GetNumPolygonVertices(int32* ReturnValue);
	struct FPolygonID GetNumPolygonTriangles(int32* ReturnValue);
	struct FPolygonID GetNumPolygonInternalEdges(int32* ReturnValue);
	struct FPolygonGroupID GetNumPolygonGroupPolygons(int32* ReturnValue);
	struct FEdgeID GetNumEdgeConnectedTriangles(int32* ReturnValue);
	struct FEdgeID GetNumEdgeConnectedPolygons(int32* ReturnValue);
	TArray<struct FVertexID> GetEdgeVertices();
	int32 GetEdgeVertex(struct FVertexID* ReturnValue);
	void GetEdgeCount(int32* ReturnValue);
	TArray<struct FTriangleID> GetEdgeConnectedTriangles();
	TArray<struct FPolygonID> GetEdgeConnectedPolygons();
	void Empty();
	TArray<struct FVertexID> DeleteVertexInstance();
	struct FVertexID DeleteVertex();
	TArray<struct FPolygonGroupID> DeleteTriangle();
	struct FPolygonGroupID DeletePolygonGroup();
	TArray<struct FPolygonGroupID> DeletePolygon();
	TArray<struct FVertexID> DeleteEdge();
	struct FVertexID CreateVertexWithID();
	struct FVertexID CreateVertexInstanceWithID();
	struct FVertexID CreateVertexInstance(struct FVertexInstanceID* ReturnValue);
	void CreateVertex(struct FVertexID* ReturnValue);
	TArray<struct FEdgeID> CreateTriangleWithID();
	TArray<struct FEdgeID> CreateTriangle(struct FTriangleID* ReturnValue);
	TArray<struct FEdgeID> CreatePolygonWithID();
	struct FPolygonGroupID CreatePolygonGroupWithID();
	void CreatePolygonGroup(struct FPolygonGroupID* ReturnValue);
	TArray<struct FEdgeID> CreatePolygon(struct FPolygonID* ReturnValue);
	struct FVertexID CreateEdgeWithID();
	struct FVertexID CreateEdge(struct FEdgeID* ReturnValue);
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


