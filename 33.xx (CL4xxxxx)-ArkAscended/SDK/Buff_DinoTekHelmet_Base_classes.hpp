#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD7 (0xC40 - 0xB69)
// BlueprintGeneratedClass Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C
class ABuff_DinoTekHelmet_Base_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_36A6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHelmetActivated;                                  // 0xB78(0x1)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_36A9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          ActivatedMontage;                                  // 0xB80(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          DeactivatedMontage;                                // 0xB88(0x8)(Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastActivatedHelmetTime;                           // 0xB90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bNextSide;                                         // 0xB98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_36AD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastAttackTime;                                    // 0xBA0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ProjectileClass;                                   // 0xBA8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       ActivatedTPVZMult;                                 // 0xBB0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ActivatedFPVZMult;                                 // 0xBB8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          ShootAnimLeft;                                     // 0xBC0(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          ShootAnimRight;                                    // 0xBC8(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTargetingModeEnabled;                           // 0xBD0(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_36B0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       SocketClampDelta;                                  // 0xBD8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       MinAttackInterval;                                 // 0xBE0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastHelmetActivatedTime;                           // 0xBE8(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       HelmetActivatedAttackInterval;                     // 0xBF0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        ElementDecreasePerShot;                            // 0xBF8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_36B1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class AShooterWeapon>          DisabledInVolumePreventWeaponClass;                // 0xC00(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                SaddleItemClass;                                   // 0xC30(0x8)(ExportObject, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       DurabilitycostPerShot;                             // 0xC38(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_DinoTekHelmet_Base_C* GetDefaultObj();

	struct FVector IsElectricalStormActive(bool* Return, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1, const TArray<class AActor*>& CallFunc_GetElectricalStormValues_LocationRegions, int32 CallFunc_GetElectricalStormValues_CurrentRegion, double CallFunc_GetElectricalStormValues_Radius, bool CallFunc_GetIsElectricalStorm_Return, bool* CallFunc_IsDistanceLessThan_ReturnValue, float CallFunc_IsDistanceLessThan_Distance_ImplicitCast);
	void GetSocketClampDelta(double* OutSocketClampDelta);
	bool BPSetupForInstigator(bool* CallFunc_IsValid_ReturnValue);
	float BPDrawBuffStatusHUD(class AShooterHUD* HUD, struct FLinearColor* CallFunc_MakeColor_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_GetItemStatModifier_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	class AStructurePreventionZoneVolume* IsAllowedToFire(struct FVector* ServerSpawnAtLoc, const TArray<class AActor*>& Temp_object_Variable, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const TArray<class AActor*>& Temp_object_Variable_1, struct FHitResult* CallFunc_LineTraceSingle_OutHit_1, bool* CallFunc_LineTraceSingle_ReturnValue_1, class UClass* CallFunc_ClassAssetResolve_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_IsChildOfClassesSoftRef_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool HideBuffFromHUD(bool ReturnValue);
	bool SetTargeting();
	struct FVector BuffTickClient(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, struct FVector* K2Node_Select_Default, struct FVector* K2Node_Select_Default_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue_1, float* CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast);
	bool LocalDoAttack(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalBuff* CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, class FName* K2Node_Select_Default, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FVector* K2Node_Select_Default_1);
	bool PlayItemAnim(class UAnimMontage* PlayAnim, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, bool* CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float* CallFunc_Montage_Play_ReturnValue);
	bool GetTekSaddleItem(class UPrimalItem** TekSaddleItem, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	void ActivateHelmet();
	void DeactivateHelmet();
	void PressedAltFire();
	void DoServerActivateHelmet();
	void DoServerDeactivateHelmet();
	struct FVector ServerDoAttack(struct FVector* ServerSpawnAtLoc);
	bool DoAttack(struct FVector* ServerSpawnAtLoc);
	void CheckForItem();
	float ExecuteUbergraph_Buff_DinoTekHelmet_Base(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, const struct FVector& K2Node_CustomEvent_AimAtLoc_1, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc_1, bool CallFunc_IsAllowedToFire_bAllowed, const struct FVector& K2Node_CustomEvent_AimAtLoc, bool K2Node_CustomEvent_bLeftSide, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class FName* K2Node_Select_Default, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AActor** CallFunc_SpawnActorDeferred_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, class AShooterProjectile* K2Node_DynamicCast_AsShooter_Projectile, class UAnimMontage** K2Node_Select_Default_1, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess, class UPrimalItemArmor_SaddleGeneric_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* CallFunc_CanElementDecrease_CanDecrease, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue_1, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, bool* CallFunc_IsElectricalStormActive_Return, struct FRotator* CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1);
};

}


