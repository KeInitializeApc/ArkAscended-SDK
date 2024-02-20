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
	uint8                                        Pad_11AF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6E0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6E1(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_11B0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bEnableCollisionBuilding;                          // 0x6F0(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_11B1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FArkProcMeshSection>           ProcMeshSections;                                  // 0x6F8(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x708(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x718(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x750(0x10)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UArkProceduralMeshComponent* GetDefaultObj();

	TArray<struct FArkProcMeshTangent> UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, TArray<struct FVector2f>* UV3, TArray<struct FLinearColor>* VertexColors);
	TArray<struct FArkProcMeshTangent> UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, TArray<struct FColor>* VertexColors);
	bool SetMeshSectionVisible(int32 SectionIndex);
	void IsMeshSectionVisible(int32 SectionIndex, bool ReturnValue);
	void GetNumSections(int32 ReturnValue);
	TArray<struct FArkProcMeshTangent> CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, TArray<int32>* Triangles, TArray<struct FVector2f>* UV3, TArray<struct FLinearColor>* VertexColors, bool bCreateCollision);
	TArray<struct FArkProcMeshTangent> CreateMeshSection(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, TArray<int32>* Triangles, TArray<struct FColor>* VertexColors, bool bCreateCollision);
	void ClearMeshSection(int32 SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	TArray<struct FVector> AddCollisionConvexMesh();
};

}


