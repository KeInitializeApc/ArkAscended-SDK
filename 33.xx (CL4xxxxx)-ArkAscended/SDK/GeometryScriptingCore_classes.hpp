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
	TArray<struct FGeometryScriptDebugMessage>   Messages;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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

	class UDynamicMesh* SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, class UGeometryScriptDebug** Debug);
	struct FGeometryScriptSetSimpleCollisionOptions SetStaticMeshCollisionFromComponent(class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, class UGeometryScriptDebug** Debug);
	bool ResetDynamicMeshCollision(class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ContainmentFunctions* GetDefaultObj();

	class UDynamicMesh* ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FTransform& ProjectionFrame, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ListUtilityFunctions* GetDefaultObj();

	int32 SetVectorListItem(const struct FGeometryScriptVectorList& VectorList, const struct FVector& NewValue, bool* bIsValidIndex);
	int32 SetUVListItem(const struct FGeometryScriptUVList& UVList, struct FVector2D* NewUV, bool* bIsValidIndex);
	int32 SetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, double NewValue, bool* bIsValidIndex);
	int32 SetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32 NewValue, bool* bIsValidIndex);
	int32 SetColorListItem(const struct FGeometryScriptColorList& ColorList, struct FLinearColor* NewColor, bool* bIsValidIndex);
	int32 GetVectorListLength(const struct FGeometryScriptVectorList& VectorList);
	int32 GetVectorListLastIndex(const struct FGeometryScriptVectorList& VectorList);
	struct FVector GetVectorListItem(const struct FGeometryScriptVectorList& VectorList, bool* bIsValidIndex);
	int32 GetUVListLength(const struct FGeometryScriptUVList& UVList);
	int32 GetUVListLastIndex(const struct FGeometryScriptUVList& UVList);
	struct FVector2D GetUVListItem(const struct FGeometryScriptUVList& UVList, bool* bIsValidIndex);
	int32 GetTriangleListLength(const struct FGeometryScriptTriangleList& TriangleList);
	int32 GetTriangleListLastTriangle(const struct FGeometryScriptTriangleList& TriangleList);
	struct FIntVector GetTriangleListItem(const struct FGeometryScriptTriangleList& TriangleList, bool* bIsValidTriangle);
	int32 GetScalarListLength(const struct FGeometryScriptScalarList& ScalarList);
	int32 GetScalarListLastIndex(const struct FGeometryScriptScalarList& ScalarList);
	double GetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, bool* bIsValidIndex);
	int32 GetIndexListLength(const struct FGeometryScriptIndexList& IndexList);
	int32 GetIndexListLastIndex(const struct FGeometryScriptIndexList& IndexList);
	int32 GetIndexListItem(const struct FGeometryScriptIndexList& IndexList, bool* bIsValidIndex);
	int32 GetColorListLength(const struct FGeometryScriptColorList& ColorList);
	int32 GetColorListLastIndex(const struct FGeometryScriptColorList& ColorList);
	struct FLinearColor GetColorListItem(const struct FGeometryScriptColorList& ColorList, bool* bIsValidIndex);
	void ExtractColorListChannels(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptVectorList& VectorList, int32* XChannelIndex, int32* YChannelIndex, int32* ZChannelIndex);
	int32 ExtractColorListChannel(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptScalarList& ScalarList);
	void DuplicateVectorList(const struct FGeometryScriptVectorList& VectorList, struct FGeometryScriptVectorList* DuplicateList);
	void DuplicateUVList(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptUVList* DuplicateList);
	void DuplicateScalarList(const struct FGeometryScriptScalarList& ScalarList, struct FGeometryScriptScalarList* DuplicateList);
	void DuplicateIndexList(const struct FGeometryScriptIndexList& IndexList, struct FGeometryScriptIndexList* DuplicateList);
	void DuplicateColorList(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptColorList* DuplicateList);
	void ConvertVectorListToArray(const struct FGeometryScriptVectorList& VectorList, TArray<struct FVector>* VectorArray);
	void ConvertUVListToArray(const struct FGeometryScriptUVList& UVList, const TArray<struct FVector2D>& UVArray);
	void ConvertTriangleListToArray(const struct FGeometryScriptTriangleList& TriangleList, const TArray<struct FIntVector>& TriangleArray);
	void ConvertScalarListToArray(const struct FGeometryScriptScalarList& ScalarList, TArray<double>* ScalarArray);
	void ConvertIndexListToArray(const struct FGeometryScriptIndexList& IndexList, const TArray<int32>& IndexArray);
	void ConvertColorListToArray(const struct FGeometryScriptColorList& ColorList, const TArray<struct FLinearColor>& ColorArray);
	void ConvertArrayToVectorList(TArray<struct FVector>* VectorArray, const struct FGeometryScriptVectorList& VectorList);
	void ConvertArrayToUVList(const TArray<struct FVector2D>& UVArray, const struct FGeometryScriptUVList& UVList);
	void ConvertArrayToTriangleList(const TArray<struct FIntVector>& TriangleArray, const struct FGeometryScriptTriangleList& TriangleList);
	void ConvertArrayToScalarList(TArray<double>* VectorArray, const struct FGeometryScriptScalarList& ScalarList);
	enum class EGeometryScriptIndexType ConvertArrayToIndexList(const TArray<int32>& IndexArray, const struct FGeometryScriptIndexList& IndexList);
	void ConvertArrayToColorList(const TArray<struct FLinearColor>& ColorArray, const struct FGeometryScriptColorList& ColorList);
	void ClearVectorList(const struct FGeometryScriptVectorList& VectorList, struct FVector* ClearValue);
	void ClearUVList(const struct FGeometryScriptUVList& UVList, const struct FVector2D& ClearUV);
	void ClearScalarList(const struct FGeometryScriptScalarList& ScalarList, double* ClearValue);
	void ClearIndexList(const struct FGeometryScriptIndexList& IndexList, int32* ClearValue);
	struct FLinearColor ClearColorList(const struct FGeometryScriptColorList& ColorList);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_StaticMeshFunctions* GetDefaultObj();

	enum class EGeometryScriptOutcomePins GetSectionMaterialListFromStaticMesh(class UStaticMesh** FromStaticMeshAsset, TArray<class UMaterialInterface*>* MaterialList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh** ToSkeletalMeshAsset, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshFromStaticMesh(class UStaticMesh** FromStaticMeshAsset, class UDynamicMesh** ToDynamicMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshFromSkeletalMesh(class USkeletalMesh** FromSkeletalMeshAsset, class UDynamicMesh** ToDynamicMesh, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBakeFunctions* GetDefaultObj();

	struct FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(int32* SourceUVLayer);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypePosition();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(TArray<class UTexture2D*>* MaterialIDSourceTextures, int32* SourceUVLayer);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(enum class EGeometryScriptBakeCurvatureTypeMode* CurvatureType, enum class EGeometryScriptBakeCurvatureColorMode* ColorMapping, float* ColorRangeMultiplier, float* MinRangeMultiplier, enum class EGeometryScriptBakeCurvatureClampMode* Clamping);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32* OcclusionRays, float* SpreadAngle);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32* OcclusionRays, float* SpreadAngle, float* BiasAngle);
	class UDynamicMesh* BakeVertex(class UDynamicMesh* TargetMesh, struct FGeometryScriptBakeTargetMeshOptions* TargetOptions, struct FTransform* SourceTransform, struct FGeometryScriptBakeSourceMeshOptions* SourceOptions, struct FGeometryScriptBakeOutputType* BakeTypes, struct FGeometryScriptBakeVertexOptions* BakeOptions, class UGeometryScriptDebug** Debug);
	struct FGeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, struct FTransform* TargetLocalToWorld, struct FGeometryScriptBakeTargetMeshOptions* TargetOptions, TArray<class AActor*>* SourceActors, struct FGeometryScriptBakeRenderCaptureOptions* BakeOptions, class UGeometryScriptDebug** Debug);
	TArray<class UTexture2D*> BakeTexture(class UDynamicMesh* TargetMesh, struct FGeometryScriptBakeTargetMeshOptions* TargetOptions, struct FTransform* SourceTransform, struct FGeometryScriptBakeSourceMeshOptions* SourceOptions, TArray<struct FGeometryScriptBakeTypeOptions>* BakeTypes, struct FGeometryScriptBakeTextureOptions* BakeOptions, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* GetDefaultObj();

	class UDynamicMesh* SetVertexPosition(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, bool bIsValidVertex, bool* bDeferChangeNotifications);
	class UDynamicMesh* SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool* bDeferChangeNotifications);
	class UDynamicMesh* DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* VertexList, int32 NumDeleted, bool* bDeferChangeNotifications);
	class UDynamicMesh* DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, bool bWasVertexDeleted, bool* bDeferChangeNotifications);
	class UDynamicMesh* DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleList, int32 NumDeleted, bool* bDeferChangeNotifications);
	class UDynamicMesh* DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, bool bWasTriangleDeleted, bool* bDeferChangeNotifications);
	class UDynamicMesh* DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 NumDeleted, bool* bDeferChangeNotifications);
	class UDynamicMesh* AppendMeshTransformed(class UDynamicMesh* TargetMesh, const TArray<struct FTransform>& AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool* bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendMeshRepeated(class UDynamicMesh* TargetMesh, const struct FTransform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool* bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendMesh(class UDynamicMesh* TargetMesh, const struct FTransform& AppendTransform, bool* bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendBuffersToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSimpleMeshBuffers& Buffers, const struct FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NewPositionsList, const struct FGeometryScriptIndexList& NewIndicesList, bool* bDeferChangeNotifications);
	class UDynamicMesh* AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, int32 NewVertexIndex, bool* bDeferChangeNotifications);
	class UDynamicMesh* AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct FIntVector& NewTriangle, int32 NewTriangleIndex, int32 NewTriangleGroupID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& NewTrianglesList, const struct FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* GetDefaultObj();

	class UDynamicMesh* SetVertexBoneWeights(class UDynamicMesh* TargetMesh, bool* bIsValidVertexID, const struct FGeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool bHasBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool* bProfileExisted, bool bReplaceExistingProfile, const struct FGeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* GetVertexBoneWeights(class UDynamicMesh* TargetMesh, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool bHasBoneWeights, int32 MaxBoneIndex, const struct FGeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBoneWeight& BoneWeight, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBoneWeightProfile& Profile, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBooleanFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, struct FTransform* CutFrame, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, struct FTransform* CutFrame, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshMirror(class UDynamicMesh* TargetMesh, struct FTransform* MirrorFrame, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshBoolean(class UDynamicMesh* TargetMesh, class UDynamicMesh** ToolMesh, struct FTransform* ToolTransform, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshComparisonFunctions* GetDefaultObj();

	class UDynamicMesh* MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh** OtherMesh, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh** OtherMesh, bool* bIsSameMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* IsIntersectingMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** OtherMesh, struct FTransform* OtherTransform, bool* bIsIntersecting, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* GetDefaultObj();

	class UDynamicMesh* SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentPolygroups, class UDynamicMeshPool** MeshPool, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentMaterialIDs, class UDynamicMeshPool** MeshPool, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool** MeshPool, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** StoreToSubmesh, const struct FGeometryScriptIndexList& TriangleList, class UDynamicMesh** StoreToSubmeshOut, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshToMesh(class UDynamicMesh** CopyFromMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh** StoreToSubmesh, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh** StoreToSubmeshOut, bool* bAppendToExisting, bool* bPreserveGroupIDs, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDeformFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, float* TwistExtent, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, struct FTransform* WarpOrientation, enum class EGeometryScriptMathWarpType* WarpType, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, struct FTransform* FlareOrientation, float* FlarePercentX, float* FlarePercentY, float* FlareExtent, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 UVLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, struct FTransform* BendOrientation, float* BendAngle, float* BendExtent, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshMaterialFunctions* GetDefaultObj();

	class UDynamicMesh* SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, bool* bIsValidTriangle, bool* bDeferChangeNotifications);
	class UDynamicMesh* SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 MaterialID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, int32 MaterialID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 MaterialID, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RemapMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, class UGeometryScriptDebug** Debug);
	int32 GetTriangleMaterialID(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle);
	int32 GetMaxMaterialID(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, int32 NumDeleted, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CompactMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32* ClearValue, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshModelingFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshShell(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshOffset(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshNormalsFunctions* GetDefaultObj();

	class UDynamicMesh* UpdateVertexNormal(class UDynamicMesh* TargetMesh, bool bIsValidVertex, bool* bDeferChangeNotifications);
	class UDynamicMesh* SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, struct FGeometryScriptTriangle* Normals, bool* bIsValidTriangle, bool* bDeferChangeNotifications);
	class UDynamicMesh* SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RecomputeNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetMeshHasTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeSplitNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* GetDefaultObj();

	class UDynamicMesh* SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptMeshSelection& Selection, bool* bDeferChangeNotifications);
	class UDynamicMesh* SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer);
	int32 GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, bool* bIsValidTriangle);
	class UDynamicMesh* GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer);
	class UDynamicMesh* GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer);
	class UDynamicMesh* EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 NumDeleted, bool* bDeferChangeNotifications, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 UVLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ClearPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32* ClearValue, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* GetDefaultObj();

	class UDynamicMesh* AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendTorus(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSweepPolyline(class UDynamicMesh* TargetMesh, struct FTransform* Transform, bool bLoop, float StartScale, float EndScale, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSweepPolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, bool bLoop, float StartScale, float EndScale, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSphereLatLong(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSphereBox(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, bool bLoop, float StartScale, float EndScale, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, float Height, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRevolvePolygon(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRevolvePath(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRectangleXY(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendLinearStairs(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendDisc(class UDynamicMesh* TargetMesh, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendCylinder(class UDynamicMesh* TargetMesh, struct FTransform* Transform, float Height, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendCurvedStairs(class UDynamicMesh* TargetMesh, struct FTransform* Transform, float InnerRadius, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendCone(class UDynamicMesh* TargetMesh, struct FTransform* Transform, float Height, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendCapsule(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AppendBox(class UDynamicMesh* TargetMesh, struct FTransform* Transform, enum class EGeometryScriptPrimitiveOriginMode* Origin, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshQueryFunctions* GetDefaultObj();

	bool IsValidVertexID(class UDynamicMesh* TargetMesh);
	bool IsValidTriangleID(class UDynamicMesh* TargetMesh);
	struct FVector GetVertexPosition(class UDynamicMesh* TargetMesh, bool bIsValidVertex);
	int32 GetVertexCount(class UDynamicMesh* TargetMesh);
	struct FBox2D GetUVSetBoundingBox(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetTriangleVertexColors(class UDynamicMesh* TargetMesh);
	bool GetTriangleUVs(class UDynamicMesh* TargetMesh, const struct FVector2D& UV3);
	struct FVector GetTrianglePositions(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle);
	class UDynamicMesh* GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, struct FGeometryScriptTriangle* Normals, const struct FGeometryScriptTriangle& Tangents);
	class UDynamicMesh* GetTriangleNormals(class UDynamicMesh* TargetMesh);
	struct FIntVector GetTriangleIndices(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle);
	struct FVector GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle);
	int32 GetNumVertexIDs(class UDynamicMesh* TargetMesh);
	int32 GetNumUVSets(class UDynamicMesh* TargetMesh);
	int32 GetNumTriangleIDs(class UDynamicMesh* TargetMesh);
	int32 GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh);
	int32 GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh);
	int32 GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh);
	int32 GetNumConnectedComponents(class UDynamicMesh* TargetMesh);
	float GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float* Volume);
	class FString GetMeshInfoString(class UDynamicMesh* TargetMesh);
	bool GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh);
	struct FBox GetMeshBoundingBox(class UDynamicMesh* TargetMesh);
	bool GetIsDenseMesh(class UDynamicMesh* TargetMesh);
	bool GetIsClosedMesh(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle);
	class UDynamicMesh* GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh);
	bool GetHasVertexIDGaps(class UDynamicMesh* TargetMesh);
	bool GetHasVertexColors(class UDynamicMesh* TargetMesh);
	bool GetHasTriangleNormals(class UDynamicMesh* TargetMesh);
	bool GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh);
	bool GetHasPolygroups(class UDynamicMesh* TargetMesh);
	bool GetHasMaterialIDs(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetAllVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList);
	class UDynamicMesh* GetAllVertexIDs(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetAllTriangleIndices(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& TriangleList);
	class UDynamicMesh* GetAllTriangleIDs(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RemeshingFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyUniformRemesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshRepairFunctions* GetDefaultObj();

	class UDynamicMesh* WeldMeshEdges(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SplitMeshBowties(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RemoveSmallComponents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* FillAllMeshHoles(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSamplingFunctions* GetDefaultObj();

	class UDynamicMesh* ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const struct FGeometryScriptScalarList& VertexWeights, const TArray<double>& SampleRadii, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputePointSampling(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const TArray<double>& SampleRadii, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionFunctions* GetDefaultObj();

	class UDynamicMesh* SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& SphereOrigin, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& SelectionMeshTransform, double ShellDistance, double* WindingThreshold, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FBox* Box, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, double MaxAngleDeg, int32 MinNumTrianglePoints);
	class UDynamicMesh* InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected);
	enum class EGeometryScriptMeshSelectionType GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& Selection, int32 NumSelected);
	class UDynamicMesh* ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, enum class EGeometryScriptTopologyConnectionType* ConnectionType);
	class UDynamicMesh* ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours);
	void DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& Selection, bool bDisable);
	class UDynamicMesh* CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptIndexType ResultListType, enum class EGeometryScriptIndexType ConvertToType);
	class UDynamicMesh* ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const TArray<int32>& IndexArray);
	class UDynamicMesh* ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& FromSelection, const struct FGeometryScriptMeshSelection& ToSelection, enum class EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion);
	class UDynamicMesh* ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32> IndexSet, const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& IndexList, const struct FGeometryScriptMeshSelection& Selection);
	class UDynamicMesh* ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, const TArray<int32>& IndexArray, const struct FGeometryScriptMeshSelection& Selection);
	void CombineMeshSelections(const struct FGeometryScriptMeshSelection& SelectionA, const struct FGeometryScriptMeshSelection& SelectionB, const struct FGeometryScriptMeshSelection& ResultSelection, enum class EGeometryScriptCombineSelectionMode CombineMode);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* GetDefaultObj();

	class UDynamicMesh* GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FBox& SelectionBounds, bool bIsEmpty, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const TArray<struct FGeometryScriptIndexList>& IndexLoops, const TArray<struct FGeometryScriptPolyPath>& PathLoops, int32 NumLoops, bool bFoundErrors, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* GetDefaultObj();

	class UDynamicMesh* ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32 Vertexcount, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSpatial* GetDefaultObj();

	void ResetBVH(struct FGeometryScriptDynamicMeshBVH* ResetBVH);
	class UDynamicMesh* RebuildBVHForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* UpdateBVH, bool* bOnlyIfInvalid, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* IsPointInsideMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, const struct FVector& QueryPoint, bool* bIsInside, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* IsBVHValidForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* TestBVH, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, struct FVector* RayOrigin, struct FVector* RayDirection, const struct FGeometryScriptRayHitResult& HitResult, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptTrianglePoint& NearestResult, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* BuildBVHForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& OutputBVH, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32* TessellationLevel, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32* TessellationLevel, enum class ESelectiveTessellatePatternType* PatternType, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyPNTessellation(class UDynamicMesh* TargetMesh, int32* TessellationLevel, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshTransformFunctions* GetDefaultObj();

	class UDynamicMesh* TranslatePivotToLocation(class UDynamicMesh* TargetMesh, struct FVector* PivotLocation, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Translation, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* TranslateMesh(class UDynamicMesh* TargetMesh, const struct FVector& Translation, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FTransform* Transform, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* TransformMesh(class UDynamicMesh* TargetMesh, struct FTransform* Transform, bool* bFixOrientationForNegativeScale, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Scale, struct FVector* ScaleOrigin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ScaleMesh(class UDynamicMesh* TargetMesh, const struct FVector& Scale, struct FVector* ScaleOrigin, bool* bFixOrientationForNegativeScale, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FRotator* Rotation, struct FVector* RotationOrigin, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RotateMesh(class UDynamicMesh* TargetMesh, struct FRotator* Rotation, struct FVector* RotationOrigin, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshUVFunctions* GetDefaultObj();

	class UDynamicMesh* TranslateMeshUVs(class UDynamicMesh* TargetMesh, const struct FVector2D& Translation, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetNumUVSets(class UDynamicMesh* TargetMesh, int32* NumUVSets, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, struct FTransform* CylinderTransform, const struct FGeometryScriptMeshSelection& Selection, float* SplitAngle, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, struct FTransform* BoxTransform, const struct FGeometryScriptMeshSelection& Selection, int32* MinIslandTriCount, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, bool* bIsValidTriangle, bool* bDeferChangeNotifications);
	class UDynamicMesh* ScaleMeshUVs(class UDynamicMesh* TargetMesh, const struct FVector2D& Scale, struct FVector2D* ScaleOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RotateMeshUVs(class UDynamicMesh* TargetMesh, float* RotationAngle, struct FVector2D* RotationOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RepackMeshUVs(class UDynamicMesh* TargetMesh, struct FGeometryScriptRepackUVsOptions* RepackOptions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* RecomputeMeshUVs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, double* MeshArea, double* UVArea, struct FBox* MeshBounds, struct FBox2D* UVBounds, bool* bFoundUnsetUVs, bool* bOnlyIncludeValidUVTris, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptUVList& UVList, bool* bHasSplitUVs, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyUVSet(class UDynamicMesh* TargetMesh, int32* FromUVSet, int32* ToUVSet, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshUVLayerToMesh(class UDynamicMesh** CopyFromMesh, class UDynamicMesh** CopyToUVMesh, class UDynamicMesh** CopyToUVMeshOut, bool* bInvalidTopology, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyMeshToMeshUVLayer(class UDynamicMesh** CopyFromUVMesh, int32* ToUVSetIndex, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, bool* bFoundTopologyErrors, bool* bOnlyUVPositions, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* GetDefaultObj();

	class UDynamicMesh* SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FLinearColor* Color, bool bCreateColorSeam, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& VertexColorList, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, struct FLinearColor* Color, bool bClearExisting, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& ColorList, bool bIsValidColorSet, bool bBlendSplitVertexValues);
	class UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVoxelFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshSolidify(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* ApplyMeshMorphology(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_PolyPathFunctions* GetDefaultObj();

	struct FTransform SampleSplineToTransforms(class USplineComponent** Spline, TArray<struct FTransform>* Frames, const TArray<double>& FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, bool bIncludeScale);
	struct FVector GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, bool* bIsValidIndex);
	struct FVector GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, bool* bIsValidIndex);
	int32 GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath);
	int32 GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath);
	double GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath);
	int32 GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath);
	struct FGeometryScriptPolyPath FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis);
	struct FGeometryScriptPolyPath CreateCirclePath3D(struct FTransform* Transform);
	struct FGeometryScriptPolyPath CreateCirclePath2D();
	struct FGeometryScriptPolyPath CreateArcPath3D(struct FTransform* Transform);
	struct FGeometryScriptPolyPath CreateArcPath2D();
	void ConvertSplineToPolyPath(class USplineComponent** Spline, const struct FGeometryScriptPolyPath& PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions);
	void ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& VertexArray);
	void ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& VertexArray);
	void ConvertArrayToPolyPath(const TArray<struct FVector>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath);
	void ConvertArrayOfVector2DToPolyPath(const TArray<struct FVector2D>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath);
	TArray<struct FVector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath);
	TArray<struct FVector> Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath);
	struct FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath();
	struct FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath();
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_SceneUtilityFunctions* GetDefaultObj();

	class UPrimitiveComponent* SetComponentMaterialList(TArray<class UMaterialInterface*>* MaterialList, class UGeometryScriptDebug** Debug);
	class UDynamicMeshPool* CreateDynamicMeshPool();
	class UDynamicMesh* CopyMeshFromComponent(class UDynamicMesh** ToDynamicMesh, bool bTransformToWorld, class UGeometryScriptDebug** Debug);
	class UDynamicMesh* CopyCollisionMeshesFromObject(class UDynamicMesh** ToDynamicMesh, bool bTransformToWorld, bool bUseComplexCollision, int32 SphereResolution, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TransformFunctions* GetDefaultObj();

	struct FTransform MakeTransformFromZAxis(struct FVector* Location);
	struct FTransform MakeTransformFromAxes(struct FVector* Location, const struct FVector& TangentAxis, bool bTangentIsX);
	struct FVector GetTransformAxisVector(struct FTransform* Transform, enum class EGeometryScriptAxis Axis);
	struct FRay GetTransformAxisRay(struct FTransform* Transform, enum class EGeometryScriptAxis Axis);
	struct FPlane GetTransformAxisPlane(struct FTransform* Transform, enum class EGeometryScriptAxis Axis);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RayFunctions* GetDefaultObj();

	struct FRay MakeRayFromPoints();
	struct FRay MakeRayFromPointDirection(struct FVector* Origin, struct FVector* Direction, bool bDirectionIsNormalized);
	struct FRay GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform);
	void GetRayStartEnd(const struct FRay& Ray, double StartDistance, double EndDistance, const struct FVector& StartPoint, const struct FVector& EndPoint);
	bool GetRaySphereIntersection(const struct FRay& Ray, const struct FVector& SphereCenter, double Distance1, double Distance2);
	double GetRaySegmentClosestPoint(const struct FRay& Ray, const struct FVector& SegStartPoint, const struct FVector& SegEndPoint, const struct FVector& RayPoint, const struct FVector& SegPoint);
	double GetRayPointDistance(const struct FRay& Ray);
	struct FVector GetRayPoint(const struct FRay& Ray);
	bool GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane, double HitDistance);
	double GetRayParameter(const struct FRay& Ray);
	double GetRayLineClosestPoint(const struct FRay& Ray, const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& RayPoint, double LineParameter, const struct FVector& LinePoint);
	struct FVector GetRayClosestPoint(const struct FRay& Ray);
	bool GetRayBoxIntersection(const struct FRay& Ray, struct FBox* Box, double HitDistance);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_BoxFunctions* GetDefaultObj();

	bool TestPointInsideBox(struct FBox* Box, bool* bConsiderOnBoxAsInside);
	bool TestBoxSphereIntersection(struct FBox* Box, const struct FVector& SphereCenter);
	bool TestBoxBoxIntersection(struct FBox* Box1, const struct FBox& Box2);
	struct FBox MakeBoxFromCenterSize();
	struct FBox MakeBoxFromCenterExtents();
	struct FBox GetTransformedBox(struct FBox* Box, struct FTransform* Transform);
	struct FBox GetExpandedBox(struct FBox* Box, struct FVector* ExpandBy);
	double GetBoxVolumeArea(struct FBox* Box, double* Volume);
	double GetBoxPointDistance(struct FBox* Box);
	struct FVector GetBoxFaceCenter(struct FBox* Box, struct FVector* FaceNormal);
	struct FVector GetBoxCorner(struct FBox* Box, int32* CornerIndex);
	struct FVector GetBoxCenterSize(struct FBox* Box);
	double GetBoxBoxDistance(struct FBox* Box1, const struct FBox& Box2);
	struct FVector FindClosestPointOnBox(struct FBox* Box, bool* bIsInside);
	struct FBox FindBoxBoxIntersection(struct FBox* Box1, const struct FBox& Box2, bool* bIsIntersecting);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TextureMapFunctions* GetDefaultObj();

	class UTextureRenderTarget2D* SampleTextureRenderTarget2DAtUVPositions(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptSampleTextureOptions* SampleOptions, const struct FGeometryScriptColorList& ColorList, class UGeometryScriptDebug** Debug);
	class UTexture2D* SampleTexture2DAtUVPositions(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptSampleTextureOptions* SampleOptions, const struct FGeometryScriptColorList& ColorList, class UGeometryScriptDebug** Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_VectorMathFunctions* GetDefaultObj();

	struct FGeometryScriptScalarList VectorToScalar(const struct FGeometryScriptVectorList& VectorList, double* ConstantZ);
	void VectorNormalizeInPlace(const struct FGeometryScriptVectorList& VectorList, struct FVector* SetOnFailure);
	struct FGeometryScriptScalarList VectorLength(const struct FGeometryScriptVectorList& VectorList);
	struct FGeometryScriptScalarList VectorDot(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB);
	struct FGeometryScriptVectorList VectorCross(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB);
	void VectorBlendInPlace(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, double* ConstantA, double* ConstantB);
	struct FGeometryScriptVectorList VectorBlend(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, double* ConstantA, double* ConstantB);
	void ScalarVectorMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double* ScalarMultiplier);
	struct FGeometryScriptVectorList ScalarVectorMultiply(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double* ScalarMultiplier);
	void ScalarMultiplyInPlace(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantMultiplier);
	struct FGeometryScriptScalarList ScalarMultiply(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantMultiplier);
	double ScalarInvertInPlace(const struct FGeometryScriptScalarList& ScalarList, double* SetOnFailure, double* Epsilon);
	struct FGeometryScriptScalarList ScalarInvert(const struct FGeometryScriptScalarList& ScalarList, double* SetOnFailure, double* Epsilon);
	void ScalarBlendInPlace(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantA, double* ConstantB);
	struct FGeometryScriptScalarList ScalarBlend(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantA, double* ConstantB);
	void ConstantVectorMultiplyInPlace(double* Constant, const struct FGeometryScriptVectorList& VectorList);
	struct FGeometryScriptVectorList ConstantVectorMultiply(double* Constant, const struct FGeometryScriptVectorList& VectorList);
	void ConstantScalarMultiplyInPlace(double* Constant, const struct FGeometryScriptScalarList& ScalarList);
	struct FGeometryScriptScalarList ConstantScalarMultiply(double* Constant, const struct FGeometryScriptScalarList& ScalarList);
};

}


