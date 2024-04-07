#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x8C0 - 0x8B0)
// BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C
class ADroppedItemGenericLowQuality_C : public ADroppedItemLowQuality
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x8B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ADroppedItemGenericLowQuality_C* GetDefaultObj();

	void BPDroppedItemImpacted(struct FHitResult* ImpactHitInfo);
	void ExecuteUbergraph_DroppedItemGenericLowQuality(int32* EntryPoint, const struct FHitResult& K2Node_Event_impactHitInfo);
};

}


