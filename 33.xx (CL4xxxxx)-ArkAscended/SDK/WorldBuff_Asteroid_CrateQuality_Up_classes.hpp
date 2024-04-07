#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass WorldBuff_Asteroid_CrateQuality_Up.WorldBuff_Asteroid_CrateQuality_Up_C
class UWorldBuff_Asteroid_CrateQuality_Up_C : public UPrimalWorldBuffCustomImplement
{
public:
	TArray<struct FCrateTemporaryQualityModifiers> CrateModifiers;                                    // 0x30(0x10)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWorldBuff_Asteroid_CrateQuality_Up_C* GetDefaultObj();

	int32 PostConstruction(class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess);
	bool PreDeconstruction(int32* IndexToRemove, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, const struct FCrateTemporaryQualityModifierSet& CallFunc_Array_Get_Item);
};

}


