#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x230 (0x12D8 - 0x10A8)
// BlueprintGeneratedClass WeapSword_Tek.WeapSword_Tek_C
class AWeapSword_Tek_C : public AWeapSword_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10A8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UPointLightComponent*                  PointLight1;                                       // 0x10B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPointLightComponent*                  PointLight;                                        // 0x10B8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	class UAudioComponent*                       Audio1;                                            // 0x10C0(0x8)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UParticleSystemComponent*              ParticleSystem2;                                   // 0x10C8(0x8)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  SM1P;                                              // 0x10D0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UParticleSystemComponent*              ParticleSystem1;                                   // 0x10D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UStaticMeshComponent*                  SM3P;                                              // 0x10E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRepHasAmmo;                                       // 0x10E8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5959[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CharacterElementCostPerHit;                        // 0x10F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       GenericStructureSettingsElementCostPerHit;         // 0x10F8(0x8)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<double>                               SpecificStructureSettingsElementCostPerHit;        // 0x1100(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        SpecificStructureSettings;                         // 0x1110(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       ExtraStructureDamageMultiplier;                    // 0x1120(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        AmmoCostPerSwing;                                  // 0x1128(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         HideWeapon;                                        // 0x112C(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig)
	uint8                                        Pad_595A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            AttackSound;                                       // 0x1130(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseColorTypeParamForParticleSystem;               // 0x1138(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_595B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           WeaponStaticMesh;                                  // 0x1140(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UParticleSystem*                       WeaponParticleSystem;                              // 0x1148(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            ThreePMeshTransformOverride;                       // 0x1150(0x60)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            OnePMeshTransformOverride;                         // 0x11B0(0x60)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            FPVWeaponParticleSystemTransformOverride;          // 0x1210(0x60)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            TPVWeaponParticleSystemTransformOverride;          // 0x1270(0x60)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USoundBase*                            OverrideLoopingIdleAudio;                          // 0x12D0(0x8)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AWeapSword_Tek_C* GetDefaultObj();

	bool DoAppliedDamageToTarget(bool* CallFunc_AppliedDamageToTarget_bExtraDamage);
	bool OnRep_HideWeapon();
	bool AppliedDamageToTarget(bool* bDoExtraDamage, double* AmmoCost, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, double CallFunc_Array_Get_Item, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32* CallFunc_FCeil_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue);
	int32 BPWeaponDealDamage(int32* DamageAmount, float* Impulse, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, bool* CallFunc_AppliedDamageToTarget_bExtraDamage, double* CallFunc_Multiply_IntFloat_ReturnValue);
	bool BPStartEquippedNotify(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff);
	bool StartUnequipEvent(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff);
	float ReceiveTick(float* DeltaSeconds, bool* bDoActive, bool Temp_bool_Variable, double K2Node_Select_Default, bool CallFunc_IsActive_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_Greater_IntInt_ReturnValue);
	bool BPHandleMeleeAttack(bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsLocallyOwned_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue);
	bool BPAppliedPrimalItemToWeapon(const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast);
	bool UserConstructionScript();
	void PlayAttackSound();
	void NetDoPlayMeleeAttackSound();
	class UAudioComponent* ExecuteUbergraph_WeapSword_Tek(int32* EntryPoint, bool* CallFunc_IsLocallyOwned_ReturnValue, class USkeletalMeshComponent** CallFunc_GetWeaponMesh_ReturnValue);
};

}


