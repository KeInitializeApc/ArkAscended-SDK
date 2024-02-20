#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x15F0 - 0x15E8)
// BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
class AStructureItemContainerBaseBP_C : public APrimalStructureItemContainer
{
public:
	class USphereComponent*                      StasisComponent;                                   // 0x15E8(0x8)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AStructureItemContainerBaseBP_C* GetDefaultObj();

	void BPOnTransferAll(class UPrimalInventoryComponent** ToInventory);
};

}


