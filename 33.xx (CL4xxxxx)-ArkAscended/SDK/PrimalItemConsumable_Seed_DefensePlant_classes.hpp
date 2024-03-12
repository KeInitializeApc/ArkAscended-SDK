#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0xEF1 - 0xEE0)
// BlueprintGeneratedClass PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C
class UPrimalItemConsumable_Seed_DefensePlant_C : public UPrimalItemConsumableSeed_C
{
public:
	int32                                        NumTurrets;                                        // 0xEE0(0x4)(Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5659[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastCheckTime;                                     // 0xEE8(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         LastCheckReturn;                                   // 0xEF0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemConsumable_Seed_DefensePlant_C* GetDefaultObj();

	float BPAllowRemoteAddToInventory(class AShooterPlayerController** ByPC, bool bRequestedByPlayer, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, class AActor* CallFunc_GetOwner_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, class APrimalStructure* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetItemTemplateQuantity_ReturnValue, bool* K2Node_DynamicCast_bSuccess_3, bool* CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class FName>* K2Node_MakeArray_Array, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1);
	bool BPCanAddToInventory(class UPrimalInventoryComponent** ToInventory, bool* RetVal, class AActor* CallFunc_GetOwner_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2);
};

}


