#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x1800 - 0x1790)
// BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
class AWeapClimbPick_C : public AShooterWeapon_Climb
{
public:
	class UStaticMeshComponent*                  ClimbingPickLeftTPV;                               // 0x1790(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UParticleSystemComponent*              ClimbAnchorParticles;                              // 0x1798(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class USceneComponent*                       ClimbAnchor;                                       // 0x17A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UParticleSystemComponent*              ClimbTargetParticles;                              // 0x17A8(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class USceneComponent*                       ClimbTarget;                                       // 0x17B0(0x8)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickLeft;                                  // 0x17B8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickTPV;                                   // 0x17C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPick;                                      // 0x17C8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ClimbAnchorInterpSpeed;                            // 0x17D0(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ClimbTargetInterpSpeed;                            // 0x17D8(0x8)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UParticleSystem*                       Valid_Template;                                    // 0x17E0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UParticleSystem*                       Walkable_Template;                                 // 0x17E8(0x8)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UParticleSystem*                       Invalid_Template;                                  // 0x17F0(0x8)(Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ClimbingFOVMultiplier;                             // 0x17F8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapClimbPick_C* GetDefaultObj();

	bool BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float* InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue);
	bool StartUnequipEvent(bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_GetGroundLocation_theGroundLoc, bool* CallFunc_GetGroundLocation_ReturnValue);
	float BPModifyFOV(float* InFOV, float ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	int32 SetSourceLocation(const struct FVector& NewSourcePoint);
	bool SetTemplateTo();
	double BPUpdateClimbTarget(const struct FVector& SourceTangent, bool CallFunc_IsClimbingHanging_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FVector& CallFunc_GetViewDirection_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, struct FVector* CallFunc_VInterpTo_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, struct FRotator* CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_GetViewLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double* CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_NegateVector_ReturnValue, struct FVector* CallFunc_VInterpTo_ReturnValue_1, struct FVector* CallFunc_SelectVector_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, struct FRotator* CallFunc_RInterpTo_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, float* CallFunc_VInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float* CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast, float* CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast, float* CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1);
};

}


