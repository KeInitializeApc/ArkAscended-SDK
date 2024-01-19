#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class GeometryScriptingCore.GeometryScriptDebug
class UGeometryScriptDebug : public UObject
{
public:
	TArray<struct FGeometryScriptDebugMessage>   Messages;                                          // 0x28(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeometryScriptDebug* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_CollisionFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SetStaticMeshCollisionFromMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent** SourceComponent);
	class UGeometryScriptDebug* SetDynamicMeshCollisionFromMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ResetDynamicMeshCollision(class UDynamicMeshComponent** Component, bool* bEmitTransaction);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ContainmentFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ComputeMeshSweptHull(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeMeshConvexHull(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeMeshConvexDecomposition(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ListUtilityFunctions* GetDefaultObj();

	bool SetVectorListItem();
	bool SetUVListItem();
	bool SetScalarListItem();
	bool SetIndexListItem();
	bool SetColorListItem();
	struct FGeometryScriptVectorList GetVectorListLength(int32 ReturnValue);
	struct FGeometryScriptVectorList GetVectorListLastIndex(int32 ReturnValue);
	bool GetVectorListItem(const struct FVector& ReturnValue);
	struct FGeometryScriptUVList GetUVListLength(int32 ReturnValue);
	struct FGeometryScriptUVList GetUVListLastIndex(int32 ReturnValue);
	bool GetUVListItem(const struct FVector2D& ReturnValue);
	struct FGeometryScriptTriangleList GetTriangleListLength(int32 ReturnValue);
	struct FGeometryScriptTriangleList GetTriangleListLastTriangle(int32 ReturnValue);
	bool GetTriangleListItem(const struct FIntVector& ReturnValue);
	struct FGeometryScriptScalarList GetScalarListLength(int32 ReturnValue);
	struct FGeometryScriptScalarList GetScalarListLastIndex(int32 ReturnValue);
	bool GetScalarListItem(double ReturnValue);
	struct FGeometryScriptIndexList GetIndexListLength(int32 ReturnValue);
	struct FGeometryScriptIndexList GetIndexListLastIndex(int32 ReturnValue);
	bool GetIndexListItem(int32 ReturnValue);
	struct FGeometryScriptColorList GetColorListLength(int32 ReturnValue);
	struct FGeometryScriptColorList GetColorListLastIndex(int32 ReturnValue);
	bool GetColorListItem(const struct FLinearColor& ReturnValue);
	int32 ExtractColorListChannels();
	struct FGeometryScriptScalarList ExtractColorListChannel(int32* ChannelIndex);
	struct FGeometryScriptVectorList DuplicateVectorList();
	struct FGeometryScriptUVList DuplicateUVList();
	struct FGeometryScriptScalarList DuplicateScalarList();
	struct FGeometryScriptIndexList DuplicateIndexList();
	struct FGeometryScriptColorList DuplicateColorList();
	TArray<struct FVector> ConvertVectorListToArray();
	TArray<struct FVector2D> ConvertUVListToArray();
	TArray<struct FIntVector> ConvertTriangleListToArray();
	TArray<double> ConvertScalarListToArray();
	TArray<int32> ConvertIndexListToArray();
	TArray<struct FLinearColor> ConvertColorListToArray();
	struct FGeometryScriptVectorList ConvertArrayToVectorList();
	struct FGeometryScriptUVList ConvertArrayToUVList();
	struct FGeometryScriptTriangleList ConvertArrayToTriangleList();
	struct FGeometryScriptScalarList ConvertArrayToScalarList();
	struct FGeometryScriptIndexList ConvertArrayToIndexList(enum class EGeometryScriptIndexType IndexType);
	struct FGeometryScriptColorList ConvertArrayToColorList();
	struct FGeometryScriptVectorList ClearVectorList(struct FVector* ClearValue);
	struct FVector2D ClearUVList();
	struct FGeometryScriptScalarList ClearScalarList(double* ClearValue);
	struct FGeometryScriptIndexList ClearIndexList(int32* ClearValue);
	struct FGeometryScriptColorList ClearColorList(const struct FLinearColor& ClearColor);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_StaticMeshFunctions* GetDefaultObj();

	class UGeometryScriptDebug* GetSectionMaterialListFromStaticMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, const TArray<int32>& MaterialIndex, enum class EGeometryScriptOutcomePins* Outcome);
	class UGeometryScriptDebug* CopyMeshToStaticMesh(struct FGeometryScriptMeshWriteLOD* TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshToSkeletalMesh(struct FGeometryScriptMeshWriteLOD* TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromStaticMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromSkeletalMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBakeFunctions* GetDefaultObj();

	void MakeBakeTypeVertexColor(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	int32 MakeBakeTypeTexture(class UTexture2D* SourceTexture, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeTangentNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypePosition(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeObjectNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	int32 MakeBakeTypeMultiTexture(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeMaterialID(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeFaceNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	enum class EGeometryScriptBakeCurvatureClampMode MakeBakeTypeCurvature(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	float MakeBakeTypeBentNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	float MakeBakeTypeAmbientOcclusion(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	class UGeometryScriptDebug* BakeVertex(const struct FTransform& TargetTransform, class UDynamicMesh* SourceMesh, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* BakeTextureFromRenderCaptures(const struct FGeometryScriptRenderCaptureTextures& ReturnValue);
	class UGeometryScriptDebug* BakeTexture(const struct FTransform& TargetTransform, class UDynamicMesh* SourceMesh, const TArray<class UTexture2D*>& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* GetDefaultObj();

	bool SetVertexPosition(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetAllMeshVertexPositions(class UDynamicMesh* ReturnValue);
	bool DiscardMeshAttributes(class UDynamicMesh* ReturnValue);
	bool DeleteVerticesFromMesh(class UDynamicMesh* ReturnValue);
	bool DeleteVertexFromMesh(class UDynamicMesh* ReturnValue);
	bool DeleteTrianglesFromMesh(class UDynamicMesh* ReturnValue);
	bool DeleteTriangleFromMesh(class UDynamicMesh* ReturnValue);
	bool DeleteSelectedTrianglesFromMesh(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendMeshTransformed(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendMeshRepeated(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendBuffersToMesh(class UDynamicMesh* ReturnValue);
	bool AddVerticesToMesh(class UDynamicMesh* ReturnValue);
	bool AddVertexToMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AddTriangleToMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AddTrianglesToMesh(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* GetDefaultObj();

	struct FGeometryScriptBoneWeightProfile SetVertexBoneWeights(class UDynamicMesh* ReturnValue);
	struct FGeometryScriptBoneWeightProfile SetAllVertexBoneWeights(class UDynamicMesh* ReturnValue);
	struct FGeometryScriptBoneWeightProfile MeshHasBoneWeights(class UDynamicMesh* ReturnValue);
	struct FGeometryScriptBoneWeightProfile MeshCreateBoneWeights(class UDynamicMesh* ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetVertexBoneWeights(class UDynamicMesh* ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetMaxBoneWeightIndex(class UDynamicMesh* ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetLargestVertexBoneWeight(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeSmoothBoneWeights(class USkeleton* Skeleton, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBooleanFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshSelfUnion(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPlaneSlice(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPlaneCut(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshMirror(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshBoolean(const struct FTransform& TargetTransform, enum class EGeometryScriptBooleanOperation* Operation, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshComparisonFunctions* GetDefaultObj();

	class UGeometryScriptDebug* MeasureDistancesBetweenMeshes(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* IsSameMeshAs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* IsIntersectingMesh(const struct FTransform& TargetTransform, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SplitMeshByPolygroups(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SplitMeshByMaterialIDs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SplitMeshByComponents(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetSubMeshFromMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshToMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshSelectionToMesh(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDeformFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyTwistWarpToMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyPerlinNoiseToMesh(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMathWarpToMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyIterativeSmoothingToMesh(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyFlareWarpToMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyDisplaceFromTextureMap(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyDisplaceFromPerVertexVectors(struct FGeometryScriptMeshSelection* Selection, float Magnitude, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyBendWarpToMesh(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshMaterialFunctions* GetDefaultObj();

	bool SetTriangleMaterialID(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetPolygroupMaterialID(int32 PolygroupID, bool bIsValidPolygroupID, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMaterialIDOnTriangles(const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMaterialIDForMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetAllTriangleMaterialIDs(const struct FGeometryScriptIndexList& TriangleMaterialIDList, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RemapMaterialIDs(int32 FromMaterialID, int32 ToMaterialID, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetTrianglesByMaterialID(const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue);
	bool GetTriangleMaterialID(int32 ReturnValue);
	bool GetMaxMaterialID(int32 ReturnValue);
	class UGeometryScriptDebug* GetMaterialIDsOfTriangles(const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue);
	bool GetAllTriangleMaterialIDs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* EnableMaterialIDs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* DeleteTrianglesByMaterialID(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CompactMaterialIDs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ClearMaterialIDs(int32* ClearValue, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshModelingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshShell(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPolygroupBevel(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshOffsetFaces(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshOffset(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshLinearExtrudeFaces(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshInsetOutsetFaces(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshDuplicateFaces(struct FGeometryScriptMeshSelection* Selection, const struct FGeometryScriptMeshSelection& NewTriangles, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshDisconnectFaces(struct FGeometryScriptMeshSelection* Selection, bool bAllowBowtiesInOutput, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshBevelSelection(struct FGeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshNormalsFunctions* GetDefaultObj();

	bool UpdateVertexNormal(bool bUpdateNormal, const struct FVector& NewNormal, bool bUpdateTangents, const struct FVector& NewTangentX, const struct FVector& NewTangentY, bool bMergeSplitValues, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetPerVertexNormals(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetPerFaceNormals(class UDynamicMesh* ReturnValue);
	bool SetMeshTriangleNormals(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexTangents(const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexNormals(const struct FGeometryScriptVectorList& VertexNormalList, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RecomputeNormals(const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetMeshPerVertexTangents(const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, bool bIsValidTangentSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetMeshPerVertexNormals(const struct FGeometryScriptVectorList& NormalList, bool bIsValidNormalSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetMeshHasTangents(bool bHasTangents, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* FlipNormals(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* DiscardTangents(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeTangents(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeSplitNormals(const struct FGeometryScriptSplitNormalsOptions& SplitOptions, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AutoRepairNormals(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* GetDefaultObj();

	bool SetPolygroupForMeshSelection(struct FGeometryScriptMeshSelection* Selection, int32* SetPolygroupIDOut, int32* SetPolygroupID, bool* bGenerateNewPolygroup, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetNumExtendedPolygroupLayers(int32* NumLayers, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptGroupLayer GetTrianglesInPolygroup(int32 PolygroupID, struct FGeometryScriptIndexList* TriangleIDsOut, class UDynamicMesh* ReturnValue);
	bool GetTrianglePolygroupID(int32 ReturnValue);
	struct FGeometryScriptGroupLayer GetPolygroupIDsInMesh(struct FGeometryScriptIndexList* PolygroupIDsOut, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptGroupLayer GetAllTrianglePolygroupIDs(struct FGeometryScriptIndexList* PolygroupIDsOut, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* EnablePolygroups(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* DeleteTrianglesInPolygroup(int32 PolygroupID, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyPolygroupsLayer(struct FGeometryScriptGroupLayer* FromGroupLayer, struct FGeometryScriptGroupLayer* ToGroupLayer, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ConvertUVIslandsToPolygroups(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ConvertComponentsToPolygroups(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputePolygroupsFromPolygonDetection(bool* bRespectUVSeams, bool* bRespectHardNormals, double* QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputePolygroupsFromAngleThreshold(float CreaseAngle, int32 MinGroupSize, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ClearPolygroups(int32* ClearValue, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* GetDefaultObj();

	class UGeometryScriptDebug* AppendVoronoiDiagram2D(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& VoronoiSites, const struct FGeometryScriptVoronoiOptions& VoronoiOptions, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendTriangulatedPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, bool bAllowSelfIntersections, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendTorus(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const struct FGeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSweepPolyline(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolylineVertices, const TArray<struct FTransform>& SweepPath, const TArray<float>& PolylineTexParamU, const TArray<float>& SweepPathTexParamV, float RotationAngleDeg, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSweepPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FTransform>& SweepPath, bool* bCapped, float RotationAngleDeg, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSpiralRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSphereLatLong(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, int32 StepsPhi, int32 StepsTheta, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSphereBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSimpleSweptPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FVector>& SweepPath, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSimpleExtrudePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, float Height, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRoundRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32 StepsWidth, int32* StepsHeight, int32 StepsRound, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRoundRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32 StepsWidth, int32* StepsHeight, int32 StepsRound, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRevolvePath(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, int32 Steps, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32 StepsWidth, int32* StepsHeight, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32 StepsWidth, int32* StepsHeight, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendLinearStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* StepWidth, float* StepHeight, float* StepDepth, int32* NumSteps, bool* bFloating, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendDisc(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, int32* AngleSteps, int32* SpokeSteps, float* StartAngle, float* EndAngle, float* HoleRadius, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendCylinder(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, float Height, int32 RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendCurvedStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* StepWidth, float* StepHeight, float* CurveAngle, int32* NumSteps, bool* bFloating, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendCone(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* BaseRadius, float* TopRadius, float Height, int32 RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendCapsule(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float Radius, float* LineLength, int32* HemisphereSteps, int32* CircleSteps, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, float* DimensionZ, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshQueryFunctions* GetDefaultObj();

	int32 IsValidVertexID(bool ReturnValue);
	int32 IsValidTriangleID(bool ReturnValue);
	bool GetVertexPosition(const struct FVector& ReturnValue);
	class UDynamicMesh* GetVertexCount(int32 ReturnValue);
	int32 GetUVSetBoundingBox(bool* bIsValidUVSet, bool* bUVSetIsEmpty, const struct FBox2D& ReturnValue);
	struct FLinearColor GetTriangleVertexColors(bool* bTriHasValidVertexColors, class UDynamicMesh* ReturnValue);
	struct FVector2D GetTriangleUVs(const struct FVector2D& UV1, const struct FVector2D& UV2, bool* bHaveValidUVs);
	bool GetTrianglePositions(const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3);
	struct FGeometryScriptTriangle GetTriangleNormalTangents(bool bTriHasValidElements, struct FGeometryScriptTriangle* Tangents, struct FGeometryScriptTriangle* BiTangents, class UDynamicMesh* ReturnValue);
	int32 GetTriangleNormals(struct FVector* Normal1, struct FVector* Normal2, struct FVector* Normal3, bool bTriHasValidNormals, class UDynamicMesh* ReturnValue);
	bool GetTriangleIndices(const struct FIntVector& ReturnValue);
	bool GetTriangleFaceNormal(const struct FVector& ReturnValue);
	class UDynamicMesh* GetNumVertexIDs(int32 ReturnValue);
	class UDynamicMesh* GetNumUVSets(int32 ReturnValue);
	class UDynamicMesh* GetNumTriangleIDs(int32 ReturnValue);
	class UDynamicMesh* GetNumOpenBorderLoops(bool* bAmbiguousTopologyFound, int32 ReturnValue);
	class UDynamicMesh* GetNumOpenBorderEdges(int32 ReturnValue);
	class UDynamicMesh* GetNumExtendedPolygroupLayers(int32 ReturnValue);
	class UDynamicMesh* GetNumConnectedComponents(int32 ReturnValue);
	class UDynamicMesh* GetMeshVolumeArea(float* SurfaceArea, float* Volume);
	class UDynamicMesh* GetMeshInfoString(const class FString& ReturnValue);
	class UDynamicMesh* GetMeshHasAttributeSet(bool ReturnValue);
	class UDynamicMesh* GetMeshBoundingBox(const struct FBox& ReturnValue);
	class UDynamicMesh* GetIsDenseMesh(bool ReturnValue);
	class UDynamicMesh* GetIsClosedMesh(bool ReturnValue);
	int32 GetInterpolatedTriangleVertexColor(const struct FVector& BarycentricCoords, struct FLinearColor* DefaultColor, bool* bTriHasValidVertexColors, struct FLinearColor* InterpolatedColor, class UDynamicMesh* ReturnValue);
	int32 GetInterpolatedTriangleUV(const struct FVector& BarycentricCoords, bool* bTriHasValidUVs, struct FVector2D* InterpolatedUV, class UDynamicMesh* ReturnValue);
	bool GetInterpolatedTrianglePosition(const struct FVector& BarycentricCoords, const struct FVector& InterpolatedPosition, class UDynamicMesh* ReturnValue);
	int32 GetInterpolatedTriangleNormalTangents(const struct FVector& BarycentricCoords, bool bTriHasValidElements, const struct FVector& InterpolatedNormal, const struct FVector& InterpolatedTangent, const struct FVector& InterpolatedBiTangent, class UDynamicMesh* ReturnValue);
	int32 GetInterpolatedTriangleNormal(const struct FVector& BarycentricCoords, bool bTriHasValidNormals, const struct FVector& InterpolatedNormal, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetHasVertexIDGaps(bool ReturnValue);
	class UDynamicMesh* GetHasVertexColors(bool ReturnValue);
	class UDynamicMesh* GetHasTriangleNormals(bool ReturnValue);
	class UDynamicMesh* GetHasTriangleIDGaps(bool ReturnValue);
	class UDynamicMesh* GetHasPolygroups(bool ReturnValue);
	class UDynamicMesh* GetHasMaterialIDs(bool ReturnValue);
	struct FGeometryScriptVectorList GetAllVertexPositions(bool bSkipGaps, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetAllVertexIDs(const struct FGeometryScriptIndexList& VertexIDList, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptTriangleList GetAllTriangleIndices(bool bSkipGaps, bool bHasTriangleIDGaps, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetAllTriangleIDs(const struct FGeometryScriptIndexList& TriangleIDList, bool bHasTriangleIDGaps, class UDynamicMesh* ReturnValue);
	struct FVector ComputeTriangleBarycentricCoords(const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3, const struct FVector& BarycentricCoords, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RemeshingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyUniformRemesh(struct FGeometryScriptRemeshOptions* RemeshOptions, struct FGeometryScriptUniformRemeshOptions* UniformOptions, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshRepairFunctions* GetDefaultObj();

	class UGeometryScriptDebug* WeldMeshEdges(struct FGeometryScriptWeldEdgesOptions* WeldOptions, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SplitMeshBowties(bool* bMeshBowties, bool* bAttributeBowties, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ResolveMeshTJunctions(struct FGeometryScriptResolveTJunctionOptions* ResolveOptions, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RepairMeshDegenerateGeometry(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RemoveSmallComponents(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RemoveHiddenTriangles(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* FillAllMeshHoles(struct FGeometryScriptFillHolesOptions* FillOptions, int32* NumFilledHoles, int32* NumFailedHoleFills, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CompactMesh(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSamplingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ComputeVertexWeightedPointSampling(struct FGeometryScriptNonUniformPointSamplingOptions* NonUniformOptions, struct FGeometryScriptScalarList* VertexWeights, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputePointSampling(struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeNonUniformPointSampling(struct FGeometryScriptNonUniformPointSamplingOptions* NonUniformOptions, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionFunctions* GetDefaultObj();

	int32 SelectMeshElementsWithPlane(struct FGeometryScriptMeshSelection* Selection, bool bInvert, class UDynamicMesh* ReturnValue);
	int32 SelectMeshElementsInSphere(struct FGeometryScriptMeshSelection* Selection, bool bInvert, class UDynamicMesh* ReturnValue);
	int32 SelectMeshElementsInsideMesh(struct FGeometryScriptMeshSelection* Selection, bool bInvert, class UDynamicMesh* ReturnValue);
	int32 SelectMeshElementsInBox(struct FGeometryScriptMeshSelection* Selection, struct FBox* Box, bool bInvert, class UDynamicMesh* ReturnValue);
	int32 SelectMeshElementsByNormalAngle(struct FGeometryScriptMeshSelection* Selection, bool bInvert, class UDynamicMesh* ReturnValue);
	bool InvertMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	int32 GetMeshSelectionInfo(struct FGeometryScriptMeshSelection* Selection);
	struct FGeometryScriptMeshSelection ExpandMeshSelectionToConnected(struct FGeometryScriptMeshSelection* Selection, enum class EGeometryScriptTopologyConnectionType ConnectionType, class UDynamicMesh* ReturnValue);
	bool ExpandContractMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	bool DebugPrintMeshSelection(struct FGeometryScriptMeshSelection* Selection);
	enum class EGeometryScriptMeshSelectionType CreateSelectAllMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	enum class EGeometryScriptIndexType ConvertMeshSelectionToIndexList(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	enum class EGeometryScriptMeshSelectionType ConvertMeshSelectionToIndexArray(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptMeshSelection ConvertMeshSelection(enum class EGeometryScriptMeshSelectionType* NewType, bool* bAllowPartialInclusion, class UDynamicMesh* ReturnValue);
	enum class EGeometryScriptMeshSelectionType ConvertIndexSetToMeshSelection(TSet<int32>* IndexSet, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	enum class EGeometryScriptMeshSelectionType ConvertIndexListToMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	enum class EGeometryScriptMeshSelectionType ConvertIndexArrayToMeshSelection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	enum class EGeometryScriptCombineSelectionMode CombineMeshSelections(struct FGeometryScriptMeshSelection* SelectionA, struct FGeometryScriptMeshSelection* SelectionB, struct FGeometryScriptMeshSelection* ResultSelection);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* GetDefaultObj();

	class UGeometryScriptDebug* GetMeshSelectionBoundingBox(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetMeshSelectionBoundaryLoops(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplySimplifyToVertexCount(int32 Vertexcount, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToTriangleCount(int32* TriangleCount, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToTolerance(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToPolygroupTopology(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToPlanar(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSpatial* GetDefaultObj();

	void ResetBVH(struct FGeometryScriptDynamicMeshBVH* ResetBVH);
	class UGeometryScriptDebug* RebuildBVHForMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* IsPointInsideMesh(enum class EGeometryScriptContainmentOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* IsBVHValidForMesh(bool* bIsValid, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* FindNearestRayIntersectionWithMesh(const struct FGeometryScriptRayHitResult& HitResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* FindNearestPointOnMesh(enum class EGeometryScriptSearchOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* BuildBVHForMesh(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyUniformTessellation(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplySelectiveTessellation(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyPNTessellation(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshTransformFunctions* GetDefaultObj();

	class UGeometryScriptDebug* TranslatePivotToLocation(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* TranslateMeshSelection(struct FGeometryScriptMeshSelection* Selection, const struct FVector& Translation, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* TranslateMesh(const struct FVector& Translation, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* TransformMeshSelection(struct FGeometryScriptMeshSelection* Selection, struct FTransform* Transform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* TransformMesh(struct FTransform* Transform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ScaleMeshSelection(struct FGeometryScriptMeshSelection* Selection, const struct FVector& Scale, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ScaleMesh(const struct FVector& Scale, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RotateMeshSelection(struct FGeometryScriptMeshSelection* Selection, struct FRotator* Rotation, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RotateMesh(struct FRotator* Rotation, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshUVFunctions* GetDefaultObj();

	class UGeometryScriptDebug* TranslateMeshUVs(const struct FVector2D& Translation, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetNumUVSets(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromPlanarProjection(const struct FTransform& PlaneTransform, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromCylinderProjection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromBoxProjection(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	bool SetMeshTriangleUVs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ScaleMeshUVs(const struct FVector2D& Scale, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RotateMeshUVs(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RepackMeshUVs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RecomputeMeshUVs(struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetMeshUVSizeInfo(struct FGeometryScriptMeshSelection* Selection, bool* bIsValidUVSet, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetMeshPerVertexUVs(bool* bIsValidUVSet, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyUVSet(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshUVLayerToMesh(bool* bIsValidUVSet, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshToMeshUVLayer(bool* bIsValidUVSet, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AutoGenerateXAtlasMeshUVs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SetMeshSelectionVertexColor(struct FGeometryScriptMeshSelection* Selection, struct FLinearColor* Color, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexColors(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshConstantVertexColor(struct FLinearColor* Color, class UDynamicMesh* ReturnValue);
	bool GetMeshPerVertexColors(bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVoxelFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshSolidify(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshMorphology(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_PolyPathFunctions* GetDefaultObj();

	bool SampleSplineToTransforms(class USplineComponent** Spline, const TArray<struct FTransform>& Frames, struct FTransform* RelativeTransform);
	bool GetPolyPathVertex(const struct FVector& ReturnValue);
	bool GetPolyPathTangent(const struct FVector& ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathNumVertices(int32 ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathLastIndex(int32 ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathArcLength(double ReturnValue);
	struct FVector GetNearestVertexIndex(int32 ReturnValue);
	enum class EGeometryScriptAxis FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& ReturnValue);
	void CreateCirclePath3D(struct FTransform* Transform, float Radius, int32* NumPoints, const struct FGeometryScriptPolyPath& ReturnValue);
	struct FVector2D CreateCirclePath2D(float Radius, int32* NumPoints, const struct FGeometryScriptPolyPath& ReturnValue);
	void CreateArcPath3D(struct FTransform* Transform, float Radius, int32* NumPoints, float* StartAngle, float* EndAngle, const struct FGeometryScriptPolyPath& ReturnValue);
	struct FVector2D CreateArcPath2D(float Radius, int32* NumPoints, float* StartAngle, float* EndAngle, const struct FGeometryScriptPolyPath& ReturnValue);
	struct FGeometryScriptSplineSamplingOptions ConvertSplineToPolyPath(class USplineComponent** Spline);
	TArray<struct FVector2D> ConvertPolyPathToArrayOfVector2D();
	TArray<struct FVector> ConvertPolyPathToArray();
	struct FGeometryScriptPolyPath ConvertArrayToPolyPath();
	struct FGeometryScriptPolyPath ConvertArrayOfVector2DToPolyPath();
	struct FGeometryScriptPolyPath Conv_GeometryScriptPolyPathToArrayOfVector2D(const TArray<struct FVector2D>& ReturnValue);
	struct FGeometryScriptPolyPath Conv_GeometryScriptPolyPathToArray(const TArray<struct FVector>& ReturnValue);
	void Conv_ArrayToGeometryScriptPolyPath(const TArray<struct FVector>& PathVertices, const struct FGeometryScriptPolyPath& ReturnValue);
	void Conv_ArrayOfVector2DToGeometryScriptPolyPath(const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptPolyPath& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_SceneUtilityFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SetComponentMaterialList(class UPrimitiveComponent** Component);
	void CreateDynamicMeshPool(class UDynamicMeshPool* ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromComponent(class USceneComponent** Component, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyCollisionMeshesFromObject(class UObject* FromObject, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TransformFunctions* GetDefaultObj();

	void MakeTransformFromZAxis(struct FVector* Location, struct FVector* ZAxis, const struct FTransform& ReturnValue);
	bool MakeTransformFromAxes(struct FVector* Location, struct FVector* ZAxis, const struct FTransform& ReturnValue);
	void GetTransformAxisVector(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, const struct FVector& ReturnValue);
	void GetTransformAxisRay(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, const struct FRay& ReturnValue);
	void GetTransformAxisPlane(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, const struct FPlane& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RayFunctions* GetDefaultObj();

	struct FVector MakeRayFromPoints(const struct FRay& ReturnValue);
	bool MakeRayFromPointDirection(const struct FRay& ReturnValue);
	void GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform, bool bInvert, const struct FRay& ReturnValue);
	struct FVector GetRayStartEnd(const struct FRay& Ray);
	double GetRaySphereIntersection(const struct FRay& Ray, bool ReturnValue);
	struct FVector GetRaySegmentClosestPoint(const struct FRay& Ray, double* RayParameter, double ReturnValue);
	struct FVector GetRayPointDistance(const struct FRay& Ray, double ReturnValue);
	void GetRayPoint(const struct FRay& Ray, double* Distance, const struct FVector& ReturnValue);
	double GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane, bool ReturnValue);
	struct FVector GetRayParameter(const struct FRay& Ray, double ReturnValue);
	struct FVector GetRayLineClosestPoint(const struct FRay& Ray, double* RayParameter, double ReturnValue);
	struct FVector GetRayClosestPoint(const struct FRay& Ray, const struct FVector& ReturnValue);
	double GetRayBoxIntersection(const struct FRay& Ray, struct FBox* Box, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_BoxFunctions* GetDefaultObj();

	bool TestPointInsideBox(struct FBox* Box, bool ReturnValue);
	double TestBoxSphereIntersection(struct FBox* Box, bool ReturnValue);
	struct FBox TestBoxBoxIntersection(bool ReturnValue);
	struct FVector MakeBoxFromCenterSize(const struct FBox& ReturnValue);
	struct FVector MakeBoxFromCenterExtents(const struct FBox& ReturnValue);
	void GetTransformedBox(struct FBox* Box, struct FTransform* Transform, const struct FBox& ReturnValue);
	struct FVector GetExpandedBox(struct FBox* Box, const struct FBox& ReturnValue);
	void GetBoxVolumeArea(struct FBox* Box, double* Volume, double* SurfaceArea);
	struct FVector GetBoxPointDistance(struct FBox* Box, double ReturnValue);
	struct FVector GetBoxFaceCenter(struct FBox* Box, int32* FaceIndex, const struct FVector& ReturnValue);
	int32 GetBoxCorner(struct FBox* Box, const struct FVector& ReturnValue);
	struct FVector GetBoxCenterSize(struct FBox* Box);
	struct FBox GetBoxBoxDistance(double ReturnValue);
	bool FindClosestPointOnBox(struct FBox* Box, const struct FVector& ReturnValue);
	bool FindBoxBoxIntersection(const struct FBox& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TextureMapFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SampleTextureRenderTarget2DAtUVPositions();
	class UGeometryScriptDebug* SampleTexture2DAtUVPositions();
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_VectorMathFunctions* GetDefaultObj();

	double VectorToScalar(const struct FGeometryScriptScalarList& ReturnValue);
	struct FVector VectorNormalizeInPlace();
	struct FGeometryScriptVectorList VectorLength(const struct FGeometryScriptScalarList& ReturnValue);
	struct FGeometryScriptVectorList VectorDot(const struct FGeometryScriptScalarList& ReturnValue);
	struct FGeometryScriptVectorList VectorCross(const struct FGeometryScriptVectorList& ReturnValue);
	double VectorBlendInPlace();
	double VectorBlend(const struct FGeometryScriptVectorList& ReturnValue);
	double ScalarVectorMultiplyInPlace();
	double ScalarVectorMultiply(const struct FGeometryScriptVectorList& ReturnValue);
	double ScalarMultiplyInPlace();
	double ScalarMultiply(const struct FGeometryScriptScalarList& ReturnValue);
	double ScalarInvertInPlace();
	double ScalarInvert(const struct FGeometryScriptScalarList& ReturnValue);
	double ScalarBlendInPlace();
	double ScalarBlend(const struct FGeometryScriptScalarList& ReturnValue);
	struct FGeometryScriptVectorList ConstantVectorMultiplyInPlace(double* Constant);
	struct FGeometryScriptVectorList ConstantVectorMultiply(double* Constant, const struct FGeometryScriptVectorList& ReturnValue);
	struct FGeometryScriptScalarList ConstantScalarMultiplyInPlace(double* Constant);
	struct FGeometryScriptScalarList ConstantScalarMultiply(double* Constant, const struct FGeometryScriptScalarList& ReturnValue);
};

}


