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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1050(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x1058(0x8)(Edit, BlueprintVisible, OutParm, Transient, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ThirdPersonMesh;                                   // 0x1060(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bIsAttacking;                                      // 0x1068(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bWantsAttacking;                                   // 0x1069(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_39AC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       PreviousTracePoints;                               // 0x1070(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, SubobjectReference)
	TArray<class AActor*>                        HurtList;                                          // 0x1080(0x10)(ConstParm, Net, Parm, Transient, Config, EditConst, SubobjectReference)
	double                                       ClearHurtListTime;                                 // 0x1090(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
	double                                       StaminaCostPerSecondWantsAttacking;                // 0x1098(0x8)(ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, SubobjectReference)
	double                                       StaminaCostPerSecondIsAttacking;                   // 0x10A0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, SubobjectReference)
	class USoundBase*                            StartAttackingSound;                               // 0x10A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, SubobjectReference)
	class USoundBase*                            StopAttackingSound;                                // 0x10B0(0x8)(BlueprintVisible, ExportObject, OutParm, Transient, Config, EditConst, SubobjectReference)
	double                                       DurabilityCostForDismount;                         // 0x10B8(0x8)(ConstParm, BlueprintVisible, Parm, Transient, Config, EditConst, SubobjectReference)
	double                                       LastCostDurabilityTime;                            // 0x10C0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, SubobjectReference)
	double                                       CostDurabilityInterval;                            // 0x10C8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, EditConst, SubobjectReference)
	double                                       CostDurabilityAmountPerInterval;                   // 0x10D0(0x8)(Edit, ExportObject, Net, Transient, Config, EditConst, SubobjectReference)
	struct FRotator                              DefaultLanceRot;                                   // 0x10D8(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, EditConst, SubobjectReference)
	struct FRotator                              WantsToAttackLanceRot;                             // 0x10F0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapLance_C* GetDefaultObj();

	bool DoTrace(struct FVector* Start, const struct FVector& End, TArray<class AActor*>* Temp_object_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>* Temp_object_Variable_1, TArray<struct FHitResult>* CallFunc_SphereTraceMulti_OutHits, bool* CallFunc_SphereTraceMulti_ReturnValue, struct FHitResult* CallFunc_Array_Get_Item, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Array_Length_ReturnValue);
	float DamageActor(class AActor** Victim, bool Temp_bool_Variable, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_1, double Temp_real_Variable, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double* K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AController** CallFunc_GetController_ReturnValue, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast);
	struct FVector DoTraceAttacks(bool CallFunc_IsTimeSince_ReturnValue, struct FVector* CallFunc_Array_Get_Item, struct FVector* CallFunc_Array_Get_Item_1, struct FVector* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue, struct FVector* CallFunc_GetSocketLocation_ReturnValue, struct FVector* CallFunc_GetSocketLocation_ReturnValue_1, struct FVector* CallFunc_GetSocketLocation_ReturnValue_2);
	bool BPForceTPVTargetingAnimation();
	float ReceiveTick(float DeltaSeconds, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, double* K2Node_Select_Default, double* CallFunc_Multiply_DoubleDouble_ReturnValue, class AController** CallFunc_GetController_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class AController** CallFunc_GetController_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, double* CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void BPHandleMeleeAttack();
	void BPStopMeleeAttack();
	void DoPlayStartAttackingSound();
	void DoPlayStopAttackingSound();
	void DidDismountHit();
	float ExecuteUbergraph_WeapLance(const struct FWeaponAnim& K2Node_MakeStruct_WeaponAnim, float CallFunc_PlayWeaponAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
};

}


