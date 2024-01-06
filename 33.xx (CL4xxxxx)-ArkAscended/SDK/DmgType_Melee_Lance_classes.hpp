#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x179 - 0x179)
// BlueprintGeneratedClass DmgType_Melee_Lance.DmgType_Melee_Lance_C
class UDmgType_Melee_Lance_C : public UDmgType_Melee_Torpidity_Low_C
{
public:

	static class UClass* StaticClass();
	static class UDmgType_Melee_Lance_C* GetDefaultObj();

	double BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, float* ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class AWeapLance_C** K2Node_DynamicCast_AsWeap_Lance, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, class AGameStateBase** CallFunc_GetGameState_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FHitResult* CallFunc_K2_SetActorLocation_SweepHitResult, bool* CallFunc_K2_SetActorLocation_ReturnValue);
};

}


