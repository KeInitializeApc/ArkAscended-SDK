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
	class UStaticMeshComponent*                  ClimbingPickLeftTPV;                               // 0x1790(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystemComponent*              ClimbAnchorParticles;                              // 0x1798(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class USceneComponent*                       ClimbAnchor;                                       // 0x17A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystemComponent*              ClimbTargetParticles;                              // 0x17A8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class USceneComponent*                       ClimbTarget;                                       // 0x17B0(0x8)(BlueprintVisible, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickLeft;                                  // 0x17B8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickTPV;                                   // 0x17C0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPick;                                      // 0x17C8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       ClimbAnchorInterpSpeed;                            // 0x17D0(0x8)(Edit, ConstParm, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       ClimbTargetInterpSpeed;                            // 0x17D8(0x8)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Valid_Template;                                    // 0x17E0(0x8)(Edit, ExportObject, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Walkable_Template;                                 // 0x17E8(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Invalid_Template;                                  // 0x17F0(0x8)(ConstParm, Net, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       ClimbingFOVMultiplier;                             // 0x17F8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapClimbPick_C* GetDefaultObj();

	bool BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float InPlayRate, bool* bPlayBothFirstAndThirdPerson, bool bReplicate, bool* bReplicateToInstigator, bool* bPauseOnFinish1P, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool CallFunc_BooleanOR_ReturnValue);
	bool StartUnequipEvent(const struct FVector& CallFunc_MakeVector_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, struct FVector* CallFunc_GetGroundLocation_theGroundLoc, bool* CallFunc_GetGroundLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool BPModifyFOV(float* InFOV, float* ReturnValue, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	int32 SetSourceLocation(struct FVector* NewSourcePoint, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	bool SetTemplateTo();
	float BPUpdateClimbTarget(bool bClimbing, const struct FVector& AnchorPosition, const struct FVector& AnchorNormal, bool bCanClimb, bool* bCanLand, struct FVector* ClimbLocation, struct FVector* ClimbNormal, bool* bHudVisible, bool* CallFunc_IsClimbingHanging_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, struct FVector* CallFunc_GetViewDirection_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue, struct FRotator* CallFunc_K2_GetComponentRotation_ReturnValue, struct FHitResult* CallFunc_K2_SetWorldLocation_SweepHitResult, struct FHitResult* CallFunc_K2_SetWorldRotation_SweepHitResult, struct FVector* CallFunc_GetViewLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, struct FVector* CallFunc_NegateVector_ReturnValue, struct FRotator* CallFunc_K2_GetComponentRotation_ReturnValue_1, uint8* Temp_byte_Variable, struct FVector* K2Node_Select_Default, struct FHitResult* CallFunc_K2_SetWorldLocation_SweepHitResult_1, struct FHitResult* CallFunc_K2_SetWorldRotation_SweepHitResult_1, struct FVector* CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float* CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float* CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1);
};

}


