#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x1130 - 0x1078)
// BlueprintGeneratedClass WeapLance.WeapLance_C
class AWeapLance_C : public AShooterWeapon_Melee
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1078(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x1080(0x8)(Edit, ConstParm, OutParm, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  ThirdPersonMesh;                                   // 0x1088(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsAttacking;                                      // 0x1090(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bWantsAttacking;                                   // 0x1091(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_31AA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector>                       PreviousTracePoints;                               // 0x1098(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        HurtList;                                          // 0x10A8(0x10)(Net, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       ClearHurtListTime;                                 // 0x10B8(0x8)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	double                                       StaminaCostPerSecondWantsAttacking;                // 0x10C0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       StaminaCostPerSecondIsAttacking;                   // 0x10C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            StartAttackingSound;                               // 0x10D0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class USoundBase*                            StopAttackingSound;                                // 0x10D8(0x8)(ConstParm, ExportObject, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       DurabilityCostForDismount;                         // 0x10E0(0x8)(BlueprintVisible, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       LastCostDurabilityTime;                            // 0x10E8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       CostDurabilityInterval;                            // 0x10F0(0x8)(EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       CostDurabilityAmountPerInterval;                   // 0x10F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              DefaultLanceRot;                                   // 0x1100(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              WantsToAttackLanceRot;                             // 0x1118(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapLance_C* GetDefaultObj();

	bool DoTrace(const TArray<class AActor*>& Temp_object_Variable, const TArray<class AActor*>& Temp_object_Variable_1, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue);
	float DamageActor(bool* Temp_bool_Variable, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, double Temp_real_Variable, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double* K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast);
	struct FVector DoTraceAttacks(bool* CallFunc_EqualEqual_IntInt_ReturnValue, struct FVector* CallFunc_GetSocketLocation_ReturnValue, struct FVector* CallFunc_GetSocketLocation_ReturnValue_1, struct FVector* CallFunc_GetSocketLocation_ReturnValue_2);
	void BPForceTPVTargetingAnimation(bool ReturnValue);
	double ReceiveTick(bool* CallFunc_IsFirstPerson_ReturnValue, bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, double* K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void BPHandleMeleeAttack();
	void BPStopMeleeAttack();
	void DoPlayStartAttackingSound();
	void DoPlayStopAttackingSound();
	void DidDismountHit();
	float ExecuteUbergraph_WeapLance(const struct FWeaponAnim& K2Node_MakeStruct_WeaponAnim, float CallFunc_PlayWeaponAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue);
};

}


