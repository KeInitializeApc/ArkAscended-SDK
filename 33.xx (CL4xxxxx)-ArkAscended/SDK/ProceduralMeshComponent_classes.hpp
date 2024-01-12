#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetProceduralMeshLibrary* GetDefaultObj();

	void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, struct FVector* PlanePosition, const struct FVector& PlaneNormal, bool* bCreateOtherHalf, class UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
	TArray<struct FVector2D> GetSectionFromStaticMesh(TArray<struct FVector>* Normals, const TArray<struct FProcMeshTangent>& Tangents);
	TArray<struct FVector2D> GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, TArray<struct FVector>* Normals, const TArray<struct FProcMeshTangent>& Tangents);
	TArray<struct FVector2D> GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Normals, const TArray<struct FProcMeshTangent>& Tangents);
	float CreateGridMeshWelded(int32 NumX, int32 NumY);
	TArray<int32> CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding);
	float CreateGridMeshSplit(int32 NumX, int32 NumY, const TArray<struct FVector2D>& UV1s);
	bool CopyProceduralMeshFromStaticMeshComponent(class UProceduralMeshComponent* ProcMeshComponent);
	TArray<int32> ConvertQuadToTriangles(int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	TArray<struct FVector2D> CalculateTangentsForMesh(TArray<struct FVector>* Normals, const TArray<struct FProcMeshTangent>& Tangents);
};

// 0x88 (0x760 - 0x6D8)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_2466[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6E0(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6E1(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2468[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FProcMeshSection>              ProcMeshSections;                                  // 0x6F0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x700(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x710(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x748(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_246A[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralMeshComponent* GetDefaultObj();

	TArray<struct FVector2D> UpdateMeshSection_LinearColor(TArray<struct FVector>* Normals, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool* bSRGBConversion);
	TArray<struct FVector2D> UpdateMeshSection(TArray<struct FVector>* Normals, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);
	int32 SetMeshSectionVisible(bool bNewVisibility);
	bool IsMeshSectionVisible();
	int32 GetNumSections();
	bool CreateMeshSection_LinearColor(TArray<struct FVector>* Normals, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool* bSRGBConversion);
	bool CreateMeshSection(TArray<struct FVector>* Normals, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);
	int32 ClearMeshSection();
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	TArray<struct FVector> AddCollisionConvexMesh();
};

}


