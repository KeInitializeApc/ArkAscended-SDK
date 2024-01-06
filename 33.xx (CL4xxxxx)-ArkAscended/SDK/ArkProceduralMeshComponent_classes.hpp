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
	uint8                                        Pad_460[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6E0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x6E1(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_461[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6E8(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableCollisionBuilding;                          // 0x6F0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_462[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FArkProcMeshSection>           ProcMeshSections;                                  // 0x6F8(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x708(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x718(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x750(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UArkProceduralMeshComponent* GetDefaultObj();

	TArray<struct FArkProcMeshTangent> UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2);
	TArray<struct FArkProcMeshTangent> UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector2f>& UV0);
	bool SetMeshSectionVisible(int32 SectionIndex);
	void IsMeshSectionVisible(int32 SectionIndex, bool* ReturnValue);
	void GetNumSections(int32* ReturnValue);
	TArray<struct FArkProcMeshTangent> CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2, bool bCreateCollision);
	TArray<struct FArkProcMeshTangent> CreateMeshSection(int32 SectionIndex, const TArray<struct FVector2f>& UV0, bool bCreateCollision);
	void ClearMeshSection(int32 SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
};

}


