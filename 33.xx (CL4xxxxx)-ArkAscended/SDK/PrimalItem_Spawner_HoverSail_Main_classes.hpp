#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x1188 - 0x1151)
// BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C
class UPrimalItem_Spawner_HoverSail_Main_C : public UPrimalItem_Spawner_HoverSail_Parent_C
{
public:
	bool                                         Show_fuel_percentage_Minus_not_working_on_dedi;    // 0x1151(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_535[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Failed_to_spawn_cause_on_dino_string;              // 0x1158(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                Failed_to_spawn_cause_seated_string;               // 0x1168(0x10)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                Failed_to_transfer_inventory_cause_reference_invalid_string; // 0x1178(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItem_Spawner_HoverSail_Main_C* GetDefaultObj();

	int32 BPInitIconMaterial(const TArray<int32>& OutColors_Loc, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_GetDinoColorizationData_HasAnyColorData, TArray<uint8>* CallFunc_GetDinoColorizationData_ColorData, uint8 CallFunc_Array_Get_Item, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	double BlueprintUsed(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, class AController** CallFunc_GetCharacterController_ReturnValue, class AController** CallFunc_GetCharacterController_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_2, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_3, class AController** CallFunc_GetCharacterController_ReturnValue_2, class AController** CallFunc_GetCharacterController_ReturnValue_3, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, bool* K2Node_DynamicCast_bSuccess_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_3, bool* K2Node_DynamicCast_bSuccess_3, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_5, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_6, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_7, bool* K2Node_DynamicCast_bSuccess_4, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_8, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_9, bool* K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool* K2Node_DynamicCast_bSuccess_6, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_10, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	double OnDinoSpawned(bool K2Node_SwitchEnum_CmpSuccess, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const struct FCustomItemByteArray& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, uint8 CallFunc_Array_Get_Item_1, uint8 CallFunc_Array_Get_Item_2, uint8 CallFunc_Array_Get_Item_3, bool CallFunc_RemoveItem_ReturnValue, const class FString& CallFunc_Array_Get_Item_4, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, bool* K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue_1, double K2Node_VariableSet_CurrentFuelUnitPercent_ImplicitCast);
	bool BPGetCustomInventoryWidgetText(const class FString& Local_string, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class FString* CallFunc_GetSubstring_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class FString* CallFunc_GetSubstring_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


