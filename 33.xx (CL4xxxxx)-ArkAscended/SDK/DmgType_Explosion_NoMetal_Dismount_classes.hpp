#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x179 - 0x179)
// BlueprintGeneratedClass DmgType_Explosion_NoMetal_Dismount.DmgType_Explosion_NoMetal_Dismount_C
class UDmgType_Explosion_NoMetal_Dismount_C : public UDmgType_Explosion_NoMetal_C
{
public:

	static class UClass* StaticClass();
	static class UDmgType_Explosion_NoMetal_Dismount_C* GetDefaultObj();

	double BPAdjustDamage(class AActor* Victim, float IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor* DamageCauser, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


