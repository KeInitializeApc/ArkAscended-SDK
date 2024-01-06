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
	TArray<struct FGeometryScriptDebugMessage>   Messages;                                          // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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

	class UGeometryScriptDebug* SetStaticMeshCollisionFromMesh(class UDynamicMesh** FromDynamicMesh, class UStaticMesh** ToStaticMeshAsset, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetStaticMeshCollisionFromComponent(class UPrimitiveComponent* SourceComponent);
	class UGeometryScriptDebug* SetDynamicMeshCollisionFromMesh(class UDynamicMesh** FromDynamicMesh, class UDynamicMeshComponent** ToDynamicMeshComponent, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ResetDynamicMeshCollision(class UDynamicMeshComponent** Component, bool* bEmitTransaction);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ContainmentFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ComputeMeshSweptHull(class UDynamicMesh** TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, struct FTransform* ProjectionFrame, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeMeshConvexHull(class UDynamicMesh** TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeMeshConvexDecomposition(class UDynamicMesh** TargetMesh, class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ListUtilityFunctions* GetDefaultObj();

	bool SetVectorListItem(struct FGeometryScriptVectorList* VectorList);
	bool SetUVListItem(struct FGeometryScriptUVList* UVList);
	bool SetScalarListItem(struct FGeometryScriptScalarList* ScalarList);
	bool SetIndexListItem(struct FGeometryScriptIndexList* IndexList);
	bool SetColorListItem(struct FGeometryScriptColorList* ColorList);
	void GetVectorListLength(struct FGeometryScriptVectorList* VectorList, int32* ReturnValue);
	void GetVectorListLastIndex(struct FGeometryScriptVectorList* VectorList, int32* ReturnValue);
	bool GetVectorListItem(struct FGeometryScriptVectorList* VectorList, struct FVector* ReturnValue);
	void GetUVListLength(struct FGeometryScriptUVList* UVList, int32* ReturnValue);
	void GetUVListLastIndex(struct FGeometryScriptUVList* UVList, int32* ReturnValue);
	bool GetUVListItem(struct FGeometryScriptUVList* UVList, struct FVector2D* ReturnValue);
	void GetTriangleListLength(struct FGeometryScriptTriangleList* TriangleList, int32* ReturnValue);
	void GetTriangleListLastTriangle(struct FGeometryScriptTriangleList* TriangleList, int32* ReturnValue);
	bool GetTriangleListItem(struct FGeometryScriptTriangleList* TriangleList, struct FIntVector* ReturnValue);
	void GetScalarListLength(struct FGeometryScriptScalarList* ScalarList, int32* ReturnValue);
	void GetScalarListLastIndex(struct FGeometryScriptScalarList* ScalarList, int32* ReturnValue);
	bool GetScalarListItem(struct FGeometryScriptScalarList* ScalarList, double* ReturnValue);
	void GetIndexListLength(struct FGeometryScriptIndexList* IndexList, int32* ReturnValue);
	void GetIndexListLastIndex(struct FGeometryScriptIndexList* IndexList, int32* ReturnValue);
	bool GetIndexListItem(struct FGeometryScriptIndexList* IndexList, int32* ReturnValue);
	void GetColorListLength(struct FGeometryScriptColorList* ColorList, int32* ReturnValue);
	void GetColorListLastIndex(struct FGeometryScriptColorList* ColorList, int32* ReturnValue);
	bool GetColorListItem(struct FGeometryScriptColorList* ColorList, struct FLinearColor* ReturnValue);
	int32 ExtractColorListChannels(struct FGeometryScriptColorList* ColorList, struct FGeometryScriptVectorList* VectorList);
	void ExtractColorListChannel(struct FGeometryScriptColorList* ColorList, struct FGeometryScriptScalarList* ScalarList, int32* ChannelIndex);
	struct FGeometryScriptVectorList DuplicateVectorList(struct FGeometryScriptVectorList* VectorList);
	struct FGeometryScriptUVList DuplicateUVList(struct FGeometryScriptUVList* UVList);
	struct FGeometryScriptScalarList DuplicateScalarList(struct FGeometryScriptScalarList* ScalarList);
	struct FGeometryScriptIndexList DuplicateIndexList(struct FGeometryScriptIndexList* IndexList);
	struct FGeometryScriptColorList DuplicateColorList(struct FGeometryScriptColorList* ColorList);
	TArray<struct FVector> ConvertVectorListToArray(struct FGeometryScriptVectorList* VectorList);
	void ConvertUVListToArray(struct FGeometryScriptUVList* UVList, TArray<struct FVector2D>* UVArray);
	void ConvertTriangleListToArray(struct FGeometryScriptTriangleList* TriangleList, TArray<struct FIntVector>* TriangleArray);
	void ConvertScalarListToArray(struct FGeometryScriptScalarList* ScalarList, TArray<double>* ScalarArray);
	void ConvertIndexListToArray(struct FGeometryScriptIndexList* IndexList, TArray<int32>* IndexArray);
	void ConvertColorListToArray(struct FGeometryScriptColorList* ColorList, TArray<struct FLinearColor>* ColorArray);
	TArray<struct FVector> ConvertArrayToVectorList(struct FGeometryScriptVectorList* VectorList);
	void ConvertArrayToUVList(TArray<struct FVector2D>* UVArray, struct FGeometryScriptUVList* UVList);
	void ConvertArrayToTriangleList(TArray<struct FIntVector>* TriangleArray, struct FGeometryScriptTriangleList* TriangleList);
	TArray<double> ConvertArrayToScalarList(struct FGeometryScriptScalarList* ScalarList);
	void ConvertArrayToIndexList(TArray<int32>* IndexArray, struct FGeometryScriptIndexList* IndexList, enum class EGeometryScriptIndexType IndexType);
	void ConvertArrayToColorList(TArray<struct FLinearColor>* ColorArray, struct FGeometryScriptColorList* ColorList);
	void ClearVectorList(struct FGeometryScriptVectorList* VectorList, struct FVector* ClearValue);
	void ClearUVList(struct FGeometryScriptUVList* UVList, struct FVector2D* ClearUV);
	void ClearScalarList(struct FGeometryScriptScalarList* ScalarList, double* ClearValue);
	void ClearIndexList(struct FGeometryScriptIndexList* IndexList, int32* ClearValue);
	struct FLinearColor ClearColorList(struct FGeometryScriptColorList* ColorList);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_StaticMeshFunctions* GetDefaultObj();

	class UGeometryScriptDebug* GetSectionMaterialListFromStaticMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, TArray<int32>* MaterialIndex, enum class EGeometryScriptOutcomePins Outcome);
	class UGeometryScriptDebug* CopyMeshToStaticMesh(class UDynamicMesh** FromDynamicMesh, class UStaticMesh** ToStaticMeshAsset, const struct FGeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshToSkeletalMesh(class UDynamicMesh** FromDynamicMesh, const struct FGeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromStaticMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromSkeletalMesh(const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins Outcome, class UDynamicMesh** ReturnValue);
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
	class UGeometryScriptDebug* BakeVertex(class UDynamicMesh** TargetMesh, struct FTransform* TargetTransform, class UDynamicMesh* SourceMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* BakeTextureFromRenderCaptures(class UDynamicMesh** TargetMesh, struct FGeometryScriptRenderCaptureTextures* ReturnValue);
	class UGeometryScriptDebug* BakeTexture(class UDynamicMesh** TargetMesh, struct FTransform* TargetTransform, class UDynamicMesh* SourceMesh, TArray<class UTexture2D*>* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* GetDefaultObj();

	bool SetVertexPosition(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetAllMeshVertexPositions(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool DiscardMeshAttributes(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool DeleteVerticesFromMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool DeleteVertexFromMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool DeleteTrianglesFromMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptIndexList* TriangleList, class UDynamicMesh** ReturnValue);
	bool DeleteTriangleFromMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool DeleteSelectedTrianglesFromMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendMeshTransformed(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendMeshRepeated(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendBuffersToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool AddVerticesToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool AddVertexToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AddTriangleToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AddTrianglesToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* GetDefaultObj();

	struct FGeometryScriptBoneWeightProfile SetVertexBoneWeights(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile SetAllVertexBoneWeights(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile MeshHasBoneWeights(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile MeshCreateBoneWeights(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetVertexBoneWeights(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetMaxBoneWeightIndex(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptBoneWeightProfile GetLargestVertexBoneWeight(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeSmoothBoneWeights(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBooleanFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshSelfUnion(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPlaneSlice(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPlaneCut(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshMirror(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshBoolean(class UDynamicMesh** TargetMesh, struct FTransform* TargetTransform, enum class EGeometryScriptBooleanOperation* Operation, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshComparisonFunctions* GetDefaultObj();

	class UGeometryScriptDebug* MeasureDistancesBetweenMeshes(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* IsSameMeshAs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* IsIntersectingMesh(class UDynamicMesh** TargetMesh, struct FTransform* TargetTransform, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SplitMeshByPolygroups(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SplitMeshByMaterialIDs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SplitMeshByComponents(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetSubMeshFromMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptIndexList* TriangleList, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshToMesh(class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshSelectionToMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDeformFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyTwistWarpToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyPerlinNoiseToMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMathWarpToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyIterativeSmoothingToMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyFlareWarpToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyDisplaceFromTextureMap(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FGeometryScriptVectorList* VectorList, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyBendWarpToMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshMaterialFunctions* GetDefaultObj();

	bool SetTriangleMaterialID(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetPolygroupMaterialID(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMaterialIDOnTriangles(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMaterialIDForMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetAllTriangleMaterialIDs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RemapMaterialIDs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetTrianglesByMaterialID(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool GetTriangleMaterialID(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	bool GetMaxMaterialID(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	class UGeometryScriptDebug* GetMaterialIDsOfTriangles(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool GetAllTriangleMaterialIDs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* EnableMaterialIDs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* DeleteTrianglesByMaterialID(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CompactMaterialIDs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ClearMaterialIDs(class UDynamicMesh** TargetMesh, int32* ClearValue, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshModelingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshShell(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPolygroupBevel(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshOffsetFaces(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshOffset(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshLinearExtrudeFaces(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshInsetOutsetFaces(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshDuplicateFaces(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshDisconnectFaces(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshBevelSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshNormalsFunctions* GetDefaultObj();

	bool UpdateVertexNormal(class UDynamicMesh** TargetMesh, bool bUpdateNormal, const struct FVector& NewNormal, bool bUpdateTangents, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetPerVertexNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetPerFaceNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool SetMeshTriangleNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexTangents(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RecomputeNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool GetMeshPerVertexTangents(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	bool GetMeshPerVertexNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetMeshHasTangents(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* FlipNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* DiscardTangents(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeTangents(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeSplitNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AutoRepairNormals(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* GetDefaultObj();

	bool SetPolygroupForMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, int32 SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetNumExtendedPolygroupLayers(class UDynamicMesh** TargetMesh, int32 NumLayers, class UDynamicMesh** ReturnValue);
	int32 GetTrianglesInPolygroup(class UDynamicMesh** TargetMesh, const struct FGeometryScriptIndexList& TriangleIDsOut, class UDynamicMesh** ReturnValue);
	bool GetTrianglePolygroupID(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	struct FGeometryScriptGroupLayer GetPolygroupIDsInMesh(class UDynamicMesh** TargetMesh, const struct FGeometryScriptIndexList& PolygroupIDsOut, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptGroupLayer GetAllTrianglePolygroupIDs(class UDynamicMesh** TargetMesh, const struct FGeometryScriptIndexList& PolygroupIDsOut, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* EnablePolygroups(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* DeleteTrianglesInPolygroup(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyPolygroupsLayer(class UDynamicMesh** TargetMesh, const struct FGeometryScriptGroupLayer& FromGroupLayer, const struct FGeometryScriptGroupLayer& ToGroupLayer, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ConvertUVIslandsToPolygroups(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ConvertComponentsToPolygroups(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputePolygroupsFromPolygonDetection(class UDynamicMesh** TargetMesh, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputePolygroupsFromAngleThreshold(class UDynamicMesh** TargetMesh, float CreaseAngle, int32 MinGroupSize, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ClearPolygroups(class UDynamicMesh** TargetMesh, int32* ClearValue, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* GetDefaultObj();

	class UGeometryScriptDebug* AppendVoronoiDiagram2D(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* VoronoiSites, struct FGeometryScriptVoronoiOptions* VoronoiOptions, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendTriangulatedPolygon(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, bool* bAllowSelfIntersections, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendTorus(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, struct FGeometryScriptRevolveOptions* RevolveOptions, float* MajorRadius, float* MinorRadius, int32* MajorSteps, int32* MinorSteps, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSweepPolyline(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolylineVertices, TArray<struct FTransform>* SweepPath, TArray<float>* PolylineTexParamU, TArray<float>* SweepPathTexParamV, float* RotationAngleDeg, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSweepPolygon(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, TArray<struct FTransform>* SweepPath, bool bCapped, float* RotationAngleDeg, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSpiralRevolvePolygon(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, struct FGeometryScriptRevolveOptions* RevolveOptions, float Radius, int32* Steps, float* RisePerRevolution, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSphereLatLong(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, int32* StepsPhi, int32* StepsTheta, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSphereBox(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSimpleSweptPolygon(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, TArray<struct FVector>* SweepPath, bool bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendSimpleExtrudePolygon(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, float Height, int32 HeightSteps, bool bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRoundRectangleXY(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, int32* StepsWidth, int32* StepsHeight, int32* StepsRound, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, int32* StepsWidth, int32* StepsHeight, int32* StepsRound, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRevolvePolygon(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PolygonVertices, struct FGeometryScriptRevolveOptions* RevolveOptions, float Radius, int32* Steps, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRevolvePath(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, TArray<struct FVector2D>* PathVertices, struct FGeometryScriptRevolveOptions* RevolveOptions, int32* Steps, bool bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRectangleXY(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, int32* StepsWidth, int32* StepsHeight, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendRectangle_Compatibility_5_0(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, int32* StepsWidth, int32* StepsHeight, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendLinearStairs(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float* StepWidth, float* StepHeight, float* StepDepth, int32 NumSteps, bool bFloating, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendDisc(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, int32* AngleSteps, int32* SpokeSteps, float* StartAngle, float* EndAngle, float* HoleRadius, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendCylinder(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendCurvedStairs(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float* StepWidth, float* StepHeight, float CurveAngle, int32 NumSteps, bool bFloating, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendCone(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendCapsule(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AppendBox(class UDynamicMesh** TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, struct FTransform* Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshQueryFunctions* GetDefaultObj();

	int32 IsValidVertexID(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	int32 IsValidTriangleID(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	bool GetVertexPosition(class UDynamicMesh** TargetMesh, struct FVector* ReturnValue);
	void GetVertexCount(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	int32 GetUVSetBoundingBox(class UDynamicMesh** TargetMesh, bool bIsValidUVSet, bool bUVSetIsEmpty, struct FBox2D* ReturnValue);
	struct FLinearColor GetTriangleVertexColors(class UDynamicMesh** TargetMesh, bool bTriHasValidVertexColors, class UDynamicMesh** ReturnValue);
	struct FVector2D GetTriangleUVs(class UDynamicMesh** TargetMesh, const struct FVector2D& UV1, const struct FVector2D& UV2, bool bHaveValidUVs);
	bool GetTrianglePositions(class UDynamicMesh** TargetMesh, const struct FVector& Vertex1, const struct FVector& Vertex2, struct FVector* Vertex3);
	struct FGeometryScriptTriangle GetTriangleNormalTangents(class UDynamicMesh** TargetMesh, bool bTriHasValidElements, struct FGeometryScriptTriangle* Tangents, const struct FGeometryScriptTriangle& BiTangents, class UDynamicMesh** ReturnValue);
	int32 GetTriangleNormals(class UDynamicMesh** TargetMesh, const struct FVector& Normal1, const struct FVector& Normal2, const struct FVector& Normal3, bool bTriHasValidNormals, class UDynamicMesh** ReturnValue);
	bool GetTriangleIndices(class UDynamicMesh** TargetMesh, struct FIntVector* ReturnValue);
	bool GetTriangleFaceNormal(class UDynamicMesh** TargetMesh, struct FVector* ReturnValue);
	void GetNumVertexIDs(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	void GetNumUVSets(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	void GetNumTriangleIDs(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	void GetNumOpenBorderLoops(class UDynamicMesh** TargetMesh, bool bAmbiguousTopologyFound, int32* ReturnValue);
	void GetNumOpenBorderEdges(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	void GetNumExtendedPolygroupLayers(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	void GetNumConnectedComponents(class UDynamicMesh** TargetMesh, int32* ReturnValue);
	void GetMeshVolumeArea(class UDynamicMesh** TargetMesh, float SurfaceArea, float* Volume);
	void GetMeshInfoString(class UDynamicMesh** TargetMesh, class FString* ReturnValue);
	void GetMeshHasAttributeSet(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	void GetMeshBoundingBox(class UDynamicMesh** TargetMesh, struct FBox* ReturnValue);
	void GetIsDenseMesh(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	void GetIsClosedMesh(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	int32 GetInterpolatedTriangleVertexColor(class UDynamicMesh** TargetMesh, struct FVector* BarycentricCoords, const struct FLinearColor& DefaultColor, bool bTriHasValidVertexColors, const struct FLinearColor& InterpolatedColor, class UDynamicMesh** ReturnValue);
	int32 GetInterpolatedTriangleUV(class UDynamicMesh** TargetMesh, struct FVector* BarycentricCoords, bool bTriHasValidUVs, const struct FVector2D& InterpolatedUV, class UDynamicMesh** ReturnValue);
	bool GetInterpolatedTrianglePosition(class UDynamicMesh** TargetMesh, struct FVector* BarycentricCoords, const struct FVector& InterpolatedPosition, class UDynamicMesh** ReturnValue);
	int32 GetInterpolatedTriangleNormalTangents(class UDynamicMesh** TargetMesh, struct FVector* BarycentricCoords, bool bTriHasValidElements, struct FVector* InterpolatedNormal, const struct FVector& InterpolatedTangent, const struct FVector& InterpolatedBiTangent, class UDynamicMesh** ReturnValue);
	int32 GetInterpolatedTriangleNormal(class UDynamicMesh** TargetMesh, struct FVector* BarycentricCoords, bool bTriHasValidNormals, struct FVector* InterpolatedNormal, class UDynamicMesh** ReturnValue);
	void GetHasVertexIDGaps(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	void GetHasVertexColors(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	void GetHasTriangleNormals(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	void GetHasTriangleIDGaps(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	void GetHasPolygroups(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	void GetHasMaterialIDs(class UDynamicMesh** TargetMesh, bool* ReturnValue);
	bool GetAllVertexPositions(class UDynamicMesh** TargetMesh, bool* bSkipGaps, class UDynamicMesh** ReturnValue);
	bool GetAllVertexIDs(class UDynamicMesh** TargetMesh, struct FGeometryScriptIndexList* VertexIDList, class UDynamicMesh** ReturnValue);
	void GetAllTriangleIndices(class UDynamicMesh** TargetMesh, struct FGeometryScriptTriangleList* TriangleList, bool* bSkipGaps, bool* bHasTriangleIDGaps, class UDynamicMesh** ReturnValue);
	struct FGeometryScriptIndexList GetAllTriangleIDs(class UDynamicMesh** TargetMesh, bool* bHasTriangleIDGaps, class UDynamicMesh** ReturnValue);
	struct FVector ComputeTriangleBarycentricCoords(class UDynamicMesh** TargetMesh, const struct FVector& Vertex1, const struct FVector& Vertex2, struct FVector* Vertex3, struct FVector* BarycentricCoords, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RemeshingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyUniformRemesh(class UDynamicMesh** TargetMesh, const struct FGeometryScriptRemeshOptions& RemeshOptions, const struct FGeometryScriptUniformRemeshOptions& UniformOptions, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshRepairFunctions* GetDefaultObj();

	class UGeometryScriptDebug* WeldMeshEdges(class UDynamicMesh** TargetMesh, const struct FGeometryScriptWeldEdgesOptions& WeldOptions, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SplitMeshBowties(class UDynamicMesh** TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ResolveMeshTJunctions(class UDynamicMesh** TargetMesh, const struct FGeometryScriptResolveTJunctionOptions& ResolveOptions, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RepairMeshDegenerateGeometry(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RemoveSmallComponents(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RemoveHiddenTriangles(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* FillAllMeshHoles(class UDynamicMesh** TargetMesh, const struct FGeometryScriptFillHolesOptions& FillOptions, int32 NumFilledHoles, int32 NumFailedHoleFills, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CompactMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSamplingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ComputeVertexWeightedPointSampling(class UDynamicMesh** TargetMesh, struct FGeometryScriptNonUniformPointSamplingOptions* NonUniformOptions, struct FGeometryScriptScalarList* VertexWeights, TArray<double>* SampleRadii, const struct FGeometryScriptIndexList& TriangleIDs, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputePointSampling(class UDynamicMesh** TargetMesh, const struct FGeometryScriptIndexList& TriangleIDs, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ComputeNonUniformPointSampling(class UDynamicMesh** TargetMesh, struct FGeometryScriptNonUniformPointSamplingOptions* NonUniformOptions, TArray<double>* SampleRadii, const struct FGeometryScriptIndexList& TriangleIDs, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionFunctions* GetDefaultObj();

	struct FVector SelectMeshElementsWithPlane(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshSelectionType SelectionType, bool* bInvert, int32* MinNumTrianglePoints, class UDynamicMesh** ReturnValue);
	void SelectMeshElementsInSphere(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FVector* SphereOrigin, double SphereRadius, enum class EGeometryScriptMeshSelectionType SelectionType, bool* bInvert, int32* MinNumTrianglePoints, class UDynamicMesh** ReturnValue);
	double SelectMeshElementsInsideMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** SelectionMesh, struct FGeometryScriptMeshSelection* Selection, struct FTransform* SelectionMeshTransform, enum class EGeometryScriptMeshSelectionType SelectionType, bool* bInvert, double* ShellDistance, int32* MinNumTrianglePoints, class UDynamicMesh** ReturnValue);
	void SelectMeshElementsInBox(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FBox* Box, enum class EGeometryScriptMeshSelectionType SelectionType, bool* bInvert, int32* MinNumTrianglePoints, class UDynamicMesh** ReturnValue);
	struct FVector SelectMeshElementsByNormalAngle(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, double* MaxAngleDeg, enum class EGeometryScriptMeshSelectionType SelectionType, bool* bInvert, int32* MinNumTrianglePoints, class UDynamicMesh** ReturnValue);
	void InvertMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FGeometryScriptMeshSelection* NewSelection, bool* bOnlyToConnected, class UDynamicMesh** ReturnValue);
	void GetMeshSelectionInfo(struct FGeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshSelectionType SelectionType, int32* NumSelected);
	void ExpandMeshSelectionToConnected(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FGeometryScriptMeshSelection* NewSelection, enum class EGeometryScriptTopologyConnectionType* ConnectionType, class UDynamicMesh** ReturnValue);
	int32 ExpandContractMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FGeometryScriptMeshSelection* NewSelection, bool* bContract, bool* bOnlyExpandToFaceNeighbours, class UDynamicMesh** ReturnValue);
	void DebugPrintMeshSelection(struct FGeometryScriptMeshSelection* Selection, bool* bDisable);
	void CreateSelectAllMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshSelectionType SelectionType, class UDynamicMesh** ReturnValue);
	void ConvertMeshSelectionToIndexList(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FGeometryScriptIndexList* IndexList, enum class EGeometryScriptIndexType* ResultListType, enum class EGeometryScriptIndexType* ConvertToType, class UDynamicMesh** ReturnValue);
	void ConvertMeshSelectionToIndexArray(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, TArray<int32>* IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, class UDynamicMesh** ReturnValue);
	void ConvertMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* FromSelection, struct FGeometryScriptMeshSelection* ToSelection, enum class EGeometryScriptMeshSelectionType* NewType, bool* bAllowPartialInclusion, class UDynamicMesh** ReturnValue);
	void ConvertIndexSetToMeshSelection(class UDynamicMesh** TargetMesh, TSet<int32>* IndexSet, enum class EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	void ConvertIndexListToMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptIndexList* IndexList, enum class EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	void ConvertIndexArrayToMeshSelection(class UDynamicMesh** TargetMesh, TArray<int32>* IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	enum class EGeometryScriptCombineSelectionMode CombineMeshSelections(struct FGeometryScriptMeshSelection* SelectionA, struct FGeometryScriptMeshSelection* SelectionB, struct FGeometryScriptMeshSelection* ResultSelection);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* GetDefaultObj();

	class UGeometryScriptDebug* GetMeshSelectionBoundingBox(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FBox* SelectionBounds, bool* bIsEmpty, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetMeshSelectionBoundaryLoops(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, TArray<struct FGeometryScriptIndexList>* IndexLoops, TArray<struct FGeometryScriptPolyPath>* PathLoops, int32* NumLoops, bool* bFoundErrors, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplySimplifyToVertexCount(class UDynamicMesh** TargetMesh, int32 Vertexcount, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToTriangleCount(class UDynamicMesh** TargetMesh, int32 TriangleCount, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToTolerance(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToPolygroupTopology(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToPlanar(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSpatial* GetDefaultObj();

	void ResetBVH(struct FGeometryScriptDynamicMeshBVH* ResetBVH);
	class UGeometryScriptDebug* RebuildBVHForMesh(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* IsPointInsideMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, struct FVector* QueryPoint, enum class EGeometryScriptContainmentOutcomePins Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* IsBVHValidForMesh(class UDynamicMesh** TargetMesh, bool* bIsValid, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* FindNearestRayIntersectionWithMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, const struct FGeometryScriptRayHitResult& HitResult, enum class EGeometryScriptSearchOutcomePins Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* FindNearestPointOnMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, struct FVector* QueryPoint, struct FGeometryScriptTrianglePoint* NearestResult, enum class EGeometryScriptSearchOutcomePins Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* BuildBVHForMesh(class UDynamicMesh** TargetMesh, struct FGeometryScriptDynamicMeshBVH* OutputBVH, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyUniformTessellation(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplySelectiveTessellation(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyPNTessellation(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshTransformFunctions* GetDefaultObj();

	class UGeometryScriptDebug* TranslatePivotToLocation(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* TranslateMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& Translation, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* TranslateMesh(class UDynamicMesh** TargetMesh, const struct FVector& Translation, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* TransformMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FTransform* Transform, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* TransformMesh(class UDynamicMesh** TargetMesh, struct FTransform* Transform, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ScaleMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& Scale, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ScaleMesh(class UDynamicMesh** TargetMesh, const struct FVector& Scale, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RotateMeshSelection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FRotator* Rotation, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RotateMesh(class UDynamicMesh** TargetMesh, struct FRotator* Rotation, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshUVFunctions* GetDefaultObj();

	class UGeometryScriptDebug* TranslateMeshUVs(class UDynamicMesh** TargetMesh, const struct FVector2D& Translation, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetNumUVSets(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromPlanarProjection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromCylinderProjection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromBoxProjection(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	bool SetMeshTriangleUVs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ScaleMeshUVs(class UDynamicMesh** TargetMesh, const struct FVector2D& Scale, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RotateMeshUVs(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RepackMeshUVs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* RecomputeMeshUVs(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetMeshUVSizeInfo(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, bool bIsValidUVSet, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* GetMeshPerVertexUVs(class UDynamicMesh** TargetMesh, struct FGeometryScriptUVList* UVList, bool bIsValidUVSet, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyUVSet(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshUVLayerToMesh(bool bIsValidUVSet, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyMeshToMeshUVLayer(class UDynamicMesh** CopyToMesh, class UDynamicMesh** CopyToMeshOut, bool bIsValidUVSet, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AutoGenerateXAtlasMeshUVs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SetMeshSelectionVertexColor(class UDynamicMesh** TargetMesh, struct FGeometryScriptMeshSelection* Selection, struct FLinearColor* Color, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexColors(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* SetMeshConstantVertexColor(class UDynamicMesh** TargetMesh, struct FLinearColor* Color, class UDynamicMesh** ReturnValue);
	bool GetMeshPerVertexColors(class UDynamicMesh** TargetMesh, struct FGeometryScriptColorList* ColorList, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVoxelFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshSolidify(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* ApplyMeshMorphology(class UDynamicMesh** TargetMesh, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_PolyPathFunctions* GetDefaultObj();

	bool SampleSplineToTransforms(class USplineComponent** Spline, const TArray<struct FTransform>& Frames, struct FTransform* RelativeTransform);
	bool GetPolyPathVertex(struct FVector* ReturnValue);
	bool GetPolyPathTangent(struct FVector* ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathNumVertices(int32* ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathLastIndex(int32* ReturnValue);
	struct FGeometryScriptPolyPath GetPolyPathArcLength(double* ReturnValue);
	struct FVector GetNearestVertexIndex(int32* ReturnValue);
	enum class EGeometryScriptAxis FlattenTo2DOnAxis(struct FGeometryScriptPolyPath* ReturnValue);
	void CreateCirclePath3D(struct FTransform* Transform, float Radius, int32* NumPoints, struct FGeometryScriptPolyPath* ReturnValue);
	struct FVector2D CreateCirclePath2D(float Radius, int32* NumPoints, struct FGeometryScriptPolyPath* ReturnValue);
	void CreateArcPath3D(struct FTransform* Transform, float Radius, int32* NumPoints, float* StartAngle, float* EndAngle, struct FGeometryScriptPolyPath* ReturnValue);
	struct FVector2D CreateArcPath2D(float Radius, int32* NumPoints, float* StartAngle, float* EndAngle, struct FGeometryScriptPolyPath* ReturnValue);
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
	class UGeometryScriptDebug* CopyMeshFromComponent(class USceneComponent** Component, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins Outcome, class UDynamicMesh** ReturnValue);
	class UGeometryScriptDebug* CopyCollisionMeshesFromObject(class UObject* FromObject, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins Outcome, class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TransformFunctions* GetDefaultObj();

	void MakeTransformFromZAxis(struct FVector* Location, struct FVector* ZAxis, struct FTransform* ReturnValue);
	bool MakeTransformFromAxes(struct FVector* Location, struct FVector* ZAxis, struct FTransform* ReturnValue);
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
	void GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform, bool* bInvert, struct FRay* ReturnValue);
	struct FVector GetRayStartEnd(const struct FRay& Ray);
	double GetRaySphereIntersection(const struct FRay& Ray, double SphereRadius, bool* ReturnValue);
	struct FVector GetRaySegmentClosestPoint(const struct FRay& Ray, double RayParameter, double* ReturnValue);
	struct FVector GetRayPointDistance(const struct FRay& Ray, double* ReturnValue);
	void GetRayPoint(const struct FRay& Ray, double Distance, struct FVector* ReturnValue);
	double GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane, bool* ReturnValue);
	struct FVector GetRayParameter(const struct FRay& Ray, double* ReturnValue);
	struct FVector GetRayLineClosestPoint(const struct FRay& Ray, double RayParameter, double* ReturnValue);
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
	struct FVector TestBoxSphereIntersection(struct FBox* Box, double SphereRadius, bool* ReturnValue);
	struct FBox TestBoxBoxIntersection(bool* ReturnValue);
	struct FVector MakeBoxFromCenterSize(struct FBox* ReturnValue);
	struct FVector MakeBoxFromCenterExtents(struct FBox* ReturnValue);
	void GetTransformedBox(struct FBox* Box, struct FTransform* Transform, struct FBox* ReturnValue);
	struct FVector GetExpandedBox(struct FBox* Box, struct FBox* ReturnValue);
	void GetBoxVolumeArea(struct FBox* Box, double* Volume, double SurfaceArea);
	struct FVector GetBoxPointDistance(struct FBox* Box, double* ReturnValue);
	struct FVector GetBoxFaceCenter(struct FBox* Box, int32 FaceIndex, struct FVector* ReturnValue);
	int32 GetBoxCorner(struct FBox* Box, struct FVector* ReturnValue);
	struct FVector GetBoxCenterSize(struct FBox* Box);
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

	class UGeometryScriptDebug* SampleTextureRenderTarget2DAtUVPositions(struct FGeometryScriptUVList* UVList, struct FGeometryScriptColorList* ColorList);
	class UGeometryScriptDebug* SampleTexture2DAtUVPositions(struct FGeometryScriptUVList* UVList, struct FGeometryScriptColorList* ColorList);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_VectorMathFunctions* GetDefaultObj();

	double VectorToScalar(struct FGeometryScriptVectorList* VectorList, struct FGeometryScriptScalarList* ReturnValue);
	struct FVector VectorNormalizeInPlace(struct FGeometryScriptVectorList* VectorList);
	void VectorLength(struct FGeometryScriptVectorList* VectorList, struct FGeometryScriptScalarList* ReturnValue);
	struct FGeometryScriptVectorList VectorDot(struct FGeometryScriptScalarList* ReturnValue);
	struct FGeometryScriptVectorList VectorCross(struct FGeometryScriptVectorList* ReturnValue);
	double VectorBlendInPlace();
	double VectorBlend(struct FGeometryScriptVectorList* ReturnValue);
	double ScalarVectorMultiplyInPlace(struct FGeometryScriptScalarList* ScalarList, struct FGeometryScriptVectorList* VectorList);
	double ScalarVectorMultiply(struct FGeometryScriptScalarList* ScalarList, struct FGeometryScriptVectorList* VectorList, struct FGeometryScriptVectorList* ReturnValue);
	double ScalarMultiplyInPlace();
	double ScalarMultiply(struct FGeometryScriptScalarList* ReturnValue);
	double ScalarInvertInPlace(struct FGeometryScriptScalarList* ScalarList, double Numerator);
	double ScalarInvert(struct FGeometryScriptScalarList* ScalarList, double Numerator, struct FGeometryScriptScalarList* ReturnValue);
	double ScalarBlendInPlace();
	double ScalarBlend(struct FGeometryScriptScalarList* ReturnValue);
	void ConstantVectorMultiplyInPlace(double* Constant, struct FGeometryScriptVectorList* VectorList);
	void ConstantVectorMultiply(double* Constant, struct FGeometryScriptVectorList* VectorList, struct FGeometryScriptVectorList* ReturnValue);
	void ConstantScalarMultiplyInPlace(double* Constant, struct FGeometryScriptScalarList* ScalarList);
	void ConstantScalarMultiply(double* Constant, struct FGeometryScriptScalarList* ScalarList, struct FGeometryScriptScalarList* ReturnValue);
};

}


