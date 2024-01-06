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
	class UStaticMeshComponent*                  ClimbingPickLeftTPV;                               // 0x1790(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystemComponent*              ClimbAnchorParticles;                              // 0x1798(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class USceneComponent*                       ClimbAnchor;                                       // 0x17A0(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystemComponent*              ClimbTargetParticles;                              // 0x17A8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class USceneComponent*                       ClimbTarget;                                       // 0x17B0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickLeft;                                  // 0x17B8(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickTPV;                                   // 0x17C0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPick;                                      // 0x17C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       ClimbAnchorInterpSpeed;                            // 0x17D0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       ClimbTargetInterpSpeed;                            // 0x17D8(0x8)(ConstParm, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Valid_Template;                                    // 0x17E0(0x8)(ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Walkable_Template;                                 // 0x17E8(0x8)(ExportObject, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UParticleSystem*                       Invalid_Template;                                  // 0x17F0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	double                                       ClimbingFOVMultiplier;                             // 0x17F8(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapClimbPick_C* GetDefaultObj();

	bool BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float* InPlayRate, bool* bPlayBothFirstAndThirdPerson, bool bReplicate, bool* bReplicateToInstigator, bool* bPauseOnFinish1P, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_BooleanOR_ReturnValue);
	void StartUnequipEvent(const struct FVector& CallFunc_MakeVector_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, struct FVector* CallFunc_GetGroundLocation_theGroundLoc, bool* CallFunc_GetGroundLocation_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue);
	double BPModifyFOV(float* InFOV, float* ReturnValue, double CallFunc_SelectFloat_ReturnValue, float* K2Node_FunctionResult_ReturnValue_ImplicitCast);
	int32 SetSourceLocation(struct FVector* NewSourcePoint, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
	bool SetTemplateTo();
	float BPUpdateClimbTarget(bool bClimbing, const struct FVector& AnchorPosition, const struct FVector& AnchorNormal, bool bCanClimb, bool bCanLand, const struct FVector& ClimbLocation, const struct FVector& ClimbNormal, bool bHudVisible, bool* CallFunc_IsClimbingHanging_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, struct FVector* CallFunc_GetViewDirection_ReturnValue, struct FVector* CallFunc_GetViewLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue_1, struct FVector* CallFunc_Normal_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1);
};

}


