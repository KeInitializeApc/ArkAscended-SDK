#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x14F8 - 0x14F0)
// BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
class AStructureItemContainerBaseBP_C : public APrimalStructureItemContainer
{
public:
	class USphereComponent*                      StasisComponent;                                   // 0x14F0(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AStructureItemContainerBaseBP_C* GetDefaultObj();

	class UPrimalInventoryComponent* BPOnTransferAll();
};

}


