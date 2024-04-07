#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1600 - 0x15F8)
// BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
class AStructureItemContainerBaseBP_C : public APrimalStructureItemContainer
{
public:
	class USphereComponent*                      StasisComponent;                                   // 0x15F8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AStructureItemContainerBaseBP_C* GetDefaultObj();

	void BPOnTransferAll(class UPrimalInventoryComponent** ToInventory);
};

}


