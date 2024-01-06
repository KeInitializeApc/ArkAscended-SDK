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
	uint8                                        Pad_2DD6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	bool                                         bHelmetActivated;                                  // 0xB78(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2DD7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          ActivatedMontage;                                  // 0xB80(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	class UAnimMontage*                          DeactivatedMontage;                                // 0xB88(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	double                                       LastActivatedHelmetTime;                           // 0xB90(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bNextSide;                                         // 0xB98(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2DD8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastAttackTime;                                    // 0xBA0(0x8)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UClass*                                ProjectileClass;                                   // 0xBA8(0x8)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	double                                       ActivatedTPVZMult;                                 // 0xBB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	double                                       ActivatedFPVZMult;                                 // 0xBB8(0x8)(ConstParm, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	class UAnimMontage*                          ShootAnimLeft;                                     // 0xBC0(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class UAnimMontage*                          ShootAnimRight;                                    // 0xBC8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bIsTargetingModeEnabled;                           // 0xBD0(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2DD9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       SocketClampDelta;                                  // 0xBD8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       MinAttackInterval;                                 // 0xBE0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       LastHelmetActivatedTime;                           // 0xBE8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       HelmetActivatedAttackInterval;                     // 0xBF0(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        ElementDecreasePerShot;                            // 0xBF8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2DDB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class AShooterWeapon>          DisabledInVolumePreventWeaponClass;                // 0xC00(0x30)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	class UClass*                                SaddleItemClass;                                   // 0xC30(0x8)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       DurabilitycostPerShot;                             // 0xC38(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_DinoTekHelmet_Base_C* GetDefaultObj();

	double IsElectricalStormActive(bool ActiveStorm, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class ADayCycleManager** CallFunc_GetDayCycleManager_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>* CallFunc_GetElectricalStormValues_LocationRegions, int32* CallFunc_GetElectricalStormValues_CurrentRegion, double CallFunc_GetElectricalStormValues_Radius, bool CallFunc_GetIsElectricalStorm_Return, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue_1, bool* CallFunc_DoesImplementInterface_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsDistanceLessThan_ReturnValue, float CallFunc_IsDistanceLessThan_Distance_ImplicitCast);
	double GetSocketClampDelta();
	bool BPSetupForInstigator(class AActor* ForInstigator, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue);
	int32 BPDrawBuffStatusHUD(float* XPos, float* YPos, float* ScaleMult, struct FLinearColor* CallFunc_MakeColor_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, struct FColor* CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, float* CallFunc_GetItemStatModifier_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, double* CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue_2, class FString* CallFunc_Conv_IntToString_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, float* CallFunc_BPDrawTextCentered_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float* CallFunc_BPDrawTextCentered_Y_ImplicitCast, float* CallFunc_BPDrawTextCentered_X_ImplicitCast, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	bool IsAllowedToFire(const struct FVector& AimAtLoc, bool bAllowed, bool* RetVal, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, struct FRotator* CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UWorld** CallFunc_K2_GetWorld_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue_1, class AStructurePreventionZoneVolume** CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue, int32 CallFunc_IsChildOfClassesSoftRef_ReturnValue);
	void HideBuffFromHUD(bool* ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetTargeting(bool* bTargetingEnabled, bool* CallFunc_BooleanAND_ReturnValue);
	double BuffTickClient(bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, struct FVector* K2Node_Select_Default, struct FVector* K2Node_Select_Default_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue_1, float* CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast);
	struct FVector LocalDoAttack(bool bDidAttack, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalBuff* CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, class FName* K2Node_Select_Default, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, struct FRotator* CallFunc_GetCameraRotation_ReturnValue, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, struct FVector* K2Node_Select_Default_1, bool CallFunc_BPFastTrace_ReturnValue);
	float PlayItemAnim(class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem);
	bool GetTekSaddleItem(class UPrimalItem** RetVal, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* CallFunc_BooleanAND_ReturnValue);
	void ActivateHelmet();
	void DeactivateHelmet();
	void PressedAltFire();
	void DoServerActivateHelmet();
	void DoServerDeactivateHelmet();
	struct FVector ServerDoAttack(const struct FVector& AimAtLoc);
	struct FVector DoAttack(const struct FVector& AimAtLoc, bool* bLeftSide);
	void CheckForItem();
	bool ExecuteUbergraph_Buff_DinoTekHelmet_Base(int32* EntryPoint, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, class UWorld** CallFunc_K2_GetWorld_ReturnValue, bool* CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_IsTimeSince_ReturnValue_1, bool CallFunc_IsAllowedToFire_bAllowed, bool CallFunc_Not_PreBool_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class FName* K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, class AActor** CallFunc_SpawnActorDeferred_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, class UAnimMontage** K2Node_Select_Default_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool* CallFunc_IsTimeSince_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsTimeSince_ReturnValue_3, class UClass* CallFunc_GetObjectClass_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool* K2Node_ClassDynamicCast_bSuccess, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_CanElementDecrease_CanDecrease, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool CallFunc_HasEngram_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, bool CallFunc_ClassIsChildOf_ReturnValue, float* CallFunc_ClampRotAxis_ReturnValue, float* CallFunc_ClampRotAxis_ReturnValue_1, bool* CallFunc_IsElectricalStormActive_Return, struct FRotator* CallFunc_MakeRotator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_2, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1, float* CallFunc_ClampRotAxis_MaxDiff_ImplicitCast, float* CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1);
};

}

