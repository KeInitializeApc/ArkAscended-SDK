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
	TArray<struct FProcMeshTangent> GetSectionFromStaticMesh(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UVs);
	TArray<struct FProcMeshTangent> GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UVs);
	TArray<struct FProcMeshTangent> GenerateBoxMesh(const struct FVector& BoxRadius, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UVs);
	float CreateGridMeshWelded(TArray<int32>* Triangles, const TArray<struct FVector>& Vertices, TArray<struct FVector2D>* UVs);
	int32 CreateGridMeshTriangles(bool bWinding, TArray<int32>* Triangles);
	float CreateGridMeshSplit(TArray<int32>* Triangles, const TArray<struct FVector>& Vertices, TArray<struct FVector2D>* UVs, const TArray<struct FVector2D>& UV1s);
	int32 CopyProceduralMeshFromStaticMeshComponent(class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	void ConvertQuadToTriangles(TArray<int32>* Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	TArray<struct FProcMeshTangent> CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UVs);
};

// 0x88 (0x760 - 0x6D8)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_422[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6E0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6E1(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_423[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FProcMeshSection>              ProcMeshSections;                                  // 0x6F0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x700(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x710(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x748(0x10)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_426[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralMeshComponent* GetDefaultObj();

	TArray<struct FProcMeshTangent> UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, bool bSRGBConversion);
	TArray<struct FProcMeshTangent> UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<struct FColor>* VertexColors);
	bool SetMeshSectionVisible(int32 SectionIndex);
	void IsMeshSectionVisible(int32 SectionIndex, bool ReturnValue);
	void GetNumSections(int32 ReturnValue);
	TArray<struct FProcMeshTangent> CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2D>* UV3, TArray<struct FLinearColor>* VertexColors, bool bCreateCollision, bool bSRGBConversion);
	TArray<struct FProcMeshTangent> CreateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles, TArray<struct FColor>* VertexColors, bool bCreateCollision);
	void ClearMeshSection(int32 SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	TArray<struct FVector> AddCollisionConvexMesh();
};

}


