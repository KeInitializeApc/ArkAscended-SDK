#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB71 - 0xB71)
// BlueprintGeneratedClass Buff_GasMask.Buff_GasMask_C
class ABuff_GasMask_C : public ABuff_Base_C
{
public:

	static class UClass* StaticClass();
	static class ABuff_GasMask_C* GetDefaultObj();

	bool AllowPostProcessEffect(class APawn* CallFunc_GetInstigator_ReturnValue, bool* CallFunc_IsFirstPersonCamera_ReturnValue);
	float BuffAdjustDamage(const struct FHitResult& HitInfo, class AController** EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType, double* RetVal, class UClass* K2Node_ClassDynamicCast_AsDmg_Type_Melee_Torp_Poison_Large_No_FF);
	bool BPPreventAddingOtherBuff(class UClass** AnotherBuffClass, bool* RetVal, class UClass* K2Node_ClassDynamicCast_AsBuff_Base_Gas_Maskable, class UClass* K2Node_ClassDynamicCast_AsBuff_Base_Disease_Low_Gas_Maskable);
};

}


