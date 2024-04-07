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
	TArray<struct FGeometryScriptDebugMessage>   Messages;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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

	class UDynamicMesh* SetStaticMeshCollisionFromMesh(const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug** Debug);
	class UPrimitiveComponent* SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, const struct FGeometryScriptSetSimpleCollisionOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetDynamicMeshCollisionFromMesh(const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug** Debug);
	bool ResetDynamicMeshCollision(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ContainmentFunctions* GetDefaultObj();

	class UDynamicMesh* ComputeMeshSweptHull(const struct FGeometryScriptSweptHullOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeMeshConvexHull(const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptConvexHullOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeMeshConvexDecomposition(const struct FGeometryScriptConvexDecompositionOptions& Options, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ListUtilityFunctions* GetDefaultObj();

	bool SetVectorListItem(const struct FVector& NewValue);
	bool SetUVListItem();
	bool SetScalarListItem(double NewValue);
	bool SetIndexListItem(int32 NewValue);
	bool SetColorListItem();
	int32 GetVectorListLength();
	int32 GetVectorListLastIndex();
	struct FVector GetVectorListItem();
	int32 GetUVListLength();
	int32 GetUVListLastIndex();
	struct FVector2D GetUVListItem();
	int32 GetTriangleListLength();
	int32 GetTriangleListLastTriangle();
	struct FIntVector GetTriangleListItem();
	int32 GetScalarListLength();
	int32 GetScalarListLastIndex();
	double GetScalarListItem();
	int32 GetIndexListLength();
	int32 GetIndexListLastIndex();
	int32 GetIndexListItem();
	int32 GetColorListLength();
	int32 GetColorListLastIndex();
	struct FLinearColor GetColorListItem();
	int32 ExtractColorListChannels();
	int32 ExtractColorListChannel();
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
	enum class EGeometryScriptIndexType ConvertArrayToIndexList();
	struct FGeometryScriptColorList ConvertArrayToColorList();
	struct FGeometryScriptVectorList ClearVectorList(struct FVector* ClearValue);
	struct FVector2D ClearUVList();
	struct FGeometryScriptScalarList ClearScalarList(double* ClearValue);
	struct FGeometryScriptIndexList ClearIndexList(int32* ClearValue);
	struct FGeometryScriptColorList ClearColorList(struct FLinearColor* ClearColor);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_StaticMeshFunctions* GetDefaultObj();

	TArray<int32> GetSectionMaterialListFromStaticMesh(enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshToStaticMesh(const struct FGeometryScriptCopyMeshToAssetOptions& Options, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshToSkeletalMesh(const struct FGeometryScriptCopyMeshToAssetOptions& Options, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshFromStaticMesh(enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshFromSkeletalMesh(enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBakeFunctions* GetDefaultObj();

	struct FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeTexture();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypePosition();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion();
	class UDynamicMesh* BakeVertex(const struct FTransform& TargetTransform, class UGeometryScriptDebug** Debug);
	struct FGeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(const TArray<class AActor*>& SourceActors, class UGeometryScriptDebug** Debug);
	TArray<class UTexture2D*> BakeTexture(const struct FTransform& TargetTransform, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* GetDefaultObj();

	class UDynamicMesh* SetVertexPosition();
	class UDynamicMesh* SetAllMeshVertexPositions(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* DiscardMeshAttributes();
	class UDynamicMesh* DeleteVerticesFromMesh(struct FGeometryScriptIndexList* VertexList);
	class UDynamicMesh* DeleteVertexFromMesh();
	class UDynamicMesh* DeleteTrianglesFromMesh();
	class UDynamicMesh* DeleteTriangleFromMesh();
	class UDynamicMesh* DeleteSelectedTrianglesFromMesh(const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* AppendMeshTransformed(class UDynamicMesh* AppendMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendMeshRepeated(class UDynamicMesh* AppendMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendMesh(class UDynamicMesh* AppendMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendBuffersToMesh(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AddVerticesToMesh();
	class UDynamicMesh* AddVertexToMesh();
	class UDynamicMesh* AddTriangleToMesh(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AddTrianglesToMesh(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* GetDefaultObj();

	class UDynamicMesh* SetVertexBoneWeights(const TArray<struct FGeometryScriptBoneWeight>& BoneWeights);
	class UDynamicMesh* SetAllVertexBoneWeights(const TArray<struct FGeometryScriptBoneWeight>& BoneWeights);
	class UDynamicMesh* MeshHasBoneWeights();
	class UDynamicMesh* MeshCreateBoneWeights();
	class UDynamicMesh* GetVertexBoneWeights(const TArray<struct FGeometryScriptBoneWeight>& BoneWeights);
	class UDynamicMesh* GetMaxBoneWeightIndex();
	class UDynamicMesh* GetLargestVertexBoneWeight();
	class UDynamicMesh* ComputeSmoothBoneWeights(const struct FGeometryScriptSmoothBoneWeightsOptions& Options, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBooleanFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshSelfUnion(const struct FGeometryScriptMeshSelfUnionOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshPlaneSlice(const struct FGeometryScriptMeshPlaneSliceOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshPlaneCut(const struct FGeometryScriptMeshPlaneCutOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshMirror(const struct FGeometryScriptMeshMirrorOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshBoolean(const struct FTransform& TargetTransform, const struct FGeometryScriptMeshBooleanOptions& Options, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshComparisonFunctions* GetDefaultObj();

	class UDynamicMesh* MeasureDistancesBetweenMeshes(const struct FGeometryScriptMeasureMeshDistanceOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* IsSameMeshAs(const struct FGeometryScriptIsSameMeshOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* IsIntersectingMesh(const struct FTransform& TargetTransform, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* GetDefaultObj();

	class UDynamicMesh* SplitMeshByPolygroups(const struct FGeometryScriptGroupLayer& GroupLayer, const TArray<class UDynamicMesh*>& ComponentMeshes, const TArray<int32>& ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SplitMeshByMaterialIDs(const TArray<class UDynamicMesh*>& ComponentMeshes, const TArray<int32>& ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SplitMeshByComponents(const TArray<class UDynamicMesh*>& ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetSubMeshFromMesh(class UDynamicMesh* StoreToSubmesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshSelectionToMesh(class UDynamicMesh* StoreToSubmesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDeformFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyTwistWarpToMesh(const struct FGeometryScriptTwistWarpOptions& Options, const struct FTransform& TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyPerlinNoiseToMesh(const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptPerlinNoiseOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMathWarpToMesh(const struct FTransform& WarpOrientation, enum class EGeometryScriptMathWarpType WarpType, const struct FGeometryScriptMathWarpOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyIterativeSmoothingToMesh(const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIterativeMeshSmoothingOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyFlareWarpToMesh(const struct FGeometryScriptFlareWarpOptions& Options, const struct FTransform& FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyDisplaceFromTextureMap(const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptDisplaceFromTextureOptions& Options, int32 UVLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyDisplaceFromPerVertexVectors(const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyBendWarpToMesh(const struct FGeometryScriptBendWarpOptions& Options, const struct FTransform& BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshMaterialFunctions* GetDefaultObj();

	class UDynamicMesh* SetTriangleMaterialID();
	class UDynamicMesh* SetPolygroupMaterialID(const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, bool bIsValidPolygroupID, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMaterialIDOnTriangles(const struct FGeometryScriptIndexList& TriangleIDList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMaterialIDForMeshSelection(const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetAllTriangleMaterialIDs(const struct FGeometryScriptIndexList& TriangleMaterialIDList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RemapMaterialIDs(int32 FromMaterialID, int32 ToMaterialID, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetTrianglesByMaterialID(const struct FGeometryScriptIndexList& TriangleIDList, class UGeometryScriptDebug** Debug);
	int32 GetTriangleMaterialID();
	int32 GetMaxMaterialID(bool bHasMaterialIDs);
	class UDynamicMesh* GetMaterialIDsOfTriangles(const struct FGeometryScriptIndexList& TriangleIDList, const struct FGeometryScriptIndexList& MaterialIDList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetAllTriangleMaterialIDs(const struct FGeometryScriptIndexList& MaterialIDList, bool bHasMaterialIDs);
	class UDynamicMesh* EnableMaterialIDs(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* DeleteTrianglesByMaterialID(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CompactMaterialIDs(const TArray<class UMaterialInterface*>& SourceMaterialList, const TArray<class UMaterialInterface*>& CompactedMaterialList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ClearMaterialIDs(int32* ClearValue, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshModelingFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshShell(const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshPolygroupBevel(const struct FGeometryScriptMeshBevelOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshOffsetFaces(const struct FGeometryScriptMeshOffsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshOffset(const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshLinearExtrudeFaces(const struct FGeometryScriptMeshLinearExtrudeOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshInsetOutsetFaces(const struct FGeometryScriptMeshInsetOutsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(const struct FGeometryScriptMeshExtrudeOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshDuplicateFaces(const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewTriangles, const struct FGeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshDisconnectFaces(const struct FGeometryScriptMeshSelection& Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshBevelSelection(const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshNormalsFunctions* GetDefaultObj();

	class UDynamicMesh* UpdateVertexNormal(bool* bUpdateNormal, struct FVector* NewNormal, bool* bUpdateTangents, struct FVector* NewTangentX, struct FVector* NewTangentY, bool* bMergeSplitValues);
	class UDynamicMesh* SetPerVertexNormals(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetPerFaceNormals(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshTriangleNormals();
	class UDynamicMesh* SetMeshPerVertexTangents(struct FGeometryScriptVectorList* TangentXList, struct FGeometryScriptVectorList* TangentYList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshPerVertexNormals(struct FGeometryScriptVectorList* VertexNormalList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RecomputeNormals(struct FGeometryScriptCalculateNormalsOptions* CalculateOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshPerVertexTangents(struct FGeometryScriptVectorList* TangentXList, struct FGeometryScriptVectorList* TangentYList, bool* bIsValidTangentSet, bool* bHasVertexIDGaps, bool* bAverageSplitVertexValues);
	class UDynamicMesh* GetMeshPerVertexNormals(struct FGeometryScriptVectorList* NormalList, bool* bIsValidNormalSet, bool* bHasVertexIDGaps, bool* bAverageSplitVertexValues);
	class UDynamicMesh* GetMeshHasTangents(bool* bHasTangents, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* FlipNormals(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* DiscardTangents(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeTangents(const struct FGeometryScriptTangentsOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeSplitNormals(struct FGeometryScriptSplitNormalsOptions* SplitOptions, struct FGeometryScriptCalculateNormalsOptions* CalculateOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AutoRepairNormals(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* GetDefaultObj();

	class UDynamicMesh* SetPolygroupForMeshSelection(const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptMeshSelection& Selection, int32 SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup);
	class UDynamicMesh* SetNumExtendedPolygroupLayers(int32* NumLayers, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetTrianglesInPolygroup(const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, struct FGeometryScriptIndexList* TriangleIDsOut);
	int32 GetTrianglePolygroupID(const struct FGeometryScriptGroupLayer& GroupLayer);
	class UDynamicMesh* GetPolygroupIDsInMesh(const struct FGeometryScriptGroupLayer& GroupLayer, struct FGeometryScriptIndexList* PolygroupIDsOut);
	class UDynamicMesh* GetAllTrianglePolygroupIDs(const struct FGeometryScriptGroupLayer& GroupLayer, struct FGeometryScriptIndexList* PolygroupIDsOut);
	class UDynamicMesh* EnablePolygroups(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* DeleteTrianglesInPolygroup(const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyPolygroupsLayer(struct FGeometryScriptGroupLayer* FromGroupLayer, struct FGeometryScriptGroupLayer* ToGroupLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ConvertUVIslandsToPolygroups(const struct FGeometryScriptGroupLayer& GroupLayer, int32 UVLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ConvertComponentsToPolygroups(const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputePolygroupsFromPolygonDetection(const struct FGeometryScriptGroupLayer& GroupLayer, bool* bRespectUVSeams, bool* bRespectHardNormals, double* QuadAdjacencyWeight, double* QuadMetricClamp, int32* MaxSearchRounds, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputePolygroupsFromAngleThreshold(const struct FGeometryScriptGroupLayer& GroupLayer, float* CreaseAngle, int32* MinGroupSize, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ClearPolygroups(const struct FGeometryScriptGroupLayer& GroupLayer, int32* ClearValue, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* GetDefaultObj();

	class UDynamicMesh* AppendVoronoiDiagram2D(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* VoronoiSites, struct FGeometryScriptVoronoiOptions* VoronoiOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendTriangulatedPolygon(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, bool* bAllowSelfIntersections, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendTorus(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, const struct FGeometryScriptRevolveOptions& RevolveOptions, float* MajorRadius, float* MinorRadius, int32* MajorSteps, int32* MinorSteps, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSweepPolyline(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolylineVertices, const TArray<struct FTransform>& SweepPath, TArray<float>* PolylineTexParamU, TArray<float>* SweepPathTexParamV, float RotationAngleDeg, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSweepPolygon(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FTransform>& SweepPath, bool bCapped, float RotationAngleDeg, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSpiralRevolvePolygon(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSphereLatLong(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, int32 StepsPhi, int32 StepsTheta, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSphereBox(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSimpleSweptPolygon(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FVector>& SweepPath, bool bCapped, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSimpleExtrudePolygon(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, float* Height, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRoundRectangleXY(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRoundRectangle_Compatibility_5_0(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRevolvePolygon(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRevolvePath(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, int32 Steps, bool bCapped, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRectangleXY(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRectangle_Compatibility_5_0(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendLinearStairs(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendDisc(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendCylinder(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, float* Height, int32* RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendCurvedStairs(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float StepWidth, float StepHeight, float CurveAngle, int32 NumSteps, bool bFloating, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendCone(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float BaseRadius, float TopRadius, float* Height, int32* RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendCapsule(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendBox(const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshQueryFunctions* GetDefaultObj();

	bool IsValidVertexID();
	bool IsValidTriangleID();
	struct FVector GetVertexPosition();
	int32 GetVertexCount();
	struct FBox2D GetUVSetBoundingBox(int32 UvSetIndex);
	class UDynamicMesh* GetTriangleVertexColors(bool* bTriHasValidVertexColors);
	bool GetTriangleUVs(int32 UvSetIndex, const struct FVector2D& UV3);
	struct FVector GetTrianglePositions(struct FVector* Vertex3);
	class UDynamicMesh* GetTriangleNormalTangents(bool* bTriHasValidElements, const struct FGeometryScriptTriangle& Tangents);
	class UDynamicMesh* GetTriangleNormals(bool* bTriHasValidNormals);
	struct FIntVector GetTriangleIndices();
	struct FVector GetTriangleFaceNormal();
	int32 GetNumVertexIDs();
	int32 GetNumUVSets();
	int32 GetNumTriangleIDs();
	int32 GetNumOpenBorderLoops(bool* bAmbiguousTopologyFound);
	int32 GetNumOpenBorderEdges();
	int32 GetNumExtendedPolygroupLayers();
	int32 GetNumConnectedComponents();
	float GetMeshVolumeArea(float* SurfaceArea);
	class FString GetMeshInfoString();
	bool GetMeshHasAttributeSet();
	struct FBox GetMeshBoundingBox();
	bool GetIsDenseMesh();
	bool GetIsClosedMesh();
	class UDynamicMesh* GetInterpolatedTriangleVertexColor(struct FVector* BarycentricCoords, struct FLinearColor* DefaultColor, bool* bTriHasValidVertexColors, struct FLinearColor* InterpolatedColor);
	class UDynamicMesh* GetInterpolatedTriangleUV(int32 UvSetIndex, struct FVector* BarycentricCoords, bool* bTriHasValidUVs, struct FVector2D* InterpolatedUV);
	class UDynamicMesh* GetInterpolatedTrianglePosition(struct FVector* BarycentricCoords, struct FVector* InterpolatedPosition);
	class UDynamicMesh* GetInterpolatedTriangleNormalTangents(struct FVector* BarycentricCoords, bool* bTriHasValidElements, struct FVector* InterpolatedNormal, struct FVector* InterpolatedTangent, struct FVector* InterpolatedBiTangent);
	class UDynamicMesh* GetInterpolatedTriangleNormal(struct FVector* BarycentricCoords, bool* bTriHasValidNormals, struct FVector* InterpolatedNormal);
	bool GetHasVertexIDGaps();
	bool GetHasVertexColors();
	bool GetHasTriangleNormals();
	bool GetHasTriangleIDGaps();
	bool GetHasPolygroups();
	bool GetHasMaterialIDs();
	class UDynamicMesh* GetAllVertexPositions(bool* bSkipGaps, bool* bHasVertexIDGaps);
	class UDynamicMesh* GetAllVertexIDs(struct FGeometryScriptIndexList* VertexIDList, bool* bHasVertexIDGaps);
	class UDynamicMesh* GetAllTriangleIndices(bool* bSkipGaps, bool* bHasTriangleIDGaps);
	class UDynamicMesh* GetAllTriangleIDs(const struct FGeometryScriptIndexList& TriangleIDList, bool* bHasTriangleIDGaps);
	class UDynamicMesh* ComputeTriangleBarycentricCoords(struct FVector* Vertex3, struct FVector* BarycentricCoords);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RemeshingFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyUniformRemesh(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshRepairFunctions* GetDefaultObj();

	class UDynamicMesh* WeldMeshEdges(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SplitMeshBowties(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ResolveMeshTJunctions(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RepairMeshDegenerateGeometry(const struct FGeometryScriptDegenerateTriangleOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RemoveSmallComponents(const struct FGeometryScriptRemoveSmallComponentOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RemoveHiddenTriangles(const struct FGeometryScriptRemoveHiddenTrianglesOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* FillAllMeshHoles(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CompactMesh(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSamplingFunctions* GetDefaultObj();

	class UDynamicMesh* ComputeVertexWeightedPointSampling(const struct FGeometryScriptMeshPointSamplingOptions& Options, const TArray<struct FTransform>& Samples, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputePointSampling(const struct FGeometryScriptMeshPointSamplingOptions& Options, const TArray<struct FTransform>& Samples, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeNonUniformPointSampling(const struct FGeometryScriptMeshPointSamplingOptions& Options, const TArray<struct FTransform>& Samples, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionFunctions* GetDefaultObj();

	class UDynamicMesh* SelectMeshElementsWithPlane(const struct FGeometryScriptMeshSelection& Selection, bool* bInvert);
	class UDynamicMesh* SelectMeshElementsInSphere(const struct FGeometryScriptMeshSelection& Selection, bool* bInvert);
	class UDynamicMesh* SelectMeshElementsInsideMesh(const struct FGeometryScriptMeshSelection& Selection, bool* bInvert, double* WindingThreshold);
	class UDynamicMesh* SelectMeshElementsInBox(const struct FGeometryScriptMeshSelection& Selection, struct FBox* Box, bool* bInvert);
	class UDynamicMesh* SelectMeshElementsByNormalAngle(const struct FGeometryScriptMeshSelection& Selection, bool* bInvert);
	class UDynamicMesh* InvertMeshSelection(const struct FGeometryScriptMeshSelection& Selection);
	int32 GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ExpandMeshSelectionToConnected(const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptTopologyConnectionType ConnectionType);
	class UDynamicMesh* ExpandContractMeshSelection(const struct FGeometryScriptMeshSelection& Selection);
	bool DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* CreateSelectAllMeshSelection(const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ConvertMeshSelectionToIndexList(const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ConvertMeshSelectionToIndexArray(const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ConvertMeshSelection(enum class EGeometryScriptMeshSelectionType NewType);
	class UDynamicMesh* ConvertIndexSetToMeshSelection(const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ConvertIndexListToMeshSelection(const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ConvertIndexArrayToMeshSelection(const struct FGeometryScriptMeshSelection& Selection);
	struct FGeometryScriptMeshSelection CombineMeshSelections(enum class EGeometryScriptCombineSelectionMode CombineMode);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* GetDefaultObj();

	class UDynamicMesh* GetMeshSelectionBoundingBox(const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshSelectionBoundaryLoops(const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* GetDefaultObj();

	class UDynamicMesh* ApplySimplifyToVertexCount(const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySimplifyToTriangleCount(int32* TriangleCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySimplifyToTolerance(float Tolerance, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySimplifyToPolygroupTopology(const struct FGeometryScriptPolygroupSimplifyOptions& Options, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySimplifyToPlanar(const struct FGeometryScriptPlanarSimplifyOptions& Options, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSpatial* GetDefaultObj();

	void ResetBVH(struct FGeometryScriptDynamicMeshBVH* ResetBVH);
	class UDynamicMesh* RebuildBVHForMesh(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* IsPointInsideMesh(const struct FGeometryScriptSpatialQueryOptions& Options, enum class EGeometryScriptContainmentOutcomePins Outcome, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* IsBVHValidForMesh(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* FindNearestRayIntersectionWithMesh(struct FVector* RayOrigin, struct FVector* RayDirection, const struct FGeometryScriptSpatialQueryOptions& Options, struct FGeometryScriptRayHitResult* HitResult, enum class EGeometryScriptSearchOutcomePins Outcome, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* FindNearestPointOnMesh(const struct FGeometryScriptSpatialQueryOptions& Options, enum class EGeometryScriptSearchOutcomePins Outcome, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* BuildBVHForMesh(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyUniformTessellation(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySelectiveTessellation(const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptSelectiveTessellateOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyPNTessellation(const struct FGeometryScriptPNTessellateOptions& Options, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshTransformFunctions* GetDefaultObj();

	class UDynamicMesh* TranslatePivotToLocation(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* TranslateMeshSelection(const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* TranslateMesh(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* TransformMeshSelection(const struct FGeometryScriptMeshSelection& Selection, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* TransformMesh(struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ScaleMeshSelection(const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ScaleMesh(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RotateMeshSelection(const struct FGeometryScriptMeshSelection& Selection, struct FRotator* Rotation, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RotateMesh(struct FRotator* Rotation, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshUVFunctions* GetDefaultObj();

	class UDynamicMesh* TranslateMeshUVs(int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetNumUVSets(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshUVsFromPlanarProjection(int32 UvSetIndex, const struct FTransform& PlaneTransform, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshUVsFromCylinderProjection(int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshUVsFromBoxProjection(int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshTriangleUVs(int32 UvSetIndex);
	class UDynamicMesh* ScaleMeshUVs(int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RotateMeshUVs(int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RepackMeshUVs(int32 UvSetIndex, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RecomputeMeshUVs(int32 UvSetIndex, const struct FGeometryScriptRecomputeUVsOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshUVSizeInfo(int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshPerVertexUVs(int32 UvSetIndex, bool* bHasVertexIDGaps, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyUVSet(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32 UvSetIndex, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshToMeshUVLayer(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AutoGenerateXAtlasMeshUVs(int32 UvSetIndex, const struct FGeometryScriptXAtlasOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(int32 UvSetIndex, const struct FGeometryScriptPatchBuilderOptions& Options, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* GetDefaultObj();

	class UDynamicMesh* SetMeshSelectionVertexColor(const struct FGeometryScriptMeshSelection& Selection, struct FLinearColor* Color, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshPerVertexColors(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshConstantVertexColor(struct FLinearColor* Color, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshPerVertexColors(bool* bHasVertexIDGaps);
	class UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVoxelFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshSolidify(const struct FGeometryScriptSolidifyOptions& Options, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshMorphology(const struct FGeometryScriptMorphologyOptions& Options, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_PolyPathFunctions* GetDefaultObj();

	bool SampleSplineToTransforms(TArray<struct FTransform>* Frames, const struct FTransform& RelativeTransform);
	struct FVector GetPolyPathVertex();
	struct FVector GetPolyPathTangent();
	int32 GetPolyPathNumVertices();
	int32 GetPolyPathLastIndex();
	double GetPolyPathArcLength();
	int32 GetNearestVertexIndex();
	struct FGeometryScriptPolyPath FlattenTo2DOnAxis();
	struct FGeometryScriptPolyPath CreateCirclePath3D(struct FTransform* Transform, float Radius);
	struct FGeometryScriptPolyPath CreateCirclePath2D(float Radius);
	struct FGeometryScriptPolyPath CreateArcPath3D(struct FTransform* Transform, float Radius, float StartAngle, float EndAngle);
	struct FGeometryScriptPolyPath CreateArcPath2D(float Radius, float StartAngle, float EndAngle);
	struct FGeometryScriptSplineSamplingOptions ConvertSplineToPolyPath();
	TArray<struct FVector2D> ConvertPolyPathToArrayOfVector2D();
	TArray<struct FVector> ConvertPolyPathToArray();
	struct FGeometryScriptPolyPath ConvertArrayToPolyPath();
	struct FGeometryScriptPolyPath ConvertArrayOfVector2DToPolyPath();
	TArray<struct FVector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D();
	TArray<struct FVector> Conv_GeometryScriptPolyPathToArray();
	struct FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(const TArray<struct FVector>& PathVertices);
	struct FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(const TArray<struct FVector2D>& PathVertices);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_SceneUtilityFunctions* GetDefaultObj();

	TArray<class UMaterialInterface*> SetComponentMaterialList(class UGeometryScriptDebug** Debug);
	class UDynamicMeshPool* CreateDynamicMeshPool();
	class UDynamicMesh* CopyMeshFromComponent(const struct FGeometryScriptCopyMeshFromComponentOptions& Options, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyCollisionMeshesFromObject(enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TransformFunctions* GetDefaultObj();

	struct FTransform MakeTransformFromZAxis(struct FVector* Location);
	struct FTransform MakeTransformFromAxes(struct FVector* Location);
	struct FVector GetTransformAxisVector(struct FTransform* Transform);
	struct FRay GetTransformAxisRay(struct FTransform* Transform);
	struct FPlane GetTransformAxisPlane(struct FTransform* Transform);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RayFunctions* GetDefaultObj();

	struct FRay MakeRayFromPoints();
	struct FRay MakeRayFromPointDirection(struct FVector* Origin);
	struct FRay GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform, bool* bInvert);
	struct FVector GetRayStartEnd(const struct FRay& Ray);
	bool GetRaySphereIntersection(const struct FRay& Ray);
	double GetRaySegmentClosestPoint(const struct FRay& Ray);
	double GetRayPointDistance(const struct FRay& Ray);
	struct FVector GetRayPoint(const struct FRay& Ray);
	bool GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane);
	double GetRayParameter(const struct FRay& Ray);
	double GetRayLineClosestPoint(const struct FRay& Ray);
	struct FVector GetRayClosestPoint(const struct FRay& Ray);
	bool GetRayBoxIntersection(const struct FRay& Ray, struct FBox* Box);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_BoxFunctions* GetDefaultObj();

	bool TestPointInsideBox(struct FBox* Box);
	bool TestBoxSphereIntersection(struct FBox* Box);
	bool TestBoxBoxIntersection();
	struct FBox MakeBoxFromCenterSize(struct FVector* Dimensions);
	struct FBox MakeBoxFromCenterExtents();
	struct FBox GetTransformedBox(struct FBox* Box, struct FTransform* Transform);
	struct FBox GetExpandedBox(struct FBox* Box);
	double GetBoxVolumeArea(struct FBox* Box, double* SurfaceArea);
	double GetBoxPointDistance(struct FBox* Box);
	struct FVector GetBoxFaceCenter(struct FBox* Box);
	struct FVector GetBoxCorner(struct FBox* Box);
	struct FVector GetBoxCenterSize(struct FBox* Box, struct FVector* Dimensions);
	double GetBoxBoxDistance();
	struct FVector FindClosestPointOnBox(struct FBox* Box);
	struct FBox FindBoxBoxIntersection();
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TextureMapFunctions* GetDefaultObj();

	struct FGeometryScriptColorList SampleTextureRenderTarget2DAtUVPositions(class UGeometryScriptDebug** Debug);
	struct FGeometryScriptColorList SampleTexture2DAtUVPositions(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_VectorMathFunctions* GetDefaultObj();

	struct FGeometryScriptScalarList VectorToScalar();
	struct FVector VectorNormalizeInPlace();
	struct FGeometryScriptScalarList VectorLength();
	struct FGeometryScriptScalarList VectorDot();
	struct FGeometryScriptVectorList VectorCross();
	double VectorBlendInPlace();
	struct FGeometryScriptVectorList VectorBlend();
	double ScalarVectorMultiplyInPlace();
	struct FGeometryScriptVectorList ScalarVectorMultiply();
	double ScalarMultiplyInPlace();
	struct FGeometryScriptScalarList ScalarMultiply();
	double ScalarInvertInPlace(double* Epsilon);
	struct FGeometryScriptScalarList ScalarInvert(double* Epsilon);
	double ScalarBlendInPlace();
	struct FGeometryScriptScalarList ScalarBlend();
	struct FGeometryScriptVectorList ConstantVectorMultiplyInPlace(double Constant);
	struct FGeometryScriptVectorList ConstantVectorMultiply(double Constant);
	struct FGeometryScriptScalarList ConstantScalarMultiplyInPlace(double Constant);
	struct FGeometryScriptScalarList ConstantScalarMultiply(double Constant);
};

}


