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
	class UStaticMeshComponent*                  ClimbingPickLeftTPV;                               // 0x1790(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UParticleSystemComponent*              ClimbAnchorParticles;                              // 0x1798(0x8)(BlueprintVisible, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class USceneComponent*                       ClimbAnchor;                                       // 0x17A0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UParticleSystemComponent*              ClimbTargetParticles;                              // 0x17A8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class USceneComponent*                       ClimbTarget;                                       // 0x17B0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickLeft;                                  // 0x17B8(0x8)(ConstParm, Net, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickTPV;                                   // 0x17C0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPick;                                      // 0x17C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	double                                       ClimbAnchorInterpSpeed;                            // 0x17D0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
	double                                       ClimbTargetInterpSpeed;                            // 0x17D8(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Valid_Template;                                    // 0x17E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Walkable_Template;                                 // 0x17E8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Invalid_Template;                                  // 0x17F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	double                                       ClimbingFOVMultiplier;                             // 0x17F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapClimbPick_C* GetDefaultObj();

	bool BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	bool StartUnequipEvent(struct FVector* CallFunc_GetGroundLocation_theGroundLoc, bool* CallFunc_GetGroundLocation_ReturnValue);
	double BPModifyFOV(double* CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	bool SetSourceLocation(class UParticleSystemComponent** Particle_System, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetTemplateTo(class UParticleSystemComponent** Particle_System, class UParticleSystem** New_Template, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	bool BPUpdateClimbTarget(float DeltaSeconds, struct FVector* SourceTangent, struct FVector* CallFunc_GetViewDirection_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, struct FRotator* CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, struct FVector* CallFunc_GetViewLocation_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue_1, double* CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, struct FRotator* CallFunc_K2_GetComponentRotation_ReturnValue_1, uint8 Temp_byte_Variable, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, struct FVector* K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast, float CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1);
};

}


