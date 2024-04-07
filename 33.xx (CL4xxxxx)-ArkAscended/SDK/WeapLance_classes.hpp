#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x1160 - 0x10A8)
// BlueprintGeneratedClass WeapLance.WeapLance_C
class AWeapLance_C : public AShooterWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10A8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x10B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ThirdPersonMesh;                                   // 0x10B8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         bIsAttacking;                                      // 0x10C0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, EditConst, SubobjectReference)
	bool                                         bWantsAttacking;                                   // 0x10C1(0x1)(BlueprintVisible, Net, Parm, EditConst, SubobjectReference)
	uint8                                        Pad_44D8[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       PreviousTracePoints;                               // 0x10C8(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	TArray<class AActor*>                        HurtList;                                          // 0x10D8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	double                                       ClearHurtListTime;                                 // 0x10E8(0x8)(Edit, ZeroConstructor, EditConst, SubobjectReference)
	double                                       StaminaCostPerSecondWantsAttacking;                // 0x10F0(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	double                                       StaminaCostPerSecondIsAttacking;                   // 0x10F8(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
	class USoundBase*                            StartAttackingSound;                               // 0x1100(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	class USoundBase*                            StopAttackingSound;                                // 0x1108(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
	double                                       DurabilityCostForDismount;                         // 0x1110(0x8)(Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
	double                                       LastCostDurabilityTime;                            // 0x1118(0x8)(BlueprintReadOnly, Parm, ZeroConstructor, EditConst, SubobjectReference)
	double                                       CostDurabilityInterval;                            // 0x1120(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, SubobjectReference)
	double                                       CostDurabilityAmountPerInterval;                   // 0x1128(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, EditConst, SubobjectReference)
	struct FRotator                              DefaultLanceRot;                                   // 0x1130(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, SubobjectReference)
	struct FRotator                              WantsToAttackLanceRot;                             // 0x1148(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapLance_C* GetDefaultObj();

	bool DoTrace(struct FVector* Start, struct FVector* End, TArray<class AActor*>* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>* Temp_object_Variable_1, TArray<struct FHitResult>* CallFunc_SphereTraceMulti_OutHits, bool* CallFunc_SphereTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex);
	class AController* DamageActor(class AActor* Victim, const struct FHitResult& HitInfo, bool bIsDino, bool Temp_bool_Variable, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_IsBroken_ReturnValue, double K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float* CallFunc_GetWeaponDamageMultiplier_ReturnValue, double* CallFunc_Multiply_IntFloat_ReturnValue, float* CallFunc_ApplyPointDamage_ReturnValue, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, double* K2Node_Select_Option_0_ImplicitCast, float CallFunc_ApplyPointDamage_Impulse_ImplicitCast, double* CallFunc_Multiply_IntFloat_B_ImplicitCast, float CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast);
	struct FVector DoTraceAttacks(class UWorld** CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_Array_Get_Item_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	bool BPForceTPVTargetingAnimation();
	double ReceiveTick(float* DeltaSeconds, struct FHitResult* CallFunc_K2_SetRelativeRotation_SweepHitResult, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_IsLocallyControlledByPlayer_ReturnValue, struct FHitResult* CallFunc_K2_SetRelativeRotation_SweepHitResult_1, struct FHitResult* CallFunc_K2_SetRelativeRotation_SweepHitResult_2, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue, float* CallFunc_ModifyCurrentStatusValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float* CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast);
	void BPHandleMeleeAttack();
	void BPStopMeleeAttack();
	void DoPlayStartAttackingSound();
	void DoPlayStopAttackingSound();
	void DidDismountHit();
	bool ExecuteUbergraph_WeapLance(int32* EntryPoint, class USceneComponent** CallFunc_K2_GetRootComponent_ReturnValue, bool* CallFunc_IsLocallyOwned_ReturnValue, const struct FWeaponAnim& K2Node_MakeStruct_WeaponAnim, float* CallFunc_PlayWeaponAnimation_ReturnValue, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


