#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C
class UWorldBuff_Mutagen_SpawnDelay_Down_C : public UPrimalWorldBuffCustomImplement
{
public:
	class FName                                  ActorListTag;                                      // 0x30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       SpawnDelayModifierToApply;                         // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       LastSpawnDelayModifier;                            // 0x40(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UWorldBuff_Mutagen_SpawnDelay_Down_C* GetDefaultObj();

	double PreDeconstruction(class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, float K2Node_VariableSet_AdjustableMutagenSpawnDelayMultiplier_ImplicitCast);
	double PostConstruction(double SpawnDelayTemp, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool* K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_AdjustableMutagenSpawnDelayMultiplier_ImplicitCast);
};

}


