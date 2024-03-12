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

	struct FVector SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, bool bCreateOtherHalf, class UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
	TArray<struct FVector2D> GetSectionFromStaticMesh(class UStaticMesh* InMesh, const TArray<struct FVector>& Vertices, const TArray<struct FProcMeshTangent>& Tangents);
	TArray<struct FVector2D> GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, const TArray<struct FVector>& Vertices, const TArray<struct FProcMeshTangent>& Tangents);
	TArray<struct FVector2D> GenerateBoxMesh(const struct FVector& BoxRadius, const TArray<struct FVector>& Vertices, const TArray<struct FProcMeshTangent>& Tangents);
	TArray<struct FVector2D> CreateGridMeshWelded(const TArray<struct FVector>& Vertices, float GridSpacing);
	TArray<int32> CreateGridMeshTriangles(bool bWinding);
	TArray<struct FVector2D> CreateGridMeshSplit(const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UV1s, float GridSpacing);
	int32 CopyProceduralMeshFromStaticMeshComponent(class UProceduralMeshComponent* ProcMeshComponent, bool* bCreateCollision);
	TArray<int32> ConvertQuadToTriangles(int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	TArray<struct FVector> CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, const TArray<struct FProcMeshTangent>& Tangents);
};

// 0x80 (0x750 - 0x6D0)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1A7D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6D8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6D9(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A7E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FProcMeshSection>              ProcMeshSections;                                  // 0x6E8(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x6F8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x708(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x740(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UProceduralMeshComponent* GetDefaultObj();

	TArray<struct FVector2D> UpdateMeshSection_LinearColor(const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bSRGBConversion);
	TArray<struct FVector2D> UpdateMeshSection(const TArray<struct FVector>& Vertices, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);
	int32 SetMeshSectionVisible(bool bNewVisibility);
	bool IsMeshSectionVisible();
	int32 GetNumSections();
	TArray<struct FVector2D> CreateMeshSection_LinearColor(const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool* bCreateCollision, bool bSRGBConversion);
	TArray<struct FVector2D> CreateMeshSection(const TArray<struct FVector>& Vertices, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool* bCreateCollision);
	int32 ClearMeshSection();
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	TArray<struct FVector> AddCollisionConvexMesh();
};

}


