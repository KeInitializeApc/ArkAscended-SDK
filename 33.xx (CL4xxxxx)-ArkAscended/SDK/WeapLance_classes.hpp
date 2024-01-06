#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x1108 - 0x1050)
// BlueprintGeneratedClass WeapLance.WeapLance_C
class AWeapLance_C : public AShooterWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1050(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x1058(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ThirdPersonMesh;                                   // 0x1060(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	bool                                         bIsAttacking;                                      // 0x1068(0x1)(BlueprintReadOnly, OutParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bWantsAttacking;                                   // 0x1069(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2FCE[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       PreviousTracePoints;                               // 0x1070(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	TArray<class AActor*>                        HurtList;                                          // 0x1080(0x10)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       ClearHurtListTime;                                 // 0x1090(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       StaminaCostPerSecondWantsAttacking;                // 0x1098(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       StaminaCostPerSecondIsAttacking;                   // 0x10A0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	class USoundBase*                            StartAttackingSound;                               // 0x10A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	class USoundBase*                            StopAttackingSound;                                // 0x10B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       DurabilityCostForDismount;                         // 0x10B8(0x8)(ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       LastCostDurabilityTime;                            // 0x10C0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       CostDurabilityInterval;                            // 0x10C8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	double                                       CostDurabilityAmountPerInterval;                   // 0x10D0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	struct FRotator                              DefaultLanceRot;                                   // 0x10D8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	struct FRotator                              WantsToAttackLanceRot;                             // 0x10F0(0x18)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapLance_C* GetDefaultObj();

	bool DoTrace(struct FVector* Start, const struct FVector& End, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, TArray<struct FHitResult>* CallFunc_SphereTraceMulti_OutHits, bool* CallFunc_SphereTraceMulti_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, int32 CallFunc_Array_Add_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue);
	double DamageActor(struct FHitResult* HitInfo, bool* bIsDino, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsBroken_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue, float CallFunc_GetWeaponDamageMultiplier_ReturnValue, float* CallFunc_ApplyPointDamage_ReturnValue, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, float* CallFunc_ApplyPointDamage_Impulse_ImplicitCast, double CallFunc_Multiply_IntFloat_B_ImplicitCast, float* CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast);
	struct FVector DoTraceAttacks(class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue);
	void BPForceTPVTargetingAnimation(bool* ReturnValue);
	double ReceiveTick(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, float* CallFunc_BPGetCurrentStatusValue_ReturnValue, float CallFunc_ModifyCurrentStatusValue_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_3, float CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast);
	void BPHandleMeleeAttack();
	void BPStopMeleeAttack();
	void DoPlayStartAttackingSound();
	void DoPlayStopAttackingSound();
	void DidDismountHit();
	bool ExecuteUbergraph_WeapLance(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsLocallyOwned_ReturnValue, struct FWeaponAnim* K2Node_MakeStruct_WeaponAnim, float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


