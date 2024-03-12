#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x758 - 0x6D0)
// Class ArkProceduralMeshComponent.ArkProceduralMeshComponent
class UArkProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1551[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6D8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6D9(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1554[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableCollisionBuilding;                          // 0x6E8(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1557[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FArkProcMeshSection>           ProcMeshSections;                                  // 0x6F0(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x700(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x710(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x748(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UArkProceduralMeshComponent* GetDefaultObj();

	TArray<struct FVector2f> UpdateMeshSection_LinearColor(const TArray<struct FVector3f>& Vertices, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents);
	TArray<struct FVector2f> UpdateMeshSection(const TArray<struct FVector3f>& Vertices, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents);
	int32 SetMeshSectionVisible(bool bNewVisibility);
	bool IsMeshSectionVisible();
	int32 GetNumSections();
	TArray<struct FVector2f> CreateMeshSection_LinearColor(const TArray<struct FVector3f>& Vertices, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents, bool* bCreateCollision);
	TArray<struct FVector2f> CreateMeshSection(const TArray<struct FVector3f>& Vertices, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents, bool* bCreateCollision);
	int32 ClearMeshSection();
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	TArray<struct FVector> AddCollisionConvexMesh();
};

}


