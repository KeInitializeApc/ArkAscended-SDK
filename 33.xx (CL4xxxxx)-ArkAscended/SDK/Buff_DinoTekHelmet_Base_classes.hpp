#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD7 (0xC48 - 0xB71)
// BlueprintGeneratedClass Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C
class ABuff_DinoTekHelmet_Base_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_4C4D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB78(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bHelmetActivated;                                  // 0xB80(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4C4E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          ActivatedMontage;                                  // 0xB88(0x8)(Edit, BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          DeactivatedMontage;                                // 0xB90(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastActivatedHelmetTime;                           // 0xB98(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bNextSide;                                         // 0xBA0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4C4F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastAttackTime;                                    // 0xBA8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ProjectileClass;                                   // 0xBB0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       ActivatedTPVZMult;                                 // 0xBB8(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       ActivatedFPVZMult;                                 // 0xBC0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          ShootAnimLeft;                                     // 0xBC8(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimMontage*                          ShootAnimRight;                                    // 0xBD0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsTargetingModeEnabled;                           // 0xBD8(0x1)(EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4C51[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       SocketClampDelta;                                  // 0xBE0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       MinAttackInterval;                                 // 0xBE8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastHelmetActivatedTime;                           // 0xBF0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       HelmetActivatedAttackInterval;                     // 0xBF8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        ElementDecreasePerShot;                            // 0xC00(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4C52[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class AShooterWeapon>          DisabledInVolumePreventWeaponClass;                // 0xC08(0x30)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                SaddleItemClass;                                   // 0xC38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	double                                       DurabilitycostPerShot;                             // 0xC40(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_DinoTekHelmet_Base_C* GetDefaultObj();

	double IsElectricalStormActive(bool* ActiveStorm, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class ADayCycleManager* CallFunc_GetDayCycleManager_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, const TArray<class AActor*>& CallFunc_GetElectricalStormValues_LocationRegions, int32 CallFunc_GetElectricalStormValues_CurrentRegion, double CallFunc_GetElectricalStormValues_Radius, bool CallFunc_GetIsElectricalStorm_Return, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool* CallFunc_IsDistanceLessThan_ReturnValue, float* CallFunc_IsDistanceLessThan_Distance_ImplicitCast);
	double GetSocketClampDelta();
	bool BPSetupForInstigator(class AActor** ForInstigator);
	class FString BPDrawBuffStatusHUD(float XPos, float YPos, float ScaleMult, struct FLinearColor* CallFunc_MakeColor_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, float* CallFunc_BPDrawTextCentered_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_BPDrawTextCentered_Y_ImplicitCast, float* CallFunc_BPDrawTextCentered_X_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	bool IsAllowedToFire(struct FVector* AimAtLoc, bool* bAllowed, bool* RetVal, TArray<class AActor*>* Temp_object_Variable, class UPrimalItem** CallFunc_GetTekSaddleItem_TekSaddleItem, bool* K2Node_DynamicCast_bSuccess, struct FTransform* CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, struct FTransform* CallFunc_GetSocketTransform_ReturnValue_1, struct FRotator* CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, TArray<class AActor*>* Temp_object_Variable_1, class UWorld** CallFunc_K2_GetWorld_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AStructurePreventionZoneVolume* CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue, int32* CallFunc_IsChildOfClassesSoftRef_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	bool HideBuffFromHUD();
	bool SetTargeting(bool* bTargetingEnabled);
	float BuffTickClient(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetDefaultObject_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FVector& K2Node_Select_Default_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue_1);
	bool LocalDoAttack(bool* bDidAttack, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff** CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool* CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, class FName K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, class UPrimalItem** CallFunc_GetTekSaddleItem_TekSaddleItem, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, struct FTransform* CallFunc_GetSocketTransform_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& K2Node_Select_Default_1);
	class USkeletalMeshComponent* PlayItemAnim(class UPrimalItem** CallFunc_GetTekSaddleItem_TekSaddleItem, bool* K2Node_DynamicCast_bSuccess, class UAnimInstance** CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
	bool GetTekSaddleItem(class UPrimalItem** RetVal, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class UPrimalItem* CallFunc_Array_Get_Item);
	void ActivateHelmet();
	void DeactivateHelmet();
	void PressedAltFire();
	void DoServerActivateHelmet();
	void DoServerDeactivateHelmet();
	struct FVector ServerDoAttack(struct FVector* AimAtLoc);
	struct FVector DoAttack(struct FVector* AimAtLoc, bool* bLeftSide);
	void CheckForItem();
	bool ExecuteUbergraph_Buff_DinoTekHelmet_Base(int32* EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UWorld** CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, bool* CallFunc_IsAllowedToFire_bAllowed, class UPrimalItem** CallFunc_GetTekSaddleItem_TekSaddleItem, class FName K2Node_Select_Default, bool* K2Node_DynamicCast_bSuccess, struct FTransform* CallFunc_GetSocketTransform_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_1, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, class AActor** CallFunc_SpawnActorDeferred_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, bool CallFunc_IsTimeSince_ReturnValue_2, bool CallFunc_IsTimeSince_ReturnValue_3, bool* K2Node_DynamicCast_bSuccess_3, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_4, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_5, bool* K2Node_DynamicCast_bSuccess_6, bool* CallFunc_IsShipping_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_7, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, float CallFunc_ClampRotAxis_ReturnValue, float CallFunc_ClampRotAxis_ReturnValue_1, bool* CallFunc_IsElectricalStormActive_Return, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue_1, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1, float CallFunc_ClampRotAxis_MaxDiff_ImplicitCast, float CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1);
};

}

