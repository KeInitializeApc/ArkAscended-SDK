#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x760 - 0x6D8)
// Class ArkProceduralMeshComponent.ArkProceduralMeshComponent
class UArkProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_5BC[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6E0(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6E1(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5BD[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableCollisionBuilding;                          // 0x6F0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5BE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FArkProcMeshSection>           ProcMeshSections;                                  // 0x6F8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x708(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x718(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x750(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UArkProceduralMeshComponent* GetDefaultObj();

	TArray<struct FVector2f> UpdateMeshSection_LinearColor(TArray<struct FVector3f>* Normals, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents);
	TArray<struct FVector2f> UpdateMeshSection(TArray<struct FVector3f>* Normals, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents);
	int32 SetMeshSectionVisible(bool bNewVisibility);
	bool IsMeshSectionVisible();
	int32 GetNumSections();
	bool CreateMeshSection_LinearColor(TArray<struct FVector3f>* Normals, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents);
	bool CreateMeshSection(TArray<struct FVector3f>* Normals, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents);
	int32 ClearMeshSection();
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	TArray<struct FVector> AddCollisionConvexMesh();
};

}


