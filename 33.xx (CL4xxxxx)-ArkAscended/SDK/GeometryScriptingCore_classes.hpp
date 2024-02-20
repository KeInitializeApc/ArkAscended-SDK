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
	TArray<struct FGeometryScriptDebugMessage>   Messages;                                          // 0x28(0x10)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
	class UGeometryScriptDebug* ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ContainmentFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ComputeMeshSweptHull(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeMeshConvexHull(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeMeshConvexDecomposition(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ListUtilityFunctions* GetDefaultObj();

	bool SetVectorListItem(int32* Index, struct FVector* NewValue);
	bool SetUVListItem(int32* Index);
	bool SetScalarListItem(int32* Index, double* NewValue);
	bool SetIndexListItem(int32* Index, int32* NewValue);
	bool SetColorListItem(int32* Index);
	struct FGeometryScriptVectorList GetVectorListLength(int32 ReturnValue);
	struct FGeometryScriptVectorList GetVectorListLastIndex(int32 ReturnValue);
	bool GetVectorListItem(int32* Index, const struct FVector& ReturnValue);
	struct FGeometryScriptUVList GetUVListLength(int32 ReturnValue);
	struct FGeometryScriptUVList GetUVListLastIndex(int32 ReturnValue);
	bool GetUVListItem(int32* Index, const struct FVector2D& ReturnValue);
	struct FGeometryScriptTriangleList GetTriangleListLength(int32 ReturnValue);
	struct FGeometryScriptTriangleList GetTriangleListLastTriangle(int32 ReturnValue);
	bool GetTriangleListItem(const struct FIntVector& ReturnValue);
	struct FGeometryScriptScalarList GetScalarListLength(int32 ReturnValue);
	struct FGeometryScriptScalarList GetScalarListLastIndex(int32 ReturnValue);
	bool GetScalarListItem(int32* Index, double ReturnValue);
	struct FGeometryScriptIndexList GetIndexListLength(int32 ReturnValue);
	struct FGeometryScriptIndexList GetIndexListLastIndex(int32 ReturnValue);
	bool GetIndexListItem(int32* Index, int32 ReturnValue);
	struct FGeometryScriptColorList GetColorListLength(int32 ReturnValue);
	struct FGeometryScriptColorList GetColorListLastIndex(int32 ReturnValue);
	bool GetColorListItem(int32* Index, const struct FLinearColor& ReturnValue);
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
	enum class EGeometryScriptIndexType ConvertArrayToIndexList();
	struct FGeometryScriptColorList ConvertArrayToColorList();
	struct FGeometryScriptVectorList ClearVectorList(const struct FVector& ClearValue);
	struct FVector2D ClearUVList();
	struct FGeometryScriptScalarList ClearScalarList(double ClearValue);
	struct FGeometryScriptIndexList ClearIndexList(int32 ClearValue);
	struct FLinearColor ClearColorList();
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_StaticMeshFunctions* GetDefaultObj();

	class UGeometryScriptDebug* GetSectionMaterialListFromStaticMesh(struct FGeometryScriptMeshReadLOD* RequestedLOD, const TArray<int32>& MaterialIndex, enum class EGeometryScriptOutcomePins* Outcome);
	class UGeometryScriptDebug* CopyMeshToStaticMesh(enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshToSkeletalMesh(enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromStaticMesh(const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, struct FGeometryScriptMeshReadLOD* RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromSkeletalMesh(const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, struct FGeometryScriptMeshReadLOD* RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBakeFunctions* GetDefaultObj();

	void MakeBakeTypeVertexColor(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	int32 MakeBakeTypeTexture(class UTexture2D** SourceTexture, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeTangentNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypePosition(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeObjectNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	int32 MakeBakeTypeMultiTexture(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeMaterialID(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeFaceNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	enum class EGeometryScriptBakeCurvatureClampMode MakeBakeTypeCurvature(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	float MakeBakeTypeBentNormal(float MaxDistance, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	float MakeBakeTypeAmbientOcclusion(float MaxDistance, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	class UGeometryScriptDebug* BakeVertex(class UDynamicMesh** SourceMesh, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* BakeTextureFromRenderCaptures(TArray<class AActor*>* SourceActors, const struct FGeometryScriptRenderCaptureTextures& ReturnValue);
	class UGeometryScriptDebug* BakeTexture(class UDynamicMesh** SourceMesh, const TArray<class UTexture2D*>& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* GetDefaultObj();

	class UDynamicMesh* SetVertexPosition(int32* VertexID, const struct FVector& NewPosition, bool bIsValidVertex, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetAllMeshVertexPositions(const struct FGeometryScriptVectorList& PositionList, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* DiscardMeshAttributes(bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptIndexList DeleteVerticesFromMesh(int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* DeleteVertexFromMesh(int32* VertexID, bool bWasVertexDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptIndexList DeleteTrianglesFromMesh(int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* DeleteTriangleFromMesh(int32* TriangleID, bool bWasTriangleDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptMeshSelection DeleteSelectedTrianglesFromMesh(int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendMeshTransformed(class UDynamicMesh** AppendMesh, const TArray<struct FTransform>& AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendMeshRepeated(class UDynamicMesh** AppendMesh, const struct FTransform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendMesh(class UDynamicMesh** AppendMesh, const struct FTransform& AppendTransform, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendBuffersToMesh(const struct FGeometryScriptSimpleMeshBuffers& Buffers, const struct FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* AddVerticesToMesh(const struct FGeometryScriptVectorList& NewPositionsList, const struct FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* AddVertexToMesh(const struct FVector& NewPosition, int32 NewVertexIndex, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AddTriangleToMesh(const struct FIntVector& NewTriangle, int32 NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AddTrianglesToMesh(const struct FGeometryScriptTriangleList& NewTrianglesList, const struct FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* GetDefaultObj();

	class UDynamicMesh* SetVertexBoneWeights(int32* VertexID, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, bool* bIsValidVertexID, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* SetAllVertexBoneWeights(const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* MeshHasBoneWeights(bool* bHasBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* MeshCreateBoneWeights(bool* bProfileExisted, bool* bReplaceExistingProfile, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetVertexBoneWeights(int32* VertexID, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetMaxBoneWeightIndex(bool* bHasBoneWeights, int32 MaxBoneIndex, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetLargestVertexBoneWeight(int32* VertexID, const struct FGeometryScriptBoneWeight& BoneWeight, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeSmoothBoneWeights(class USkeleton* Skeleton, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBooleanFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyMeshSelfUnion(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPlaneSlice(struct FTransform* CutFrame, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshPlaneCut(struct FTransform* CutFrame, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshMirror(struct FTransform* MirrorFrame, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshBoolean(class UDynamicMesh** ToolMesh, struct FTransform* ToolTransform, enum class EGeometryScriptBooleanOperation Operation, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshComparisonFunctions* GetDefaultObj();

	class UGeometryScriptDebug* MeasureDistancesBetweenMeshes(class UDynamicMesh** OtherMesh, double MaxDistance, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* IsSameMeshAs(class UDynamicMesh** OtherMesh, bool* bIsSameMesh, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* IsIntersectingMesh(class UDynamicMesh** OtherMesh, struct FTransform* OtherTransform, bool* bIsIntersecting, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SplitMeshByPolygroups(TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentPolygroups, class UDynamicMeshPool** MeshPool, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SplitMeshByMaterialIDs(TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentMaterialIDs, class UDynamicMeshPool** MeshPool, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SplitMeshByComponents(TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool** MeshPool, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetSubMeshFromMesh(class UDynamicMesh** StoreToSubmesh, class UDynamicMesh** StoreToSubmeshOut, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshToMesh(class UDynamicMesh** CopyFromMesh, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshSelectionToMesh(class UDynamicMesh** StoreToSubmesh, class UDynamicMesh** StoreToSubmeshOut, bool* bAppendToExisting, bool* bPreserveGroupIDs, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDeformFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyTwistWarpToMesh(const struct FTransform& TwistOrientation, float TwistAngle, float TwistExtent, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyPerlinNoiseToMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMathWarpToMesh(const struct FTransform& WarpOrientation, enum class EGeometryScriptMathWarpType WarpType, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyIterativeSmoothingToMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyFlareWarpToMesh(struct FTransform* FlareOrientation, float* FlarePercentX, float* FlarePercentY, float* FlareExtent, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyDisplaceFromTextureMap(class UTexture2D** Texture, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyBendWarpToMesh(struct FTransform* BendOrientation, float* BendAngle, float* BendExtent, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshMaterialFunctions* GetDefaultObj();

	bool SetTriangleMaterialID(int32* TriangleID, int32 MaterialID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetPolygroupMaterialID(int32 PolygroupID, int32 MaterialID, bool bIsValidPolygroupID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMaterialIDOnTriangles(const struct FGeometryScriptIndexList& TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMaterialIDForMeshSelection(int32 MaterialID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetAllTriangleMaterialIDs(const struct FGeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RemapMaterialIDs(int32 FromMaterialID, int32 ToMaterialID, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetTrianglesByMaterialID(int32 MaterialID, const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue);
	bool GetTriangleMaterialID(int32* TriangleID, int32 ReturnValue);
	class UDynamicMesh* GetMaxMaterialID(bool bHasMaterialIDs, int32 ReturnValue);
	class UGeometryScriptDebug* GetMaterialIDsOfTriangles(const struct FGeometryScriptIndexList& TriangleIDList, const struct FGeometryScriptIndexList& MaterialIDList, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetAllTriangleMaterialIDs(const struct FGeometryScriptIndexList& MaterialIDList, bool bHasMaterialIDs, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* EnableMaterialIDs(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* DeleteTrianglesByMaterialID(int32 MaterialID, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CompactMaterialIDs(const TArray<class UMaterialInterface*>& SourceMaterialList, const TArray<class UMaterialInterface*>& CompactedMaterialList, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ClearMaterialIDs(int32 ClearValue, class UDynamicMesh* ReturnValue);
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
	class UGeometryScriptDebug* ApplyMeshOffsetFaces(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshOffset(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshLinearExtrudeFaces(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshInsetOutsetFaces(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshDuplicateFaces(const struct FGeometryScriptMeshSelection& NewTriangles, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshDisconnectFaces(bool bAllowBowtiesInOutput, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplyMeshBevelSelection(enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshNormalsFunctions* GetDefaultObj();

	class UDynamicMesh* UpdateVertexNormal(int32* VertexID, bool* bUpdateNormal, struct FVector* NewNormal, bool* bUpdateTangents, struct FVector* NewTangentX, struct FVector* NewTangentY, bool bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetPerVertexNormals(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetPerFaceNormals(class UDynamicMesh* ReturnValue);
	bool SetMeshTriangleNormals(int32* TriangleID, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
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

	struct FGeometryScriptMeshSelection SetPolygroupForMeshSelection(int32* SetPolygroupIDOut, int32* SetPolygroupID, bool* bGenerateNewPolygroup, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetNumExtendedPolygroupLayers(int32* NumLayers, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptGroupLayer GetTrianglesInPolygroup(int32 PolygroupID, struct FGeometryScriptIndexList* TriangleIDsOut, class UDynamicMesh* ReturnValue);
	bool GetTrianglePolygroupID(int32* TriangleID, int32 ReturnValue);
	struct FGeometryScriptGroupLayer GetPolygroupIDsInMesh(struct FGeometryScriptIndexList* PolygroupIDsOut, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptGroupLayer GetAllTrianglePolygroupIDs(struct FGeometryScriptIndexList* PolygroupIDsOut, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* EnablePolygroups(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* DeleteTrianglesInPolygroup(int32 PolygroupID, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyPolygroupsLayer(struct FGeometryScriptGroupLayer* FromGroupLayer, struct FGeometryScriptGroupLayer* ToGroupLayer, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ConvertUVIslandsToPolygroups(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ConvertComponentsToPolygroups(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputePolygroupsFromPolygonDetection(bool* bRespectUVSeams, bool* bRespectHardNormals, double* QuadAdjacencyWeight, double* QuadMetricClamp, int32* MaxSearchRounds, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputePolygroupsFromAngleThreshold(float* CreaseAngle, int32* MinGroupSize, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ClearPolygroups(int32 ClearValue, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* GetDefaultObj();

	class UGeometryScriptDebug* AppendVoronoiDiagram2D(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendTriangulatedPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendTorus(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSweepPolyline(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float StartScale, float EndScale, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSweepPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, bool* bCapped, float StartScale, float EndScale, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSpiralRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSphereLatLong(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSphereBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSimpleSweptPolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, bool* bCapped, float StartScale, float EndScale, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendSimpleExtrudePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRoundRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, float CornerRadius, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRoundRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, float CornerRadius, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRevolvePolygon(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRevolvePath(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRectangleXY(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendRectangle_Compatibility_5_0(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendLinearStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendDisc(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendCylinder(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, int32* RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendCurvedStairs(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float InnerRadius, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendCone(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* TopRadius, int32* RadialSteps, int32* HeightSteps, bool* bCapped, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendCapsule(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* Radius, float* LineLength, int32* HemisphereSteps, int32* CircleSteps, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AppendBox(struct FGeometryScriptPrimitiveOptions* PrimitiveOptions, struct FTransform* Transform, float* DimensionX, float* DimensionY, float* DimensionZ, int32* StepsX, int32* StepsY, int32* StepsZ, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshQueryFunctions* GetDefaultObj();

	class UDynamicMesh* IsValidVertexID(int32* VertexID, bool ReturnValue);
	class UDynamicMesh* IsValidTriangleID(int32* TriangleID, bool ReturnValue);
	class UDynamicMesh* GetVertexPosition(int32* VertexID, bool bIsValidVertex, const struct FVector& ReturnValue);
	class UDynamicMesh* GetVertexCount(int32 ReturnValue);
	bool GetUVSetBoundingBox(int32 UvSetIndex, const struct FBox2D& ReturnValue);
	bool GetTriangleVertexColors(int32* TriangleID, struct FLinearColor* Color1, struct FLinearColor* Color2, struct FLinearColor* Color3, class UDynamicMesh* ReturnValue);
	bool GetTriangleUVs(int32 UvSetIndex, int32* TriangleID, struct FVector2D* UV3);
	struct FVector GetTrianglePositions(int32* TriangleID, struct FVector* Vertex1, struct FVector* Vertex2);
	struct FGeometryScriptTriangle GetTriangleNormalTangents(int32* TriangleID, class UDynamicMesh* ReturnValue);
	bool GetTriangleNormals(int32* TriangleID, class UDynamicMesh* ReturnValue);
	bool GetTriangleIndices(int32* TriangleID, const struct FIntVector& ReturnValue);
	bool GetTriangleFaceNormal(int32* TriangleID, const struct FVector& ReturnValue);
	class UDynamicMesh* GetNumVertexIDs(int32 ReturnValue);
	class UDynamicMesh* GetNumUVSets(int32 ReturnValue);
	class UDynamicMesh* GetNumTriangleIDs(int32 ReturnValue);
	bool GetNumOpenBorderLoops(int32 ReturnValue);
	class UDynamicMesh* GetNumOpenBorderEdges(int32 ReturnValue);
	class UDynamicMesh* GetNumExtendedPolygroupLayers(int32 ReturnValue);
	class UDynamicMesh* GetNumConnectedComponents(int32 ReturnValue);
	float GetMeshVolumeArea();
	class UDynamicMesh* GetMeshInfoString(const class FString& ReturnValue);
	class UDynamicMesh* GetMeshHasAttributeSet(bool ReturnValue);
	class UDynamicMesh* GetMeshBoundingBox(const struct FBox& ReturnValue);
	class UDynamicMesh* GetIsDenseMesh(bool ReturnValue);
	class UDynamicMesh* GetIsClosedMesh(bool ReturnValue);
	struct FLinearColor GetInterpolatedTriangleVertexColor(int32* TriangleID, class UDynamicMesh* ReturnValue);
	struct FVector2D GetInterpolatedTriangleUV(int32 UvSetIndex, int32* TriangleID, class UDynamicMesh* ReturnValue);
	struct FVector GetInterpolatedTrianglePosition(int32* TriangleID, class UDynamicMesh* ReturnValue);
	struct FVector GetInterpolatedTriangleNormalTangents(int32* TriangleID, class UDynamicMesh* ReturnValue);
	struct FVector GetInterpolatedTriangleNormal(int32* TriangleID, class UDynamicMesh* ReturnValue);
	class UDynamicMesh* GetHasVertexIDGaps(bool ReturnValue);
	class UDynamicMesh* GetHasVertexColors(bool ReturnValue);
	class UDynamicMesh* GetHasTriangleNormals(bool ReturnValue);
	class UDynamicMesh* GetHasTriangleIDGaps(bool ReturnValue);
	class UDynamicMesh* GetHasPolygroups(bool ReturnValue);
	class UDynamicMesh* GetHasMaterialIDs(bool ReturnValue);
	bool GetAllVertexPositions(const struct FGeometryScriptVectorList& PositionList, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptIndexList GetAllVertexIDs(bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	bool GetAllTriangleIndices(class UDynamicMesh* ReturnValue);
	bool GetAllTriangleIDs(const struct FGeometryScriptIndexList& TriangleIDList, class UDynamicMesh* ReturnValue);
	struct FVector ComputeTriangleBarycentricCoords(int32* TriangleID, struct FVector* Vertex1, struct FVector* Vertex2, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RemeshingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplyUniformRemesh(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshRepairFunctions* GetDefaultObj();

	class UGeometryScriptDebug* WeldMeshEdges(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SplitMeshBowties(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ResolveMeshTJunctions(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RepairMeshDegenerateGeometry(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RemoveSmallComponents(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RemoveHiddenTriangles(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* FillAllMeshHoles(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CompactMesh(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSamplingFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ComputeVertexWeightedPointSampling(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputePointSampling(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ComputeNonUniformPointSampling(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionFunctions* GetDefaultObj();

	int32 SelectMeshElementsWithPlane(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	int32 SelectMeshElementsInSphere(double SphereRadius, enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	int32 SelectMeshElementsInsideMesh(enum class EGeometryScriptMeshSelectionType* SelectionType, double* WindingThreshold, class UDynamicMesh* ReturnValue);
	int32 SelectMeshElementsInBox(struct FBox* Box, enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	int32 SelectMeshElementsByNormalAngle(struct FVector* Normal, enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	bool InvertMeshSelection(class UDynamicMesh* ReturnValue);
	int32 GetMeshSelectionInfo(enum class EGeometryScriptMeshSelectionType* SelectionType);
	struct FGeometryScriptMeshSelection ExpandMeshSelectionToConnected(enum class EGeometryScriptTopologyConnectionType* ConnectionType, class UDynamicMesh* ReturnValue);
	bool ExpandContractMeshSelection(class UDynamicMesh* ReturnValue);
	bool DebugPrintMeshSelection();
	struct FGeometryScriptMeshSelection CreateSelectAllMeshSelection(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	enum class EGeometryScriptIndexType ConvertMeshSelectionToIndexList(class UDynamicMesh* ReturnValue);
	TArray<int32> ConvertMeshSelectionToIndexArray(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	bool ConvertMeshSelection(enum class EGeometryScriptMeshSelectionType NewType, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptMeshSelection ConvertIndexSetToMeshSelection(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptMeshSelection ConvertIndexListToMeshSelection(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptMeshSelection ConvertIndexArrayToMeshSelection(enum class EGeometryScriptMeshSelectionType* SelectionType, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptMeshSelection CombineMeshSelections(enum class EGeometryScriptCombineSelectionMode* CombineMode);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* GetDefaultObj();

	class UGeometryScriptDebug* GetMeshSelectionBoundingBox(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetMeshSelectionBoundaryLoops(class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* GetDefaultObj();

	class UGeometryScriptDebug* ApplySimplifyToVertexCount(int32* Vertexcount, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ApplySimplifyToTriangleCount(class UDynamicMesh* ReturnValue);
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

	struct FGeometryScriptDynamicMeshBVH ResetBVH();
	class UGeometryScriptDebug* RebuildBVHForMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* IsPointInsideMesh(enum class EGeometryScriptContainmentOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* IsBVHValidForMesh(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* FindNearestRayIntersectionWithMesh(enum class EGeometryScriptSearchOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
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
	class UGeometryScriptDebug* ApplySelectiveTessellation(class UDynamicMesh* ReturnValue);
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
	class UGeometryScriptDebug* TranslateMeshSelection(struct FVector* Translation, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* TranslateMesh(struct FVector* Translation, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* TransformMeshSelection(struct FTransform* Transform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* TransformMesh(struct FTransform* Transform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ScaleMeshSelection(struct FVector* Scale, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ScaleMesh(struct FVector* Scale, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RotateMeshSelection(struct FRotator* Rotation, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RotateMesh(struct FRotator* Rotation, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshUVFunctions* GetDefaultObj();

	class UGeometryScriptDebug* TranslateMeshUVs(int32 UvSetIndex, struct FVector2D* Translation, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetNumUVSets(int32 NumUVSets, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromPlanarProjection(int32 UvSetIndex, struct FTransform* PlaneTransform, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromCylinderProjection(int32 UvSetIndex, const struct FTransform& CylinderTransform, float SplitAngle, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshUVsFromBoxProjection(int32 UvSetIndex, class UDynamicMesh* ReturnValue);
	bool SetMeshTriangleUVs(int32 UvSetIndex, int32* TriangleID, struct FGeometryScriptUVTriangle* UVs, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* ScaleMeshUVs(int32 UvSetIndex, struct FVector2D* Scale, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RotateMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RepackMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* RecomputeMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetMeshUVSizeInfo(int32 UvSetIndex, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* GetMeshPerVertexUVs(int32 UvSetIndex, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyUVSet(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshUVLayerToMesh(class UDynamicMesh** CopyFromMesh, int32 UvSetIndex, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyMeshToMeshUVLayer(class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AutoGenerateXAtlasMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* AutoGeneratePatchBuilderMeshUVs(int32 UvSetIndex, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SetMeshSelectionVertexColor(struct FLinearColor* Color, bool bCreateColorSeam, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshPerVertexColors(const struct FGeometryScriptColorList& VertexColorList, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* SetMeshConstantVertexColor(struct FLinearColor* Color, bool bClearExisting, class UDynamicMesh* ReturnValue);
	struct FGeometryScriptColorList GetMeshPerVertexColors(bool bIsValidColorSet, bool bHasVertexIDGaps, bool bBlendSplitVertexValues, class UDynamicMesh* ReturnValue);
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

	struct FTransform SampleSplineToTransforms(const TArray<double>& FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, bool bIncludeScale);
	bool GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, int32* Index, const struct FVector& ReturnValue);
	bool GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, int32* Index, const struct FVector& ReturnValue);
	void GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue);
	void GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue);
	void GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath, double ReturnValue);
	struct FVector GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue);
	void FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis, const struct FGeometryScriptPolyPath& ReturnValue);
	void CreateCirclePath3D(struct FTransform* Transform, float* Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue);
	void CreateCirclePath2D(struct FVector2D* Center, float* Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue);
	float CreateArcPath3D(struct FTransform* Transform, float* Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue);
	float CreateArcPath2D(struct FVector2D* Center, float* Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue);
	class USplineComponent* ConvertSplineToPolyPath(const struct FGeometryScriptPolyPath& PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions);
	void ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& VertexArray);
	void ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& VertexArray);
	void ConvertArrayToPolyPath(const TArray<struct FVector>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath);
	void ConvertArrayOfVector2DToPolyPath(const TArray<struct FVector2D>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath);
	void Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& ReturnValue);
	void Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& ReturnValue);
	TArray<struct FVector> Conv_ArrayToGeometryScriptPolyPath(const struct FGeometryScriptPolyPath& ReturnValue);
	TArray<struct FVector2D> Conv_ArrayOfVector2DToGeometryScriptPolyPath(const struct FGeometryScriptPolyPath& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_SceneUtilityFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SetComponentMaterialList(class UPrimitiveComponent* Component);
	void CreateDynamicMeshPool(class UDynamicMeshPool* ReturnValue);
	class UGeometryScriptDebug* CopyMeshFromComponent(class USceneComponent* Component, bool bTransformToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UDynamicMesh* ReturnValue);
	class UGeometryScriptDebug* CopyCollisionMeshesFromObject(class UObject** FromObject, bool bTransformToWorld, enum class EGeometryScriptOutcomePins* Outcome, bool bUseComplexCollision, int32 SphereResolution, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TransformFunctions* GetDefaultObj();

	struct FVector MakeTransformFromZAxis(struct FVector* Location, const struct FTransform& ReturnValue);
	struct FVector MakeTransformFromAxes(struct FVector* Location, const struct FVector& TangentAxis, bool bTangentIsX, const struct FTransform& ReturnValue);
	void GetTransformAxisVector(struct FTransform* Transform, enum class EGeometryScriptAxis* Axis, const struct FVector& ReturnValue);
	void GetTransformAxisRay(struct FTransform* Transform, enum class EGeometryScriptAxis* Axis, const struct FRay& ReturnValue);
	void GetTransformAxisPlane(struct FTransform* Transform, enum class EGeometryScriptAxis* Axis, const struct FPlane& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RayFunctions* GetDefaultObj();

	struct FVector MakeRayFromPoints(const struct FRay& ReturnValue);
	struct FVector MakeRayFromPointDirection(bool* bDirectionIsNormalized, const struct FRay& ReturnValue);
	bool GetTransformedRay(const struct FRay& Ray, struct FTransform* Transform, const struct FRay& ReturnValue);
	void GetRayStartEnd(const struct FRay& Ray, double StartDistance, double EndDistance, const struct FVector& StartPoint, const struct FVector& EndPoint);
	void GetRaySphereIntersection(const struct FRay& Ray, const struct FVector& SphereCenter, double SphereRadius, double Distance1, double Distance2, bool ReturnValue);
	double GetRaySegmentClosestPoint(const struct FRay& Ray, const struct FVector& SegStartPoint, const struct FVector& SegEndPoint, const struct FVector& RayPoint, const struct FVector& SegPoint, double ReturnValue);
	struct FVector GetRayPointDistance(const struct FRay& Ray, double ReturnValue);
	double GetRayPoint(const struct FRay& Ray, const struct FVector& ReturnValue);
	void GetRayPlaneIntersection(const struct FRay& Ray, struct FPlane* Plane, double HitDistance, bool ReturnValue);
	struct FVector GetRayParameter(const struct FRay& Ray, double ReturnValue);
	double GetRayLineClosestPoint(const struct FRay& Ray, const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& RayPoint, double LineParameter, const struct FVector& LinePoint, double ReturnValue);
	struct FVector GetRayClosestPoint(const struct FRay& Ray, const struct FVector& ReturnValue);
	void GetRayBoxIntersection(const struct FRay& Ray, struct FBox* Box, double HitDistance, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_BoxFunctions* GetDefaultObj();

	struct FVector TestPointInsideBox(struct FBox* Box, bool* bConsiderOnBoxAsInside, bool ReturnValue);
	void TestBoxSphereIntersection(struct FBox* Box, const struct FVector& SphereCenter, double SphereRadius, bool ReturnValue);
	void TestBoxBoxIntersection(struct FBox* Box1, struct FBox* Box2, bool ReturnValue);
	void MakeBoxFromCenterSize(struct FVector* Center, struct FVector* Dimensions, const struct FBox& ReturnValue);
	struct FVector MakeBoxFromCenterExtents(struct FVector* Center, const struct FBox& ReturnValue);
	void GetTransformedBox(struct FBox* Box, struct FTransform* Transform, const struct FBox& ReturnValue);
	void GetExpandedBox(struct FBox* Box, struct FVector* ExpandBy, const struct FBox& ReturnValue);
	double GetBoxVolumeArea(struct FBox* Box);
	struct FVector GetBoxPointDistance(struct FBox* Box, double ReturnValue);
	int32 GetBoxFaceCenter(struct FBox* Box, struct FVector* FaceNormal, const struct FVector& ReturnValue);
	void GetBoxCorner(struct FBox* Box, int32* CornerIndex, const struct FVector& ReturnValue);
	void GetBoxCenterSize(struct FBox* Box, struct FVector* Center, struct FVector* Dimensions);
	void GetBoxBoxDistance(struct FBox* Box1, struct FBox* Box2, double ReturnValue);
	bool FindClosestPointOnBox(struct FBox* Box, const struct FVector& ReturnValue);
	void FindBoxBoxIntersection(struct FBox* Box1, struct FBox* Box2, bool* bIsIntersecting, const struct FBox& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TextureMapFunctions* GetDefaultObj();

	class UGeometryScriptDebug* SampleTextureRenderTarget2DAtUVPositions(class UTextureRenderTarget2D** Texture, struct FGeometryScriptSampleTextureOptions* SampleOptions);
	class UGeometryScriptDebug* SampleTexture2DAtUVPositions(class UTexture2D** Texture, struct FGeometryScriptSampleTextureOptions* SampleOptions);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_VectorMathFunctions* GetDefaultObj();

	double VectorToScalar(double* ConstantZ, const struct FGeometryScriptScalarList& ReturnValue);
	struct FGeometryScriptVectorList VectorNormalizeInPlace(struct FVector* SetOnFailure);
	struct FGeometryScriptVectorList VectorLength(const struct FGeometryScriptScalarList& ReturnValue);
	void VectorDot(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, const struct FGeometryScriptScalarList& ReturnValue);
	void VectorCross(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, const struct FGeometryScriptVectorList& ReturnValue);
	void VectorBlendInPlace(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, double* ConstantA, double* ConstantB);
	void VectorBlend(struct FGeometryScriptVectorList* VectorListA, struct FGeometryScriptVectorList* VectorListB, double* ConstantA, double* ConstantB, const struct FGeometryScriptVectorList& ReturnValue);
	struct FGeometryScriptVectorList ScalarVectorMultiplyInPlace(double* ScalarMultiplier);
	struct FGeometryScriptVectorList ScalarVectorMultiply(double* ScalarMultiplier, const struct FGeometryScriptVectorList& ReturnValue);
	void ScalarMultiplyInPlace(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantMultiplier);
	void ScalarMultiply(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantMultiplier, const struct FGeometryScriptScalarList& ReturnValue);
	struct FGeometryScriptScalarList ScalarInvertInPlace(double* Numerator, double* SetOnFailure, double* Epsilon);
	struct FGeometryScriptScalarList ScalarInvert(double* Numerator, double* SetOnFailure, double* Epsilon, const struct FGeometryScriptScalarList& ReturnValue);
	void ScalarBlendInPlace(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantA, double* ConstantB);
	void ScalarBlend(struct FGeometryScriptScalarList* ScalarListA, struct FGeometryScriptScalarList* ScalarListB, double* ConstantA, double* ConstantB, const struct FGeometryScriptScalarList& ReturnValue);
	struct FGeometryScriptVectorList ConstantVectorMultiplyInPlace();
	struct FGeometryScriptVectorList ConstantVectorMultiply(const struct FGeometryScriptVectorList& ReturnValue);
	struct FGeometryScriptScalarList ConstantScalarMultiplyInPlace();
	struct FGeometryScriptScalarList ConstantScalarMultiply(const struct FGeometryScriptScalarList& ReturnValue);
};

}


