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

	double BPAdjustDamage(class AActor* Victim, float IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor* DamageCauser, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AWeapLance_C* K2Node_DynamicCast_AsWeap_Lance, bool* K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_3, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


