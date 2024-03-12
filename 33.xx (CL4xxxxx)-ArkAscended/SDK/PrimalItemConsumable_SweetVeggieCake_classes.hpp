#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C
class UPrimalItemConsumable_SweetVeggieCake_C : public UPrimalItemConsumableEatable_BuffingSoup_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemConsumable_SweetVeggieCake_C* GetDefaultObj();

	bool BPCanUse(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_1);
	double BPPreUseItem(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, const struct FDinoFoodEffectivenessMultipliers& CallFunc_Array_Get_Item);
};

}


