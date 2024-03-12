#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF45 - 0xF45)
// BlueprintGeneratedClass PrimalItemArmor_SpaceWhaleSaddle_Tek.PrimalItemArmor_SpaceWhaleSaddle_Tek_C
class UPrimalItemArmor_SpaceWhaleSaddle_Tek_C : public UPrimalItemArmor_SaddleGeneric_Tek_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SpaceWhaleSaddle_Tek_C* GetDefaultObj();

	class ASpaceWhale_Character_Base_BP_C* BlueprintUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	class ASpaceWhale_Character_Base_BP_C* BlueprintEquipped(class AActor* CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
};

}


