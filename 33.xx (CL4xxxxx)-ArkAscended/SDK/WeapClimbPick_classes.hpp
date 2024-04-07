#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x1858 - 0x17E8)
// BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
class AWeapClimbPick_C : public AShooterWeapon_Climb
{
public:
	class UStaticMeshComponent*                  ClimbingPickLeftTPV;                               // 0x17E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UParticleSystemComponent*              ClimbAnchorParticles;                              // 0x17F0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USceneComponent*                       ClimbAnchor;                                       // 0x17F8(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UParticleSystemComponent*              ClimbTargetParticles;                              // 0x1800(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class USceneComponent*                       ClimbTarget;                                       // 0x1808(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickLeft;                                  // 0x1810(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickTPV;                                   // 0x1818(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPick;                                      // 0x1820(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       ClimbAnchorInterpSpeed;                            // 0x1828(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       ClimbTargetInterpSpeed;                            // 0x1830(0x8)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UParticleSystem*                       Valid_Template;                                    // 0x1838(0x8)(ConstParm, BlueprintVisible, EditConst, SubobjectReference)
	class UParticleSystem*                       Walkable_Template;                                 // 0x1840(0x8)(ConstParm, BlueprintVisible, ExportObject, EditConst, SubobjectReference)
	class UParticleSystem*                       Invalid_Template;                                  // 0x1848(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       ClimbingFOVMultiplier;                             // 0x1850(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapClimbPick_C* GetDefaultObj();

	bool BPOnWeaponAnimPlayedNotify(struct FWeaponAnim* Animation, float* InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	bool StartUnequipEvent(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1);
	float BPModifyFOV(float InFOV, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	int32 SetSourceLocation(const struct FVector& NewSourcePoint, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue);
	bool SetTemplateTo();
	float BPUpdateClimbTarget(float* DeltaSeconds, bool* bClimbing, struct FVector* AnchorPosition, struct FVector* AnchorNormal, bool* bCanClimb, bool* bCanLand, struct FVector* ClimbLocation, struct FVector* ClimbNormal, bool* bHudVisible, struct FVector* SourceTangent, bool CallFunc_IsClimbingHanging_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, struct FVector* CallFunc_VInterpTo_ReturnValue, struct FHitResult* CallFunc_K2_SetWorldLocation_SweepHitResult, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, struct FVector* CallFunc_VInterpTo_ReturnValue_1, uint8 Temp_byte_Variable, const struct FVector& K2Node_Select_Default, struct FHitResult* CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1);
};

}


