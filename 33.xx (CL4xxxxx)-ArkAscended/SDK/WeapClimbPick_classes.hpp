#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x1828 - 0x17B8)
// BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
class AWeapClimbPick_C : public AShooterWeapon_Climb
{
public:
	class UStaticMeshComponent*                  ClimbingPickLeftTPV;                               // 0x17B8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class UParticleSystemComponent*              ClimbAnchorParticles;                              // 0x17C0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class USceneComponent*                       ClimbAnchor;                                       // 0x17C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class UParticleSystemComponent*              ClimbTargetParticles;                              // 0x17D0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class USceneComponent*                       ClimbTarget;                                       // 0x17D8(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickLeft;                                  // 0x17E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPickTPV;                                   // 0x17E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class UStaticMeshComponent*                  ClimbingPick;                                      // 0x17F0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	double                                       ClimbAnchorInterpSpeed;                            // 0x17F8(0x8)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	double                                       ClimbTargetInterpSpeed;                            // 0x1800(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class UParticleSystem*                       Valid_Template;                                    // 0x1808(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class UParticleSystem*                       Walkable_Template;                                 // 0x1810(0x8)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	class UParticleSystem*                       Invalid_Template;                                  // 0x1818(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	double                                       ClimbingFOVMultiplier;                             // 0x1820(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapClimbPick_C* GetDefaultObj();

	bool BPOnWeaponAnimPlayedNotify(bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer);
	bool StartUnequipEvent(struct FVector* CallFunc_GetGroundLocation_theGroundLoc, bool* CallFunc_GetGroundLocation_ReturnValue);
	double BPModifyFOV(float ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float* K2Node_FunctionResult_ReturnValue_ImplicitCast);
	int32 SetSourceLocation(struct FVector* NewSourcePoint);
	class UParticleSystem* SetTemplateTo(bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	float BPUpdateClimbTarget(struct FVector* SourceTangent, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, uint8* Temp_byte_Variable, struct FVector* K2Node_Select_Default);
};

}


