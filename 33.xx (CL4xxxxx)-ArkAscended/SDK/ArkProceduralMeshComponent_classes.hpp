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
	uint8                                        Pad_50F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6E0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6E1(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_510[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableCollisionBuilding;                          // 0x6F0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_512[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FArkProcMeshSection>           ProcMeshSections;                                  // 0x6F8(0x10)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x708(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x718(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x750(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UArkProceduralMeshComponent* GetDefaultObj();

	TArray<struct FLinearColor> UpdateMeshSection_LinearColor(int32* SectionIndex, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2, TArray<struct FArkProcMeshTangent>* Tangents);
	TArray<struct FColor> UpdateMeshSection(int32* SectionIndex, const TArray<struct FVector2f>& UV0, TArray<struct FArkProcMeshTangent>* Tangents);
	bool SetMeshSectionVisible(int32* SectionIndex);
	void IsMeshSectionVisible(int32* SectionIndex, bool ReturnValue);
	void GetNumSections(int32 ReturnValue);
	TArray<struct FLinearColor> CreateMeshSection_LinearColor(int32* SectionIndex, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2, TArray<struct FArkProcMeshTangent>* Tangents, bool bCreateCollision);
	TArray<struct FColor> CreateMeshSection(int32* SectionIndex, const TArray<struct FVector2f>& UV0, TArray<struct FArkProcMeshTangent>* Tangents, bool bCreateCollision);
	void ClearMeshSection(int32* SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
};

}


