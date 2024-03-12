#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF00 - 0xF00)
// BlueprintGeneratedClass PrimalItemArmor_HyaenodonSaddle.PrimalItemArmor_HyaenodonSaddle_C
class UPrimalItemArmor_HyaenodonSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemArmor_HyaenodonSaddle_C* GetDefaultObj();

	class AHyaenodon_Character_Base_BP_C* BlueprintUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	class AHyaenodon_Character_Base_BP_C* BlueprintEquipped(class AActor* CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
};

}


