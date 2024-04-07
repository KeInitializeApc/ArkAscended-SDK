#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass WorldBuff_Asteroid_Resource_Up.WorldBuff_Asteroid_Resource_Up_C
class UWorldBuff_Asteroid_Resource_Up_C : public UPrimalWorldBuffCustomImplement
{
public:
	TArray<struct FResourceTemporaryAmountModifiers> ResourceModifiers;                                 // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWorldBuff_Asteroid_Resource_Up_C* GetDefaultObj();

	bool PreDeconstruction(int32* IndexToRemove, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, const struct FResourceTemporaryAmountModifierSet& CallFunc_Array_Get_Item);
	int32 PostConstruction(class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess);
};

}


