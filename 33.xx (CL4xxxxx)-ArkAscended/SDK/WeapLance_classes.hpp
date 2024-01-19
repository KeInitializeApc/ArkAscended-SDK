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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1050(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x1058(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  ThirdPersonMesh;                                   // 0x1060(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsAttacking;                                      // 0x1068(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bWantsAttacking;                                   // 0x1069(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2CED[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       PreviousTracePoints;                               // 0x1070(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        HurtList;                                          // 0x1080(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ClearHurtListTime;                                 // 0x1090(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       StaminaCostPerSecondWantsAttacking;                // 0x1098(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       StaminaCostPerSecondIsAttacking;                   // 0x10A0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            StartAttackingSound;                               // 0x10A8(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            StopAttackingSound;                                // 0x10B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       DurabilityCostForDismount;                         // 0x10B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastCostDurabilityTime;                            // 0x10C0(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CostDurabilityInterval;                            // 0x10C8(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CostDurabilityAmountPerInterval;                   // 0x10D0(0x8)(Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              DefaultLanceRot;                                   // 0x10D8(0x18)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              WantsToAttackLanceRot;                             // 0x10F0(0x18)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapLance_C* GetDefaultObj();

	bool DoTrace(struct FVector* Start, const struct FVector& End, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector* CallFunc_BreakHitResult_TraceStart, struct FVector* CallFunc_BreakHitResult_TraceEnd, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	double DamageActor(const struct FHitResult& HitInfo, bool* bIsDino, bool Temp_bool_Variable, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, double K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, class AController** CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float* CallFunc_ApplyPointDamage_ReturnValue, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, float* CallFunc_ApplyPointDamage_Impulse_ImplicitCast, float* CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast);
	struct FVector DoTraceAttacks(class UWorld* CallFunc_K2_GetWorld_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1);
	void BPForceTPVTargetingAnimation(bool ReturnValue);
	float ReceiveTick(struct FRotator* CallFunc_RInterpTo_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue, struct FRotator* CallFunc_RInterpTo_ReturnValue_1, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AController** CallFunc_GetController_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AController** CallFunc_GetController_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void BPHandleMeleeAttack();
	void BPStopMeleeAttack();
	void DoPlayStartAttackingSound();
	void DoPlayStopAttackingSound();
	void DidDismountHit();
	bool ExecuteUbergraph_WeapLance(int32 EntryPoint, float* CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast);
};

}


