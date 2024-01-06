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
	uint8                                        Pad_1341[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         bHelmetActivated;                                  // 0xB78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1343[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          ActivatedMontage;                                  // 0xB80(0x8)(Edit, ConstParm, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	class UAnimMontage*                          DeactivatedMontage;                                // 0xB88(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	double                                       LastActivatedHelmetTime;                           // 0xB90(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bNextSide;                                         // 0xB98(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1347[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastAttackTime;                                    // 0xBA0(0x8)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	class UClass*                                ProjectileClass;                                   // 0xBA8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	double                                       ActivatedTPVZMult;                                 // 0xBB0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	double                                       ActivatedFPVZMult;                                 // 0xBB8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, SubobjectReference)
	class UAnimMontage*                          ShootAnimLeft;                                     // 0xBC0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class UAnimMontage*                          ShootAnimRight;                                    // 0xBC8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bIsTargetingModeEnabled;                           // 0xBD0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_134D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       SocketClampDelta;                                  // 0xBD8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       MinAttackInterval;                                 // 0xBE0(0x8)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       LastHelmetActivatedTime;                           // 0xBE8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	double                                       HelmetActivatedAttackInterval;                     // 0xBF0(0x8)(Edit, ExportObject, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	int32                                        ElementDecreasePerShot;                            // 0xBF8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1351[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class AShooterWeapon>          DisabledInVolumePreventWeaponClass;                // 0xC00(0x30)(Edit, BlueprintVisible, ReturnParm, Transient, EditConst, SubobjectReference)
	class UClass*                                SaddleItemClass;                                   // 0xC30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       DurabilitycostPerShot;                             // 0xC38(0x8)(BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_DinoTekHelmet_Base_C* GetDefaultObj();

	double IsElectricalStormActive(bool Return, bool* ActiveStorm, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, double CallFunc_BreakVector_Z, class ADayCycleManager* CallFunc_GetDayCycleManager_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const TArray<class AActor*>& CallFunc_GetElectricalStormValues_LocationRegions, int32 CallFunc_GetElectricalStormValues_CurrentRegion, double CallFunc_GetElectricalStormValues_Radius, bool CallFunc_GetIsElectricalStorm_Return, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool* CallFunc_IsDistanceLessThan_ReturnValue, float* CallFunc_IsDistanceLessThan_Distance_ImplicitCast);
	double GetSocketClampDelta();
	bool BPSetupForInstigator(class AActor* ForInstigator, bool CallFunc_IsServer_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue);
	double BPDrawBuffStatusHUD(struct FLinearColor* CallFunc_MakeColor_ReturnValue, float CallFunc_GetItemStatModifier_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, float* CallFunc_BPDrawTextCentered_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float* CallFunc_BPDrawTextCentered_Y_ImplicitCast, float* CallFunc_BPDrawTextCentered_X_ImplicitCast, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	bool IsAllowedToFire(struct FVector* AimAtLoc, bool* bAllowed, bool RetVal, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, struct FVector* CallFunc_BreakTransform_Scale_1, class UWorld* CallFunc_K2_GetWorld_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue_1, class AStructurePreventionZoneVolume** CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue, int32* CallFunc_IsChildOfClassesSoftRef_ReturnValue);
	void HideBuffFromHUD(bool* ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue);
	void SetTargeting(bool* bTargetingEnabled, bool* CallFunc_BooleanAND_ReturnValue);
	struct FVector BuffTickClient(class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, struct FVector* CallFunc_VInterpTo_Constant_ReturnValue, struct FVector* CallFunc_VInterpTo_Constant_ReturnValue_1, float* CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast);
	struct FVector LocalDoAttack(bool* bDidAttack, class FName CallFunc_MakeLiteralName_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, class APrimalBuff* CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool* CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, struct FVector* CallFunc_Add_VectorVector_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, bool* CallFunc_BPFastTrace_ReturnValue);
	float PlayItemAnim(class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue);
	bool GetTekSaddleItem(class UPrimalItem* RetVal, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* CallFunc_BooleanAND_ReturnValue);
	void ActivateHelmet();
	void DeactivateHelmet();
	void PressedAltFire();
	void DoServerActivateHelmet();
	void DoServerDeactivateHelmet();
	struct FVector ServerDoAttack(struct FVector* AimAtLoc);
	struct FVector DoAttack(struct FVector* AimAtLoc, bool* bLeftSide);
	void CheckForItem();
	struct FVector ExecuteUbergraph_Buff_DinoTekHelmet_Base(int32 EntryPoint, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, bool* CallFunc_IsAllowedToFire_bAllowed, bool* CallFunc_Not_PreBool_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FRotator& CallFunc_BreakTransform_Rotation, struct FVector* CallFunc_BreakTransform_Scale, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, class AActor** CallFunc_SpawnActorDeferred_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, bool CallFunc_IsTimeSince_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_3, bool* CallFunc_BooleanAND_ReturnValue_1, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool CallFunc_CanElementDecrease_CanDecrease, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* CallFunc_HasEngram_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, bool* CallFunc_ClassIsChildOf_ReturnValue, float CallFunc_ClampRotAxis_ReturnValue, float CallFunc_ClampRotAxis_ReturnValue_1, bool* CallFunc_IsElectricalStormActive_Return, struct FRotator* CallFunc_MakeRotator_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_2, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1, float CallFunc_ClampRotAxis_MaxDiff_ImplicitCast, float CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1);
};

}


