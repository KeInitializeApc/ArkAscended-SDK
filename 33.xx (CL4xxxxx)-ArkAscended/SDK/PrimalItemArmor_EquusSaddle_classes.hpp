#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF00 - 0xF00)
// BlueprintGeneratedClass PrimalItemArmor_EquusSaddle.PrimalItemArmor_EquusSaddle_C
class UPrimalItemArmor_EquusSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemArmor_EquusSaddle_C* GetDefaultObj();

	bool BlueprintEquipped(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess);
	bool BlueprintUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess);
};

}


