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
	TArray<struct FGeometryScriptDebugMessage>   Messages;                                          // 0x28(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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

	class UGeometryScriptDebug* SetStaticMeshCollisionFromMesh(struct FGeometryScriptCollisionFromMeshOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetStaticMeshCollisionFromComponent(class UPrimitiveComponent** SourceComponent, struct FGeometryScriptSetSimpleCollisionOptions* Options);
	class UGeometryScriptDebug* SetDynamicMeshCollisionFromMesh(class UDynamicMeshComponent** ToDynamicMeshComponent, struct FGeometryScriptCollisionFromMeshOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ResetDynamicMeshCollision(class UDynamicMeshComponent** Component, bool* bEmitTransaction);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ContainmentFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ComputeMeshSweptHull(struct FGeometryScriptSweptHullOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeMeshConvexHull(struct FGeometryScriptConvexHullOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeMeshConvexDecomposition(struct FGeometryScriptConvexDecompositionOptions* Options, class UDynamicMesh** ReturnValue);
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
	struct FGeometryScriptVectorList GetVectorListLength(int32* ReturnValue);
	struct FGeometryScriptVectorList GetVectorListLastIndex(int32* ReturnValue);
	bool GetVectorListItem(struct FVector* ReturnValue);
	struct FGeometryScriptUVList GetUVListLength(int32* ReturnValue);
	struct FGeometryScriptUVList GetUVListLastIndex(int32* ReturnValue);
	bool GetUVListItem(struct FVector2D* ReturnValue);
	struct FGeometryScriptTriangleList GetTriangleListLength(int32* ReturnValue);
	struct FGeometryScriptTriangleList GetTriangleListLastTriangle(int32* ReturnValue);
	bool GetTriangleListItem(struct FIntVector* ReturnValue);
	struct FGeometryScriptScalarList GetScalarListLength(int32* ReturnValue);
	struct FGeometryScriptScalarList GetScalarListLastIndex(int32* ReturnValue);
	bool GetScalarListItem(double* ReturnValue);
	struct FGeometryScriptIndexList GetIndexListLength(int32* ReturnValue);
	struct FGeometryScriptIndexList GetIndexListLastIndex(int32* ReturnValue);
	bool GetIndexListItem(int32* ReturnValue);
	struct FGeometryScriptColorList GetColorListLength(int32* ReturnValue);
	struct FGeometryScriptColorList GetColorListLastIndex(int32* ReturnValue);
	bool GetColorListItem(struct FLinearColor* ReturnValue);
	int32 ExtractColorListChannels();
	struct FGeometryScriptScalarList ExtractColorListChannel(int32 ChannelIndex);
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
	struct FGeometryScriptIndexList ConvertArrayToIndexList(enum class EGeometryScriptIndexType* IndexType);
	struct FGeometryScriptColorList ConvertArrayToColorList();
	struct FGeometryScriptVectorList ClearVectorList(struct FVector* ClearValue);
	struct FVector2D ClearUVList();
	struct FGeometryScriptScalarList ClearScalarList(double* ClearValue);
	struct FGeometryScriptIndexList ClearIndexList(int32* ClearValue);
	struct FLinearColor ClearColorList();
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_StaticMeshFunctions* GetDefaultObj();

	class UGeometryScriptDebug* GetSectionMaterialListFromStaticMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, const TArray<int32>& MaterialIndex, enum class EGeometryScriptOutcomePins* Outcome);
	class UGeometryScriptDebug* CopyMeshToStaticMesh(struct FGeometryScriptCopyMeshToAssetOptions* Options, struct FGeometryScriptMeshWriteLOD* TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshToSkeletalMesh(struct FGeometryScriptCopyMeshToAssetOptions* Options, struct FGeometryScriptMeshWriteLOD* TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromStaticMesh(const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromSkeletalMesh(const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBakeFunctions* GetDefaultObj();

	void MakeBakeTypeVertexColor(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	int32 MakeBakeTypeTexture(class UTexture2D* SourceTexture, struct FGeometryScriptBakeTypeOptions* ReturnValue);
	void MakeBakeTypeTangentNormal(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	void MakeBakeTypePosition(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	void MakeBakeTypeObjectNormal(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	int32 MakeBakeTypeMultiTexture(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	void MakeBakeTypeMaterialID(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	void MakeBakeTypeFaceNormal(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	enum class EGeometryScriptBakeCurvatureClampMode MakeBakeTypeCurvature(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	float MakeBakeTypeBentNormal(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	float MakeBakeTypeAmbientOcclusion(struct FGeometryScriptBakeTypeOptions* ReturnValue);
	class UGeometryScriptDebug* BakeVertex(struct FTransform* TargetTransform, class UDynamicMesh* SourceMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* BakeTextureFromRenderCaptures(struct FGeometryScriptRenderCaptureTextures* ReturnValue);
	class UGeometryScriptDebug* BakeTexture(struct FTransform* TargetTransform, class UDynamicMesh* SourceMesh, TArray<class UTexture2D*>* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* GetDefaultObj();

	bool SetVertexPosition(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetAllMeshVertexPositions(class UDynamicMesh** ReturnValue);
	bool DiscardMeshAttributes(class UDynamicMesh** ReturnValue);
	bool DeleteVerticesFromMesh(class UDynamicMesh** ReturnValue);
	bool DeleteVertexFromMesh(class UDynamicMesh** ReturnValue);
	bool DeleteTrianglesFromMesh(class UDynamicMesh** ReturnValue);
	bool DeleteTriangleFromMesh(class UDynamicMesh** ReturnValue);
	bool DeleteSelectedTrianglesFromMesh(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendMeshTransformed(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendMeshRepeated(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendMesh(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendBuffersToMesh(class UDynamicMesh** ReturnValue);
	bool AddVerticesToMesh(class UDynamicMesh** ReturnValue);
	bool AddVertexToMesh(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AddTriangleToMesh(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AddTrianglesToMesh(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* GetDefaultObj();

	struct FGeometryScriptBoneWeightProfile SetVertexBoneWeights(class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile SetAllVertexBoneWeights(class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile MeshHasBoneWeights(class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile MeshCreateBoneWeights(class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetVertexBoneWeights(class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetMaxBoneWeightIndex(class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetLargestVertexBoneWeight(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeSmoothBoneWeights(struct FGeometryScriptSmoothBoneWeightsOptions* Options, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBooleanFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshSelfUnion(struct FGeometryScriptMeshSelfUnionOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPlaneSlice(struct FGeometryScriptMeshPlaneSliceOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPlaneCut(struct FGeometryScriptMeshPlaneCutOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshMirror(struct FGeometryScriptMeshMirrorOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshBoolean(struct FTransform* TargetTransform, struct FGeometryScriptMeshBooleanOptions* Options, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshComparisonFunctions* GetDefaultObj();

	class UGeometryScriptDebug* MeasureDistancesBetweenMeshes(struct FGeometryScriptMeasureMeshDistanceOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* IsSameMeshAs(struct FGeometryScriptIsSameMeshOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* IsIntersectingMesh(struct FTransform* TargetTransform, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SplitMeshByPolygroups(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SplitMeshByMaterialIDs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SplitMeshByComponents(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetSubMeshFromMesh(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshToMesh(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshSelectionToMesh(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDeformFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyTwistWarpToMesh(struct FGeometryScriptTwistWarpOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyPerlinNoiseToMesh(struct FGeometryScriptPerlinNoiseOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMathWarpToMesh(struct FGeometryScriptMathWarpOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyIterativeSmoothingToMesh(struct FGeometryScriptIterativeMeshSmoothingOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyFlareWarpToMesh(struct FGeometryScriptFlareWarpOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyDisplaceFromTextureMap(struct FGeometryScriptDisplaceFromTextureOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyBendWarpToMesh(struct FGeometryScriptBendWarpOptions* Options, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshMaterialFunctions* GetDefaultObj();

	bool SetTriangleMaterialID(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetPolygroupMaterialID(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMaterialIDOnTriangles(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMaterialIDForMeshSelection(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetAllTriangleMaterialIDs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RemapMaterialIDs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetTrianglesByMaterialID(class UDynamicMesh** ReturnValue);
	bool GetTriangleMaterialID(int32* ReturnValue);
	bool GetMaxMaterialID(int32* ReturnValue);
	class UGeometryScriptDebug* GetMaterialIDsOfTriangles(class UDynamicMesh** ReturnValue);
	bool GetAllTriangleMaterialIDs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* EnableMaterialIDs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* DeleteTrianglesByMaterialID(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CompactMaterialIDs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ClearMaterialIDs(int32* ClearValue, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshModelingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshShell(struct FGeometryScriptMeshOffsetOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPolygroupBevel(struct FGeometryScriptMeshBevelOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshOffsetFaces(struct FGeometryScriptMeshOffsetFacesOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshOffset(struct FGeometryScriptMeshOffsetOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshLinearExtrudeFaces(struct FGeometryScriptMeshLinearExtrudeOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshInsetOutsetFaces(struct FGeometryScriptMeshInsetOutsetFacesOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshExtrude_Compatibility_5p0(struct FGeometryScriptMeshExtrudeOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshDuplicateFaces(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshDisconnectFaces(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshBevelSelection(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshNormalsFunctions* GetDefaultObj();

	bool UpdateVertexNormal(bool bUpdateNormal, const struct FVector& NewNormal, bool bUpdateTangents, const struct FVector& NewTangentX, const struct FVector& NewTangentY, bool bMergeSplitValues, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetPerVertexNormals(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetPerFaceNormals(class UDynamicMesh** ReturnValue);
	bool SetMeshTriangleNormals(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexTangents(const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexNormals(const struct FGeometryScriptVectorList& VertexNormalList, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RecomputeNormals(const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UDynamicMesh** ReturnValue);
	class UDynamicMesh* GetMeshPerVertexTangents(const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, bool bIsValidTangentSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh** ReturnValue);
	class UDynamicMesh* GetMeshPerVertexNormals(const struct FGeometryScriptVectorList& NormalList, bool bIsValidNormalSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetMeshHasTangents(bool bHasTangents, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* FlipNormals(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* DiscardTangents(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeTangents(struct FGeometryScriptTangentsOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeSplitNormals(const struct FGeometryScriptSplitNormalsOptions& SplitOptions, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AutoRepairNormals(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* GetDefaultObj();

	bool SetPolygroupForMeshSelection(int32* SetPolygroupIDOut, int32* SetPolygroupID, bool bGenerateNewPolygroup, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetNumExtendedPolygroupLayers(int32 NumLayers, class UDynamicMesh** ReturnValue);
	int32 GetTrianglesInPolygroup(const struct FGeometryScriptIndexList& TriangleIDsOut, class UDynamicMesh** ReturnValue);
	bool GetTrianglePolygroupID(int32* ReturnValue);
	struct FGeometryScriptGroupLayer GetPolygroupIDsInMesh(const struct FGeometryScriptIndexList& PolygroupIDsOut, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptGroupLayer GetAllTrianglePolygroupIDs(const struct FGeometryScriptIndexList& PolygroupIDsOut, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* EnablePolygroups(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* DeleteTrianglesInPolygroup(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyPolygroupsLayer(const struct FGeometryScriptGroupLayer& FromGroupLayer, const struct FGeometryScriptGroupLayer& ToGroupLayer, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ConvertUVIslandsToPolygroups(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ConvertComponentsToPolygroups(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputePolygroupsFromPolygonDetection(bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputePolygroupsFromAngleThreshold(float CreaseAngle, int32 MinGroupSize, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ClearPolygroups(int32* ClearValue, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* GetDefaultObj();

	class UGeometryScriptDebug* AppendVoronoiDiagram2D(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& VoronoiSites, const struct FGeometryScriptVoronoiOptions& VoronoiOptions, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendTriangulatedPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, bool bAllowSelfIntersections, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendTorus(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, struct FGeometryScriptRevolveOptions* RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSweepPolyline(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolylineVertices, TArray<struct FTransform>* SweepPath, const TArray<float>& PolylineTexParamU, TArray<float>* SweepPathTexParamV, float* RotationAngleDeg, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSweepPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, TArray<struct FTransform>* SweepPath, bool* bCapped, float* RotationAngleDeg, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSpiralRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, struct FGeometryScriptRevolveOptions* RevolveOptions, float* Radius, int32* Steps, float* RisePerRevolution, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSphereLatLong(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, int32* StepsPhi, int32* StepsTheta, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSphereBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSimpleSweptPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, TArray<struct FVector>* SweepPath, bool* bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSimpleExtrudePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, float Height, int32* HeightSteps, bool* bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRoundRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32* StepsWidth, int32* StepsHeight, int32* StepsRound, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRoundRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32* StepsWidth, int32* StepsHeight, int32* StepsRound, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, struct FGeometryScriptRevolveOptions* RevolveOptions, float* Radius, int32* Steps, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRevolvePath(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PathVertices, struct FGeometryScriptRevolveOptions* RevolveOptions, int32* Steps, bool* bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32* StepsWidth, int32* StepsHeight, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, int32* StepsWidth, int32* StepsHeight, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendLinearStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* StepWidth, float* StepHeight, float* StepDepth, int32* NumSteps, bool* bFloating, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendDisc(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, int32* AngleSteps, int32* SpokeSteps, float* StartAngle, float* EndAngle, float* HoleRadius, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendCylinder(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, float Height, int32 RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendCurvedStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* StepWidth, float* StepHeight, float* CurveAngle, int32* NumSteps, bool* bFloating, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendCone(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* BaseRadius, float* TopRadius, float Height, int32 RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendCapsule(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, float* LineLength, int32* HemisphereSteps, int32* CircleSteps, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, float* DimensionZ, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshQueryFunctions* GetDefaultObj();

	int32 IsValidVertexID(bool* ReturnValue);
	int32 IsValidTriangleID(bool* ReturnValue);
	bool GetVertexPosition(struct FVector* ReturnValue);
	class UDynamicMesh* GetVertexCount(int32* ReturnValue);
	int32 GetUVSetBoundingBox(bool* bIsValidUVSet, bool* bUVSetIsEmpty, struct FBox2D* ReturnValue);
	struct FLinearColor GetTriangleVertexColors(bool bTriHasValidVertexColors, class UDynamicMesh** ReturnValue);
	struct FVector2D GetTriangleUVs(const struct FVector2D& UV1, const struct FVector2D& UV2, bool* bHaveValidUVs);
	bool GetTrianglePositions(const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3);
	struct FGeometryScriptTriangle GetTriangleNormalTangents(bool bTriHasValidElements, struct FGeometryScriptTriangle* BiTangents, class UDynamicMesh** ReturnValue);
	int32 GetTriangleNormals(struct FVector* Normal1, const struct FVector& Normal2, const struct FVector& Normal3, bool bTriHasValidNormals, class UDynamicMesh** ReturnValue);
	bool GetTriangleIndices(struct FIntVector* ReturnValue);
	bool GetTriangleFaceNormal(struct FVector* ReturnValue);
	class UDynamicMesh* GetNumVertexIDs(int32* ReturnValue);
	class UDynamicMesh* GetNumUVSets(int32* ReturnValue);
	class UDynamicMesh* GetNumTriangleIDs(int32* ReturnValue);
	class UDynamicMesh* GetNumOpenBorderLoops(bool bAmbiguousTopologyFound, int32* ReturnValue);
	class UDynamicMesh* GetNumOpenBorderEdges(int32* ReturnValue);
	class UDynamicMesh* GetNumExtendedPolygroupLayers(int32* ReturnValue);
	class UDynamicMesh* GetNumConnectedComponents(int32* ReturnValue);
	class UDynamicMesh* GetMeshVolumeArea(float SurfaceArea, float* Volume);
	class UDynamicMesh* GetMeshInfoString(class FString* ReturnValue);
	class UDynamicMesh* GetMeshHasAttributeSet(bool* ReturnValue);
	class UDynamicMesh* GetMeshBoundingBox(struct FBox* ReturnValue);
	class UDynamicMesh* GetIsDenseMesh(bool* ReturnValue);
	class UDynamicMesh* GetIsClosedMesh(bool* ReturnValue);
	int32 GetInterpolatedTriangleVertexColor(const struct FVector& BarycentricCoords, const struct FLinearColor& DefaultColor, bool bTriHasValidVertexColors, const struct FLinearColor& InterpolatedColor, class UDynamicMesh** ReturnValue);
	int32 GetInterpolatedTriangleUV(const struct FVector& BarycentricCoords, bool bTriHasValidUVs, const struct FVector2D& InterpolatedUV, class UDynamicMesh** ReturnValue);
	bool GetInterpolatedTrianglePosition(const struct FVector& BarycentricCoords, const struct FVector& InterpolatedPosition, class UDynamicMesh** ReturnValue);
	int32 GetInterpolatedTriangleNormalTangents(const struct FVector& BarycentricCoords, bool bTriHasValidElements, const struct FVector& InterpolatedNormal, const struct FVector& InterpolatedTangent, const struct FVector& InterpolatedBiTangent, class UDynamicMesh** ReturnValue);
	int32 GetInterpolatedTriangleNormal(const struct FVector& BarycentricCoords, bool bTriHasValidNormals, const struct FVector& InterpolatedNormal, class UDynamicMesh** ReturnValue);
	class UDynamicMesh* GetHasVertexIDGaps(bool* ReturnValue);
	class UDynamicMesh* GetHasVertexColors(bool* ReturnValue);
	class UDynamicMesh* GetHasTriangleNormals(bool* ReturnValue);
	class UDynamicMesh* GetHasTriangleIDGaps(bool* ReturnValue);
	class UDynamicMesh* GetHasPolygroups(bool* ReturnValue);
	class UDynamicMesh* GetHasMaterialIDs(bool* ReturnValue);
	struct FGeometryScriptVectorList GetAllVertexPositions(bool bSkipGaps, bool bHasVertexIDGaps, class UDynamicMesh** ReturnValue);
	class UDynamicMesh* GetAllVertexIDs(const struct FGeometryScriptIndexList& VertexIDList, bool bHasVertexIDGaps, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptTriangleList GetAllTriangleIndices(bool bSkipGaps, bool bHasTriangleIDGaps, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptIndexList GetAllTriangleIDs(bool bHasTriangleIDGaps, class UDynamicMesh** ReturnValue);
	struct FVector ComputeTriangleBarycentricCoords(const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3, const struct FVector& BarycentricCoords, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RemeshingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyUniformRemesh(struct FGeometryScriptRemeshOptions* RemeshOptions, struct FGeometryScriptUniformRemeshOptions* UniformOptions, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshRepairFunctions* GetDefaultObj();

	class UGeometryScriptDebug* WeldMeshEdges(struct FGeometryScriptWeldEdgesOptions* WeldOptions, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SplitMeshBowties(bool* bMeshBowties, bool* bAttributeBowties, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ResolveMeshTJunctions(struct FGeometryScriptResolveTJunctionOptions* ResolveOptions, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RepairMeshDegenerateGeometry(struct FGeometryScriptDegenerateTriangleOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RemoveSmallComponents(struct FGeometryScriptRemoveSmallComponentOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RemoveHiddenTriangles(struct FGeometryScriptRemoveHiddenTrianglesOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* FillAllMeshHoles(struct FGeometryScriptFillHolesOptions* FillOptions, int32* NumFilledHoles, int32* NumFailedHoleFills, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CompactMesh(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSamplingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ComputeVertexWeightedPointSampling(struct FGeometryScriptMeshPointSamplingOptions* Options, struct FGeometryScriptNonUniformPointSamplingOptions* NonUniformOptions, struct FGeometryScriptScalarList* VertexWeights, const TArray<struct FTransform>& Samples, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputePointSampling(struct FGeometryScriptMeshPointSamplingOptions* Options, const TArray<struct FTransform>& Samples, struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeNonUniformPointSampling(struct FGeometryScriptMeshPointSamplingOptions* Options, struct FGeometryScriptNonUniformPointSamplingOptions* NonUniformOptions, const TArray<struct FTransform>& Samples, TArray<double>* SampleRadii, struct FGeometryScriptIndexList* TriangleIDs, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionFunctions* GetDefaultObj();

	int32 SelectMeshElementsWithPlane(bool bInvert, class UDynamicMesh** ReturnValue);
	int32 SelectMeshElementsInSphere(double* SphereRadius, bool bInvert, class UDynamicMesh** ReturnValue);
	int32 SelectMeshElementsInsideMesh(bool bInvert, class UDynamicMesh** ReturnValue);
	int32 SelectMeshElementsInBox(struct FBox* Box, bool bInvert, class UDynamicMesh** ReturnValue);
	int32 SelectMeshElementsByNormalAngle(bool bInvert, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptMeshSelection InvertMeshSelection(struct FGeometryScriptMeshSelection* NewSelection, bool* bOnlyToConnected, class UDynamicMesh** ReturnValue);
	enum class EGeometryScriptMeshSelectionType GetMeshSelectionInfo(int32* NumSelected);
	struct FGeometryScriptMeshSelection ExpandMeshSelectionToConnected(struct FGeometryScriptMeshSelection* NewSelection, enum class EGeometryScriptTopologyConnectionType* ConnectionType, class UDynamicMesh** ReturnValue);
	int32 ExpandContractMeshSelection(struct FGeometryScriptMeshSelection* NewSelection, bool* bContract, bool* bOnlyExpandToFaceNeighbours, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptMeshSelection DebugPrintMeshSelection(bool* bDisable);
	enum class EGeometryScriptMeshSelectionType CreateSelectAllMeshSelection(class UDynamicMesh** ReturnValue);
	struct FGeometryScriptIndexList ConvertMeshSelectionToIndexList(enum class EGeometryScriptIndexType* ResultListType, enum class EGeometryScriptIndexType* ConvertToType, class UDynamicMesh** ReturnValue);
	enum class EGeometryScriptMeshSelectionType ConvertMeshSelectionToIndexArray(class UDynamicMesh** ReturnValue);
	enum class EGeometryScriptMeshSelectionType ConvertMeshSelection(struct FGeometryScriptMeshSelection* FromSelection, struct FGeometryScriptMeshSelection* ToSelection, bool* bAllowPartialInclusion, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptMeshSelection ConvertIndexSetToMeshSelection(TSet<int32>* IndexSet, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptMeshSelection ConvertIndexListToMeshSelection(class UDynamicMesh** ReturnValue);
	struct FGeometryScriptMeshSelection ConvertIndexArrayToMeshSelection(class UDynamicMesh** ReturnValue);
	enum class EGeometryScriptCombineSelectionMode CombineMeshSelections(struct FGeometryScriptMeshSelection* SelectionA, struct FGeometryScriptMeshSelection* SelectionB, struct FGeometryScriptMeshSelection* ResultSelection);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* GetDefaultObj();

	class UGeometryScriptDebug* GetMeshSelectionBoundingBox(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetMeshSelectionBoundaryLoops(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplySimplifyToVertexCount(int32 Vertexcount, struct FGeometryScriptSimplifyMeshOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToTriangleCount(int32* TriangleCount, struct FGeometryScriptSimplifyMeshOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToTolerance(struct FGeometryScriptSimplifyMeshOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToPolygroupTopology(struct FGeometryScriptPolygroupSimplifyOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToPlanar(struct FGeometryScriptPlanarSimplifyOptions* Options, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSpatial* GetDefaultObj();

	void ResetBVH(struct FGeometryScriptDynamicMeshBVH* ResetBVH);
	class UGeometryScriptDebug* RebuildBVHForMesh(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* IsPointInsideMesh(struct FGeometryScriptSpatialQueryOptions* Options, enum class EGeometryScriptContainmentOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* IsBVHValidForMesh(bool* bIsValid, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* FindNearestRayIntersectionWithMesh(struct FGeometryScriptSpatialQueryOptions* Options, const struct FGeometryScriptRayHitResult& HitResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* FindNearestPointOnMesh(struct FGeometryScriptSpatialQueryOptions* Options, enum class EGeometryScriptSearchOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* BuildBVHForMesh(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyUniformTessellation(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySelectiveTessellation(struct FGeometryScriptSelectiveTessellateOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyPNTessellation(struct FGeometryScriptPNTessellateOptions* Options, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshTransformFunctions* GetDefaultObj();

	class UGeometryScriptDebug* TranslatePivotToLocation(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* TranslateMeshSelection(const struct FVector& Translation, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* TranslateMesh(const struct FVector& Translation, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* TransformMeshSelection(struct FTransform* Transform, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* TransformMesh(struct FTransform* Transform, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ScaleMeshSelection(const struct FVector& Scale, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ScaleMesh(const struct FVector& Scale, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RotateMeshSelection(struct FRotator* Rotation, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RotateMesh(struct FRotator* Rotation, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshUVFunctions* GetDefaultObj();

	class UGeometryScriptDebug* TranslateMeshUVs(const struct FVector2D& Translation, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetNumUVSets(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromPlanarProjection(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromCylinderProjection(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromBoxProjection(class UDynamicMesh** ReturnValue);
	bool SetMeshTriangleUVs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ScaleMeshUVs(const struct FVector2D& Scale, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RotateMeshUVs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RepackMeshUVs(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RecomputeMeshUVs(struct FGeometryScriptRecomputeUVsOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetMeshUVSizeInfo(bool* bIsValidUVSet, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetMeshPerVertexUVs(bool* bIsValidUVSet, bool bHasVertexIDGaps, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyUVSet(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshUVLayerToMesh(bool* bIsValidUVSet, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshToMeshUVLayer(bool* bIsValidUVSet, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AutoGenerateXAtlasMeshUVs(struct FGeometryScriptXAtlasOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AutoGeneratePatchBuilderMeshUVs(struct FGeometryScriptPatchBuilderOptions* Options, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SetMeshSelectionVertexColor(struct FLinearColor* Color, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexColors(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshConstantVertexColor(struct FLinearColor* Color, class UDynamicMesh** ReturnValue);
	bool GetMeshPerVertexColors(bool bHasVertexIDGaps, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVoxelFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshSolidify(struct FGeometryScriptSolidifyOptions* Options, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshMorphology(struct FGeometryScriptMorphologyOptions* Options, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_PolyPathFunctions* GetDefaultObj();

	bool SampleSplineToTransforms(class USplineComponent** Spline, struct FTransform* RelativeTransform);
	bool GetPolyPathVertex(struct FVector* ReturnValue);
	bool GetPolyPathTangent(struct FVector* ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathNumVertices(int32* ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathLastIndex(int32* ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathArcLength(double* ReturnValue);
	struct FVector GetNearestVertexIndex(int32* ReturnValue);
	enum class EGeometryScriptAxis FlattenTo2DOnAxis(struct FGeometryScriptPolyPath* ReturnValue);
	void CreateCirclePath3D(struct FTransform* Transform, float* Radius, int32* NumPoints, struct FGeometryScriptPolyPath* ReturnValue);
	struct FVector2D CreateCirclePath2D(float* Radius, int32* NumPoints, struct FGeometryScriptPolyPath* ReturnValue);
	void CreateArcPath3D(struct FTransform* Transform, float* Radius, int32* NumPoints, float* StartAngle, float* EndAngle, struct FGeometryScriptPolyPath* ReturnValue);
	struct FVector2D CreateArcPath2D(float* Radius, int32* NumPoints, float* StartAngle, float* EndAngle, struct FGeometryScriptPolyPath* ReturnValue);
	struct FGeometryScriptSplineSamplingOptions ConvertSplineToPolyPath(class USplineComponent** Spline);
	TArray<struct FVector2D> ConvertPolyPathToArrayOfVector2D();
	TArray<struct FVector> ConvertPolyPathToArray();
	struct FGeometryScriptPolyPath ConvertArrayToPolyPath();
	struct FGeometryScriptPolyPath ConvertArrayOfVector2DToPolyPath();
	struct FGeometryScriptPolyPath Conv_GeometryScriptPolyPathToArrayOfVector2D(TArray<struct FVector2D>* ReturnValue);
	struct FGeometryScriptPolyPath Conv_GeometryScriptPolyPathToArray(TArray<struct FVector>* ReturnValue);
	void Conv_ArrayToGeometryScriptPolyPath(TArray<struct FVector>* PathVertices, struct FGeometryScriptPolyPath* ReturnValue);
	void Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<struct FVector2D>* PathVertices, struct FGeometryScriptPolyPath* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_SceneUtilityFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SetComponentMaterialList(class UPrimitiveComponent** Component);
	void CreateDynamicMeshPool(class UDynamicMeshPool** ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromComponent(class USceneComponent** Component, struct FGeometryScriptCopyMeshFromComponentOptions* Options, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyCollisionMeshesFromObject(class UObject* FromObject, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TransformFunctions* GetDefaultObj();

	void MakeTransformFromZAxis(struct FVector* Location, const struct FVector& ZAxis, struct FTransform* ReturnValue);
	bool MakeTransformFromAxes(struct FVector* Location, const struct FVector& ZAxis, struct FTransform* ReturnValue);
	void GetTransformAxisVector(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, struct FVector* ReturnValue);
	void GetTransformAxisRay(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, struct FRay* ReturnValue);
	void GetTransformAxisPlane(struct FTransform* Transform, enum class EGeometryScriptAxis Axis, struct FPlane* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RayFunctions* GetDefaultObj();

	struct FVector MakeRayFromPoints(struct FRay* ReturnValue);
	bool MakeRayFromPointDirection(struct FRay* ReturnValue);
	void GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform, bool bInvert, struct FRay* ReturnValue);
	struct FVector GetRayStartEnd(const struct FRay& Ray);
	double GetRaySphereIntersection(const struct FRay& Ray, double* SphereRadius, bool* ReturnValue);
	struct FVector GetRaySegmentClosestPoint(const struct FRay& Ray, double* RayParameter, double* ReturnValue);
	struct FVector GetRayPointDistance(const struct FRay& Ray, double* ReturnValue);
	void GetRayPoint(const struct FRay& Ray, double Distance, struct FVector* ReturnValue);
	double GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane, bool* ReturnValue);
	struct FVector GetRayParameter(const struct FRay& Ray, double* ReturnValue);
	struct FVector GetRayLineClosestPoint(const struct FRay& Ray, double* RayParameter, double* ReturnValue);
	struct FVector GetRayClosestPoint(const struct FRay& Ray, struct FVector* ReturnValue);
	double GetRayBoxIntersection(const struct FRay& Ray, struct FBox* Box, bool* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_BoxFunctions* GetDefaultObj();

	bool TestPointInsideBox(struct FBox* Box, bool* ReturnValue);
	struct FVector TestBoxSphereIntersection(struct FBox* Box, double* SphereRadius, bool* ReturnValue);
	struct FBox TestBoxBoxIntersection(bool* ReturnValue);
	struct FVector MakeBoxFromCenterSize(const struct FVector& Dimensions, struct FBox* ReturnValue);
	struct FVector MakeBoxFromCenterExtents(struct FBox* ReturnValue);
	void GetTransformedBox(struct FBox* Box, struct FTransform* Transform, struct FBox* ReturnValue);
	struct FVector GetExpandedBox(struct FBox* Box, struct FBox* ReturnValue);
	void GetBoxVolumeArea(struct FBox* Box, double* Volume, double SurfaceArea);
	struct FVector GetBoxPointDistance(struct FBox* Box, double* ReturnValue);
	struct FVector GetBoxFaceCenter(struct FBox* Box, int32 FaceIndex, struct FVector* ReturnValue);
	int32 GetBoxCorner(struct FBox* Box, struct FVector* ReturnValue);
	struct FVector GetBoxCenterSize(struct FBox* Box, const struct FVector& Dimensions);
	struct FBox GetBoxBoxDistance(double* ReturnValue);
	bool FindClosestPointOnBox(struct FBox* Box, struct FVector* ReturnValue);
	bool FindBoxBoxIntersection(struct FBox* ReturnValue);
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

	double VectorToScalar(double* ConstantX, double* ConstantY, struct FGeometryScriptScalarList* ReturnValue);
	struct FVector VectorNormalizeInPlace();
	struct FGeometryScriptVectorList VectorLength(struct FGeometryScriptScalarList* ReturnValue);
	struct FGeometryScriptVectorList VectorDot(struct FGeometryScriptScalarList* ReturnValue);
	struct FGeometryScriptVectorList VectorCross(struct FGeometryScriptVectorList* ReturnValue);
	double VectorBlendInPlace();
	double VectorBlend(struct FGeometryScriptVectorList* ReturnValue);
	double ScalarVectorMultiplyInPlace();
	double ScalarVectorMultiply(struct FGeometryScriptVectorList* ReturnValue);
	double ScalarMultiplyInPlace();
	double ScalarMultiply(struct FGeometryScriptScalarList* ReturnValue);
	double ScalarInvertInPlace(double Numerator);
	double ScalarInvert(double Numerator, struct FGeometryScriptScalarList* ReturnValue);
	double ScalarBlendInPlace();
	double ScalarBlend(struct FGeometryScriptScalarList* ReturnValue);
	struct FGeometryScriptVectorList ConstantVectorMultiplyInPlace(double* Constant);
	struct FGeometryScriptVectorList ConstantVectorMultiply(double* Constant, struct FGeometryScriptVectorList* ReturnValue);
	struct FGeometryScriptScalarList ConstantScalarMultiplyInPlace(double* Constant);
	struct FGeometryScriptScalarList ConstantScalarMultiply(double* Constant, struct FGeometryScriptScalarList* ReturnValue);
};

}


