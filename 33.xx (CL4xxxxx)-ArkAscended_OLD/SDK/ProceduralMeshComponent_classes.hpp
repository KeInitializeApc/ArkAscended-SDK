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

	struct FVector SliceProceduralMesh(class UProceduralMeshComponent** InProcMesh, bool* bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption* CapOption, class UMaterialInterface** CapMaterial);
	TArray<struct FVector2D> GetSectionFromStaticMesh(int32 LODIndex, int32* SectionIndex, TArray<struct FProcMeshTangent>* Tangents);
	TArray<struct FVector2D> GetSectionFromProceduralMesh(class UProceduralMeshComponent** InProcMesh, int32* SectionIndex, TArray<struct FProcMeshTangent>* Tangents);
	TArray<struct FVector2D> GenerateBoxMesh(struct FVector* BoxRadius, TArray<struct FProcMeshTangent>* Tangents);
	TArray<struct FVector2D> CreateGridMeshWelded(int32* NumX, int32* NumY, float* GridSpacing);
	TArray<int32> CreateGridMeshTriangles(int32* NumX, int32* NumY, bool* bWinding);
	TArray<struct FVector2D> CreateGridMeshSplit(int32* NumX, int32* NumY, TArray<struct FVector2D>* UV1s, float* GridSpacing);
	bool CopyProceduralMeshFromStaticMeshComponent(int32 LODIndex, class UProceduralMeshComponent** ProcMeshComponent);
	TArray<int32> ConvertQuadToTriangles(int32* Vert0, int32* Vert1, int32* Vert2, int32* Vert3);
	TArray<struct FVector> CalculateTangentsForMesh(TArray<struct FProcMeshTangent>* Tangents);
};

// 0x88 (0x760 - 0x6D8)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1A29[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6E0(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6E1(0x1)(ConstParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A2B[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FProcMeshSection>              ProcMeshSections;                                  // 0x6F0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x700(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x710(0x38)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x748(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A32[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UProceduralMeshComponent* GetDefaultObj();

	bool UpdateMeshSection_LinearColor(int32* SectionIndex, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, TArray<struct FProcMeshTangent>* Tangents);
	TArray<struct FColor> UpdateMeshSection(int32* SectionIndex, const TArray<struct FVector2D>& UV0, TArray<struct FProcMeshTangent>* Tangents);
	bool SetMeshSectionVisible(int32* SectionIndex);
	void IsMeshSectionVisible(int32* SectionIndex, bool* ReturnValue);
	void GetNumSections(int32* ReturnValue);
	bool CreateMeshSection_LinearColor(int32* SectionIndex, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, TArray<struct FProcMeshTangent>* Tangents);
	bool CreateMeshSection(int32* SectionIndex, const TArray<struct FVector2D>& UV0, TArray<struct FProcMeshTangent>* Tangents);
	void ClearMeshSection(int32* SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(TArray<struct FVector>* ConvexVerts);
};

}


