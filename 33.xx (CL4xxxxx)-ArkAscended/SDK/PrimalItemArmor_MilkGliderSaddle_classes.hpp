#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF00 - 0xF00)
// BlueprintGeneratedClass PrimalItemArmor_MilkGliderSaddle.PrimalItemArmor_MilkGliderSaddle_C
class UPrimalItemArmor_MilkGliderSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemArmor_MilkGliderSaddle_C* GetDefaultObj();

	bool BlueprintUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess);
	bool BlueprintEquipped(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Get_Item);
};

}


