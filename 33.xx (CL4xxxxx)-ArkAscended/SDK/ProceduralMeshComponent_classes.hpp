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

	class UMaterialInterface* SliceProceduralMesh();
	TArray<struct FVector2D> GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32* SectionIndex, TArray<struct FProcMeshTangent>* Tangents);
	TArray<struct FVector2D> GetSectionFromProceduralMesh(int32* SectionIndex, TArray<struct FProcMeshTangent>* Tangents);
	TArray<struct FVector2D> GenerateBoxMesh(TArray<struct FProcMeshTangent>* Tangents);
	TArray<struct FVector2D> CreateGridMeshWelded(float* GridSpacing);
	TArray<int32> CreateGridMeshTriangles();
	TArray<struct FVector2D> CreateGridMeshSplit(float* GridSpacing);
	class UProceduralMeshComponent* CopyProceduralMeshFromStaticMeshComponent(int32 LODIndex, bool bCreateCollision);
	int32 ConvertQuadToTriangles();
	TArray<struct FVector> CalculateTangentsForMesh(TArray<struct FProcMeshTangent>* Tangents);
};

// 0x88 (0x760 - 0x6D8)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_20C1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6E0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6E1(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C2[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FProcMeshSection>              ProcMeshSections;                                  // 0x6F0(0x10)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x700(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x710(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x748(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C3[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralMeshComponent* GetDefaultObj();

	bool UpdateMeshSection_LinearColor(int32* SectionIndex, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, TArray<struct FProcMeshTangent>* Tangents);
	TArray<struct FColor> UpdateMeshSection(int32* SectionIndex, const TArray<struct FVector2D>& UV0, TArray<struct FProcMeshTangent>* Tangents);
	bool SetMeshSectionVisible(int32* SectionIndex);
	void IsMeshSectionVisible(int32* SectionIndex, bool ReturnValue);
	void GetNumSections(int32 ReturnValue);
	bool CreateMeshSection_LinearColor(int32* SectionIndex, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, TArray<struct FProcMeshTangent>* Tangents, bool bCreateCollision);
	TArray<struct FColor> CreateMeshSection(int32* SectionIndex, const TArray<struct FVector2D>& UV0, TArray<struct FProcMeshTangent>* Tangents, bool bCreateCollision);
	void ClearMeshSection(int32* SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
};

}


